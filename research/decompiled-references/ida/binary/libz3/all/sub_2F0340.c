__int64 __fastcall sub_2F0340(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void *v8; // rdi
  void *v9; // rdi
  void **v10; // rbx
  void **v11; // r13
  void (__fastcall ***v12)(void *); // r12
  void (__fastcall ***v13)(void *); // rbx
  void (__fastcall ***v14)(void *); // rbx
  _QWORD *v15; // r13
  __int64 v16; // rax
  void *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r15
  void *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  void **v26; // rbx
  void **v27; // r13
  void (__fastcall ***v28)(void *); // r12
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r14
  void *v38; // r13
  void *v39; // r13
  void *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r14
  void *v45; // r13
  void *v46; // r13
  void *v47; // r13
  __int64 v48; // rsi
  void **v49; // rbx
  void **v50; // r13
  void (__fastcall ***v51)(void *); // r12
  void *v52; // rbx
  void (__fastcall ***v53)(_QWORD); // rbx
  void (__fastcall ***v54)(void *); // rbx
  void (__fastcall *v55)(__int64, __int64, __int64); // rax
  void (__fastcall ***v56)(void *); // rbx
  _QWORD *v58; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &off_1C4D0E0;
  *(__m128i *)(a1 + 72) = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_1C4D2F8),
                            (__m128i)(unsigned __int64)off_1C4D270);
  sub_2EE240(a1);
  sub_233E40(a1 + 776);
  v2 = *(_QWORD *)(a1 + 768);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_2EB3A0(*(void (__fastcall ****)(_QWORD))(a1 + 736));
  sub_2334C0((__int64 *)(a1 + 720));
  v3 = *(__int64 **)(a1 + 712);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 704);
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = *(__int64 **)(a1 + 712);
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = *(void **)(a1 + 680);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(void **)(a1 + 656);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void ***)(a1 + 640);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v12 = (void (__fastcall ***)(void *))*v10;
        if ( *v10 )
        {
          v7 = (*((_DWORD *)v12 + 4))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      ++v10;
      (**v12)(v12);
      sub_186B220(v12);
    }
    while ( v10 < v11 );
LABEL_23:
    v10 = *(void ***)(a1 + 640);
    if ( v10 )
LABEL_24:
      sub_186B220(v10 - 1);
  }
  v13 = *(void (__fastcall ****)(void *))(a1 + 632);
  if ( v13 )
  {
    v7 = (*((_DWORD *)v13 + 2))-- == 1;
    if ( v7 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  v14 = *(void (__fastcall ****)(void *))(a1 + 624);
  if ( v14 )
  {
    v7 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v7 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  sub_2EB6D0(*(void (****)(void))(a1 + 616));
  v15 = *(_QWORD **)(a1 + 608);
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v58 = &v15[13 * v16];
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 6);
        sub_182CBA0(v17, v15 + 8);
        v18 = v15[5];
        if ( v18 )
        {
          v19 = *(unsigned int *)(v18 - 4);
          if ( (_DWORD)v19 )
          {
            v20 = v18 + 32 * v19;
            do
            {
              v21 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v18);
              v22 = v18 + 16;
              v18 += 32;
              sub_182CBA0(v21, v22);
            }
            while ( v20 != v18 );
            v18 = v15[5];
          }
          sub_186B220((void *)(v18 - 8));
        }
        sub_2334C0(v15 + 3);
        v23 = v15[1];
        if ( v23 )
        {
          v24 = v15[2];
          v7 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v24, v23);
        }
        v15 += 13;
      }
      while ( v58 != v15 );
      v15 = *(_QWORD **)(a1 + 608);
    }
    sub_186B220(v15 - 1);
  }
  sub_2FCBA0(a1 + 440);
  v25 = *(void **)(a1 + 416);
  if ( v25 )
    sub_186B220(v25);
  v26 = *(void ***)(a1 + 408);
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v28 = (void (__fastcall ***)(void *))*v26;
        if ( *v26 )
        {
          v7 = (*((_DWORD *)v28 + 4))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_55;
      }
      ++v26;
      (**v28)(v28);
      sub_186B220(v28);
    }
    while ( v26 < v27 );
LABEL_55:
    v26 = *(void ***)(a1 + 408);
    if ( v26 )
LABEL_56:
      sub_186B220(v26 - 1);
  }
  v29 = *(_QWORD *)(a1 + 400);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  sub_2EB6D0(*(void (****)(void))(a1 + 392));
  sub_2EB6D0(*(void (****)(void))(a1 + 384));
  v30 = *(_QWORD *)(a1 + 368);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  sub_2334C0((__int64 *)(a1 + 352));
  v31 = *(__int64 **)(a1 + 344);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *(_QWORD *)(a1 + 336);
          v7 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_68;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_68:
    v31 = *(__int64 **)(a1 + 344);
    if ( v31 )
LABEL_69:
      sub_186B220(v31 - 1);
  }
  v35 = *(_QWORD *)(a1 + 328);
  if ( v35 )
  {
    v36 = *(unsigned int *)(v35 - 4);
    if ( (_DWORD)v36 )
    {
      v37 = v35 + 96 * v36;
      do
      {
        v38 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35 + 64);
        sub_182CBA0(v38, v35 + 80);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35 + 32);
        sub_182CBA0(v39, v35 + 48);
        v40 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35);
        v41 = v35 + 16;
        v35 += 96;
        sub_182CBA0(v40, v41);
      }
      while ( v37 != v35 );
      v35 = *(_QWORD *)(a1 + 328);
    }
    sub_186B220((void *)(v35 - 8));
  }
  v42 = *(_QWORD *)(a1 + 320);
  if ( v42 )
  {
    v43 = *(unsigned int *)(v42 - 4);
    if ( (_DWORD)v43 )
    {
      v44 = v42 + 96 * v43;
      do
      {
        v45 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v42 + 64);
        sub_182CBA0(v45, v42 + 80);
        v46 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v42 + 32);
        sub_182CBA0(v46, v42 + 48);
        v47 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v42);
        v48 = v42 + 16;
        v42 += 96;
        sub_182CBA0(v47, v48);
      }
      while ( v44 != v42 );
      v42 = *(_QWORD *)(a1 + 320);
    }
    sub_186B220((void *)(v42 - 8));
  }
  sub_18572D0((void *)(a1 + 288));
  v49 = *(void ***)(a1 + 272);
  if ( v49 )
  {
    v50 = &v49[*((unsigned int *)v49 - 1)];
    if ( v49 >= v50 )
      goto LABEL_90;
    do
    {
      while ( 1 )
      {
        v51 = (void (__fastcall ***)(void *))*v49;
        if ( *v49 )
        {
          v7 = (*((_DWORD *)v51 + 4))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v49 >= v50 )
          goto LABEL_89;
      }
      ++v49;
      (**v51)(v51);
      sub_186B220(v51);
    }
    while ( v49 < v50 );
LABEL_89:
    v49 = *(void ***)(a1 + 272);
    if ( v49 )
LABEL_90:
      sub_186B220(v49 - 1);
  }
  v52 = *(void **)(a1 + 264);
  if ( v52 )
  {
    sub_712540(*(_QWORD *)(a1 + 264));
    sub_186B220(v52);
  }
  v53 = *(void (__fastcall ****)(_QWORD))(a1 + 248);
  if ( v53 )
  {
    (**v53)(*(_QWORD *)(a1 + 248));
    sub_186B220(v53);
  }
  sub_2EB700(*(void (****)(void))(a1 + 240));
  sub_2EB700(*(void (****)(void))(a1 + 232));
  v54 = *(void (__fastcall ****)(void *))(a1 + 224);
  if ( v54 )
  {
    v7 = (*((_DWORD *)v54 + 12))-- == 1;
    if ( v7 )
    {
      (**v54)(v54);
      sub_186B220(v54);
    }
  }
  sub_2334C0((__int64 *)(a1 + 208));
  v55 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 144);
  if ( v55 )
    v55(a1 + 128, a1 + 128, 3);
  v56 = *(void (__fastcall ****)(void *))(a1 + 56);
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v56 )
  {
    v7 = (*((_DWORD *)v56 + 2))-- == 1;
    if ( v7 )
    {
      (**v56)(v56);
      sub_186B220(v56);
    }
  }
  sub_2EB410(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  return sub_2334C0((__int64 *)(a1 + 16));
}

