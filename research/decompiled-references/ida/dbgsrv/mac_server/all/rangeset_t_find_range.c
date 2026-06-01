/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_find_range
// Address: 0x0000000100080A90

//----- (0000000100080A90) ----------------------------------------------------
unsigned __int64 *__fastcall rangeset_t_find_range(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // r11

  result = *(unsigned __int64 **)(a1 + 24);
  if ( !result || *result > a2 || result[1] <= a2 )
  {
    v3 = 16LL * *(_QWORD *)(a1 + 8);
    result = *(unsigned __int64 **)a1;
    if ( v3 )
    {
      v4 = v3 >> 4;
      result = *(unsigned __int64 **)a1;
      do
      {
        v5 = 2 * (v4 >> 1);
        v6 = v4 + ~(v4 >> 1);
        if ( result[v5 + 1] > a2 )
          v6 = v4 >> 1;
        else
          result = (unsigned __int64 *)((char *)result + v5 * 8 + 16);
        v4 = v6;
      }
      while ( v6 );
    }
    if ( result == (unsigned __int64 *)(v3 + *(_QWORD *)a1) || *result > a2 || result[1] <= a2 )
      return nullptr;
    else
      *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
