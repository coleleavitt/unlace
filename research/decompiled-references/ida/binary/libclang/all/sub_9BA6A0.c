__int64 __fastcall sub_9BA6A0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // eax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  unsigned int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]

  sub_A25550(v9, *(_QWORD *)(a1 + 176), a2);
  v2 = sub_A1C2E0(v9);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 184);
    if ( v12 )
      goto LABEL_8;
    v5 = *(_QWORD *)(v10 + 32);
    if ( *(_DWORD *)(v5 + 16) != v11 && v11 )
      v5 = *(_QWORD *)(v10 + v11 + 32);
    if ( !*(_BYTE *)(v5 + 51) || (v6 = v10 + v9[0] + 72, v11 != v9[0]) )
LABEL_8:
      v6 = v10 + v9[0] + 40;
    v7 = sub_A1A4E0(v4, 24);
    v8 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v7 + 8) = v8;
    if ( v8 > 0x40 )
      sub_2585B30(v7);
    else
      *(_QWORD *)v7 = *(_QWORD *)v6;
    *(_BYTE *)(v7 + 12) = *(_BYTE *)(v6 + 12);
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 16);
  }
  sub_A1C0C0(v9);
  return v2;
}

