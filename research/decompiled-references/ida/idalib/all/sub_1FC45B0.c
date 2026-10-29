__int64 __fastcall sub_1FC45B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
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
  result = sub_1FC2FE0(a1, a2);
  *(_DWORD *)(a1 + 224) = 369;
  return result;
}
