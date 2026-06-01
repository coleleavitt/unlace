__int64 __fastcall sub_984C10(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int *v8; // rbx
  unsigned int *i; // r13
  unsigned int v10; // esi

  v5 = *(_QWORD *)(a1 + 328);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  sub_984A90(a1, a3, a1 + 328);
  result = sub_AEC480(*(_QWORD *)(a1 + 24) + 7536LL, a2, a3, a1 + 328);
  v8 = *(unsigned int **)(a1 + 328);
  if ( v8 )
  {
    result = *(v8 - 1);
    for ( i = &v8[result]; i != v8; result = sub_983080(a1, v10, a4) )
      v10 = *v8++;
  }
  return result;
}

