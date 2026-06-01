/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E8B0
// Address: 0x000000010000E8B0

//----- (000000010000E8B0) ----------------------------------------------------
bool __fastcall sub_10000E8B0(__int64 *a1)
{
  unsigned __int64 v2; // x20
  _BOOL4 v3; // w0
  _BOOL4 v4; // w8
  _BOOL8 v8; // x20
  char *v9; // x21
  _BOOL4 v10; // w0
  _BOOL4 v11; // w8
  unsigned __int64 v12; // x22
  __int64 v14; // x21
  size_t v15; // x0
  __int64 v16; // x8
  off_t v17; // x0
  int v18; // [xsp+Ch] [xbp-94h] BYREF
  _BYTE v19[8]; // [xsp+10h] [xbp-90h] BYREF
  unsigned int v20; // [xsp+18h] [xbp-88h]
  unsigned __int8 v21; // [xsp+1Ch] [xbp-84h]
  void *v22; // [xsp+20h] [xbp-80h] BYREF
  __int64 v23; // [xsp+28h] [xbp-78h]
  __int64 v24; // [xsp+30h] [xbp-70h]
  void *v25; // [xsp+38h] [xbp-68h] BYREF
  __int64 v26; // [xsp+40h] [xbp-60h]
  __int64 v27; // [xsp+48h] [xbp-58h]
  char *__s1; // [xsp+50h] [xbp-50h] BYREF
  __int64 v29; // [xsp+58h] [xbp-48h]
  __int64 v30; // [xsp+60h] [xbp-40h]
  _BYTE v31[8]; // [xsp+68h] [xbp-38h] BYREF
  int v32; // [xsp+70h] [xbp-30h]
  unsigned __int8 v33; // [xsp+74h] [xbp-2Ch]

  qlseek(a1[6], a1[12], 0);
  v2 = qlsize(a1[6]);
  v3 = sub_10001A200((__int64)v31, a1[6]);
  if ( v31[2] )
    v4 = 0;
  else
    v4 = v3;
  if ( !v4 || v31[1] == 0 || v31[0] != 16 || v2 != v32 )
    return 0;
  __s1 = nullptr;
  v29 = 0;
  v30 = 0;
  if ( sub_10000EBE0((__int64)&__s1, a1[6]) < 0 )
    goto LABEL_30;
  if ( v29 )
  {
    v9 = __s1;
    if ( !strcmp(__s1, "IMG4") )
    {
      v10 = sub_10001A200((__int64)&v25, a1[6]);
      if ( BYTE2(v25) )
        v11 = 0;
      else
        v11 = v10;
      if ( !v11 )
        goto LABEL_30;
      if ( !BYTE1(v25) )
        goto LABEL_30;
      if ( (unsigned __int8)v25 != 16 )
        goto LABEL_30;
      v12 = (unsigned int)v26;
      if ( -9 - (unsigned int)v33 < (unsigned int)v26 || v2 < (unsigned int)v26 + v33 + 8 || sub_10000ED30(a1[6]) < 0 )
        goto LABEL_30;
LABEL_35:
      v25 = nullptr;
      v26 = 0;
      v27 = 0;
      v8 = 0;
      if ( sub_10000EBE0((__int64)&v25, a1[6]) < 4 || v26 != 5 )
      {
LABEL_51:
        if ( v25 )
        {
          v26 = 0;
          qfree(v25);
        }
        goto LABEL_31;
      }
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      v14 = sub_10000EBE0((__int64)&v22, a1[6]);
      if ( v14 < 0 )
      {
        v8 = 0;
        goto LABEL_49;
      }
      v8 = 0;
      if ( sub_10000EE0C((__int64)v19, a1[6]) < 0
        || v14 + 12 > (unsigned __int64)~v20
        || v12 < v14 + 12 + (unsigned __int64)v20
        || (v15 = qlread(a1[6], &v18, 4u), v8 = v15 == 4, v15 != 4) )
      {
LABEL_49:
        if ( v22 )
        {
          v23 = 0;
          qfree(v22);
        }
        goto LABEL_51;
      }
      if ( v18 == 846755426 )
      {
        v17 = qlseek(a1[6], 0, 1);
        v16 = v17 - v21 - 6;
      }
      else
      {
        if ( v18 != 1886220131 )
        {
LABEL_48:
          a1[12] = qlseek(a1[6], 0, 1) - 4;
          goto LABEL_49;
        }
        v16 = qlseek(a1[6], 0, 1) - 4;
      }
      a1[13] = v16;
      goto LABEL_48;
    }
  }
  else
  {
    v9 = &byte_10007AE40;
  }
  if ( !strcmp(v9, "IM4P") )
  {
    v12 = v2;
    goto LABEL_35;
  }
LABEL_30:
  v8 = 0;
LABEL_31:
  if ( __s1 )
  {
    v29 = 0;
    qfree(__s1);
  }
  return v8;
}
// 10007AE40: using guessed type char byte_10007AE40;
