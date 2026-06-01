/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39140
// Address: 0x0000000000039140

//----- (0000000000039140) ----------------------------------------------------
_QWORD *__fastcall sub_39140(_QWORD *result, char *s)
{
  __int64 v2; // x19
  size_t v4; // x0
  void *v5; // x1
  size_t v6; // x21
  unsigned __int64 v7; // x22

  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( s )
  {
    v2 = (__int64)result;
    v4 = strlen(s);
    v5 = *(void **)v2;
    v6 = v4;
    v7 = v4 + 1;
    if ( v4 != -1 )
    {
      v5 = qvector_reserve((pthread_mutex_t *)v2, v5, v7, 1u);
      *(_QWORD *)v2 = v5;
    }
    *(_QWORD *)(v2 + 8) = v7;
    result = memmove(v5, s, v6);
    *(_BYTE *)(*(_QWORD *)v2 + v6) = 0;
  }
  return result;
}
