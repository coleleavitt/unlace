__int64 __fastcall sub_15F1750(__int64 a1, __int64 a2)
{
  char v2; // al
  bool v3; // zf
  __int64 result; // rax
  int v5; // eax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = *(_BYTE *)(a2 + 24);
  *(_BYTE *)(a1 + 120) = 0;
  v3 = *(_BYTE *)(a2 + 120) == 0;
  *(_BYTE *)(a1 + 24) = v2;
  if ( !v3 )
  {
    sub_FC70F0(a1 + 32, a2 + 32);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
    v5 = *(_DWORD *)(a2 + 112);
    *(_BYTE *)(a1 + 120) = 1;
    *(_DWORD *)(a1 + 112) = v5;
  }
  result = *(_QWORD *)(a2 + 128);
  v3 = *(_BYTE *)(a2 + 120) == 0;
  *(_QWORD *)(a1 + 128) = result;
  *(_BYTE *)(a2 + 24) = 0;
  if ( !v3 )
  {
    *(_BYTE *)(a2 + 120) = 0;
    result = sub_168B700(a2 + 32);
  }
  if ( *(_BYTE *)(a2 + 132) )
    *(_BYTE *)(a2 + 132) = 0;
  return result;
}
