/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37F60
// Address: 0x0000000000037F60

//----- (0000000000037F60) ----------------------------------------------------
char *__fastcall sub_37F60(__int64 a1, const char *a2)
{
  char *result; // rax
  size_t v3; // r15
  char *v4; // rax
  unsigned __int64 v5; // r12

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = *(char **)a1;
    v5 = v3 + 1;
    if ( v3 != -1 )
    {
      v4 = (char *)qvector_reserve(a1, *(char **)a1, v5, 1u);
      *(_QWORD *)a1 = v4;
    }
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v4, a2, v3);
    result = *(char **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + v3) = 0;
  }
  return result;
}
