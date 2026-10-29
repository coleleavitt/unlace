__int64 __fastcall sub_679DA0(__int64 *a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void ***v8; // rbp
  void ***v9; // r13
  void **v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  void (__fastcall ***v13)(void *); // rbp
  void (__fastcall ***v14)(void *); // rbp
  void *v15; // rdi
  void (__fastcall ***v16)(void *); // rbp
  void (__fastcall ***v17)(void *); // rbp
  void *v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  void ***v29; // rbp
  void ***v30; // r13
  void **v31; // r12
  void *v32; // rdi
  void (__fastcall ***v33)(void *); // rbp
  __int64 v34; // rdi
  __int64 v35; // rdi
  void (__fastcall ***v36)(void *); // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi

  v2 = (__int64)(a1 + 200);
  *(_QWORD *)(v2 - 1600) = &off_1C69218;
  *(_QWORD *)(v2 - 1528) = off_1C693C8;
  sub_233E40(v2);
  v3 = (void (__fastcall ***)(void *))a1[199];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 4))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = a1[198];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  sub_2334C0(a1 + 196);
  v6 = a1[195];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  sub_2334C0(a1 + 193);
  v7 = a1[191];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  sub_2334C0(a1 + 189);
  v8 = (void ***)a1[188];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 == v9 )
      goto LABEL_18;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( *v10 )
          sub_186B220(*v10);
        sub_186B220(v10);
      }
      ++v8;
    }
    while ( v9 != v8 );
    v9 = (void ***)a1[188];
    if ( v9 )
    {
LABEL_18:
      *((_DWORD *)v9 - 1) = 0;
      sub_186B220(v9 - 1);
    }
  }
  v11 = (void *)a1[185];
  if ( v11 )
    sub_186B220(v11);
  sub_2334C0(a1 + 183);
  sub_2334C0(a1 + 181);
  v12 = (void *)a1[178];
  if ( v12 )
    sub_186B220(v12);
  v13 = (void (__fastcall ***)(void *))a1[177];
  if ( v13 )
  {
    v4 = (*((_DWORD *)v13 + 12))-- == 1;
    if ( v4 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  v14 = (void (__fastcall ***)(void *))a1[176];
  if ( v14 )
  {
    v4 = (*((_DWORD *)v14 + 4))-- == 1;
    if ( v4 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v15 = (void *)a1[173];
  if ( v15 )
    sub_186B220(v15);
  v16 = (void (__fastcall ***)(void *))a1[170];
  if ( v16 )
  {
    v4 = (*((_DWORD *)v16 + 12))-- == 1;
    if ( v4 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  v17 = (void (__fastcall ***)(void *))a1[169];
  if ( v17 )
  {
    v4 = (*((_DWORD *)v17 + 12))-- == 1;
    if ( v4 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  a1[143] = (__int64)&off_1C52C00;
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 165);
  sub_182CBA0(v18, a1 + 167);
  v19 = a1[164];
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 - 4);
    if ( (_DWORD)v20 )
    {
      v21 = v19 + 16 * v20;
      do
      {
        v22 = v19;
        v19 += 16;
        sub_15D0DF0(v22);
      }
      while ( v19 != v21 );
      v19 = a1[164];
    }
    sub_186B220((void *)(v19 - 8));
  }
  v23 = a1[163];
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 32 * v24;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23);
        v27 = v23 + 16;
        v23 += 32;
        sub_182CBA0(v26, v27);
      }
      while ( v23 != v25 );
      v23 = a1[163];
    }
    sub_186B220((void *)(v23 - 8));
  }
  sub_6775C0(a1 + 143);
  a1[125] = (__int64)&off_1C52B98;
  sub_6775C0(a1 + 125);
  a1[104] = (__int64)&off_1C52C68;
  sub_6775C0(a1 + 104);
  v28 = a1[103];
  a1[83] = (__int64)&off_1C52D38;
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  sub_6775C0(a1 + 83);
  v29 = (void ***)a1[82];
  a1[61] = (__int64)&off_1C52CD0;
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 == v30 )
      goto LABEL_59;
    do
    {
      v31 = *v29;
      if ( *v29 )
      {
        if ( *v31 )
          sub_186B220(*v31);
        sub_186B220(v31);
      }
      ++v29;
    }
    while ( v30 != v29 );
    v30 = (void ***)a1[82];
    if ( v30 )
    {
LABEL_59:
      *((_DWORD *)v30 - 1) = 0;
      sub_186B220(v30 - 1);
    }
  }
  v32 = (void *)a1[79];
  if ( v32 )
    sub_186B220(v32);
  sub_6775C0(a1 + 61);
  v33 = (void (__fastcall ***)(void *))a1[60];
  if ( v33 )
  {
    v4 = (*((_DWORD *)v33 + 4))-- == 1;
    if ( v4 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
  }
  v34 = a1[59];
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  sub_14B63F0(a1 + 57);
  sub_2334C0(a1 + 54);
  sub_677310(a1 + 18);
  v35 = a1[14];
  *a1 = (__int64)qword_1C75FB0;
  a1[9] = (__int64)qword_1C76160;
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  sub_2334C0(a1 + 12);
  a1[9] = (__int64)qword_1C77178;
  *a1 = (__int64)qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v36 = (void (__fastcall ***)(void *))a1[7];
  *a1 = (__int64)qword_1C63FB0;
  if ( v36 )
  {
    v4 = (*((_DWORD *)v36 + 2))-- == 1;
    if ( v4 )
    {
      (**v36)(v36);
      sub_186B220(v36);
    }
  }
  v37 = a1[4];
  if ( v37 )
  {
    v38 = a1[5];
    v4 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v38, v37);
  }
  return sub_2334C0(a1 + 2);
}

