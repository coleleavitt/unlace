/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7CC0
// Address: 0x00000000000C7CC0

//----- (00000000000C7CC0) ----------------------------------------------------
__int64 __fastcall sub_C7CC0(__int64 result)
{
  unsigned __int64 v1; // x8
  __int64 v2; // x19
  unsigned __int64 i; // x20

  v1 = *(_QWORD *)(result + 8);
  if ( v1 )
  {
    v2 = result;
    for ( i = 0; i < v1; ++i )
    {
      result = *(unsigned int *)(*(_QWORD *)(v2 + 24) + 4 * i);
      if ( (_DWORD)result != -1 )
      {
        result = close(result);
        *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4 * i) = -1;
        v1 = *(_QWORD *)(v2 + 8);
      }
    }
  }
  return result;
}
