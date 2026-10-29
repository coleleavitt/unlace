__int64 __fastcall sub_D2E580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v10; // edx
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  char v13; // al
  int v14; // edx
  __int64 v15; // rax
  bool v16; // dl
  __int64 v17; // r15
  __int64 v18; // rsi
  void **v19; // rbx
  bool v20; // r12
  unsigned __int64 v21; // r12
  unsigned __int64 *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // r13
  bool v27; // r12
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  bool v30; // r14
  bool v31; // r14
  bool v32; // al
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rsi
  int v37; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v38; // [rsp+8h] [rbp-E0h]
  bool v39; // [rsp+17h] [rbp-D1h]
  __int64 v40; // [rsp+18h] [rbp-D0h] BYREF
  char v41; // [rsp+2Fh] [rbp-B9h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-B0h] BYREF
  void *v44; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-A0h]
  char v46; // [rsp+4Ch] [rbp-9Ch]
  unsigned __int64 *v47; // [rsp+70h] [rbp-78h] BYREF
  __int128 v48; // [rsp+78h] [rbp-70h]
  __int64 v49; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v50; // [rsp+90h] [rbp-58h]
  char *v51; // [rsp+98h] [rbp-50h]
  __int64 v52; // [rsp+A0h] [rbp-48h]

  v40 = a3;
  if ( (unsigned __int8)sub_CFE940(a4) )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, v40, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v40, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v24 = sub_CFE3F0(a5);
    v25 = *(_DWORD *)(a4 + 8);
    v26 = v24;
    if ( v25 <= 0x40 )
      v27 = *(_QWORD *)a4 == 0;
    else
      v27 = (unsigned int)sub_2206780(a4) == v25;
    v28 = sub_CFE390(a5);
    v29 = *(unsigned __int64 **)(a5 + 32);
    v48 = 0;
    v19 = (void **)&v47;
    v47 = nullptr;
    LODWORD(v49) = 1;
    v50 = v29;
    v51 = (char *)(v28 * !v27 + v26);
    goto LABEL_26;
  }
  v11 = *(_DWORD *)(a4 + 8);
  if ( v10 != 2 )
  {
    v37 = *(_DWORD *)(a5 + 24);
    v12 = (unsigned int)sub_CFE5F0(a5);
    v38 = v12;
    v42 = v12;
    v13 = sub_CFE6D0(a5);
    v14 = v37;
    if ( !v13 )
    {
      v15 = sub_CFE630((unsigned int *)a5);
      v14 = v37;
      v12 = v15;
    }
    v43 = v12;
    v47 = &v43;
    *((_QWORD *)&v48 + 1) = &v40;
    v50 = &v42;
    v41 = 0;
    *(_QWORD *)&v48 = a2;
    v49 = a5;
    v51 = &v41;
    v52 = a4;
    if ( v14 )
    {
LABEL_12:
      if ( v11 <= 0x40 )
        v16 = *(_QWORD *)a4 == 0;
      else
        v16 = v11 == (unsigned int)sub_2206780(a4);
      v17 = !v16 + v12;
      if ( v17 || !(unsigned __int8)sub_CFE6D0(a5) )
      {
        v23 = a5;
        v19 = &v44;
        sub_CFE430((__int64)&v44, v23, v17);
      }
      else if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
      {
        v18 = a5;
        v19 = &v44;
        sub_CFE430((__int64)&v44, v18, 0);
      }
      else
      {
        v35 = *(unsigned int *)(a5 + 40);
        v36 = *(_QWORD *)(a5 + 32);
        v19 = &v44;
        sub_E231A0(&v44, v36, v35);
      }
LABEL_26:
      sub_E23260(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_E232A0(v19);
      return a1;
    }
    if ( v11 <= 0x40 )
      v30 = *(_QWORD *)a4 == 0;
    else
      v30 = (unsigned int)sub_2206780(a4) == v11;
    v31 = !v30;
    if ( (unsigned __int8)sub_CFE9D0(a4) && ((unsigned __int8)sub_CFEA80(a4) || -(__int64)v31 > v43) )
      sub_D2E3B0((__int64)&v47);
    sub_CF8960((__int64)&v44, (__int64 *)a4);
    if ( v46 )
    {
      if ( v45 > 0x40 && v44 )
        operator delete[](v44);
    }
    else
    {
      v32 = sub_CF0820((__int64 *)&v44);
      if ( v45 > 0x40 && v44 )
      {
        v39 = v32;
        operator delete[](v44);
        v32 = v39;
      }
      if ( v32 )
        goto LABEL_38;
    }
    if ( v31 > v38 - v12 )
      sub_D2E3B0((__int64)&v47);
LABEL_38:
    if ( v41 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
    {
LABEL_5:
      *(_BYTE *)(a1 + 48) = 0;
      return a1;
    }
    v12 = v43;
    v11 = *(_DWORD *)(a4 + 8);
    goto LABEL_12;
  }
  if ( v11 <= 0x40 )
    v20 = *(_QWORD *)a4 == 0;
  else
    v20 = (unsigned int)sub_2206780(a4) == v11;
  v21 = sub_CFE750(a5) + !v20;
  if ( v21 > 1 )
  {
    v47 = (unsigned __int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v40);
    v33 = (unsigned __int8 **)sub_E33D20(a2, &v47, 2381, 0);
    v34 = v33;
    if ( v33 )
    {
      sub_AE9DF0(v33, v21, 3u);
      sub_AE9DF0(v34, 1, 2u);
      sub_AE9DF0(v34, 0, 2u);
    }
  }
  v22 = *(unsigned __int64 **)(a5 + 32);
  v47 = (unsigned __int64 *)v21;
  v48 = 0;
  LODWORD(v49) = 2;
  v50 = v22;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v47);
  return a1;
}
