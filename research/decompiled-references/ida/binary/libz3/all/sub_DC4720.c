void __fastcall sub_DC4720(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // r13
  __int64 v4; // rbx
  void (__fastcall ***v5)(_QWORD); // rbx
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 *v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rdi
  void *v22; // rbx
  void *v23; // rbx
  void *v24; // rbx
  __int64 *v25; // r13
  __int64 *v26; // rbx
  __int64 *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // r14
  __int64 *v31; // rbx
  __int64 *v32; // r15
  __int64 v33; // r13
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rsi
  int v38; // eax
  _QWORD *v39; // rsi
  __int64 v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  void *v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned int v50; // r8d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rax
  char **exception; // rbx
  __int64 v56; // [rsp+0h] [rbp-68h]
  __int64 v57; // [rsp+0h] [rbp-68h]
  unsigned int v58; // [rsp+Ch] [rbp-5Ch]
  __int64 v59[11]; // [rsp+10h] [rbp-58h] BYREF

  v1 = a1 + 1440;
  sub_18758A0(a1 + 1440);
  sub_233E40(a1 + 2144);
  sub_25A130((char *)(a1 + 2112));
  v3 = *(_QWORD *)(a1 + 2080);
  v4 = *(_QWORD *)(a1 + 2072);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_QWORD *)v4 != v4 + 16 )
        operator delete(*(void **)v4, *(_QWORD *)(v4 + 16) + 1LL);
      v4 += 32;
    }
    while ( v3 != v4 );
    v4 = *(_QWORD *)(a1 + 2072);
  }
  if ( v4 )
    operator delete((void *)v4, *(_QWORD *)(a1 + 2088) - v4);
  sub_16225F0(a1 + 2040);
  v5 = *(void (__fastcall ****)(_QWORD))(a1 + 1712);
  if ( v5 )
  {
    (**v5)(*(_QWORD *)(a1 + 1712));
    sub_186B220(v5);
  }
  v6 = *(void **)(a1 + 1704);
  if ( v6 )
    sub_186B220(v6);
  v7 = *(__int64 **)(a1 + 1696);
  if ( v7 )
  {
    sub_2334C0(v7 + 11);
    v8 = v7[10];
    if ( v8 )
      sub_186B220((void *)(v8 - 8));
    sub_186B220(v7);
  }
  v9 = *(void **)(a1 + 1688);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void **)(a1 + 1680);
  if ( v10 )
    sub_186B220(v10);
  v11 = *(void **)(a1 + 1672);
  if ( v11 )
    sub_186B220(v11);
  v12 = *(__int64 **)(a1 + 1664);
  if ( v12 )
  {
    v13 = v12[1];
    if ( v13 )
    {
      v14 = v13 + 8LL * *(unsigned int *)(v13 - 4);
      if ( v13 >= v14 )
        goto LABEL_30;
      do
      {
        while ( 1 )
        {
          v15 = *v12;
          v16 = (*(_DWORD *)(*(_QWORD *)v13 + 4LL))-- == 1;
          if ( v16 )
            break;
          v13 += 8LL;
          if ( v13 >= v14 )
            goto LABEL_29;
        }
        sub_17F9000(v15);
        v13 += 8LL;
      }
      while ( v13 < v14 );
LABEL_29:
      v13 = v12[1];
      if ( v13 )
LABEL_30:
        sub_186B220((void *)(v13 - 8));
    }
    sub_186B220(v12);
  }
  v17 = *(_QWORD *)(a1 + 1656);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( (_DWORD)v18 )
    {
      v19 = v17 + 16 * v18;
      do
      {
        v20 = v17;
        v17 += 16;
        sub_15D0DF0(v20);
      }
      while ( v17 != v19 );
      v17 = *(_QWORD *)(a1 + 1656);
    }
    sub_186B220((void *)(v17 - 8));
  }
  v21 = *(_QWORD *)(a1 + 1648);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(void **)(a1 + 1640);
  if ( v22 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1640));
    sub_186B220(v22);
  }
  v23 = *(void **)(a1 + 1632);
  if ( v23 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1632));
    sub_186B220(v23);
  }
  v24 = *(void **)(a1 + 1616);
  if ( v24 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1616));
    sub_186B220(v24);
  }
  v25 = *(__int64 **)(a1 + 1608);
  if ( v25 )
  {
    v26 = (__int64 *)v25[1];
    if ( v26 )
    {
      v27 = &v26[*((unsigned int *)v26 - 1)];
      if ( v26 >= v27 )
        goto LABEL_55;
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v29 = *v25;
            v16 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( ++v26 >= v27 )
            goto LABEL_54;
        }
        sub_15D7BC0(v29, v28);
        ++v26;
      }
      while ( v26 < v27 );
LABEL_54:
      v26 = (__int64 *)v25[1];
      if ( v26 )
LABEL_55:
        sub_186B220(v26 - 1);
    }
    sub_186B220(v25);
  }
  v30 = *(__int64 **)(a1 + 1600);
  if ( v30 )
  {
    v31 = (__int64 *)v30[1];
    if ( v31 )
    {
      v32 = &v31[*((unsigned int *)v31 - 1)];
      if ( v31 >= v32 )
        goto LABEL_70;
      do
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *v30;
          v16 = (*(_DWORD *)(v33 + 16))-- == 1;
          if ( v16 )
          {
            v35 = *(_QWORD **)(v34 + 80);
            if ( v35 )
            {
              v36 = *((_DWORD *)v35 - 1);
              if ( v36 == *((_DWORD *)v35 - 2) )
              {
                v50 = (3 * v36 + 1) >> 1;
                v51 = 8 * v50 + 8;
                if ( 8 * v36 + 8 >= (unsigned int)v51 || v36 >= v50 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_DBF430(v59, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v59);
                  sub_233E40((__int64)v59);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v58 = (3 * v36 + 1) >> 1;
                v56 = v34;
                v52 = (unsigned int *)sub_186B300(v35 - 1, v51);
                v34 = v56;
                v53 = v52[1];
                v35 = v52 + 2;
                *(_QWORD *)(v56 + 80) = v52 + 2;
                *v52 = v58;
                LODWORD(v52) = v53;
                v39 = &v35[v53];
                v38 = (_DWORD)v52 + 1;
              }
              else
              {
                v37 = v36;
                v38 = v36 + 1;
                v39 = &v35[v37];
              }
            }
            else
            {
              v57 = v34;
              v54 = (_QWORD *)sub_186B270(0x18u);
              v34 = v57;
              v35 = v54 + 1;
              *v54 = 2;
              v38 = 1;
              *(_QWORD *)(v57 + 80) = v35;
              v39 = v35;
            }
            *v39 = v33;
            *((_DWORD *)v35 - 1) = v38;
          }
          sub_DE3700(v34);
        }
        ++v31;
      }
      while ( v31 < v32 );
      v31 = (__int64 *)v30[1];
      if ( v31 )
LABEL_70:
        sub_186B220(v31 - 1);
    }
    sub_186B220(v30);
  }
  v40 = *(_QWORD *)(a1 + 1592);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = *(void **)(a1 + 1568);
  if ( v41 )
    sub_186B220(v41);
  v42 = *(void **)(a1 + 1544);
  if ( v42 )
    sub_186B220(v42);
  v43 = *(void **)(a1 + 1520);
  if ( v43 )
    sub_186B220(v43);
  v44 = *(_QWORD *)(a1 + 1504);
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = *(_QWORD *)(a1 + 1496);
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = *(void **)(a1 + 1472);
  if ( v46 )
    sub_186B220(v46);
  sub_18757F0(v1);
  v47 = *(_QWORD *)(a1 + 1416);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 1408);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(_QWORD *)(a1 + 1384);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  sub_25A130((char *)(a1 + 56));
  sub_18572D0((void *)(a1 + 8));
}

