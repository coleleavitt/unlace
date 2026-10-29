/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0820
// Address: 0x00000000000A0820

//----- (00000000000A0820) ----------------------------------------------------
__int64 __fastcall sub_A0820(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 552);
  if ( !v2 )
    sub_3A5C0("debmod_t::get_reginfo is not implemented");
  if ( v2 <= a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3256);
    BUG();
  }
  return *(_QWORD *)(a1 + 544) + 32LL * a2;
}
// 158B40: using guessed type __int64 under_debugger;
