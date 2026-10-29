/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001540
// Address: 0x0000000100001540

//----- (0000000100001540) ----------------------------------------------------
void __fastcall sub_100001540(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 536);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    sub_1000016A0(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  sub_100064AA0();
}
