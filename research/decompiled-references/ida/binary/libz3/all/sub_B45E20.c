__int64 __fastcall sub_B45E20(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  _DWORD *v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // r12d
  size_t v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  _DWORD *v27; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 432);
  if ( !v5 )
  {
    v31 = sub_186B270(0x28u);
    v5 = v31 + 8;
    *(_QWORD *)(v31 + 16) = a2;
    *(_QWORD *)v31 = 0x100000002LL;
    *(_DWORD *)(v31 + 8) = 1;
    v9 = 1;
    *(_QWORD *)(a1 + 432) = v5;
LABEL_5:
    v11 = v9;
    result = v9 + 1;
    v13 = v5 + 16 * v11;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(v5 - 4);
  v7 = *(_DWORD *)(v5 - 8);
  if ( v6 == v7 )
  {
    v14 = (3 * v6 + 1) >> 1;
    v15 = v14;
    v16 = 16 * v14 + 8;
    if ( 16 * v6 + 8 >= (unsigned int)v16 || v6 >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v32, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = sub_186B270(v16);
    v18 = *(_QWORD *)(a1 + 432);
    v19 = (_DWORD *)v17;
    v5 = v17 + 8;
    if ( v18 )
    {
      v20 = *(unsigned int *)(v18 - 4);
      *(_DWORD *)(v17 + 4) = v20;
      v21 = 0;
      v22 = 16 * v20;
      if ( v22 )
      {
        do
        {
          *(__m128i *)&v19[v21 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v18 + v21));
          v21 += 16LL;
        }
        while ( v21 != v22 );
      }
      sub_186B220((void *)(v18 - 8));
      v10 = v5 + 16LL * (unsigned int)v19[1];
      v9 = v19[1] + 1;
    }
    else
    {
      *(_DWORD *)(v17 + 4) = 0;
      v10 = v17 + 8;
      v9 = 1;
    }
    *(_QWORD *)(a1 + 432) = v5;
    v7 = v15;
    *v19 = v15;
  }
  else
  {
    v8 = v6;
    v9 = v6 + 1;
    v10 = v5 + 16 * v8;
  }
  *(_DWORD *)v10 = 1;
  *(_QWORD *)(v10 + 8) = a2;
  *(_DWORD *)(v5 - 4) = v9;
  if ( v7 != v9 )
    goto LABEL_5;
  v23 = (3 * v7 + 1) >> 1;
  v24 = 16 * v23 + 8;
  if ( 16 * v7 + 8 >= (unsigned int)v24 || v7 >= v23 )
  {
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v32, "Overflow encountered when expanding vector");
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, v32);
    sub_233E40((__int64)v32);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v25 = sub_186B270(v24);
  v26 = *(_QWORD *)(a1 + 432);
  v27 = (_DWORD *)v25;
  v5 = v25 + 8;
  if ( v26 )
  {
    v28 = *(unsigned int *)(v26 - 4);
    *(_DWORD *)(v25 + 4) = v28;
    v29 = 0;
    v30 = 16 * v28;
    if ( v30 )
    {
      do
      {
        *(__m128i *)&v27[v29 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v26 + v29));
        v29 += 16LL;
      }
      while ( v30 != v29 );
    }
    sub_186B220((void *)(v26 - 8));
    v13 = v5 + 16LL * (unsigned int)v27[1];
    result = (unsigned int)(v27[1] + 1);
  }
  else
  {
    *(_DWORD *)(v25 + 4) = 0;
    v13 = v25 + 8;
    result = 1;
  }
  *(_QWORD *)(a1 + 432) = v5;
  *v27 = v23;
LABEL_6:
  *(_DWORD *)v13 = 0;
  *(_QWORD *)(v13 + 8) = a2;
  *(_DWORD *)(v5 - 4) = result;
  return result;
}

