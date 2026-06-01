/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CD34
// Address: 0x000000000009CD34

//----- (000000000009CD34) ----------------------------------------------------
__int64 __fastcall sub_9CD34(__int64 result, char *s)
{
  __int64 v2; // x19
  unsigned __int64 v4; // x22
  size_t v5; // x21
  void **v6; // x23
  void *v7; // x0

  v2 = result;
  if ( s && (result = strlen(s)) != 0 )
  {
    v4 = result + 1;
    v5 = result;
    v6 = (void **)(v2 + 248);
    if ( *(_QWORD *)(v2 + 264) >= (unsigned __int64)(result + 1) )
    {
      v7 = *v6;
    }
    else
    {
      v7 = qvector_reserve((pthread_mutex_t *)(v2 + 248), *v6, v4, 1u);
      *v6 = v7;
    }
    *(_QWORD *)(v2 + 256) = v4;
    result = (__int64)memmove(v7, s, v5);
    *(_BYTE *)(*(_QWORD *)(v2 + 248) + v5) = 0;
  }
  else
  {
    *(_QWORD *)(v2 + 256) = 0;
  }
  return result;
}
