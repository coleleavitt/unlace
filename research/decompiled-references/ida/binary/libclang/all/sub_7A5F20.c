__int64 __fastcall sub_7A5F20(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __m128i v8; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)a1 & 6LL;
  if ( (**(_WORD **)(a1 + 8) & 0x1FF) == 0x70 )
  {
    if ( v2 == 2 )
    {
      v4 = sub_781770(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v4 )
        return sub_AC7B80(v4);
    }
    else
    {
      v3 = 0;
      if ( v2 == 4 )
        v3 = *(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                       + 8LL * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                       - 8);
      v4 = sub_781770(v3);
      if ( v4 )
        return sub_AC7B80(v4);
    }
    return 0;
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( ((v2 - 2) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v7 = 0;
      if ( v1 > 7 )
      {
        v8 = _mm_unpacklo_epi64(
               _mm_loadl_epi64((const __m128i *)(v1 & 0xFFFFFFFFFFFFFFF8LL)),
               (__m128i)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8));
        v7 = sub_B1E2D0(&v8);
      }
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 16);
    }
    return (v6 << 32) | v7;
  }
}

