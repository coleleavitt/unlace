__int64 __fastcall sub_4B0020(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax

  sub_4AFF20((unsigned int *)a1, *(_DWORD *)(a1 + 1052));
  sub_4AFF20((unsigned int *)a1, *(unsigned __int16 *)(a1 + 1050) | (*(unsigned __int16 *)(a1 + 1048) << 16));
  v1 = ea2node(*(unsigned int *)(a1 + 1056));
  sub_4AFF20((unsigned int *)a1, v1);
  v2 = ea2node(*(unsigned int *)(a1 + 1044));
  return sub_4AFF20((unsigned int *)a1, v2);
}

