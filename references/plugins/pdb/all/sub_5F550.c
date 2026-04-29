__int64 __fastcall sub_5F550(__int64 a1, __int64 *a2)
{
  int v2; // edx
  unsigned int v5; // r13d
  __int64 v6; // r15
  void *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v12; // rdi
  size_t v13; // rbp
  __int64 v14; // rax
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 100);
  v18 = __readfsqword(0x28u);
  if ( v2 )
  {
    v5 = 0;
    while ( 1 )
    {
      v12 = *a2;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 56LL))(v12, &src) )
        break;
      v13 = n[0];
      if ( n[0] )
      {
        v7 = (void *)qalloc_or_throw(n[0]);
        v5 += v13;
        v6 = a1 + 104;
        memcpy(v7, src, v13);
      }
      else
      {
        ++v5;
        v6 = a1 + 104;
        v7 = nullptr;
      }
      v8 = *(_QWORD *)(a1 + 112);
      v9 = *(_QWORD *)(a1 + 104);
      if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v8 + 1) )
      {
        v14 = qvector_reserve(v6, v9, v8 + 1, 24);
        *(_QWORD *)(a1 + 104) = v14;
        v8 = *(_QWORD *)(a1 + 112);
        v9 = v14;
      }
      v10 = v9 + 24 * v8;
      *(_QWORD *)v10 = v7;
      v11 = src;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      ++*(_QWORD *)(a1 + 112);
      if ( v11 )
      {
        n[0] = 0;
        qfree(v11);
      }
      if ( v5 >= *(_DWORD *)(a1 + 100) )
        return 1;
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return 1;
}
