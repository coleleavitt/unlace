/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400549B0
// Address: 0x00000001400549B0

//----- (00000001400549B0) ----------------------------------------------------
__int64 __fastcall sub_1400549B0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *i; // rcx

  result = 0;
  for ( i = (_QWORD *)(a1 + 8); *i; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x10 )
    {
      *errno() = 23;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
