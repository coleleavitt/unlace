__int64 __fastcall sub_D403B0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, char a6)
{
  unsigned int v7; // eax
  int v10; // r15d
  unsigned __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 *v21; // rcx
  unsigned __int64 **v22; // rbx
  unsigned __int8 **v23; // rax
  unsigned __int8 **v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned int v27; // [rsp+4h] [rbp-D4h]
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  char v29; // [rsp+1Fh] [rbp-B9h] BYREF
  unsigned __int64 v30; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v32[48]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 *v33; // [rsp+60h] [rbp-78h] BYREF
  __int128 v34; // [rsp+68h] [rbp-70h]
  __int64 v35; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+80h] [rbp-58h]
  char *v37; // [rsp+88h] [rbp-50h]
  unsigned int *v38; // [rsp+90h] [rbp-48h]

  v7 = *a4;
  v28 = a3;
  if ( !v7 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v28, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v18 = sub_CFE3F0(a5);
    v19 = sub_CFE390(a5);
    v20 = *a4;
    v21 = *(unsigned __int64 **)(a5 + 32);
    v33 = nullptr;
    LODWORD(v35) = 1;
    v22 = &v33;
    v36 = v21;
    v34 = 0;
    v37 = (char *)(v18 - v19 * v20);
    goto LABEL_25;
  }
  v27 = *a4;
  if ( v10 != 2 )
  {
    v11 = (unsigned int)sub_CFE5F0(a5);
    v30 = v11;
    if ( !(unsigned __int8)sub_CFE6D0(a5) )
      v11 = sub_CFE630((unsigned int *)a5);
    v12 = v10 == 0;
    v31 = v11;
    v13 = v27;
    v33 = &v31;
    *((_QWORD *)&v34 + 1) = &v28;
    v36 = &v30;
    v29 = 0;
    *(_QWORD *)&v34 = a2;
    v35 = a5;
    v37 = &v29;
    v38 = a4;
    if ( v12 && v27 > v11 )
    {
      sub_D40200((__int64)&v33);
      if ( v29 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 48) = 0;
        return a1;
      }
      v11 = v31;
      v13 = *a4;
    }
    v14 = v11 - v13;
    if ( v14 || !(unsigned __int8)sub_CFE6D0(a5) )
    {
      v15 = v14;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
    {
      v15 = 0;
LABEL_23:
      sub_CFE430((__int64)v32, a5, v15);
      sub_E23260(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_E232A0(v32);
      return a1;
    }
    v25 = *(unsigned int *)(a5 + 40);
    v26 = *(_QWORD *)(a5 + 32);
    v22 = (unsigned __int64 **)v32;
    sub_E231A0(v32, v26, v25);
LABEL_25:
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(v22);
    return a1;
  }
  v16 = sub_CFE750(a5) - v27;
  if ( v16 > 1 )
  {
    v33 = (unsigned __int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v28);
    v23 = (unsigned __int8 **)sub_E33D20(a2, &v33, 2381, 0);
    v24 = v23;
    if ( v23 )
    {
      sub_AE9DF0(v23, v16, 3u);
      sub_AE9DF0(v24, 1, 2u);
      sub_AE9DF0(v24, 0, 2u);
    }
  }
  v17 = *(unsigned __int64 **)(a5 + 32);
  v33 = (unsigned __int64 *)v16;
  v34 = 0;
  LODWORD(v35) = 2;
  v36 = v17;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v33);
  return a1;
}
