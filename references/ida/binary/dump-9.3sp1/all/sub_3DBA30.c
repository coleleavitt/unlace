unsigned __int64 __fastcall sub_3DBA30(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r13
  void *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int128 v20; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a2[1] > 1u )
  {
    get_ash();
    v19 = 0;
    v20 = 0;
    sub_3D14F0(a2, &v19, "\n", 0);
    v3 = v19;
    v4 = v19 + 24 * v20;
    if ( v19 != v4 )
    {
      do
      {
        src = nullptr;
        *(_OWORD *)n = 0;
        sub_FAAD0((__int64 *)&src);
        v11 = n[0];
        v12 = nullptr;
        if ( n[0] )
        {
          v12 = (void *)qalloc_or_throw(n[0], (__int64)&unk_41C565, v9, v10);
          memcpy(v12, src, v11);
        }
        v5 = a1[1];
        v6 = *a1;
        if ( a1[2] < (unsigned __int64)(v5 + 1) )
        {
          v13 = qvector_reserve((__int64)a1, v6, v5 + 1, 24);
          *a1 = v13;
          v5 = a1[1];
          v6 = v13;
        }
        v7 = v6 + 24 * v5;
        *(_QWORD *)v7 = v12;
        v8 = src;
        *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
        ++a1[1];
        if ( v8 )
        {
          n[0] = 0;
          qfree((__int64)v8);
        }
        v3 += 24;
      }
      while ( v4 != v3 );
      v4 = v19;
      v3 = v19;
    }
    if ( v4 )
    {
      v14 = v20;
      if ( (_QWORD)v20 )
      {
        v15 = 0;
        do
        {
          v16 = (__int64 *)(v4 + 24 * v15);
          v17 = *v16;
          if ( *v16 )
          {
            v16[1] = 0;
            qfree(v17);
            v3 = v19;
          }
          ++v15;
          v4 = v3;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v20 = 0;
      qfree(v4);
    }
  }
  return v23 - __readfsqword(0x28u);
}
