__int64 __fastcall sub_D3F3B0(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // r14d
  __int16 v11; // r15
  char v12; // al
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 *v17; // r12
  unsigned __int64 *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rcx
  __int64 **v23; // rbx
  unsigned __int8 **v24; // rax
  unsigned __int8 **v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-D8h]
  __int64 v30; // [rsp+18h] [rbp-D0h] BYREF
  char v31; // [rsp+2Fh] [rbp-B9h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v34[48]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v35; // [rsp+70h] [rbp-78h] BYREF
  __int128 v36; // [rsp+78h] [rbp-70h]
  __int64 v37; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v38; // [rsp+90h] [rbp-58h]
  char *v39; // [rsp+98h] [rbp-50h]
  __int16 *v40; // [rsp+A0h] [rbp-48h]

  v7 = *a4 == 0;
  v30 = a3;
  if ( v7 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v30, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v19 = sub_CFE3F0(a5);
    v20 = sub_CFE390(a5);
    v21 = *a4;
    v22 = *(unsigned __int64 **)(a5 + 32);
    v35 = nullptr;
    LODWORD(v37) = 1;
    v23 = &v35;
    v38 = v22;
    v36 = 0;
    v39 = (char *)(v19 - v20 * v21);
    goto LABEL_34;
  }
  v11 = *a4;
  if ( v10 != 2 )
  {
    v28 = (unsigned int)sub_CFE5F0(a5);
    v32 = v28;
    v12 = sub_CFE6D0(a5);
    v13 = v28;
    if ( !v12 )
      v13 = sub_CFE630((unsigned int *)a5);
    v7 = v10 == 0;
    v33 = v13;
    v14 = v11;
    v35 = (__int64 *)&v33;
    *((_QWORD *)&v36 + 1) = &v30;
    v38 = &v32;
    v31 = 0;
    *(_QWORD *)&v36 = a2;
    v37 = a5;
    v39 = &v31;
    v40 = a4;
    if ( v7 )
    {
      if ( v11 >= 0 && v11 > v13 )
      {
        v29 = v13;
        sub_D3F200(&v35);
        v11 = *a4;
        v13 = v29;
        if ( *a4 >= 0 )
        {
LABEL_15:
          if ( v31 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
          {
LABEL_5:
            *(_BYTE *)(a1 + 48) = 0;
            return a1;
          }
          v13 = v33;
          v14 = *a4;
          goto LABEL_18;
        }
LABEL_28:
        if ( v11 == (__int16)0x8000 || -v14 > v28 - v13 )
          sub_D3F200(&v35);
        goto LABEL_15;
      }
      if ( v11 < 0 )
        goto LABEL_28;
    }
LABEL_18:
    v15 = v13 - v14;
    if ( v13 != v14 || !(unsigned __int8)sub_CFE6D0(a5) )
    {
      v16 = v15;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
    {
      v16 = 0;
LABEL_32:
      sub_CFE430((__int64)v34, a5, v16);
      sub_E23260(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_E232A0(v34);
      return a1;
    }
    v26 = *(unsigned int *)(a5 + 40);
    v27 = *(_QWORD *)(a5 + 32);
    v23 = (__int64 **)v34;
    sub_E231A0(v34, v27, v26);
LABEL_34:
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(v23);
    return a1;
  }
  v17 = (__int64 *)(sub_CFE750(a5) - v11);
  if ( (unsigned __int64)v17 > 1 )
  {
    v35 = (__int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v30);
    v24 = (unsigned __int8 **)sub_E33D20(a2, &v35, 2381, 0);
    v25 = v24;
    if ( v24 )
    {
      sub_AE9DF0(v24, (__int64)v17, 3u);
      sub_AE9DF0(v25, 1, 2u);
      sub_AE9DF0(v25, 0, 2u);
    }
  }
  v18 = *(unsigned __int64 **)(a5 + 32);
  v35 = v17;
  v36 = 0;
  LODWORD(v37) = 2;
  v38 = v18;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v35);
  return a1;
}
