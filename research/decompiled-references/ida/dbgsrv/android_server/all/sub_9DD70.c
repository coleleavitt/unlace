/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DD70
// Address: 0x000000000009DD70

//----- (000000000009DD70) ----------------------------------------------------
const char *__fastcall sub_9DD70(const char *result, __int64 a2)
{
  const char *v3; // x20
  void *v4; // x1
  unsigned __int64 v5; // x22
  size_t v6; // x21

  if ( result && (v3 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v4 = *(void **)(a2 + 112);
    v5 = (unsigned __int64)(result + 1);
    v6 = (size_t)result;
    if ( *(_QWORD *)(a2 + 128) < (unsigned __int64)(result + 1) )
    {
      v4 = qvector_reserve((pthread_mutex_t *)(a2 + 112), v4, v5, 1u);
      *(_QWORD *)(a2 + 112) = v4;
    }
    *(_QWORD *)(a2 + 120) = v5;
    result = (const char *)memmove(v4, v3, v6);
    *(_BYTE *)(*(_QWORD *)(a2 + 112) + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 120) = 0;
  }
  return result;
}
