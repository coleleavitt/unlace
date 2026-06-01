__int64 __fastcall sub_9577D0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char a5)
{
  int v8; // r15d
  unsigned __int64 v9; // r14
  char v10; // al
  unsigned __int64 v11; // r8
  unsigned __int8 **v12; // r8
  __int64 v13; // rdi
  unsigned __int8 **v14; // rax
  unsigned __int8 **v15; // r8
  unsigned __int8 **v16; // r13
  unsigned __int8 **v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
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
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int8 **v35; // rax
  unsigned __int8 **v36; // r13
  char v37; // [rsp+0h] [rbp-B8h]
  unsigned __int8 **v38; // [rsp+0h] [rbp-B8h]
  unsigned __int8 **v39; // [rsp+0h] [rbp-B8h]
  unsigned __int8 **v40; // [rsp+0h] [rbp-B8h]
  unsigned __int8 **v41; // [rsp+0h] [rbp-B8h]
  unsigned __int8 **v42; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+8h] [rbp-B0h]
  __int64 v45; // [rsp+18h] [rbp-A0h] BYREF
  void *v46; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+28h] [rbp-90h]
  char v48; // [rsp+2Ch] [rbp-8Ch]
  void *v49; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v50; // [rsp+38h] [rbp-80h]
  char v51; // [rsp+3Ch] [rbp-7Ch]
  unsigned __int8 **v52; // [rsp+40h] [rbp-78h] BYREF
  int v53; // [rsp+48h] [rbp-70h]

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
  v9 = (unsigned int)*a3;
  if ( v8 == 1 )
  {
    v30 = sub_8E55C0((__int64 *)a4);
    v31 = sub_8E9110(a4) * v9;
    v32 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v33 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v32 = 0;
    *(_DWORD *)(v32 + 48) = 1;
    *(_QWORD *)(v32 + 32) = v30 - v31;
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
      v52 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v35 = (unsigned __int8 **)sub_A2E1B0(a1, &v52, 2179, 0);
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
  v37 = v10;
  v44 = (unsigned int)sub_8E9270(a4);
  v11 = v44;
  if ( v37 )
  {
    if ( v8 )
    {
LABEL_25:
      v20 = *(_QWORD *)(a1 + 184);
      v21 = v11 - v9;
      if ( v11 == v9 && (unsigned __int8)sub_8E9400(a4) )
      {
        v34 = sub_A1A4E0(v20, 56);
        sub_A1BFA0(v34, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
      }
      else
      {
        sub_8E61F0((__int64)&v52, a4, v21);
        v22 = sub_A1A4E0(v20, 56);
        sub_A1C070(v22, &v52);
        sub_A1C0C0(&v52);
      }
      return 1;
    }
  }
  else
  {
    v11 = sub_8E92E0(a4);
    if ( v8 )
      goto LABEL_25;
  }
  if ( v11 >= v9 )
    goto LABEL_25;
  v49 = (void *)v9;
  v38 = (unsigned __int8 **)v11;
  v50 = 32;
  v51 = 1;
  sub_2587D60(&v52, &v49);
  v48 = 0;
  v12 = v38;
  v47 = v53;
  v46 = v52;
  if ( v50 > 0x40 && v49 )
  {
    operator delete[](v49);
    v12 = v38;
  }
  v39 = v12;
  v52 = v12;
  v53 = 34;
  sub_25863C0(&v52, &v46);
  v13 = *(_QWORD *)(a1 + 200);
  v51 = 0;
  v50 = v53;
  v49 = v52;
  v45 = sub_A16CE0(v13, a2);
  v14 = (unsigned __int8 **)sub_A2E1B0(a1, &v45, 2179, 0);
  v15 = v39;
  v52 = v14;
  v16 = v14;
  if ( v14 )
  {
    sub_8DF340(&v52, (__int64)&v49);
    v17 = v39;
    v18 = 1;
    if ( !*(_DWORD *)(a4 + 48) )
    {
      v19 = sub_8E5480(a4);
      v17 = v39;
      v18 = *(_BYTE *)(v19 + 51) ^ 1u;
    }
    v40 = v17;
    sub_8D6BF0(v16, v18);
    sub_8D6E40(v16, v44);
    v15 = v40;
  }
  if ( v50 > 0x40 && v49 )
  {
    v41 = v15;
    operator delete[](v49);
    v15 = v41;
  }
  if ( v47 > 0x40 && v46 )
  {
    v42 = v15;
    operator delete[](v46);
    v15 = v42;
  }
  v43 = (unsigned __int64)v15;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v9 = (unsigned int)*a3;
    v11 = v43;
    goto LABEL_25;
  }
  return 0;
}

