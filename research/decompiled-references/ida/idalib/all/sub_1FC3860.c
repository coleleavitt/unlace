__int64 __fastcall sub_1FC3860(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 result; // rax

  sub_1FC2FE0(a1, a2);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a2 + 32);
  result = *(unsigned int *)(v2 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v2 + 16, result + 1, 8);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * result) = v3;
  ++*(_DWORD *)(v2 + 8);
  *(_DWORD *)(a1 + 224) = 342;
  return result;
}
