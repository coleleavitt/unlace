void __fastcall sub_68ED00(__int64 a1)
{
  __int64 v2; // rdi
  void (*v3)(void); // rdx
  __int64 v4; // r12
  char v5; // al
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  void (***v13)(void); // rdi
  bool v14; // zf
  __int64 v15; // rdi
  void (*v16)(void); // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  void (***v31)(void); // rdi
  __int64 v32; // r14
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  void *v36; // r13
  int v37; // [rsp+8h] [rbp-D8h]
  int v38; // [rsp+10h] [rbp-D0h]
  int v39; // [rsp+18h] [rbp-C8h]
  __int64 v40; // [rsp+20h] [rbp-C0h]
  __int64 v41; // [rsp+38h] [rbp-A8h]
  __int64 v42; // [rsp+38h] [rbp-A8h]
  void *v43; // [rsp+40h] [rbp-A0h]
  char v44[8]; // [rsp+60h] [rbp-80h] BYREF
  char v45[8]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v46; // [rsp+70h] [rbp-70h] BYREF
  __int64 v47; // [rsp+78h] [rbp-68h] BYREF
  __int64 v48; // [rsp+80h] [rbp-60h] BYREF
  __int64 v49; // [rsp+88h] [rbp-58h] BYREF
  __int64 v50; // [rsp+90h] [rbp-50h] BYREF
  __int64 v51; // [rsp+98h] [rbp-48h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-40h]
  _BYTE v53[56]; // [rsp+A8h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 4536);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 160LL);
    if ( (char *)v3 == (char *)sub_230000 )
      (*(void (**)(void))(*(_QWORD *)v2 + 152LL))();
    else
      v3();
  }
  if ( *(_QWORD *)(a1 + 4528) )
  {
    v4 = a1 + 4392;
  }
  else
  {
    v4 = a1 + 4392;
    v32 = sub_186B270(8u);
    sub_FC1490(v32, *(_QWORD *)(a1 + 8), a1 + 4392, v33, v34, v35);
    v36 = *(void **)(a1 + 4528);
    if ( (void *)v32 != v36 )
    {
      if ( v36 )
      {
        sub_FC0640(*(_QWORD *)(a1 + 4528));
        sub_186B220(v36);
      }
      *(_QWORD *)(a1 + 4528) = v32;
    }
  }
  sub_1858590(v44, v4);
  sub_1862300(v44, "som", 1);
  sub_1862300(v44, "pull_cheap_ite", 1);
  sub_1862300(v44, "push_ite_bv", 0);
  sub_1862300(v44, "local_ctx", 1);
  sub_1862370(v44, "local_ctx_limit", 10000000);
  sub_1862300(v44, "flat", 1);
  sub_1862300(v44, "hoist_mul", 0);
  sub_1862300(v44, "elim_and", 1);
  sub_1862300(v44, "blast_distinct", 1);
  sub_1858590(v45, v4);
  sub_1862300(v45, "flat", 0);
  v52 = v4;
  sub_17F9A60(v53, "sat");
  v5 = sub_1859630(v52, "euf", v53, 0);
  v51 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v7 = sub_CF56E0(v6, (unsigned int)&v51);
    v8 = *(_QWORD *)(a1 + 8);
    v50 = 0;
    v9 = v7;
    v10 = sub_D156B0(v8, (unsigned int)&v50);
    v11 = sub_EE7A70(v10, v9);
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v13 = *(void (****)(void))(a1 + 4536);
    if ( v13 )
    {
      v14 = (*((_DWORD *)v13 + 2))-- == 1;
      if ( v14 )
      {
        (**v13)();
        sub_186B220(v13);
      }
    }
    *(_QWORD *)(a1 + 4536) = v12;
    sub_18572D0(&v50);
    sub_18572D0(&v51);
  }
  else
  {
    v17 = sub_D156B0(v6, (unsigned int)&v51);
    v18 = sub_EE8E00(v17, v45);
    v19 = *(_QWORD *)(a1 + 4528);
    v20 = *(_QWORD *)(a1 + 8);
    v40 = v18;
    v50 = 0;
    v21 = sub_769550(v20, v19, &v50);
    v22 = *(_QWORD *)(a1 + 8);
    v39 = v21;
    v49 = 0;
    v43 = (void *)sub_186B270(0x160u);
    sub_232FE0((__int64)v43, v22, (__int64)&v49, (__int64)sub_F72960);
    v23 = *(_QWORD *)(a1 + 8);
    v48 = 0;
    v24 = sub_D156B0(v23, (unsigned int)&v48);
    v38 = sub_EE8E00(v24, v44);
    v25 = *(_QWORD *)(a1 + 8);
    v41 = sub_186B270(0x160u);
    sub_232FE0(v41, v25, v4, (__int64)sub_2307F0);
    v26 = *(_QWORD *)(a1 + 8);
    v47 = 0;
    v27 = sub_CF56E0(v26, (unsigned int)&v47);
    v28 = *(_QWORD *)(a1 + 8);
    v37 = v27;
    v46 = 0;
    v29 = sub_D156B0(v28, (unsigned int)&v46);
    v30 = sub_EE7EC0(v29, v37, v41, v38, (_DWORD)v43, v39, v40);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = *(void (****)(void))(a1 + 4536);
    if ( v31 )
    {
      v14 = (*((_DWORD *)v31 + 2))-- == 1;
      if ( v14 )
      {
        v42 = v30;
        (**v31)();
        sub_186B220(v31);
        v30 = v42;
      }
    }
    *(_QWORD *)(a1 + 4536) = v30;
    sub_18572D0(&v46);
    sub_18572D0(&v47);
    sub_18572D0(&v48);
    sub_18572D0(&v49);
    sub_18572D0(&v50);
    sub_18572D0(&v51);
  }
  while ( (unsigned int)sub_FC07D0(*(_QWORD *)(a1 + 4528)) < *(_DWORD *)(a1 + 4548) )
    sub_FC17A0(*(_QWORD *)(a1 + 4528));
  v15 = *(_QWORD *)(a1 + 4536);
  v16 = *(void (**)(void))(*(_QWORD *)v15 + 160LL);
  if ( (char *)v16 == (char *)sub_230000 )
    (*(void (**)(void))(*(_QWORD *)v15 + 152LL))();
  else
    v16();
  sub_18572D0(v53);
  sub_18572D0(v45);
  sub_18572D0(v44);
}

