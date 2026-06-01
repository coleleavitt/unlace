/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9374
// Address: 0x00000000000B9374

//----- (00000000000B9374) ----------------------------------------------------
const char *__fastcall sub_B9374(__int64 a1, int a2)
{
  __int64 v2; // x19
  const char *result; // x0
  const char *v4; // x20
  unsigned __int64 v5; // x22
  size_t v6; // x21
  void *v7; // x0

  v2 = *(_QWORD *)(a1 + 8);
  result = strarray((__int64)&qword_160200, 14, a2);
  v4 = result;
  if ( *(_QWORD *)(v2 + 32) >= 2u )
    return (const char *)sub_3C748(v2, "%s: %s", *(const char **)(v2 + 24), result);
  if ( result && (result = (const char *)strlen(result)) != nullptr )
  {
    v5 = (unsigned __int64)(result + 1);
    v6 = (size_t)result;
    if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(result + 1) )
    {
      v7 = *(void **)v2;
    }
    else
    {
      v7 = qvector_reserve((pthread_mutex_t *)v2, *(void **)v2, v5, 1u);
      *(_QWORD *)v2 = v7;
    }
    *(_QWORD *)(v2 + 8) = v5;
    result = (const char *)memmove(v7, v4, v6);
    *(_BYTE *)(*(_QWORD *)v2 + v6) = 0;
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0;
  }
  return result;
}
// 160200: using guessed type __int64 qword_160200;
