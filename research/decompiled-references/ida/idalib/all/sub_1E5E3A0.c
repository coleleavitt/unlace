__int64 __fastcall sub_1E5E3A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-Ch]

  v5 = *a1;
  result = *(unsigned int *)(*a1 + 8LL);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 12LL) )
  {
    v7 = a5;
    sub_2237220(*a1, v5 + 16, result + 1, 4);
    result = *(unsigned int *)(v5 + 8);
    a5 = v7;
  }
  *(_DWORD *)(*(_QWORD *)v5 + 4 * result) = a5;
  ++*(_DWORD *)(v5 + 8);
  return result;
}
