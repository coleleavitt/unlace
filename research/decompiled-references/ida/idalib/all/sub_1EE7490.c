__int64 __fastcall sub_1EE7490(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) = v3 + 1;
  return sub_1EE4770(v2, v4, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3));
}
