__int64 __fastcall qwait_for_handles(int *a1, int *a2, int a3, int a4, int a5)
{
  int *v5; // r14
  int v6; // ebx
  int v7; // r15d
  fd_set *p_writefds; // r13
  __int64 v9; // rax
  int v10; // ebx
  struct timeval *v11; // r15
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  int v14; // eax
  __int64 v15; // r15
  int v16; // ebx
  fd_set *p_readfds; // r14
  int v18; // edx
  int v21; // [rsp+Ch] [rbp-17Ch]
  int v22; // [rsp+Ch] [rbp-17Ch]
  int *v23; // [rsp+10h] [rbp-178h]
  __m128i v26; // [rsp+30h] [rbp-158h] BYREF
  fd_set readfds; // [rsp+40h] [rbp-148h] BYREF
  fd_set writefds; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+148h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 > 1024 )
    return 22;
  memset(&readfds, 0, sizeof(readfds));
  memset(&writefds, 0, sizeof(writefds));
  if ( a3 <= 0 )
  {
    v10 = 1;
  }
  else
  {
    v5 = a2;
    v6 = 1;
    v7 = 0;
    v23 = &a2[a3];
    do
    {
      p_writefds = &writefds;
      v21 = *v5;
      if ( v7 < *v5 )
        v7 = *v5;
      if ( (v6 & a4) == 0 )
        p_writefds = &readfds;
      ++v5;
      v6 *= 2;
      v9 = __fdelt_chk();
      p_writefds->fds_bits[v9] |= 1LL << v21;
    }
    while ( v5 != v23 );
    v10 = v7 + 1;
  }
  v11 = (struct timeval *)&v26;
  v12 = _mm_cvtsi32_si128(a5 / 1000);
  if ( a5 < 0 )
    v11 = nullptr;
  v13 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(1000 * (a5 % 1000)));
  v26 = _mm_unpacklo_epi32(v13, _mm_cmpgt_epi32((__m128i)0LL, v13));
  while ( 1 )
  {
    v14 = select(v10, &readfds, &writefds, nullptr, v11);
    if ( v14 != -1 )
      break;
    if ( *__errno_location() != 4 )
      return (unsigned int)*__errno_location();
  }
  if ( !v14 )
  {
    v18 = -1;
LABEL_24:
    *a1 = v18;
    return 0;
  }
  if ( v14 > 0 )
  {
    if ( a3 <= 0 )
    {
LABEL_29:
      if ( !under_debugger )
        interr(475);
      BUG();
    }
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      p_readfds = &writefds;
      if ( (v16 & a4) == 0 )
        p_readfds = &readfds;
      v22 = a2[v15];
      if ( (p_readfds->fds_bits[__fdelt_chk()] & (1LL << v22)) != 0 )
        break;
      ++v15;
      v16 *= 2;
      if ( v15 == a3 )
        goto LABEL_29;
    }
    v18 = v15;
    goto LABEL_24;
  }
  return (unsigned int)*__errno_location();
}

