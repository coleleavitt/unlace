/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E88DB
// Address: 0x00000000000E88DB

//----- (00000000000E88DB) ----------------------------------------------------
__int64 __fastcall sub_E88DB(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi

  sub_E86DB(a1, a2);
  v4 = *(_QWORD *)(a2 + 360);
  if ( *(_DWORD *)(a2 + 16LL * *(_QWORD *)(a2 + 360) + 8) == 6 )
    *(_QWORD *)(a1 + 152) = 0;
  else
    *(_QWORD *)(a1 + 152) = Unwind_GetGR(a1, v4);
  return a3;
}
