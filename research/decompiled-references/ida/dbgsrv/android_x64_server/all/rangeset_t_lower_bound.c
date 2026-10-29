/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_lower_bound
// Address: 0x00000000000CA7F0

//----- (00000000000CA7F0) ----------------------------------------------------
__int64 __fastcall rangeset_t_lower_bound(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi

  result = *a1;
  v3 = 16 * a1[1];
  if ( v3 )
  {
    v4 = v3 >> 4;
    v5 = v4;
    do
    {
      v5 >>= 1;
      v6 = 16 * v5;
      if ( *(_QWORD *)(result + 16 * v5 + 8) <= a2 )
      {
        v5 = v4 + ~v5;
        result += v6 + 16;
      }
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
