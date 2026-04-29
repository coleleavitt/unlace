__int64 __fastcall sub_1202B0(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  unsigned int v5; // ecx
  __int128 v6; // rdi

  *(_BYTE *)(a1 + 40) = 1;
  if ( a4 && ((*a2 - 4) & 0xFB) != 0 )
    return 0;
  v5 = *(_DWORD *)(a1 + 56);
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 16);
  sub_11F2E0(v6, (__int64)a2, v5, 0xFFFF0000);
  return 0;
}
