__int64 __fastcall sub_9BD890(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 84);
  result = v1 >> 6;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * result) |= 1LL << v1;
  *(_BYTE *)(a1 + 80) = 1;
  return result;
}

