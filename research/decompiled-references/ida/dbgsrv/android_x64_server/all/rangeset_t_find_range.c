/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_find_range
// Address: 0x00000000000CA890

//----- (00000000000CA890) ----------------------------------------------------
unsigned __int64 *__fastcall rangeset_t_find_range(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  result = *(unsigned __int64 **)(a1 + 24);
  if ( !result || *result > a2 || result[1] <= a2 )
  {
    v3 = 16LL * *(_QWORD *)(a1 + 8);
    result = *(unsigned __int64 **)a1;
    if ( v3 )
    {
      v4 = v3 >> 4;
      result = *(unsigned __int64 **)a1;
      v5 = v3 >> 4;
      do
      {
        v5 >>= 1;
        v6 = 16 * v5;
        if ( result[2 * v5 + 1] <= a2 )
        {
          v5 = v4 + ~v5;
          result = (unsigned __int64 *)((char *)result + v6 + 16);
        }
        v4 = v5;
      }
      while ( v5 );
    }
    if ( result == (unsigned __int64 *)(v3 + *(_QWORD *)a1) )
    {
      return nullptr;
    }
    else if ( *result <= a2 )
    {
      if ( result[1] <= a2 )
        return nullptr;
      else
        *(_QWORD *)(a1 + 24) = result;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
