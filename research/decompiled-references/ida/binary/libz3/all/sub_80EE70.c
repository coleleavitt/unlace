char __fastcall sub_80EE70(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al

  ++*(_DWORD *)(a1 + 168);
  v1 = *(_QWORD *)(a1 + 72);
  v2 = sub_15E1B70(v1);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
         *(_QWORD *)(a1 + 80),
         v2,
         0,
         0);
  result = sub_7E5160(a1, v4 ^ 1, nullptr, v5, v6, v7);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      return sub_15D7BC0(v1, v3);
  }
  return result;
}

