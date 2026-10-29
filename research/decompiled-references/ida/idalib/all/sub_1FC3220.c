__int64 __fastcall sub_1FC3220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a2 + 32);
  v4 = *(unsigned int *)(v2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(v2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v3;
  ++*(_DWORD *)(v2 + 8);
  sub_1FC2FE0(a1, a2);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(unsigned __int8 *)(a2 + 36);
  result = *(unsigned int *)(v5 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v5 + 16, result + 1, 8);
    result = *(unsigned int *)(v5 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v5 + 8 * result) = v6;
  ++*(_DWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 224) = 312;
  return result;
}
