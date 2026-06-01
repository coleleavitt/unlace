/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CD6C
// Address: 0x000000000003CD6C

//----- (000000000003CD6C) ----------------------------------------------------
__int64 sub_3CD6C()
{
  __int64 result; // x0
  int v1; // w8

  result = qgetenv("IDA_USE_LIBTHREAD_DB", 0);
  if ( (result & 1) != 0 || (result = sub_3CDC0(), (_DWORD)result != 1) )
  {
    if ( (byte_1669F0 & 1) == 0 )
      byte_1669F0 = 1;
    v1 = 3;
  }
  else
  {
    v1 = 2;
  }
  dword_1669F4 = v1;
  return result;
}
// 1669F0: using guessed type char byte_1669F0;
// 1669F4: using guessed type int dword_1669F4;
