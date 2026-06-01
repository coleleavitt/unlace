/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9B64
// Address: 0x00000000000A9B64

//----- (00000000000A9B64) ----------------------------------------------------
const char *__fastcall sub_A9B64(const char *result)
{
  const char *v1; // x19
  void *v2; // x1
  unsigned __int64 v3; // x22
  size_t v4; // x20

  if ( result && (v1 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v2 = (void *)xmmword_166CD0;
    v3 = (unsigned __int64)(result + 1);
    v4 = (size_t)result;
    if ( qword_166CE0 < (unsigned __int64)(result + 1) )
    {
      v2 = qvector_reserve((pthread_mutex_t *)&xmmword_166CD0, (void *)xmmword_166CD0, v3, 1u);
      *(_QWORD *)&xmmword_166CD0 = v2;
    }
    *((_QWORD *)&xmmword_166CD0 + 1) = v3;
    result = (const char *)memmove(v2, v1, v4);
    *(_BYTE *)(xmmword_166CD0 + v4) = 0;
  }
  else
  {
    *((_QWORD *)&xmmword_166CD0 + 1) = 0;
  }
  return result;
}
// 166CD0: using guessed type __int128 xmmword_166CD0;
// 166CE0: using guessed type __int64 qword_166CE0;
