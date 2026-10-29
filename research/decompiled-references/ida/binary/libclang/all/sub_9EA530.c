__int64 __fastcall sub_9EA530(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned int v9; // eax
  _QWORD v10[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]

  sub_A176A0(v10, *(_QWORD *)(a1 + 200), a3);
  v3 = sub_9E82D0(a1, a2, (__int64)v10);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 184);
    if ( v13 )
      goto LABEL_8;
    v6 = *(_QWORD *)(v11 + 32);
    if ( *(_DWORD *)(v6 + 16) != v12 && v12 )
      v6 = *(_QWORD *)(v11 + v12 + 32);
    if ( !*(_BYTE *)(v6 + 51) || (v7 = v11 + v10[0] + 72, v12 != v10[0]) )
LABEL_8:
      v7 = v11 + v10[0] + 40;
    v8 = sub_A1A4E0(v5, 24);
    v9 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v8 + 8) = v9;
    if ( v9 > 0x40 )
      sub_2585B30(v8);
    else
      *(_QWORD *)v8 = *(_QWORD *)v7;
    *(_BYTE *)(v8 + 12) = *(_BYTE *)(v7 + 12);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 16);
  }
  sub_A1C0C0(v10);
  return v3;
}

