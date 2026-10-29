void __fastcall sub_49FEB0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 **v6; // rbx
  __int64 v7; // r12
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  size_t v14; // r12
  void *v15; // r14
  unsigned __int64 v16; // rdx

  if ( !*a1 )
  {
    v13 = a1[1];
    if ( v13 == 1 )
    {
      a1[6] = 0;
      v15 = a1 + 6;
    }
    else
    {
      if ( v13 >> 60 )
      {
        v16 = v13 >> 61;
        if ( v16 )
          sub_2EBC5E(a1, a2, v16, a4, a5);
        std::__throw_bad_alloc();
      }
      v14 = 8 * v13;
      v15 = (void *)operator new(8 * v13);
      memset(v15, 0, v14);
    }
    *a1 = v15;
  }
  v6 = *(__int64 ***)(a2 + 16);
  if ( v6 )
  {
    v7 = *a3;
    if ( *a3 )
    {
      *a3 = *(_QWORD *)v7;
      *(_QWORD *)v7 = 0;
      *(__m128i *)(v7 + 8) = _mm_loadu_si128((const __m128i *)(v6 + 1));
      *(_QWORD *)(v7 + 24) = v6[3];
      a1[2] = v7;
    }
    else
    {
      v11 = operator new(0x20u);
      *(_QWORD *)v11 = 0;
      v7 = v11;
      *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v6 + 1));
      v12 = v6[3];
      a1[2] = v7;
      *(_QWORD *)(v7 + 24) = v12;
      if ( !v7 )
      {
LABEL_6:
        v8 = *v6;
        if ( v8 )
        {
          while ( 1 )
          {
            v10 = *a3;
            if ( *a3 )
              *a3 = *(_QWORD *)v10;
            else
              v10 = operator new(0x20u);
            *(_QWORD *)v10 = 0;
            *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v8 + 1));
            *(_QWORD *)(v10 + 24) = v8[3];
            *(_QWORD *)v7 = v10;
            v9 = (_QWORD *)(*a1 + 8LL * (*(_QWORD *)(v10 + 8) % a1[1]));
            if ( !*v9 )
              *v9 = v7;
            v8 = (__int64 *)*v8;
            if ( !v8 )
              break;
            v7 = v10;
          }
        }
        return;
      }
    }
    *(_QWORD *)(*a1 + 8LL * (*(_QWORD *)(v7 + 8) % a1[1])) = a1 + 2;
    goto LABEL_6;
  }
}
