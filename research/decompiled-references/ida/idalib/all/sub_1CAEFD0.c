__int64 __fastcall sub_1CAEFD0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v6; // eax

  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x2F )
    return 1;
  v6 = sub_C00A40(a2, a2, a3, a4, a5);
  if ( *(_DWORD *)(a1 + 12) > (*(_DWORD *)(v5 + 68) & 0xFFFFFu) )
    return 1;
  *(_DWORD *)(a1 + 20) = v6;
  *(_BYTE *)(a1 + 17) = 1;
  return 0;
}
