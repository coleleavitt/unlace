__int64 __fastcall sub_15D2690(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 8);
  result = *(unsigned int *)(a1 + 24);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, result + 1, 8);
    result = *(unsigned int *)(a1 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result) = a2;
  ++*(_DWORD *)(a1 + 24);
  return result;
}
