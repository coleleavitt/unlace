/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_SetGR
// Address: 0x00000000000E7B37

//----- (00000000000E7B37) ----------------------------------------------------
__int64 __fastcall Unwind_SetGR(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 > 17 )
LABEL_2:
    abort();
  if ( (*(_BYTE *)(a1 + 199) & 0x40) != 0 && *(_BYTE *)(a1 + a2 + 216) )
  {
    *(_QWORD *)(a1 + 8LL * a2) = a3;
  }
  else
  {
    if ( byte_1590B0[a2] != 8 )
      goto LABEL_2;
    **(_QWORD **)(a1 + 8LL * a2) = a3;
  }
  return a4;
}
