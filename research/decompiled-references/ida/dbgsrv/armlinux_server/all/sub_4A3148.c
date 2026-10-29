/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3148
// Address: 0x00000000004A3148

//----- (00000000004A3148) ----------------------------------------------------
size_t *__fastcall sub_4A3148(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // x1
  size_t *result; // x0
  unsigned int *v5; // x3
  unsigned int v6; // w0
  char v7; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a2;
  result = (size_t *)(v2 - 24);
  v5 = (unsigned int *)(v2 - 8);
  if ( (*(_DWORD *)(v2 - 8) & 0x80000000) != 0 )
  {
    result = (size_t *)sub_4A2910(result, (__int64)&v7, 0);
    *a1 = result;
  }
  else
  {
    if ( result != (size_t *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        do
        {
          v6 = __ldaxr(v5);
          result = (size_t *)(v6 + 1);
        }
        while ( __stlxr((unsigned int)result, v5) );
      }
      else
      {
        result = (size_t *)(unsigned int)(*(_DWORD *)(v2 - 8) + 1);
        *(_DWORD *)(v2 - 8) = (_DWORD)result;
      }
    }
    *a1 = v2;
  }
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
