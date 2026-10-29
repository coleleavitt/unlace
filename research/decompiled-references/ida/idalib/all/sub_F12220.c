__int64 __fastcall sub_F12220(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v2 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 8), v2 + 16, result + 1, 4);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v2 + 4 * result) = a2;
  ++*(_DWORD *)(v2 + 8);
  return result;
}
