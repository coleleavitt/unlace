__int64 __fastcall sub_1FC5160(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 7);
  result = *(unsigned int *)(*(_QWORD *)a1 + 3552LL);
  *(_DWORD *)(a1 + 224) = 178;
  *(_DWORD *)(a1 + 228) = result;
  return result;
}
