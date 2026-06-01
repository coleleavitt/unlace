__int64 __fastcall sub_1FC3760(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *(unsigned int **)(a2 + 24);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(unsigned int *)(v4 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v4 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(v4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) = v3;
  ++*(_DWORD *)(v4 + 8);
  result = sub_1FC2FE0(a1, a2);
  *(_DWORD *)(a1 + 224) = 328;
  return result;
}
