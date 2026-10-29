__int64 __fastcall sub_9581D0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5)
{
  int v8; // r14d
  unsigned __int64 v9; // r15
  char v10; // al
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int8 **v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int8 **v17; // r13
  unsigned __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r12
  bool v27; // cf
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int8 **v35; // rax
  unsigned __int8 **v36; // r13
  __int64 v37; // rax
  char v38; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v41; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v42; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+0h] [rbp-C8h]
  __int64 v47; // [rsp+8h] [rbp-C0h]
  __int64 v48; // [rsp+18h] [rbp-B0h] BYREF
  void *v49; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+28h] [rbp-A0h]
  char v51; // [rsp+2Ch] [rbp-9Ch]
  void *v52; // [rsp+30h] [rbp-98h]
  unsigned int v53; // [rsp+38h] [rbp-90h]
  char v54; // [rsp+3Ch] [rbp-8Ch]
  void *v55; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-80h]
  char v57; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int8 **v58; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-70h]

  if ( !*a3 )
  {
    v24 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v24, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, a2, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = *a3;
  if ( v8 == 1 )
  {
    v30 = sub_8E55C0((__int64 *)a4);
    v31 = v30 - v9 * sub_8E9110(a4);
    v32 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v33 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v32 = 0;
    *(_DWORD *)(v32 + 48) = 1;
    *(_QWORD *)(v32 + 32) = v31;
    *(_QWORD *)(v32 + 24) = v33;
    *(_OWORD *)(v32 + 8) = 0;
    return 1;
  }
  v10 = sub_8E9400(a4);
  if ( v8 == 2 )
  {
    v25 = 0xFFFFFFFFLL;
    if ( !v10 )
      v25 = *(_QWORD *)a4;
    v27 = v25 == v9;
    v26 = v25 - v9;
    if ( !v27 && v26 != 1 )
    {
      v58 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v35 = (unsigned __int8 **)sub_A2E1B0(a1, &v58, 2179, 0);
      v36 = v35;
      if ( v35 )
      {
        sub_8D6E40(v35, v26);
        sub_8D6BF0(v36, 1);
        sub_8D6BF0(v36, 0);
      }
    }
    v28 = *(_QWORD *)(a4 + 24);
    v29 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v29 = v26;
    *(_DWORD *)(v29 + 48) = 2;
    *(_QWORD *)(v29 + 24) = v28;
    *(_QWORD *)(v29 + 32) = 0;
    *(_BYTE *)(v29 + 40) = 1;
    *(_OWORD *)(v29 + 8) = 0;
    return 1;
  }
  v38 = v10;
  v47 = (unsigned int)sub_8E9270(a4);
  v11 = v47;
  if ( v38 )
  {
    if ( v8 )
    {
LABEL_30:
      v20 = *(_QWORD *)(a1 + 184);
      v21 = v11 - v9;
      if ( v11 == v9 && (unsigned __int8)sub_8E9400(a4) )
      {
        v34 = sub_A1A4E0(v20, 56);
        sub_A1BFA0(v34, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
      }
      else
      {
        sub_8E61F0((__int64)&v58, a4, v21);
        v22 = sub_A1A4E0(v20, 56);
        sub_A1C070(v22, &v58);
        sub_A1C0C0(&v58);
      }
      return 1;
    }
  }
  else
  {
    v11 = sub_8E92E0(a4);
    if ( v8 )
      goto LABEL_30;
  }
  if ( v11 >= v9 )
    goto LABEL_30;
  v55 = (void *)v9;
  v39 = v11;
  v56 = 64;
  v57 = 1;
  sub_2587D60(&v58, &v55);
  v51 = 0;
  v12 = v39;
  v50 = v59;
  v49 = v58;
  if ( v56 > 0x40 && v55 )
  {
    operator delete[](v55);
    v12 = v39;
  }
  v40 = v12;
  v59 = 66;
  sub_2585A50(&v58, v12, 1);
  v54 = 0;
  v13 = v40;
  v53 = v59;
  v52 = v58;
  if ( v59 > 0x40 )
  {
    sub_2585B30(&v58);
    v13 = v40;
  }
  v41 = v13;
  sub_25863C0(&v58, &v49);
  v14 = *(_QWORD *)(a1 + 200);
  v57 = 0;
  v56 = v59;
  v55 = v58;
  v48 = sub_A16CE0(v14, a2);
  v15 = (unsigned __int8 **)sub_A2E1B0(a1, &v48, 2179, 0);
  v16 = v41;
  v58 = v15;
  v17 = v15;
  if ( v15 )
  {
    sub_8DF340(&v58, (__int64)&v55);
    v18 = v41;
    if ( *(_DWORD *)(a4 + 48) )
    {
      v19 = 1;
    }
    else
    {
      v37 = sub_8E5480(a4);
      v18 = v41;
      v19 = *(_BYTE *)(v37 + 51) ^ 1u;
    }
    v42 = v18;
    sub_8D6BF0(v17, v19);
    sub_8D6E40(v17, v47);
    v16 = v42;
  }
  if ( v56 > 0x40 && v55 )
  {
    v43 = v16;
    operator delete[](v55);
    v16 = v43;
  }
  if ( v53 > 0x40 && v52 )
  {
    v44 = v16;
    operator delete[](v52);
    v16 = v44;
  }
  if ( v50 > 0x40 && v49 )
  {
    v45 = v16;
    operator delete[](v49);
    v16 = v45;
  }
  v46 = v16;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v9 = *a3;
    v11 = v46;
    goto LABEL_30;
  }
  return 0;
}

