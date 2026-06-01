/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003FF8
// Address: 0x0000000100003FF8

//----- (0000000100003FF8) ----------------------------------------------------
bool __fastcall sub_100003FF8(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  int64x2_t v4; // q0

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    copy_debug_event(
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (*(_QWORD *)(a1 + 32) / 0x38uLL)) + 72 * (*(_QWORD *)(a1 + 32) % 0x38uLL));
    free_debug_event(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (*(_QWORD *)(a1 + 32) / 0x38uLL)) + 72
                                                                                             * (*(_QWORD *)(a1 + 32)
                                                                                              % 0x38uLL));
    v4 = vaddq_s64(*(int64x2_t *)(a1 + 32), (int64x2_t)xmmword_100075700);
    *(int64x2_t *)(a1 + 32) = v4;
    if ( v4.i64[0] >= 0x70uLL )
    {
      operator delete(**(void ***)(a1 + 8));
      *(_QWORD *)(a1 + 8) += 8LL;
      *(_QWORD *)(a1 + 32) -= 56LL;
    }
  }
  return v2 != 0;
}
// 100075700: using guessed type __int128 xmmword_100075700;
