_DWORD *__fastcall sub_5734E0(_QWORD *a1, unsigned int a2, int *a3, __int64 a4)
{
  int *v5; // r15
  size_t v7; // r13
  int *v8; // r12
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  int v11; // esi
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edi
  unsigned int v15; // r9d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _DWORD *v20; // rcx
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // eax
  char *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  char *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  _DWORD *result; // rax
  unsigned int v34; // ebp
  __int64 v35; // r12
  unsigned int v36; // r13d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // r12
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // rax
  char **exception; // rbx
  char **v45; // r12
  char **v46; // r12
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  *a1 = qword_1C67AB0;
  a1[1] = 0;
  if ( a2 )
  {
    v5 = a3;
    v7 = 4LL * a2;
    v8 = &a3[v7 / 4];
    v9 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v9 - 1) = 2;
    v10 = v9;
    a1[1] = v9;
    while ( 1 )
    {
      v11 = *v5++;
      *v9 = v11;
      v12 = *(v10 - 1);
      v13 = (unsigned int)(v12 + 1);
      *(v10 - 1) = v13;
      if ( v8 == v5 )
        break;
      v14 = *(v10 - 2);
      if ( v14 == (_DWORD)v13 )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * v12 + 12 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v48, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v10 - 2, v16);
        v10 = v17 + 2;
        *v17 = (3 * v14 + 1) >> 1;
        v18 = v17[1];
        a1[1] = v10;
        v9 = &v10[v18];
      }
      else
      {
        v9 = &v10[v13];
      }
    }
    a1[3] = 0;
    *a1 = &off_1C512E8;
    a1[4] = 0;
    a1[2] = a4;
    v19 = (_QWORD *)sub_186B270(0x10u);
    v20 = v19 + 1;
    a1[3] = v19 + 1;
    *v19 = 2;
    while ( 1 )
    {
      v24 = *(v20 - 2);
      if ( v24 >= a2 )
        break;
      v21 = (3 * v24 + 1) >> 1;
      v22 = 4 * v21 + 8;
      if ( 4 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
      {
        v45 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v48, "Overflow encountered when expanding vector");
        *v45 = (char *)off_1C63128;
        sub_2333C0(v45 + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v20 - 2, v22);
      v20 = v23 + 2;
      *v23 = v21;
      a1[3] = v23 + 2;
    }
    *(v20 - 1) = a2;
    v25 = (char *)memset(v20, 0, v7);
    v26 = (_QWORD *)a1[4];
    v27 = a1[1];
    v28 = v25;
    if ( a2 - 1 <= 2 || (unsigned __int64)&v25[-v27 - 4] <= 8 )
    {
      v42 = 0;
      do
      {
        *(_DWORD *)&v28[v42] = *(_DWORD *)(v27 + v42);
        v42 += 4;
      }
      while ( v42 != v7 );
    }
    else
    {
      v29 = 0;
      do
      {
        *(__m128i *)&v28[v29] = _mm_loadu_si128((const __m128i *)(v27 + v29));
        v29 += 16;
      }
      while ( v29 != 16LL * (a2 >> 2) );
      v30 = a2 & 0xFFFFFFFC;
      if ( (a2 & 3) != 0 )
      {
        *(_DWORD *)&v28[4 * v30] = *(_DWORD *)(v27 + 4LL * v30);
        v31 = v30 + 1;
        if ( (unsigned int)v31 < a2 )
        {
          v32 = v30 + 2;
          *(_DWORD *)&v28[4 * v31] = *(_DWORD *)(v27 + 4 * v31);
          if ( (unsigned int)v32 < a2 )
            *(_DWORD *)&v28[4 * v32] = *(_DWORD *)(v27 + 4 * v32);
        }
      }
    }
    result = *(_DWORD **)(a4 + 16);
    if ( !result )
    {
      v34 = 0;
      if ( !v26 )
        return result;
      goto LABEL_33;
    }
    v34 = *(result - 1);
    if ( v26 )
    {
      v35 = *((unsigned int *)v26 - 1);
      if ( (unsigned int)v35 >= v34 )
      {
LABEL_33:
        *((_DWORD *)v26 - 1) = v34;
        return result;
      }
      goto LABEL_29;
    }
  }
  else
  {
    a1[4] = 0;
    *a1 = &off_1C512E8;
    a1[3] = 0;
    a1[2] = a4;
    result = *(_DWORD **)(a4 + 16);
    if ( !result )
      return result;
    v34 = *(result - 1);
  }
  if ( !v34 )
    return result;
  v43 = (_QWORD *)sub_186B270(0x18u);
  v26 = v43 + 1;
  *v43 = 2;
  v35 = 0;
  a1[4] = v43 + 1;
LABEL_29:
  while ( 1 )
  {
    result = (_DWORD *)*((unsigned int *)v26 - 2);
    if ( (unsigned int)result >= v34 )
      break;
    v36 = (unsigned int)(3 * (_DWORD)result + 1) >> 1;
    v37 = 8 * v36 + 8;
    if ( 8 * (int)result + 8 >= (unsigned int)v37 || (unsigned int)result >= v36 )
    {
      v46 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *v46 = (char *)off_1C63128;
      sub_2333C0(v46 + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(v46, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v38 = (unsigned int *)sub_186B300(v26 - 1, v37);
    v26 = v38 + 2;
    *v38 = v36;
    a1[4] = v38 + 2;
  }
  v39 = 8 * v35;
  *((_DWORD *)v26 - 1) = v34;
  v40 = &v26[(unsigned __int64)v39 / 8];
  v41 = 8LL * v34;
  if ( v39 != v41 )
    return memset(v40, 0, v41 - v39);
  return result;
}

