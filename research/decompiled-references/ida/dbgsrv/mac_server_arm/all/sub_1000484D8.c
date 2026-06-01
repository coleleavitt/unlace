/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000484D8
// Address: 0x00000001000484D8

//----- (00000001000484D8) ----------------------------------------------------
__int64 __fastcall sub_1000484D8(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        int *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, void *a3, int *a4))
{
  _QWORD *v9; // x23
  __int64 v10; // x8
  const char *v11; // x23
  __int64 v12; // x19
  __int64 v14; // x25
  void *v15; // x0
  __int64 v16; // x24
  unsigned __int64 v17; // x23
  int v18; // w0
  void *v19; // x25
  const char *v20; // x0
  unsigned __int64 v21; // x28
  off_t v22; // x25
  void *v23; // x27
  __int64 v24; // x0
  char *v25; // x2
  _BYTE *v26; // x22
  __int64 (__fastcall *v27)(__int64, __int64, void *, int *); // x8
  int v28; // w8
  _QWORD *v29; // [xsp+18h] [xbp-88h]
  void *v30; // [xsp+20h] [xbp-80h] BYREF
  __int64 v31; // [xsp+28h] [xbp-78h]
  __int64 v32; // [xsp+30h] [xbp-70h]
  void **v33; // [xsp+38h] [xbp-68h]
  void *v34; // [xsp+40h] [xbp-60h] BYREF

  if ( qword_10009D878 && *(_BYTE *)(qword_10009D878 + 184) == 1 )
  {
    v9 = a3;
    sub_100000AA0();
    a3 = v9;
  }
  if ( !a2 )
    return 1;
  if ( a2 - 1 < (unsigned __int64)a1[14] )
  {
    v10 = *a1;
    if ( *a1 && *(_DWORD *)(v10 + 8) == 1 )
    {
      v29 = a3;
      v11 = *(_QWORD *)(v10 + 24) ? *(const char **)(v10 + 16) : &byte_100075A30;
      v14 = a1[13];
      v15 = (void *)open_linput(v11, 0);
      v34 = v15;
      if ( v15 )
      {
        v16 = v14 + 120 * (a2 - 1);
        v33 = &v34;
        v17 = *(unsigned int *)(v16 + 8);
        if ( a5 )
        {
          v30 = nullptr;
          v31 = 0;
          v32 = 0;
          v18 = qgetenv("IDA_DWARF_MAX_ZIP_RATIO", &v30);
          v19 = v30;
          if ( v18 )
          {
            if ( v31 )
              v20 = (const char *)v30;
            else
              v20 = &byte_100075A30;
            v21 = atoi(v20);
          }
          else
          {
            v21 = 1000;
          }
          if ( v19 )
          {
            v31 = 0;
            qfree(v19);
          }
          v15 = v34;
        }
        else
        {
          v21 = 1;
        }
        v22 = *(_QWORD *)(v16 + 48);
        if ( v22 == -1 )
        {
          v23 = v15;
          v22 = qlseek((__int64)v15, 0, 1);
          v15 = v23;
        }
        v24 = qlsize((__int64)v15);
        if ( v22 < 0 || v24 - v22 < 0 || v24 - v22 < v17 / v21 )
        {
          if ( qword_10009D878 && *(_BYTE *)(qword_10009D878 + 184) == 1 )
            sub_100000AA0();
          v28 = 435;
        }
        else
        {
          if ( *(_QWORD *)(v16 + 24) )
            v25 = *(char **)(v16 + 16);
          else
            v25 = &byte_100075A30;
          v26 = sub_100048848((__int64)a1, a2, v25, v17);
          if ( v26 )
          {
            qlseek((__int64)v34, *(_QWORD *)(v16 + 48), 0);
            v27 = sub_10004843C;
            if ( a5 )
              v27 = a5;
            v12 = v27((__int64)v34, v16, v26, a4);
            if ( (_DWORD)v12 )
              sub_10004893C((__int64)a1, v26);
            else
              *v29 = v26;
            goto LABEL_54;
          }
          if ( qword_10009D878 && *(_BYTE *)(qword_10009D878 + 184) == 1 )
            sub_100000AA0();
          v28 = 8;
        }
        *a4 = v28;
        v12 = 1;
LABEL_54:
        close_linput(v34);
        return v12;
      }
    }
    sub_100000AA0();
    return 1;
  }
  if ( qword_10009D878 && *(_BYTE *)(qword_10009D878 + 184) == 1 )
    sub_100000AA0();
  return 0xFFFFFFFFLL;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009D878: using guessed type __int64 qword_10009D878;
