__int64 __fastcall sub_145B8B0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 16) = *(_DWORD *)(result + 520) == a2;
  return result;
}
