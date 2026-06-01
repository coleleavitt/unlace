/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A990
// Address: 0x000000000008A990

//----- (000000000008A990) ----------------------------------------------------
const char *__fastcall sub_8A990(__int64 a1, __int64 a2)
{
  char *v5; // x1
  __int64 v6; // x19
  const char *result; // x0
  const char *v8; // x20
  unsigned __int64 v9; // x22
  size_t v10; // x21
  void *v11; // x0

  if ( *(_QWORD *)(a1 + 24) )
    v5 = *(char **)(a1 + 16);
  else
    v5 = &byte_F154B;
  v6 = a2;
  result = qbasename(v5);
  if ( result && (v8 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v9 = (unsigned __int64)(result + 1);
    v10 = (size_t)result;
    if ( *(_QWORD *)(v6 + 16) >= (unsigned __int64)(result + 1) )
    {
      v11 = *(void **)v6;
    }
    else
    {
      v11 = qvector_reserve((pthread_mutex_t *)v6, *(void **)v6, v9, 1u);
      *(_QWORD *)v6 = v11;
    }
    *(_QWORD *)(v6 + 8) = v9;
    result = (const char *)memmove(v11, v8, v10);
    *(_BYTE *)(*(_QWORD *)v6 + v10) = 0;
  }
  else
  {
    *(_QWORD *)(v6 + 8) = 0;
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
