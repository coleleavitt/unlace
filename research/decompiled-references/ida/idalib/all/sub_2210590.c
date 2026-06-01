__int64 __fastcall sub_2210590(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  result = *(unsigned int *)(*a1 + 8LL);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 12LL) )
  {
    sub_2237220(*a1, v2 + 16, result + 1, 8);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * result) = a2;
  ++*(_DWORD *)(v2 + 8);
  return result;
}
