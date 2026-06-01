/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000012AC
// Address: 0x00000001000012AC

//----- (00000001000012AC) ----------------------------------------------------
__int64 __fastcall sub_1000012AC(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 536);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    sub_100001404(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  return nullsub_21(0);
}
// 1000598A0: using guessed type __int64 __fastcall nullsub_21(_QWORD);
