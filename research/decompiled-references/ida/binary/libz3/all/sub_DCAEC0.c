void __fastcall sub_DCAEC0(__int64 a1)
{
  __int64 *v2; // r13
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  bool v7; // zf
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 *v13; // r12
  __int64 *v14; // rbp
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rbp
  void *v19; // rbp
  void *v20; // rbp
  __int64 *v21; // r12
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 *v27; // rbp
  __int64 v28; // rdi
  void *v29; // rdi
  void (__fastcall ***v30)(_QWORD); // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rdi
  char *v36; // r10
  __int64 v37; // r9
  char *v38; // rcx
  char *v39; // rax
  int v40; // r8d
  unsigned int v41; // ebp
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // r9d
  _QWORD *v53; // rax
  char **exception; // rbx
  unsigned int v55; // [rsp+Ch] [rbp-5Ch]
  __int64 v56[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_18758A0(a1 + 1440);
  v2 = *(__int64 **)(a1 + 1600);
  *(_DWORD *)(a1 + 1512) = 0;
  if ( v2 )
  {
    v3 = (__int64 *)v2[1];
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_14;
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *v2;
          v7 = (*(_DWORD *)(v5 + 16))-- == 1;
          if ( v7 )
          {
            v8 = *(_QWORD **)(v6 + 80);
            if ( v8 )
            {
              v9 = *((_DWORD *)v8 - 1);
              if ( v9 == *((_DWORD *)v8 - 2) )
              {
                v49 = (3 * v9 + 1) >> 1;
                v50 = 8 * v49 + 8;
                if ( 8 * v9 + 8 >= (unsigned int)v50 || v9 >= v49 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_DBF430(v56, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v56);
                  sub_233E40((__int64)v56);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v55 = (3 * v9 + 1) >> 1;
                v51 = (unsigned int *)sub_186B300(v8 - 1, v50);
                v8 = v51 + 2;
                *(_QWORD *)(v6 + 80) = v51 + 2;
                *v51 = v55;
                LODWORD(v51) = v51[1];
                v12 = &v8[(unsigned int)v51];
                v11 = (_DWORD)v51 + 1;
              }
              else
              {
                v10 = v9;
                v11 = v9 + 1;
                v12 = &v8[v10];
              }
            }
            else
            {
              v53 = (_QWORD *)sub_186B270(0x18u);
              v8 = v53 + 1;
              *v53 = 2;
              v11 = 1;
              *(_QWORD *)(v6 + 80) = v8;
              v12 = v8;
            }
            *v12 = v5;
            *((_DWORD *)v8 - 1) = v11;
          }
          sub_DE3700(v6);
        }
        ++v3;
      }
      while ( v3 < v4 );
      v3 = (__int64 *)v2[1];
      if ( v3 )
LABEL_14:
        sub_186B220(v3 - 1);
    }
    sub_186B220(v2);
    *(_QWORD *)(a1 + 1600) = 0;
  }
  v13 = *(__int64 **)(a1 + 1608);
  if ( v13 )
  {
    v14 = (__int64 *)v13[1];
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_25;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = *v13;
            v7 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v7 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_24;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_24:
      v14 = (__int64 *)v13[1];
      if ( v14 )
LABEL_25:
        sub_186B220(v14 - 1);
    }
    sub_186B220(v13);
    *(_QWORD *)(a1 + 1608) = 0;
  }
  v18 = *(void **)(a1 + 1616);
  if ( v18 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1616));
    sub_186B220(v18);
    *(_QWORD *)(a1 + 1616) = 0;
  }
  v19 = *(void **)(a1 + 1632);
  if ( v19 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1632));
    sub_186B220(v19);
    *(_QWORD *)(a1 + 1632) = 0;
  }
  v20 = *(void **)(a1 + 1640);
  if ( v20 )
  {
    sub_2334C0(*(__int64 **)(a1 + 1640));
    sub_186B220(v20);
    *(_QWORD *)(a1 + 1640) = 0;
  }
  v21 = *(__int64 **)(a1 + 1664);
  if ( v21 )
  {
    v22 = v21[1];
    if ( v22 )
    {
      v23 = v22 + 8LL * *(unsigned int *)(v22 - 4);
      if ( v22 >= v23 )
        goto LABEL_41;
      do
      {
        while ( 1 )
        {
          v24 = *v21;
          v7 = (*(_DWORD *)(*(_QWORD *)v22 + 4LL))-- == 1;
          if ( v7 )
            break;
          v22 += 8LL;
          if ( v22 >= v23 )
            goto LABEL_40;
        }
        sub_17F9000(v24);
        v22 += 8LL;
      }
      while ( v22 < v23 );
LABEL_40:
      v22 = v21[1];
      if ( v22 )
LABEL_41:
        sub_186B220((void *)(v22 - 8));
    }
    sub_186B220(v21);
    *(_QWORD *)(a1 + 1664) = 0;
  }
  v25 = *(void **)(a1 + 1672);
  if ( v25 )
  {
    sub_186B220(v25);
    *(_QWORD *)(a1 + 1672) = 0;
  }
  v26 = *(void **)(a1 + 1680);
  if ( v26 )
  {
    sub_186B220(v26);
    *(_QWORD *)(a1 + 1680) = 0;
  }
  v27 = *(__int64 **)(a1 + 1696);
  if ( v27 )
  {
    sub_2334C0(v27 + 11);
    v28 = v27[10];
    if ( v28 )
      sub_186B220((void *)(v28 - 8));
    sub_186B220(v27);
    *(_QWORD *)(a1 + 1696) = 0;
  }
  v29 = *(void **)(a1 + 1704);
  if ( v29 )
  {
    sub_186B220(v29);
    *(_QWORD *)(a1 + 1704) = 0;
  }
  v30 = *(void (__fastcall ****)(_QWORD))(a1 + 1712);
  if ( v30 )
  {
    (**v30)(*(_QWORD *)(a1 + 1712));
    sub_186B220(v30);
    *(_QWORD *)(a1 + 1712) = 0;
  }
  v31 = *(_QWORD *)(a1 + 1648);
  if ( v31 )
    *(_DWORD *)(v31 - 4) = 0;
  v32 = *(_QWORD *)(a1 + 1656);
  if ( v32 )
  {
    v33 = *(unsigned int *)(v32 - 4);
    if ( (_DWORD)v33 )
    {
      v34 = v32 + 16 * v33;
      do
      {
        v35 = v32;
        v32 += 16;
        sub_15D0DF0(v35);
      }
      while ( v32 != v34 );
      v32 = *(_QWORD *)(a1 + 1656);
    }
    *(_DWORD *)(v32 - 4) = 0;
  }
  if ( *(_DWORD *)(a1 + 1484) || *(_DWORD *)(a1 + 1488) )
  {
    v36 = *(char **)(a1 + 1472);
    v37 = *(unsigned int *)(a1 + 1480);
    v38 = &v36[24 * v37];
    if ( v36 == v38 )
      goto LABEL_80;
    v39 = *(char **)(a1 + 1472);
    v40 = 0;
    do
    {
      while ( *(_QWORD *)v39 )
      {
        v39 += 24;
        *((_QWORD *)v39 - 3) = 0;
        if ( v38 == v39 )
          goto LABEL_70;
      }
      v39 += 24;
      ++v40;
    }
    while ( v38 != v39 );
LABEL_70:
    if ( (unsigned int)v37 <= 0x10 || 3 * (int)v37 >= (unsigned int)(4 * v40) )
      goto LABEL_80;
    if ( v36 )
    {
      sub_186B220(v36);
      v41 = *(_DWORD *)(a1 + 1480);
      *(_QWORD *)(a1 + 1472) = 0;
      v41 >>= 1;
      v42 = v41;
      *(_DWORD *)(a1 + 1480) = v41;
      v43 = sub_186B270(24LL * v41);
      if ( !v41 )
      {
LABEL_79:
        *(_QWORD *)(a1 + 1472) = v43;
LABEL_80:
        *(_QWORD *)(a1 + 1484) = 0;
        goto LABEL_81;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1472) = 0;
      v52 = (unsigned int)v37 >> 1;
      v42 = v52;
      *(_DWORD *)(a1 + 1480) = v52;
      v43 = sub_186B270(24LL * v52);
    }
    v44 = (_QWORD *)(v43 + 24 * v42);
    v45 = (_QWORD *)v43;
    do
    {
      *v45 = 0;
      v45 += 3;
      *((_DWORD *)v45 - 2) = 0;
    }
    while ( v44 != v45 );
    v46 = v43;
    if ( ((24 * (_BYTE)v42) & 8) == 0 || (v46 = v43 + 24, *(_QWORD *)(v43 + 8) = 0, (_QWORD *)(v43 + 24) != v44) )
    {
      do
      {
        *(_QWORD *)(v46 + 8) = 0;
        v46 += 48;
        *(_QWORD *)(v46 - 16) = 0;
      }
      while ( (_QWORD *)v46 != v44 );
    }
    goto LABEL_79;
  }
LABEL_81:
  v47 = *(_QWORD *)(a1 + 1496);
  if ( v47 )
    *(_DWORD *)(v47 - 4) = 0;
  v48 = *(_QWORD *)(a1 + 1504);
  if ( v48 )
    *(_DWORD *)(v48 - 4) = 0;
  sub_DCADA0(a1 + 1520);
  sub_DCADA0(a1 + 1544);
}

