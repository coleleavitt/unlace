unsigned __int64 __fastcall sub_3D4130(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // rdi
  const char *v13; // rcx
  size_t v14; // r13
  void *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int128 v24; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a2[1] > 1u )
  {
    v6 = *(_QWORD *)(get_ash(a1, a2, a3, a4, a5) + 48);
    v23 = 0;
    v22 = v6;
    v24 = 0;
    sub_3C9BF0(a2, &v23, "\n", 0);
    v7 = v23;
    v8 = v23 + 24 * v24;
    if ( v23 != v8 )
    {
      do
      {
        src = nullptr;
        v13 = s1;
        *(_OWORD *)n = 0;
        if ( *(_QWORD *)(v7 + 8) )
          v13 = *(const char **)v7;
        sub_F4410((__int64 *)&src, (__int64)&unk_3F3582, v22, v13);
        v14 = n[0];
        v15 = nullptr;
        if ( n[0] )
        {
          v15 = (void *)qalloc_or_throw(n[0]);
          memcpy(v15, src, v14);
        }
        v9 = a1[1];
        v10 = *a1;
        if ( a1[2] < (unsigned __int64)(v9 + 1) )
        {
          v16 = qvector_reserve(a1, v10, v9 + 1, 24);
          *a1 = v16;
          v9 = a1[1];
          v10 = v16;
        }
        v11 = v10 + 24 * v9;
        *(_QWORD *)v11 = v15;
        v12 = src;
        *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
        ++a1[1];
        if ( v12 )
        {
          n[0] = 0;
          qfree(v12);
        }
        v7 += 24;
      }
      while ( v8 != v7 );
      v8 = v23;
      v7 = v23;
    }
    if ( v8 )
    {
      v17 = v24;
      if ( (_QWORD)v24 )
      {
        v18 = 0;
        do
        {
          v19 = (__int64 *)(v8 + 24 * v18);
          v20 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v20);
            v7 = v23;
          }
          ++v18;
          v8 = v7;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v24 = 0;
      qfree(v8);
    }
  }
  return v27 - __readfsqword(0x28u);
}
