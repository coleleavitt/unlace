/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004750
// Address: 0x0000000100004750

//----- (0000000100004750) ----------------------------------------------------
bool __fastcall sub_100004750(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __m128i v3; // xmm0

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    ((void (__fastcall *)(__int64, unsigned __int64))copy_debug_event)(
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (*(_QWORD *)(a1 + 32) / 0x38uLL)) + 72 * (*(_QWORD *)(a1 + 32) % 0x38uLL));
    free_debug_event(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (*(_QWORD *)(a1 + 32) / 0x38uLL)) + 72
                                                                                             * (*(_QWORD *)(a1 + 32)
                                                                                              % 0x38uLL));
    v3 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 32)), (__m128i)xmmword_10008FE20);
    *(__m128i *)(a1 + 32) = v3;
    if ( v3.i64[0] >= 0x70uLL )
    {
      operator delete(**(void ***)(a1 + 8));
      *(_QWORD *)(a1 + 8) += 8LL;
      *(_QWORD *)(a1 + 32) -= 56LL;
    }
  }
  return v2 != 0;
}
// 10008FE20: using guessed type __int128 xmmword_10008FE20;
