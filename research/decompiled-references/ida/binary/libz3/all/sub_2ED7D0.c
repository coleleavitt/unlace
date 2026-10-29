__int64 __fastcall sub_2ED7D0(__int64 a1)
{
  _QWORD *v2; // rbp
  __int64 (__fastcall *v3)(); // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 i; // rdx
  void *v13; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD **)(a1 + 248);
  v3 = *(__int64 (__fastcall **)())(*v2 + 56LL);
  if ( v3 == sub_2FBF00 )
  {
    v4 = v2[5];
    if ( v4 )
      ++*(_DWORD *)(v4 + 16);
    sub_2EB6D0(*(void (****)(void))(a1 + 616));
    *(_QWORD *)(a1 + 616) = v2[5];
    if ( (_QWORD *)(a1 + 768) != v2 + 6 )
    {
      v5 = *(_QWORD *)(a1 + 768);
      if ( v5 )
        sub_186B220((void *)(v5 - 8));
      v6 = v2[6];
      if ( v6 )
      {
        v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
        v13 = (void *)v7.m128i_i64[0];
        v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
        *(_QWORD *)(a1 + 768) = v8 + 1;
        v9 = v2[6];
        *v8 = v7.m128i_i64[0];
        if ( v9 )
        {
          v10 = 8LL * *(unsigned int *)(v9 - 4);
          if ( v10 )
          {
            for ( i = 0; i != v10; i += 8LL )
              v8[i / 8 + 1] = *(_QWORD *)(v9 + i);
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 768) = 0;
      }
    }
  }
  else
  {
    ((void (__fastcall *)(_QWORD, __int64, __int64))v3)(*(_QWORD *)(a1 + 248), a1 + 616, a1 + 768);
  }
  sub_2ED000(a1, 1);
  return sub_2ED000(a1, 0);
}

