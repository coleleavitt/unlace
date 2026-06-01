__int64 __fastcall sub_9593B0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5)
{
  int v8; // r15d
  __int64 v9; // r14
  char v10; // al
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  unsigned __int8 **v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int8 **v16; // r13
  unsigned __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // r13
  char v35; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+8h] [rbp-B0h]
  __int64 v43; // [rsp+18h] [rbp-A0h] BYREF
  void *v44; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-90h]
  char v46; // [rsp+2Ch] [rbp-8Ch]
  void *v47; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-80h]
  char v49; // [rsp+3Ch] [rbp-7Ch]
  unsigned __int8 **v50; // [rsp+40h] [rbp-78h] BYREF
  int v51; // [rsp+48h] [rbp-70h]

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
  v9 = (unsigned __int8)*a3;
  if ( v8 == 1 )
  {
    v28 = sub_8E55C0((__int64 *)a4);
    v29 = sub_8E9110(a4) & -v9;
    v30 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v31 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v30 = 0;
    *(_DWORD *)(v30 + 48) = 1;
    *(_QWORD *)(v30 + 32) = v28 - v29;
    *(_QWORD *)(v30 + 24) = v31;
    *(_OWORD *)(v30 + 8) = 0;
    return 1;
  }
  v10 = sub_8E9400(a4);
  if ( v8 == 2 )
  {
    v25 = 0xFFFFFFFFLL - v9;
    if ( v10 || (v25 = *(_QWORD *)a4 - v9, v25 > 1) )
    {
      v50 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v33 = (unsigned __int8 **)sub_A2E1B0(a1, &v50, 2179, 0);
      v34 = v33;
      if ( v33 )
      {
        sub_8D6E40(v33, v25);
        sub_8D6BF0(v34, 1);
        sub_8D6BF0(v34, 0);
      }
    }
    v26 = *(_QWORD *)(a4 + 24);
    v27 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v27 = v25;
    *(_DWORD *)(v27 + 48) = 2;
    *(_QWORD *)(v27 + 24) = v26;
    *(_QWORD *)(v27 + 32) = 0;
    *(_BYTE *)(v27 + 40) = 1;
    *(_OWORD *)(v27 + 8) = 0;
    return 1;
  }
  v35 = v10;
  v42 = (unsigned int)sub_8E9270(a4);
  v11 = v42;
  if ( v35 )
  {
    if ( v8 )
    {
LABEL_25:
      v20 = *(_QWORD *)(a1 + 184);
      v21 = v11 - v9;
      if ( v11 == v9 && (unsigned __int8)sub_8E9400(a4) )
      {
        v32 = sub_A1A4E0(v20, 56);
        sub_A1BFA0(v32, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
      }
      else
      {
        sub_8E61F0((__int64)&v50, a4, v21);
        v22 = sub_A1A4E0(v20, 56);
        sub_A1C070(v22, &v50);
        sub_A1C0C0(&v50);
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
  v36 = v11;
  v48 = 1;
  v47 = &dword_0 + 1;
  v49 = 1;
  sub_2587D60(&v50, &v47);
  v46 = 0;
  v12 = v36;
  v45 = v51;
  v44 = v50;
  if ( v48 > 0x40 && v47 )
  {
    operator delete[](v47);
    v12 = v36;
  }
  v37 = v12;
  v51 = 3;
  v50 = nullptr;
  sub_25863C0(&v50, &v44);
  v13 = *(_QWORD *)(a1 + 200);
  v49 = 0;
  v48 = v51;
  v47 = v50;
  v43 = sub_A16CE0(v13, a2);
  v14 = (unsigned __int8 **)sub_A2E1B0(a1, &v43, 2179, 0);
  v15 = v37;
  v50 = v14;
  v16 = v14;
  if ( v14 )
  {
    sub_8DF340(&v50, (__int64)&v47);
    v17 = v37;
    v18 = 1;
    if ( !*(_DWORD *)(a4 + 48) )
    {
      v19 = sub_8E5480(a4);
      v17 = v37;
      v18 = *(_BYTE *)(v19 + 51) ^ 1u;
    }
    v38 = v17;
    sub_8D6BF0(v16, v18);
    sub_8D6E40(v16, v42);
    v15 = v38;
  }
  if ( v48 > 0x40 && v47 )
  {
    v39 = v15;
    operator delete[](v47);
    v15 = v39;
  }
  if ( v45 > 0x40 && v44 )
  {
    v40 = v15;
    operator delete[](v44);
    v15 = v40;
  }
  v41 = v15;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v9 = (unsigned __int8)*a3;
    v11 = v41;
    goto LABEL_25;
  }
  return 0;
}

