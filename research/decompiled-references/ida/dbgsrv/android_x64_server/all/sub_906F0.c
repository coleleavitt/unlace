/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_906F0
// Address: 0x00000000000906F0

//----- (00000000000906F0) ----------------------------------------------------
const char *__fastcall sub_906F0(__int64 a1, _BYTE *a2)
{
  const char *result; // rax
  const char *v4; // r14
  size_t v5; // r15
  const char *v6; // r12
  char *v7; // rdi

  result = qbasename(a2);
  if ( result && (v4 = result, (result = (const char *)strlen(result)) != nullptr) )
  {
    v5 = (size_t)result;
    v6 = result + 1;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(result + 1) )
    {
      v7 = *(char **)a1;
    }
    else
    {
      v7 = (char *)qvector_reserve(a1, *(char **)a1, (unsigned __int64)(result + 1), 1u);
      *(_QWORD *)a1 = v7;
    }
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v7, v4, v5);
    result = *(const char **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}
