__int64 __fastcall sub_4B11F0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 i; // r12
  unsigned __int16 **v20; // rax
  unsigned __int16 *v21; // rbx
  __int64 v22; // r14
  const char *v23; // rsi
  size_t v24; // r15
  void *v25; // rbp
  char *v26; // rax
  const char *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 errdesc; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  const char *v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+10h] [rbp-78h] BYREF
  __int128 v43; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v16 = qword_8D1CB8;
  if ( (int *)qword_8D1CB8 == &dword_8D1CA8 )
    return qunlink(a1);
  while ( !*(_QWORD *)(v16 + 72) )
  {
    v16 = std::_Rb_tree_increment(v16);
    if ( (int *)v16 == &dword_8D1CA8 )
      return qunlink(a1);
  }
  v41 = (const char *)fopenWT(a1);
  if ( v41 )
  {
    for ( i = qword_8D1CB8; (int *)i != &dword_8D1CA8; i = std::_Rb_tree_increment(i) )
    {
      v20 = *(unsigned __int16 ***)(i + 72);
      if ( v20 )
      {
        v42 = 0;
        v43 = 0;
        v21 = *v20;
        v22 = (__int64)&(*v20)[(_QWORD)v20[1]];
        if ( (unsigned __int16 *)v22 != *v20 )
        {
          do
          {
            v23 = (const char *)*v21;
            sub_4B0E40((__int64)&src, (__int16)v23, v17, v18);
            v24 = n[0];
            if ( n[0] > 1 )
            {
              v25 = (void *)qalloc_or_throw(n[0]);
              memcpy(v25, src, v24);
              v17 = (_QWORD *)v43;
              v23 = (const char *)v42;
              if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
              {
                v42 = qvector_reserve(&v42, v42, v43 + 1, 24);
                v17 = (_QWORD *)v43;
                v23 = (const char *)v42;
              }
              v26 = (char *)&v23[24 * (_QWORD)v17];
              *(_QWORD *)v26 = v25;
              *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
              *(_QWORD *)&v43 = v43 + 1;
            }
            if ( src )
            {
              n[0] = 0;
              qfree(src, v23);
            }
            ++v21;
          }
          while ( (unsigned __int16 *)v22 != v21 );
        }
        src = nullptr;
        *(_OWORD *)n = 0;
        sub_532CD0(&src, &v42, 0);
        v27 = &s1;
        if ( *(_QWORD *)(i + 40) )
          v27 = *(const char **)(i + 32);
        sub_199CF0((__int64)v41, (__int64)"\"%s\"=", v27);
        if ( n[0] <= 1 )
        {
          qfputs("0", v41);
        }
        else
        {
          sub_4AFEB0((__int64)&src, "\\", "\\\\");
          sub_4AFEB0((__int64)&src, "\"", "\\\"");
          sub_199CF0((__int64)v41, (__int64)"\"%s\"", (const char *)src);
        }
        qfputs("\n", v41);
        if ( src )
        {
          n[0] = 0;
          qfree(src, v41);
        }
        v28 = v42;
        if ( v42 )
        {
          v29 = v43;
          if ( (_QWORD)v43 )
          {
            v30 = 0;
            do
            {
              v31 = (__int64 *)(v28 + 24 * v30);
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32, v41);
                v28 = v42;
              }
              ++v30;
            }
            while ( v29 != v30 );
          }
          *(_QWORD *)&v43 = 0;
          qfree(v28, v41);
        }
      }
    }
    return qfclose(v41);
  }
  else
  {
    errdesc = get_errdesc(a1, 0xFFFFFFFFLL);
    return sub_169630((int)"%s", errdesc, v35, v36, v37, v38, a2, a3, a4, a5, v39, v40, a8, a9, a15);
  }
}
