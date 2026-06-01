/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051C20
// Address: 0x0000000100051C20

//----- (0000000100051C20) ----------------------------------------------------
const char *__fastcall sub_100051C20(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  const char *result; // rax
  const char *v4; // r14
  size_t v5; // r15
  unsigned __int64 v6; // r12
  void *v7; // rax

  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(char **)(a1 + 16);
  else
    v2 = (char *)_s1;
  result = qbasename(v2);
  if ( result && (v4 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v5 = (size_t)result;
    v6 = (unsigned __int64)(result + 1);
    v7 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) < v6 )
    {
      v7 = qvector_reserve(a2, *(void **)a2, v6, 1u);
      *(_QWORD *)a2 = v7;
    }
    *(_QWORD *)(a2 + 8) = v6;
    memmove(v7, v4, v5);
    result = *(const char **)a2;
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}
