__int64 __fastcall sub_699DC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  void *v5; // r12
  __int64 v6; // rsi
  void *v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  void **v19; // rbp
  void **v20; // r13
  void (__fastcall ***v21)(void *); // r12
  __int64 v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *v24; // r13
  _DWORD *v25; // r12
  __int64 v26; // rdi
  void (__fastcall ***v27)(void *); // rbp
  void *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  void (***v33)(void); // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi

  v1 = *(_QWORD *)(a1 + 4864);
  *(_QWORD *)a1 = &off_1C69728;
  *(_QWORD *)(a1 + 72) = off_1C69908;
  if ( v1 )
  {
    v3 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v1 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v6 = v1 + 16;
        v1 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v1 != v4 );
      v1 = *(_QWORD *)(a1 + 4864);
    }
    sub_186B220((void *)(v1 - 8));
  }
  v7 = *(void **)(a1 + 4840);
  if ( v7 )
    sub_186B220(v7);
  v8 = *(__int64 **)(a1 + 4832);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[4 * v9];
      do
      {
        v13 = v8[2];
        if ( v13 )
        {
          v14 = v8[3];
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            sub_15D7BC0(v14, v13);
        }
        v11 = v8[1];
        v12 = *v8;
        v8 += 4;
        sub_68CF60(v12, v11);
      }
      while ( v8 != v10 );
      v8 = *(__int64 **)(a1 + 4832);
    }
    sub_186B220(v8 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 4816));
  sub_233E40(a1 + 4776);
  v16 = *(_QWORD *)(a1 + 4768);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  sub_68D0B0(*(void (****)(void))(a1 + 4760));
  v17 = *(_QWORD *)(a1 + 4752);
  if ( v17 )
  {
    v15 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v15 )
      sub_68ECD0((void (***)(void))v17);
  }
  v18 = *(void **)(a1 + 4728);
  if ( v18 )
    sub_186B220(v18);
  sub_68D0B0(*(void (****)(void))(a1 + 4720));
  v19 = *(void ***)(a1 + 4712);
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v21 = (void (__fastcall ***)(void *))*v19;
        if ( *v19 )
        {
          v15 = (*((_DWORD *)v21 + 2))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_32;
      }
      ++v19;
      (**v21)(v21);
      sub_186B220(v21);
    }
    while ( v19 < v20 );
LABEL_32:
    v19 = *(void ***)(a1 + 4712);
    if ( v19 )
LABEL_33:
      sub_186B220(v19 - 1);
  }
  v22 = *(_QWORD *)(a1 + 4704);
  if ( v22 )
  {
    v15 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v15 )
      sub_68ECD0((void (***)(void))v22);
  }
  v23 = *(_QWORD **)(a1 + 4560);
  v24 = &v23[*(unsigned int *)(a1 + 4568)];
  if ( v23 < v24 )
  {
    do
    {
      while ( 1 )
      {
        v25 = (_DWORD *)*v23;
        if ( *v23 )
        {
          v15 = v25[8]-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_43;
      }
      ++v23;
      sub_ED44E0(v25);
      sub_186B220(v25);
    }
    while ( v23 < v24 );
LABEL_43:
    v23 = *(_QWORD **)(a1 + 4560);
  }
  if ( v23 && v23 != (_QWORD *)(a1 + 4576) )
    sub_186B220(v23);
  v26 = *(_QWORD *)(a1 + 4552);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(void (__fastcall ****)(void *))(a1 + 4536);
  if ( v27 )
  {
    v15 = (*((_DWORD *)v27 + 2))-- == 1;
    if ( v15 )
    {
      (**v27)(v27);
      sub_186B220(v27);
    }
  }
  v28 = *(void **)(a1 + 4528);
  if ( v28 )
  {
    sub_FC0640(*(_QWORD *)(a1 + 4528));
    sub_186B220(v28);
  }
  sub_16234F0(a1 + 4480);
  sub_2334C0((__int64 *)(a1 + 4464));
  v29 = *(_QWORD *)(a1 + 4448);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 4440);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 4432);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_2334C0((__int64 *)(a1 + 4416));
  sub_2334C0((__int64 *)(a1 + 4400));
  sub_18572D0((void *)(a1 + 4392));
  sub_786740(a1 + 4376);
  v32 = *(_QWORD *)(a1 + 4368);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  sub_11C05E0(a1 + 96);
  *(_QWORD *)a1 = qword_1C76FE8;
  *(_QWORD *)(a1 + 72) = qword_1C77178;
  sub_18572D0((void *)(a1 + 80));
  v33 = *(void (****)(void))(a1 + 56);
  *(_QWORD *)a1 = qword_1C63FB0;
  sub_68D0B0(v33);
  v34 = *(_QWORD *)(a1 + 32);
  if ( v34 )
  {
    v35 = *(_QWORD *)(a1 + 40);
    v15 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v35, v34);
  }
  return sub_2334C0((__int64 *)(a1 + 16));
}

