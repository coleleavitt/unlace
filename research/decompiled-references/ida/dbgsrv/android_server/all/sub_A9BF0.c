/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9BF0
// Address: 0x00000000000A9BF0

//----- (00000000000A9BF0) ----------------------------------------------------
const char *__fastcall sub_A9BF0(const char *result)
{
  const char *v1; // x19
  void *v2; // x1
  unsigned __int64 v3; // x22
  size_t v4; // x20

  if ( result && (v1 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v2 = (void *)qword_166CE8;
    v3 = (unsigned __int64)(result + 1);
    v4 = (size_t)result;
    if ( *((_QWORD *)&xmmword_166CF0 + 1) < (unsigned __int64)(result + 1) )
    {
      v2 = qvector_reserve((pthread_mutex_t *)&qword_166CE8, (void *)qword_166CE8, v3, 1u);
      qword_166CE8 = (__int64)v2;
    }
    *(_QWORD *)&xmmword_166CF0 = v3;
    result = (const char *)memmove(v2, v1, v4);
    *(_BYTE *)(qword_166CE8 + v4) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_166CF0 = 0;
  }
  return result;
}
// 166CE8: using guessed type __int64 qword_166CE8;
// 166CF0: using guessed type __int128 xmmword_166CF0;
