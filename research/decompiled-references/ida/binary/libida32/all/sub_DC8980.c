__int64 __fastcall sub_DC8980(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r13d
  unsigned __int64 v11; // rax
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  void *v16; // rsi
  unsigned __int64 *v17; // rax
  __int64 v18; // rax
  void *dest; // [rsp+8h] [rbp-80h]
  void *desta; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-70h]
  _QWORD v23[3]; // [rsp+20h] [rbp-68h] BYREF
  int v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = a1[22];
  sub_DFDA20(v4, 48);
  sub_DFF520(v23);
  sub_DFDA50(v4, 48);
  v9 = sub_DA9500((__int64)a1, a2, (__int64)v23, a3);
  if ( (_BYTE)v9 )
  {
    v11 = sub_D21CE0(a1, a3, v5, v6, v7, v8);
    v12 = (void *)v11;
    v14 = v13;
    v15 = v11;
    if ( v24 == 1 )
    {
      desta = (void *)v11;
      v18 = sub_CDA650((__int64)v23);
      v16 = (void *)(v26 + v23[0] * v18);
      v12 = desta;
    }
    else
    {
      v16 = (void *)(v25 + v23[0]);
    }
    v22 = a3;
    if ( a3 > 0x40 )
    {
      dest = v12;
      sub_21E1730(&src, v16, 0);
      if ( v22 > 0x40 )
      {
        memcpy(dest, src, 8 * (((unsigned __int64)v22 + 63) >> 6));
        if ( v22 > 0x40 && src )
          operator delete[](src);
        goto LABEL_8;
      }
    }
    else
    {
      src = v16;
    }
    v15 = (unsigned __int64)src;
LABEL_8:
    v17 = (unsigned __int64 *)sub_DFD980(a1[22], 16);
    *v17 = v15;
    v17[1] = v14;
  }
  sub_DFF560(v23);
  return v9;
}

