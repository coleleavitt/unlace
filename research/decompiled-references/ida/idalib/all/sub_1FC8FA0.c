__int64 __fastcall sub_1FC8FA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rsi
  __int64 result; // rax

  sub_1FC8DF0(a1, a2);
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 24), v3, v4, v5, v6);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  v7 = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a1 + 232) |= (*(_DWORD *)(a2 + 40) != 0 && *(_DWORD *)(a2 + 44) != 0) << v7;
  *(_DWORD *)(a1 + 236) = v7 + 1;
  v8 = *(unsigned int *)(a2 + 44);
  result = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)result )
      return sub_1F6F5B0(*(_QWORD **)(a1 + 16), (v8 << 32) | (unsigned int)result, *(_QWORD *)(a1 + 24));
  }
  return result;
}
