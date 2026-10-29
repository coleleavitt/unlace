/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6D00
// Address: 0x00000000000A6D00

//----- (00000000000A6D00) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6D00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 result; // rax

  if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    for ( i = 0; i != v6; ++i )
    {
      if ( !a4 || (result = *(unsigned __int8 *)(a4 + (i >> 3)), _bittest((const int *)&result, i & 7)) )
        result = sub_A6D60(a1, a2);
      a2 += 32;
    }
  }
  return result;
}
