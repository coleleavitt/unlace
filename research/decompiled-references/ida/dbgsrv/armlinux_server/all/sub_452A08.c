/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452A08
// Address: 0x0000000000452A08

//----- (0000000000452A08) ----------------------------------------------------
__int64 *__fastcall sub_452A08(_QWORD *a1, char *s)
{
  __int64 *result; // x0
  __int64 *v5; // x20
  __int64 **v6; // x0
  __int64 **v7; // x21
  void *v8; // x3

  if ( !s )
    sub_4A03B0("basic_string::_S_construct null not valid");
  result = (__int64 *)strlen(s);
  v5 = result;
  if ( result )
  {
    v6 = (__int64 **)sub_450840((unsigned __int64)result, 0);
    v7 = v6;
    v8 = v6 + 3;
    if ( v5 == (__int64 *)1 )
    {
      *((_BYTE *)v6 + 24) = *s;
    }
    else if ( v5 )
    {
      v8 = memcpy(v6 + 3, s, (size_t)v5);
    }
    result = std::string::_Rep::_S_empty_rep_storage;
    if ( v7 != (__int64 **)std::string::_Rep::_S_empty_rep_storage )
    {
      result = (__int64 *)((char *)v5 + (_QWORD)v7);
      *v7 = v5;
      *((_DWORD *)v7 + 4) = 0;
      *((_BYTE *)v5 + (_QWORD)v7 + 24) = 0;
    }
    *a1 = v8;
  }
  else
  {
    *a1 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
