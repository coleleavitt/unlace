__int64 __fastcall sub_349050(__int64 a1, __int64 a2)
{
  QT::QCursor *v3; // rdi
  __int64 v5; // rax
  const char *v6; // rax
  int v7; // r8d
  int v8; // r9d
  void **v9; // rbp
  void **p_src; // rsi
  size_t v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  void *v17; // r13
  __int64 v18; // rdx
  void **v19; // rax
  _BYTE *v20; // rax
  char v21; // [rsp+7h] [rbp-69h] BYREF
  __int64 v22; // [rsp+8h] [rbp-68h] BYREF
  __int128 v23; // [rsp+10h] [rbp-60h]
  void *src; // [rsp+28h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-40h]
  unsigned __int64 v26; // [rsp+40h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_2D1510(a1, (const char *)a2);
  v3 = *(QT::QCursor **)(a2 + 696);
  if ( *((_BYTE *)v3 + 344) )
  {
    v5 = sub_1C7B10(v3);
    v6 = (const char *)sub_341900(*(_QWORD *)(a2 + 696), (int)v5, v5 >> 32, &v21);
    v9 = (void **)v6;
    if ( v6 == (const char *)-1LL )
    {
      p_src = nullptr;
      v23 = 0;
      v22 = 0;
      src = nullptr;
      *(_OWORD *)n = 0;
      v20 = (_BYTE *)qvector_reserve(&src, 0, 4, 1);
      src = v20;
      n[0] = 4;
      *(_WORD *)v20 = 24935;
      v20[2] = 112;
      *((_BYTE *)src + 3) = 0;
    }
    else
    {
      if ( v21 )
      {
        sub_347EE0(a1, v6);
        *(_BYTE *)(a1 + 104) = 0;
        return a1;
      }
      v23 = 0;
      p_src = &src;
      v22 = 0;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( !(unsigned __int8)callui(65, (unsigned int)&src, (_DWORD)v6, (unsigned int)&callui, v7, v8) )
      {
        p_src = v9;
        get_nice_colored_name(&src, v9, 2);
      }
    }
    v11 = n[0];
    if ( n[0] > 1 )
    {
      v17 = (void *)qalloc_or_throw(n[0]);
      memcpy(v17, src, v11);
      v18 = v23;
      p_src = (void **)v22;
      if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v23 + 1) )
      {
        v22 = qvector_reserve(&v22, v22, v23 + 1, 24);
        v18 = v23;
        p_src = (void **)v22;
      }
      v19 = &p_src[3 * v18];
      *v19 = v17;
      *(__m128i *)(v19 + 1) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
      *(_QWORD *)&v23 = v23 + 1;
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src, (const char *)p_src);
    }
    sub_2D1580(a1, (__int64)&v22, nullptr, nullptr);
    v12 = v22;
    ++*(_DWORD *)(a1 + 100);
    if ( v12 )
    {
      v13 = v23;
      if ( (_QWORD)v23 )
      {
        v14 = 0;
        do
        {
          v15 = (__int64 *)(v12 + 24 * v14);
          v16 = *v15;
          if ( *v15 )
          {
            v15[1] = 0;
            qfree(v16, (const char *)&v22);
            v12 = v22;
          }
          ++v14;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v23 = 0;
      qfree(v12, (const char *)&v22);
    }
  }
  return a1;
}
