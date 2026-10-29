/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D13C0
// Address: 0x080D13C0

//----- (080D13C0) --------------------------------------------------------
unsigned int __cdecl sub_80D13C0(char *a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  unsigned int result; // eax
  struct sigaction act; // [esp+Ch] [ebp-ACh] BYREF
  unsigned int v5; // [esp+98h] [ebp-20h]

  v5 = __readgsdword(0x14u);
  v1 = _mm_cvtsi32_si128((unsigned int)a1);
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *(_QWORD *)a1 = _mm_unpacklo_epi32(v1, v1).m128i_u64[0];
  v2 = _mm_cvtsi32_si128((unsigned int)(a1 + 12));
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_epi32(v2, v2).m128i_u64[0];
  *((_DWORD *)a1 + 6) = sub_80D1320();
  *((_DWORD *)a1 + 7) = sub_80D1320();
  *((_DWORD *)a1 + 8) = 0;
  a1[164] = 0;
  sigemptyset((sigset_t *)(a1 + 36));
  sigaddset((sigset_t *)(a1 + 36), 12);
  memset(&act.sa_mask, 0, 0x88u);
  act.sa_handler = (__sighandler_t)((char *)&qword_811CFF4 - 312820);
  sigaction(12, &act, nullptr);
  result = v5 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
