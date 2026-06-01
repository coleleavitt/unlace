__int64 __fastcall sub_D3F930(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // r15d
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 *v15; // r12
  unsigned __int64 *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rcx
  __int64 **v21; // rbx
  unsigned __int8 **v22; // rax
  unsigned __int8 **v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int16 v26; // [rsp+6h] [rbp-D2h]
  __int64 v27; // [rsp+8h] [rbp-D0h] BYREF
  char v28; // [rsp+1Fh] [rbp-B9h] BYREF
  unsigned __int64 v29; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v31[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v32; // [rsp+60h] [rbp-78h] BYREF
  __int128 v33; // [rsp+68h] [rbp-70h]
  __int64 v34; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v35; // [rsp+80h] [rbp-58h]
  char *v36; // [rsp+88h] [rbp-50h]
  unsigned __int16 *v37; // [rsp+90h] [rbp-48h]

  v7 = *a4 == 0;
  v27 = a3;
  if ( v7 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v27, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v17 = sub_CFE3F0(a5);
    v18 = sub_CFE390(a5);
    v19 = *a4;
    v20 = *(unsigned __int64 **)(a5 + 32);
    v32 = nullptr;
    LODWORD(v34) = 1;
    v21 = &v32;
    v35 = v20;
    v33 = 0;
    v36 = (char *)(v17 - v18 * v19);
    goto LABEL_25;
  }
  v26 = *a4;
  if ( v10 != 2 )
  {
    v11 = (unsigned int)sub_CFE5F0(a5);
    v29 = v11;
    if ( !(unsigned __int8)sub_CFE6D0(a5) )
      v11 = sub_CFE630((unsigned int *)a5);
    v7 = v10 == 0;
    v30 = v11;
    v12 = v26;
    v32 = (__int64 *)&v30;
    *((_QWORD *)&v33 + 1) = &v27;
    v35 = &v29;
    v28 = 0;
    *(_QWORD *)&v33 = a2;
    v34 = a5;
    v36 = &v28;
    v37 = a4;
    if ( v7 && v26 > v11 )
    {
      sub_D3F780(&v32);
      if ( v28 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 48) = 0;
        return a1;
      }
      v11 = v30;
      v12 = *a4;
    }
    v13 = v11 - v12;
    if ( v13 || !(unsigned __int8)sub_CFE6D0(a5) )
    {
      v14 = v13;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
    {
      v14 = 0;
LABEL_23:
      sub_CFE430((__int64)v31, a5, v14);
      sub_E23260(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_E232A0(v31);
      return a1;
    }
    v24 = *(unsigned int *)(a5 + 40);
    v25 = *(_QWORD *)(a5 + 32);
    v21 = (__int64 **)v31;
    sub_E231A0(v31, v25, v24);
LABEL_25:
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(v21);
    return a1;
  }
  v15 = (__int64 *)(sub_CFE750(a5) - v26);
  if ( (unsigned __int64)v15 > 1 )
  {
    v32 = (__int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v27);
    v22 = (unsigned __int8 **)sub_E33D20(a2, &v32, 2381, 0);
    v23 = v22;
    if ( v22 )
    {
      sub_AE9DF0(v22, (__int64)v15, 3u);
      sub_AE9DF0(v23, 1, 2u);
      sub_AE9DF0(v23, 0, 2u);
    }
  }
  v16 = *(unsigned __int64 **)(a5 + 32);
  v32 = v15;
  v33 = 0;
  LODWORD(v34) = 2;
  v35 = v16;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v32);
  return a1;
}
