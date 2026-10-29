__int64 __fastcall sub_DE7620(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 *v4; // rbx
  unsigned int v5; // ebp
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // r12
  __m128i *v13; // r15
  __int64 v14; // r13
  const __m128i *v15; // rdi
  bool v16; // zf
  __m128i v17; // xmm0
  __int64 v18; // rbx
  char *v19; // rbp
  char *v20; // r12
  char *v21; // rdi
  __m128i v26; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h]
  __int64 v28; // [rsp+48h] [rbp-140h]
  _BYTE v29[312]; // [rsp+50h] [rbp-138h] BYREF

  if ( !a3 )
  {
    v18 = sub_15D2CD0(*a2, *(unsigned int *)(a1 + 48), *(unsigned int *)(a1 + 52), 0, 0);
    sub_DE5EB0((__int64)a2, v18, a1, 0, a4);
    return v18;
  }
  v4 = a4;
  v5 = 16;
  ptr = v29;
  v28 = 0x1000000000LL;
  v6 = &a4[a3];
  v7 = 0;
  while ( 1 )
  {
    v8 = *v4;
    v26.m128i_i8[8] = 1;
    v26.m128i_i64[0] = v8;
    if ( (unsigned int)v7 < v5 )
    {
      *((__m128i *)ptr + v7) = _mm_load_si128(&v26);
      goto LABEL_4;
    }
    v9 = 2 * v5;
    v10 = sub_186B270(16 * v9);
    v11 = (unsigned int)v28;
    v12 = (__m128i *)v10;
    if ( (_DWORD)v28 )
    {
      v13 = (__m128i *)v10;
      v14 = 0;
      do
      {
        v15 = (const __m128i *)((char *)ptr + 16 * v14);
        v16 = v15->m128i_i8[8] == 0;
        *v13 = _mm_loadu_si128(v15);
        v15->m128i_i32[0] = 0;
        if ( !v16 )
          v15->m128i_i8[8] = 0;
        sub_15D0DF0(v15);
        v11 = (unsigned int)v28;
        ++v14;
        ++v13;
      }
      while ( (unsigned int)v14 < (unsigned int)v28 );
    }
    if ( ptr != v29 && ptr )
    {
      sub_186B220(ptr);
      v11 = (unsigned int)v28;
    }
    v17 = _mm_load_si128(&v26);
    v16 = v26.m128i_i8[8] == 0;
    HIDWORD(v28) = v9;
    ptr = v12;
    v12[v11] = v17;
    if ( v16 )
      break;
LABEL_4:
    ++v4;
    LODWORD(v28) = v28 + 1;
    v26.m128i_i32[0] = 0;
    v26.m128i_i8[8] = 0;
    sub_15D0DF0(&v26);
    if ( v6 == v4 )
      goto LABEL_17;
LABEL_5:
    v7 = (unsigned int)v28;
    v5 = HIDWORD(v28);
  }
  ++v4;
  LODWORD(v28) = v28 + 1;
  v26.m128i_i32[0] = 0;
  sub_15D0DF0(&v26);
  if ( v4 != v6 )
    goto LABEL_5;
LABEL_17:
  v18 = sub_15D2CD0(*a2, *(unsigned int *)(a1 + 48), *(unsigned int *)(a1 + 52), a3, ptr);
  sub_DE5EB0((__int64)a2, v18, a1, a3, a4);
  v19 = (char *)ptr;
  v20 = (char *)ptr + 16 * (unsigned int)v28;
  if ( ptr != v20 )
  {
    do
    {
      v21 = v19;
      v19 += 16;
      sub_15D0DF0(v21);
    }
    while ( v20 != v19 );
    v20 = (char *)ptr;
  }
  if ( v20 && v20 != v29 )
    sub_186B220(v20);
  return v18;
}

