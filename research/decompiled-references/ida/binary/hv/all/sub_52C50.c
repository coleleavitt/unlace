unsigned __int64 __fastcall sub_52C50(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  __m128i v14; // xmm0
  unsigned __int64 v15; // r13
  __int64 v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  void *v19; // rdi
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-D0h]
  __m128i v22; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  __m128i v24; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-90h]
  void *v26; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+58h] [rbp-80h]
  __m128i v28; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  __m128i v30; // [rsp+88h] [rbp-50h] BYREF
  char v31; // [rsp+98h] [rbp-40h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v32 - __readfsqword(0x28u);
  v25 = 0;
  ptr = nullptr;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  if ( a2 < v2 )
  {
    v11 = a2;
    do
    {
      v12 = *a1 + 80 * v11;
      v13 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        j__free(v13);
      }
      ++v11;
    }
    while ( v2 != v11 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v5 + 80 * v6 )
    {
      v27 = 0;
      v26 = nullptr;
      sub_3C440(&v26, (__int64)&ptr);
      v14 = _mm_loadu_si128(&v22);
      v29 = v23;
      v28 = v14;
      v30 = _mm_loadu_si128(&v24);
      v31 = v25;
      if ( a1[2] < a2 )
        *a1 = sub_96080(a1, *a1, a2, 80);
      v15 = a1[1];
      if ( v15 < a2 )
      {
        do
        {
          v16 = *a1 + 80 * v15;
          *(_QWORD *)v16 = 0;
          *(_OWORD *)(v16 + 8) = 0;
          sub_3C440((_QWORD *)v16, (__int64)&v26);
          ++v15;
          *(__m128i *)(v16 + 24) = _mm_loadu_si128(&v28);
          v17 = _mm_loadu_si128(&v30);
          *(_QWORD *)(v16 + 40) = v29;
          v18 = *((_QWORD *)&v29 + 1);
          *(__m128i *)(v16 + 56) = v17;
          *(_QWORD *)(v16 + 48) = v18;
          *(_BYTE *)(v16 + 72) = v31;
        }
        while ( a2 != v15 );
      }
      v19 = v26;
      a1[1] = a2;
      if ( v19 )
      {
        *(_QWORD *)&v27 = 0;
        j__free(v19);
      }
      goto LABEL_9;
    }
    if ( v6 < a2 )
    {
      *a1 = sub_96080(a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_BYTE *)(v7 + 72) = v25 )
    {
      v7 = *a1 + 80 * v2;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      sub_3C440((_QWORD *)v7, (__int64)&ptr);
      ++v2;
      *(__m128i *)(v7 + 24) = _mm_loadu_si128(&v22);
      v8 = _mm_loadu_si128(&v24);
      *(_QWORD *)(v7 + 40) = v23;
      v9 = *((_QWORD *)&v23 + 1);
      *(__m128i *)(v7 + 56) = v8;
      *(_QWORD *)(v7 + 48) = v9;
    }
  }
  a1[1] = a2;
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    j__free(ptr);
  }
  return v32 - __readfsqword(0x28u);
}

