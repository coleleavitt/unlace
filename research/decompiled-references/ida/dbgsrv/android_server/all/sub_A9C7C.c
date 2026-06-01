/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9C7C
// Address: 0x00000000000A9C7C

//----- (00000000000A9C7C) ----------------------------------------------------
const char *__fastcall sub_A9C7C(const char *result)
{
  const char *v1; // x19
  void *v2; // x1
  unsigned __int64 v3; // x22
  size_t v4; // x20

  if ( result && (v1 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v2 = (void *)xmmword_166D00;
    v3 = (unsigned __int64)(result + 1);
    v4 = (size_t)result;
    if ( (unsigned __int64)xmmword_166D10 < (unsigned __int64)(result + 1) )
    {
      v2 = qvector_reserve((pthread_mutex_t *)&xmmword_166D00, (void *)xmmword_166D00, v3, 1u);
      *(_QWORD *)&xmmword_166D00 = v2;
    }
    *((_QWORD *)&xmmword_166D00 + 1) = v3;
    result = (const char *)memmove(v2, v1, v4);
    *(_BYTE *)(xmmword_166D00 + v4) = 0;
  }
  else
  {
    *((_QWORD *)&xmmword_166D00 + 1) = 0;
  }
  return result;
}
// 166D00: using guessed type __int128 xmmword_166D00;
// 166D10: using guessed type __int128 xmmword_166D10;
