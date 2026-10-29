/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37DB0
// Address: 0x0000000000037DB0

//----- (0000000000037DB0) ----------------------------------------------------
char __fastcall sub_37DB0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 376) )
  {
    sub_385C0((__int64 *)(a1 + 376), 0);
    qfree(*(void **)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  return 1;
}
