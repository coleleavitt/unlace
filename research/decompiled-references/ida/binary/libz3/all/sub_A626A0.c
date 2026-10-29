__int64 __fastcall sub_A626A0(__int64 a1, double a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 400);
  if ( !*(_BYTE *)(v2 + 60) )
    return sub_A62500(a1, a2);
  result = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 10324LL);
  if ( (unsigned int)result <= 9 )
    return sub_A62500(a1, a2);
  a2 = (double)*(int *)(a1 + 1020) / (double)(int)result;
  if ( a2 >= *(double *)(v2 + 64) )
    return sub_A62500(a1, a2);
  return result;
}

