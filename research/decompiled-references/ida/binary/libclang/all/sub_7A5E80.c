__int64 __fastcall sub_7A5E80(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)a1 & 6LL;
  if ( (**(_WORD **)(a1 + 8) & 0x1FF) == 0x70 )
  {
    if ( v2 == 2 )
    {
      return *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    }
    else
    {
      if ( v2 != 4 )
        BUG();
      return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                                         + 8LL * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                                         - 8)
                             + 24LL);
    }
  }
  else if ( ((v2 - 2) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    if ( v1 > 7 )
    {
      v4 = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)(v1 & 0xFFFFFFFFFFFFFFF8LL)),
             (__m128i)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8));
      return sub_B1E2D0(&v4);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return *(unsigned int *)(a1 + 16);
  }
}

