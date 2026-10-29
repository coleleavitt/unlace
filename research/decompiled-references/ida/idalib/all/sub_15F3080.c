__int64 __fastcall sub_15F3080(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 1952);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 528LL);
  result = *(unsigned int *)(*(_QWORD *)(a2 + 240) + 532LL);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
