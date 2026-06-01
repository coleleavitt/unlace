/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1DC8
// Address: 0x00000000004A1DC8

//----- (00000000004A1DC8) ----------------------------------------------------
unsigned int **__fastcall sub_4A1DC8(unsigned int **result)
{
  unsigned int *v1; // x2
  int v2; // w1
  _QWORD *v3; // x19

  v1 = *result;
  if ( *result - 6 != (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
  {
    v2 = atomic_load(v1 - 2);
    if ( v2 > 0 )
    {
      v3 = result;
      sub_4A1BB8(result, 0, 0, 0);
      *(_DWORD *)(*v3 - 8LL) = -1;
      return (unsigned int **)0xFFFFFFFFLL;
    }
    else
    {
      *(v1 - 2) = -1;
      return (unsigned int **)0xFFFFFFFFLL;
    }
  }
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
