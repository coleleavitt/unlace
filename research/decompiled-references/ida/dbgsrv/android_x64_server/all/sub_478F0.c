/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478F0
// Address: 0x00000000000478F0

//----- (00000000000478F0) ----------------------------------------------------
__int64 __fastcall sub_478F0(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(unsigned __int16 *)(a1 + 306) >> 11;
  if ( (v2 & 0xC000) == 0xC000 )
    LOBYTE(result) = 0;
  else
    LOBYTE(result) = 1 << ((7 - v3) & 7);
  if ( (v2 & 0x3000) != 0x3000 )
    LOBYTE(result) = (1 << ((6 - v3) & 7)) | result;
  if ( (v2 & 0xC00) != 0xC00 )
    LOBYTE(result) = (1 << ((5 - v3) & 7)) | result;
  if ( (v2 & 0x300) != 0x300 )
    LOBYTE(result) = (1 << ((4 - v3) & 7)) | result;
  if ( (v2 & 0xC0) != 0xC0 )
    LOBYTE(result) = (1 << ((3 - v3) & 7)) | result;
  if ( (v2 & 0x30) != 0x30 )
    LOBYTE(result) = (1 << ((2 - v3) & 7)) | result;
  if ( (v2 & 0xC) != 0xC )
    LOBYTE(result) = (1 << ((1 - v3) & 7)) | result;
  if ( (v2 & 3) != 3 )
    LOBYTE(result) = (1 << (-(char)v3 & 7)) | result;
  result = (unsigned __int8)result;
  *(_WORD *)(a1 + 308) = (unsigned __int8)result;
  return result;
}
