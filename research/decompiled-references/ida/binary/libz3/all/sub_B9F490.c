_DWORD *__fastcall sub_B9F490(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char **exception; // rbx
  __int64 v10; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  int v16; // ecx
  _QWORD *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 i; // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  _DWORD *v24; // rcx
  unsigned int j; // eax
  __int64 v26; // r9
  char *v27; // r12
  unsigned int v28; // ecx
  _DWORD *result; // rax
  size_t v30; // r15
  _QWORD *v31; // rax
  unsigned int v32; // r13d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // r14
  _DWORD *k; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+0h] [rbp-68h]
  __int16 v41; // [rsp+Ah] [rbp-5Eh]
  int v42; // [rsp+Ch] [rbp-5Ch]
  char *v43[11]; // [rsp+10h] [rbp-58h] BYREF

  v10 = (unsigned int)a3;
  v13 = *(_QWORD *)(a1 + 168);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(unsigned int *)(a1 + 124);
  if ( *(_QWORD *)(a1 + 124) )
  {
    v15 = *(_QWORD **)(a1 + 112);
    v16 = 0;
    v14 = *(unsigned int *)(a1 + 120);
    v17 = v15;
    a3 = (__int64)&v15[2 * v14];
    if ( v15 == (_QWORD *)a3 )
      goto LABEL_16;
    do
    {
      while ( *v17 )
      {
        *v17 = 0;
        v17 += 2;
        if ( (_QWORD *)a3 == v17 )
          goto LABEL_9;
      }
      v17 += 2;
      ++v16;
    }
    while ( (_QWORD *)a3 != v17 );
LABEL_9:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v16) )
      goto LABEL_16;
    if ( v15 )
    {
      sub_186B220(v15);
      v18 = *(_DWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      v18 >>= 1;
      v19 = v18;
      *(_DWORD *)(a1 + 120) = v18;
      v20 = sub_186B270(16LL * v18);
      if ( !v18 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 112) = v20;
LABEL_16:
        *(_QWORD *)(a1 + 124) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v14 = (unsigned int)v14 >> 1;
      *(_QWORD *)(a1 + 112) = 0;
      v19 = (unsigned int)v14;
      *(_DWORD *)(a1 + 120) = v14;
      v20 = sub_186B270(16LL * (unsigned int)v14);
    }
    a3 = v20;
    do
    {
      *(_QWORD *)a3 = 0;
      a3 += 16;
      *(_DWORD *)(a3 - 8) = 0;
    }
    while ( a3 != v20 + 16 * v19 );
    goto LABEL_15;
  }
LABEL_17:
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    a3 = *(unsigned int *)(i - 4);
    if ( !(_DWORD)a3 )
      break;
    sub_B9D270(a1, a4, a5, a6);
  }
  v22 = *(_QWORD *)(a1 + 80);
  v23 = *(_DWORD *)(v22 + 24);
  if ( v23 > 1 )
  {
    v24 = *(_DWORD **)(a1 + 104);
    if ( !v24 )
    {
      v31 = (_QWORD *)sub_186B270(0xAu);
      v24 = v31 + 1;
      *v31 = 2;
      *(_QWORD *)(a1 + 104) = v31 + 1;
      goto LABEL_35;
    }
    *(v24 - 1) = 0;
    v23 = *(_DWORD *)(v22 + 24);
    if ( v23 )
    {
      for ( j = *(v24 - 2); j < v23; j = *(v24 - 2) )
      {
        v32 = (3 * j + 1) >> 1;
        v33 = v32 + 8;
        if ( j + 8 >= (unsigned int)v33 || j >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v43);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v43);
          sub_233E40((__int64)v43);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (unsigned int *)sub_186B300(v24 - 2, v33);
        v24 = v34 + 2;
        *v34 = v32;
        *(_QWORD *)(a1 + 104) = v34 + 2;
LABEL_35:
        ;
      }
      *(v24 - 1) = v23;
      v14 = 0;
      v24 = memset(v24, 0, v23);
    }
    *((_BYTE *)v24 + v10) = 1;
    sub_B9E380(a1, a4, a5, a6, v14, a3, (__int64)v24, a8, a9);
  }
  v26 = *(_QWORD *)(a1 + 72);
  v27 = *(char **)(a1 + 64);
  v28 = *(_DWORD *)(v26 + 20);
  if ( v28 )
  {
    result = *(_DWORD **)(a1 + 64);
    v30 = 4LL * v28;
    while ( *result != -1 )
    {
      if ( &v27[v30] == (char *)++result )
      {
        v41 = *(_DWORD *)(v26 + 20);
        v35 = 4 * v28 + 40;
        if ( v28 > 7 )
          v28 = 7;
        v42 = v28 + 13;
        goto LABEL_40;
      }
    }
  }
  else
  {
    v42 = 13;
    v30 = 0;
    v35 = 40;
    v41 = 0;
LABEL_40:
    v36 = *(_QWORD *)(a1 + 80);
    v40 = *(_QWORD *)(a1 + 72);
    v37 = sub_180C100(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v35);
    *(_QWORD *)(v37 + 16) = v40;
    *(_DWORD *)v37 = v42;
    *(_QWORD *)(v37 + 8) = 0;
    *(_QWORD *)(v37 + 24) = v36;
    *(_WORD *)(v37 + 32) = v41;
    memcpy((void *)(v37 + 36), v27, v30);
    v43[0] = (char *)v37;
    sub_B9B7D0((_QWORD *)(a1 + 168), v43);
    result = *(_DWORD **)(a1 + 168);
    if ( result )
    {
      for ( k = &result[2 * *(result - 1)]; result != k; *(_QWORD *)(v39 + 8) = a2 )
      {
        v39 = a2;
        a2 = *(_QWORD *)result;
        result += 2;
      }
    }
  }
  return result;
}

