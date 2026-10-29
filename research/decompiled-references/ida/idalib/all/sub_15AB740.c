__int64 __fastcall sub_15AB740(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 24) = v2;
  result = *(unsigned int *)(a2 + 40);
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
