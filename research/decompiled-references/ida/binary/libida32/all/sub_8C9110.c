unsigned __int64 __fastcall sub_8C9110(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rdi
  __m128i v12; // xmm0
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  void *v15; // rdi
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+18h] [rbp-80h]
  __m128i v19; // [rsp+20h] [rbp-78h] BYREF
  void *v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __m128i v23; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v24 - __readfsqword(0x28u);
  v18 = 0;
  ptr = nullptr;
  v17 = 0;
  v19 = 0;
  if ( a2 < v2 )
  {
    v9 = a2;
    do
    {
      v10 = *a1 + 48 * v9;
      v11 = *(void **)v10;
      if ( *(_QWORD *)v10 )
      {
        *(_QWORD *)(v10 + 8) = 0;
        qfree(v11);
      }
      ++v9;
    }
    while ( v2 != v9 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v5 + 48 * v6 )
    {
      v21 = 0;
      v20 = nullptr;
      sub_8B2290(&v20, (__int64)&ptr);
      v12 = _mm_load_si128(&v19);
      v22 = v18;
      v23 = v12;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 48);
      v13 = a1[1];
      if ( v13 < a2 )
      {
        do
        {
          v14 = *a1 + 48 * v13;
          *(_QWORD *)v14 = 0;
          *(_OWORD *)(v14 + 8) = 0;
          sub_8B2290((_QWORD *)v14, (__int64)&v20);
          ++v13;
          *(_QWORD *)(v14 + 24) = v22;
          *(__m128i *)(v14 + 32) = _mm_load_si128(&v23);
        }
        while ( a2 != v13 );
      }
      v15 = v20;
      a1[1] = a2;
      if ( v15 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v15);
      }
      goto LABEL_9;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 48);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(__m128i *)(v7 + 32) = _mm_load_si128(&v19) )
    {
      v7 = *a1 + 48 * v2;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      sub_8B2290((_QWORD *)v7, (__int64)&ptr);
      ++v2;
      *(_QWORD *)(v7 + 24) = v18;
    }
  }
  a1[1] = a2;
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return v24 - __readfsqword(0x28u);
}

