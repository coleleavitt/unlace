__int64 __fastcall sub_C120A0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rsi

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 16) = v4;
  if ( v4 > 0x40 )
    sub_2205510(a1 + 8);
  else
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  v5 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 32) = v5;
  if ( v5 > 0x40 )
    sub_2205510(a1 + 24);
  else
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 36);
  v6 = a2 + 40;
  v7 = a1 + 40;
  v8 = sub_21F90D0();
  if ( *(_QWORD *)(a2 + 40) == v8 )
    sub_21FFE60(v7, v6);
  else
    sub_21F97A0(v7, v6);
  v9 = a1 + 64;
  v10 = a2 + 64;
  if ( *(_QWORD *)(a2 + 64) == v8 )
    return sub_21FFE60(v9, v10);
  else
    return sub_21F97A0(v9, v10);
}
