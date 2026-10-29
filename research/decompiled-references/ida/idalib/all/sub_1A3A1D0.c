__int64 __fastcall sub_1A3A1D0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 result; // rax
  bool v7; // zf

  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 8) = 0x101010101LL;
  *(_OWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 36) = a4;
  *(_QWORD *)a1 = off_2BC7280;
  v5 = *(_QWORD *)(a2 + 544);
  LOBYTE(a3) = a3 == 1;
  *(_QWORD *)(a1 + 48) = a5;
  *(_QWORD *)(a1 + 40) = v5;
  *(_BYTE *)(a1 + 8) = 0;
  result = a3 & (a4 ^ 1u);
  v7 = (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0;
  *(_BYTE *)(a1 + 12) = 0;
  if ( v7 )
    result = 0;
  *(_BYTE *)(a1 + 10) = a4 & a3;
  *(_BYTE *)(a1 + 11) = result;
  return result;
}
