__int64 __fastcall sub_183ABA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 544);
  v6 = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(a2 + 512) = 0;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 9944);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 2632);
  LODWORD(v6) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 544) = a3;
  *(_DWORD *)(a2 + 80) = v6;
  LODWORD(v6) = *(_DWORD *)(a2 + 3688);
  *(_QWORD *)(a2 + 9944) = 0;
  *(_DWORD *)(a2 + 2632) = v6;
  *(_BYTE *)(a1 + 48) = 0;
  if ( (*(_BYTE *)(a3 + 8) & 0x7Fu) - 34 > 5 )
  {
    sub_15F1950(a2, a2, a3, a4, a5, a6);
    return sub_18C7FE0(a2, 6, 0);
  }
  else
  {
    v7 = a3 - 72;
    sub_15F1950(a2, a2, a3, a4, a5, a6);
    result = sub_18C7FE0(a2, 6, v7);
    if ( v7 )
      *(_BYTE *)(a3 + 12) |= 0x40u;
  }
  return result;
}
