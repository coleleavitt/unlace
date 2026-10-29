/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D820
// Address: 0x000000000046D820

//----- (000000000046D820) ----------------------------------------------------
__int64 __fastcall sub_46D820(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  while ( *(_QWORD *)(a1 + 8 * result + 8) )
  {
    if ( ++result == 16 )
    {
      *__errno_location() = 23;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
