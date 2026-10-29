__int64 __fastcall sub_7B5260(__int64 a1, __int64 **a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rbx
  void *v13; // rdi
  _QWORD *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  size_t v18; // rdi
  unsigned int *v19; // rax
  __int64 *v20; // rbx
  unsigned int *v21; // r13
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 *v24; // r9
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __m128i v28; // xmm0
  unsigned __int64 v29; // rsi
  __int64 v30; // r9
  __int64 *v31; // r15
  void *v32; // rdi
  __int64 result; // rax
  __int64 v34; // r12
  __int64 i; // r13
  __int64 v36; // rsi
  int v37; // eax
  _QWORD *v38; // rsi
  __int64 *v39; // r15
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rcx
  _DWORD *v45; // rbx
  __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 *v48; // r14
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // r15d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rsi
  unsigned int v55; // ecx
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 *v58; // rax
  __int64 *v59; // rsi
  __int64 v60; // r10
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // [rsp+4h] [rbp-64h]
  unsigned int v64; // [rsp+4h] [rbp-64h]
  __int64 v66[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = *a2;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( !v10 )
  {
    if ( !v9 )
      goto LABEL_29;
    v11 = *((unsigned int *)v9 - 1);
    v63 = 0;
    if ( !(_DWORD)v11 )
    {
LABEL_62:
      *((_DWORD *)v9 - 1) = 0;
      goto LABEL_29;
    }
    goto LABEL_4;
  }
  v63 = 2 * *(_DWORD *)(v10 - 4);
  if ( !v9 )
  {
    if ( !v63 )
      goto LABEL_29;
    goto LABEL_10;
  }
  v11 = *((unsigned int *)v9 - 1);
  if ( (_DWORD)v11 )
  {
LABEL_4:
    v12 = &v9[v11];
    do
    {
      while ( *v9 )
      {
        v13 = (void *)(*v9++ - 8);
        sub_186B220(v13);
        if ( v9 == v12 )
          goto LABEL_7;
      }
      ++v9;
    }
    while ( v9 != v12 );
LABEL_7:
    v9 = *a2;
  }
  *((_DWORD *)v9 - 1) = 0;
  if ( !v63 )
    goto LABEL_62;
  if ( !v9 )
  {
LABEL_10:
    v14 = (_QWORD *)sub_186B270(0x18u);
    v9 = v14 + 1;
    *v14 = 2;
    *a2 = v14 + 1;
  }
  while ( 1 )
  {
    v15 = *((_DWORD *)v9 - 2);
    v16 = v63;
    if ( v15 >= v63 )
      break;
    while ( 1 )
    {
      v17 = (3 * v15 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v18 || v15 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v66, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B270(v18);
      v20 = *a2;
      v21 = v19;
      v9 = (__int64 *)(v19 + 2);
      if ( !*a2 )
        break;
      v22 = *((unsigned int *)v20 - 1);
      v19[1] = v22;
      v23 = 8 * v22;
      v24 = &v20[v22];
      if ( v24 != v20 )
      {
        v25 = v23 - 8;
        if ( (unsigned __int64)(v23 - 8) <= 8 || v9 < v20 + 2 && v20 < (__int64 *)v21 + 3 )
        {
          v58 = v20;
          v59 = v9;
          do
          {
            v60 = *v58;
            *v58++ = 0;
            *v59++ = v60;
          }
          while ( v58 != v24 );
        }
        else
        {
          v26 = 0;
          v27 = (v25 >> 3) + 1;
          do
          {
            v28 = _mm_loadu_si128((const __m128i *)&v20[v26 / 2]);
            *(_OWORD *)&v20[v26 / 2] = 0;
            *(__m128i *)&v21[v26 + 2] = v28;
            v26 += 4LL;
          }
          while ( v26 != 4 * (v27 >> 1) );
          if ( (v27 & 1) != 0 )
          {
            v29 = 2 * (v27 & 0xFFFFFFFFFFFFFFFELL);
            v30 = v20[v29 / 2];
            v20[v29 / 2] = 0;
            *(_QWORD *)&v21[v29 + 2] = v30;
          }
        }
      }
      v31 = &v20[v22];
      if ( (_DWORD)v22 )
      {
        do
        {
          while ( *v20 )
          {
            v32 = (void *)(*v20++ - 8);
            sub_186B220(v32);
            if ( v31 == v20 )
              goto LABEL_26;
          }
          ++v20;
        }
        while ( v31 != v20 );
LABEL_26:
        v20 = *a2;
      }
      sub_186B220(v20 - 1);
      *v21 = v17;
      v16 = v63;
      v15 = *((_DWORD *)v9 - 2);
      *a2 = v9;
      if ( v15 >= v63 )
        goto LABEL_28;
    }
    v19[1] = 0;
    *a2 = v9;
    *v19 = v17;
  }
LABEL_28:
  *((_DWORD *)v9 - 1) = v16;
  memset(v9, 0, 8LL * v16);
LABEL_29:
  result = a1;
  v34 = *(_QWORD *)(a1 + 744);
  if ( v34 )
  {
    result = *(unsigned int *)(v34 - 4);
    for ( i = v34 + 8 * result;
          i != v34;
          result = (*(__int64 (__fastcall **)(_DWORD *, __int64 **))(*(_QWORD *)v45 + 144LL))(v45, a2) )
    {
      v45 = *(_DWORD **)v34;
      v46 = *(unsigned int *)(*(_QWORD *)v34 + 16LL);
      if ( (_DWORD)v46 != -2 )
      {
        v47 = *a2;
        v48 = &(*a2)[v46];
        v49 = (_QWORD *)*v48;
        if ( *v48 )
        {
          v50 = *((_DWORD *)v49 - 1);
          if ( v50 == *((_DWORD *)v49 - 2) )
          {
            v51 = (3 * v50 + 1) >> 1;
            v52 = 8 * v51 + 8;
            if ( 8 * v50 + 8 >= (unsigned int)v52 || v50 >= v51 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v66, "Overflow encountered when expanding vector", v5);
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (unsigned int *)sub_186B300(v49 - 1, v52);
            v47 = *a2;
            v54 = v53[1];
            v49 = v53 + 2;
            *v48 = (__int64)(v53 + 2);
            *v53 = v51;
            LODWORD(v53) = v54;
            v38 = &v49[v54];
            v37 = (_DWORD)v53 + 1;
          }
          else
          {
            v36 = v50;
            v37 = v50 + 1;
            v38 = &v49[v36];
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          v47 = *a2;
          v49 = v62 + 1;
          *v62 = 2;
          v37 = 1;
          *v48 = (__int64)v49;
          v38 = v49;
        }
        *v38 = v45 - 2;
        *((_DWORD *)v49 - 1) = v37;
        v39 = &v47[v45[4] ^ 1u];
        v40 = (_QWORD *)*v39;
        if ( *v39 )
        {
          v41 = *((_DWORD *)v40 - 1);
          if ( v41 == *((_DWORD *)v40 - 2) )
          {
            v55 = (3 * v41 + 1) >> 1;
            v56 = 8 * v55 + 8;
            if ( 8 * v41 + 8 >= (unsigned int)v56 || v41 >= v55 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v66, "Overflow encountered when expanding vector", v7);
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v64 = (3 * v41 + 1) >> 1;
            v57 = (unsigned int *)sub_186B300(v40 - 1, v56);
            v40 = v57 + 2;
            *v39 = (__int64)(v57 + 2);
            *v57 = v64;
            LODWORD(v57) = v57[1];
            v44 = &v40[(unsigned int)v57];
            v43 = (_DWORD)v57 + 1;
          }
          else
          {
            v42 = v41;
            v43 = v41 + 1;
            v44 = &v40[v42];
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x18u);
          v40 = v61 + 1;
          *v61 = 2;
          v43 = 1;
          *v39 = (__int64)v40;
          v44 = v40;
        }
        *v44 = v45 - 2;
        *((_DWORD *)v40 - 1) = v43;
      }
      v34 += 8;
    }
  }
  return result;
}

