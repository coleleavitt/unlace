/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CF90
// Address: 0x000000000043CF90

//----- (000000000043CF90) ----------------------------------------------------
const char *__fastcall sub_43CF90(__int64 a1)
{
  const char *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = nullptr;
  if ( a1
    && *(_BYTE *)a1 == 5
    && (v2 = *(_QWORD *)(a1 + 8), v3 = *(_QWORD *)(v2 + 24), v3 != v2 + 8)
    && (v1 = s1, *(_QWORD *)(v3 + 40)) )
  {
    return *(const char **)(v3 + 32);
  }
  else
  {
    return v1;
  }
}
