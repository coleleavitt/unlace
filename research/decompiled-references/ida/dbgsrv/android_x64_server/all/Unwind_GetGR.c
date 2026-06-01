/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetGR
// Address: 0x00000000000E7A11

//----- (00000000000E7A11) ----------------------------------------------------
__int64 __fastcall Unwind_GetGR(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 > 17 )
LABEL_2:
    abort();
  result = *(_QWORD *)(a1 + 8LL * a2);
  if ( (*(_BYTE *)(a1 + 199) & 0x40) == 0 || !*(_BYTE *)(a1 + a2 + 216) )
  {
    if ( byte_1590B0[a2] != 8 )
      goto LABEL_2;
    return *(_QWORD *)result;
  }
  return result;
}
