__int64 __fastcall sub_847B30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 192);
  if ( !a2 )
    return sub_E5EBF0(v3, 0);
  ++*(_DWORD *)(a2 + 8);
  result = sub_E5EBF0(v3, a2);
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    return sub_15D7BC0(v2, a2);
  return result;
}

