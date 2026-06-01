__int64 __fastcall sub_D40E50(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // edx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  char v13; // al
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 *v18; // r12
  unsigned __int64 *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 *v22; // rdx
  __int64 **v23; // rbx
  unsigned __int8 **v24; // rax
  unsigned __int8 **v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rsi
  int v28; // [rsp+4h] [rbp-D4h]
  __int64 v29; // [rsp+8h] [rbp-D0h] BYREF
  char v30; // [rsp+1Fh] [rbp-B9h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v33[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  __int64 v36; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v37; // [rsp+80h] [rbp-58h]
  char *v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 *v39; // [rsp+90h] [rbp-48h]

  v7 = *a4 == 0;
  v29 = a3;
  if ( v7 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v29, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v20 = sub_CFE3F0(a5);
    v21 = *a4 * sub_CFE390(a5);
    v22 = *(unsigned __int64 **)(a5 + 32);
    v34 = nullptr;
    LODWORD(v36) = 1;
    v23 = &v34;
    v37 = v22;
    v35 = 0;
    v38 = (char *)(v20 - v21);
    goto LABEL_25;
  }
  v11 = *a4;
  if ( v10 != 2 )
  {
    v28 = *(_DWORD *)(a5 + 24);
    v12 = (unsigned int)sub_CFE5F0(a5);
    v31 = v12;
    v13 = sub_CFE6D0(a5);
    v14 = v28;
    if ( !v13 )
    {
      v15 = sub_CFE630((unsigned int *)a5);
      v14 = v28;
      v12 = v15;
    }
    v32 = v12;
    v34 = (__int64 *)&v32;
    *((_QWORD *)&v35 + 1) = &v29;
    v37 = &v31;
    v30 = 0;
    *(_QWORD *)&v35 = a2;
    v36 = a5;
    v38 = &v30;
    v39 = a4;
    if ( !v14 && v11 > v12 )
    {
      sub_D40C90(&v34);
      if ( v30 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 48) = 0;
        return a1;
      }
      v12 = v32;
      v11 = *a4;
    }
    v16 = v12 - v11;
    if ( v16 || !(unsigned __int8)sub_CFE6D0(a5) )
    {
      v17 = v16;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
    {
      v17 = 0;
LABEL_23:
      sub_CFE430((__int64)v33, a5, v17);
      sub_E23260(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_E232A0(v33);
      return a1;
    }
    v26 = *(unsigned int *)(a5 + 40);
    v27 = *(_QWORD *)(a5 + 32);
    v23 = (__int64 **)v33;
    sub_E231A0(v33, v27, v26);
LABEL_25:
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(v23);
    return a1;
  }
  v18 = (__int64 *)(sub_CFE750(a5) - v11);
  if ( (unsigned __int64)v18 > 1 )
  {
    v34 = (__int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v29);
    v24 = (unsigned __int8 **)sub_E33D20(a2, &v34, 2381, 0);
    v25 = v24;
    if ( v24 )
    {
      sub_AE9DF0(v24, (__int64)v18, 3u);
      sub_AE9DF0(v25, 1, 2u);
      sub_AE9DF0(v25, 0, 2u);
    }
  }
  v19 = *(unsigned __int64 **)(a5 + 32);
  v34 = v18;
  v35 = 0;
  LODWORD(v36) = 2;
  v37 = v19;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v34);
  return a1;
}
