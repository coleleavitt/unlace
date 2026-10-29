__int64 __fastcall sub_A77730(__int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(int **)(a1 + 64);
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 16LL);
  v3 = *(_QWORD *)(v2 + 112);
  if ( !*(_BYTE *)(v3 + 308) )
    return sub_AA2F20();
  result = *(unsigned int *)(v2 + 10324);
  if ( (unsigned int)result <= 9 || (double)v1[80] / (double)(int)result >= *(double *)(v3 + 312) )
    return sub_AA2F20();
  return result;
}

