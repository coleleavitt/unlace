/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F490
// Address: 0x000000010000F490

//----- (000000010000F490) ----------------------------------------------------
__int64 __fastcall sub_10000F490(__int64 *a1)
{
  unsigned __int64 v1; // r15
  bool v2; // al
  unsigned int v3; // r14d
  const char *v4; // r14
  bool v5; // al
  unsigned __int64 v6; // r12
  __int64 v8; // r15
  size_t v9; // rax
  __int64 v10; // rax
  off_t v11; // rax
  int v12; // [rsp+Ch] [rbp-A4h] BYREF
  _BYTE v13[8]; // [rsp+10h] [rbp-A0h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-98h]
  unsigned __int8 v15; // [rsp+1Ch] [rbp-94h]
  __int128 v16; // [rsp+20h] [rbp-90h] BYREF
  __int64 v17; // [rsp+30h] [rbp-80h]
  __int128 v18; // [rsp+40h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-60h]
  char *__s1[2]; // [rsp+60h] [rbp-50h] BYREF
  __int64 v21; // [rsp+70h] [rbp-40h]
  _BYTE v22[8]; // [rsp+78h] [rbp-38h] BYREF
  int v23; // [rsp+80h] [rbp-30h]
  unsigned __int8 v24; // [rsp+84h] [rbp-2Ch]

  qlseek(a1[6], a1[12], 0);
  v1 = qlsize(a1[6]);
  v2 = sub_10001B3B0((__int64)v22, a1[6]);
  v3 = 0;
  if ( v22[2] != 0 || !v2 || !v22[1] || v22[0] != 16 || v1 != v23 )
    return v3;
  *(_OWORD *)__s1 = 0;
  v21 = 0;
  if ( sub_10000F7C0((__int64)__s1, a1[6]) < 0 )
    goto LABEL_17;
  if ( __s1[1] )
  {
    v4 = __s1[0];
    if ( !strcmp(__s1[0], "IMG4") )
    {
      v5 = sub_10001B3B0((__int64)&v18, a1[6]);
      if ( BYTE2(v18) != 0 || !v5 )
        goto LABEL_17;
      if ( !BYTE1(v18) )
        goto LABEL_17;
      if ( (_BYTE)v18 != 16 )
        goto LABEL_17;
      v6 = DWORD2(v18);
      if ( -9 - (unsigned int)v24 < DWORD2(v18) || v1 < DWORD2(v18) + (unsigned int)v24 + 8 || sub_10000F8F0(a1[6]) < 0 )
        goto LABEL_17;
LABEL_22:
      v18 = 0;
      v19 = 0;
      v3 = 0;
      if ( sub_10000F7C0((__int64)&v18, a1[6]) < 4 || *((_QWORD *)&v18 + 1) != 5 )
      {
LABEL_35:
        if ( (_QWORD)v18 )
        {
          *((_QWORD *)&v18 + 1) = 0;
          qfree((void *)v18);
        }
        goto LABEL_18;
      }
      v16 = 0;
      v17 = 0;
      v8 = sub_10000F7C0((__int64)&v16, a1[6]);
      if ( v8 < 0 || sub_10000F9D0((__int64)v13, a1[6]) < 0 )
      {
        v3 = 0;
        goto LABEL_33;
      }
      v3 = 0;
      if ( v8 + 12 > (unsigned __int64)~v14
        || v6 < v8 + (unsigned __int64)v14 + 12
        || (v9 = qlread(a1[6], &v12, 4), LOBYTE(v3) = v9 == 4, v9 != 4) )
      {
LABEL_33:
        if ( (_QWORD)v16 )
        {
          *((_QWORD *)&v16 + 1) = 0;
          qfree((void *)v16);
        }
        goto LABEL_35;
      }
      if ( v12 == 846755426 )
      {
        v11 = qlseek(a1[6], 0, 1);
        v10 = v11 - v15 - 6;
      }
      else
      {
        if ( v12 != 1886220131 )
        {
LABEL_39:
          a1[12] = qlseek(a1[6], 0, 1) - 4;
          goto LABEL_33;
        }
        v10 = qlseek(a1[6], 0, 1) - 4;
      }
      a1[13] = v10;
      goto LABEL_39;
    }
  }
  else
  {
    v4 = _s1;
  }
  if ( !strcmp(v4, "IM4P") )
  {
    v6 = v1;
    goto LABEL_22;
  }
LABEL_17:
  v3 = 0;
LABEL_18:
  if ( __s1[0] )
  {
    __s1[1] = nullptr;
    qfree(__s1[0]);
  }
  return v3;
}
