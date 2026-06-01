char __fastcall sub_1506220(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  char result; // al
  int v6; // eax
  __int64 *v7; // rdi
  char v8; // [rsp-8h] [rbp-18h]

  sub_1505FE0(a1, a2, 0x1Bu, a3, a4, *(_DWORD *)(a1 + 16), 0);
  result = v8;
  if ( *(_WORD *)(a1 + 32) == 449 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(__int64 **)(a1 + 8);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v6;
    return sub_14634E0(v7, (int *)(a1 + 16));
  }
  return result;
}
