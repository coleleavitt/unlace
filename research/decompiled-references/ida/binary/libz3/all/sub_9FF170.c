__int64 __fastcall sub_9FF170(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  void *v8; // [rsp+8h] [rbp-20h]
  void *v9; // [rsp+8h] [rbp-20h]
  void *v10; // [rsp+8h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, a1, a2);
  }
  else
  {
    v9 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, a1, a2);
    sub_182CBA0(v9, a1 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = 1;
  }
  v3 = a1 + 32;
  v4 = a2 + 32;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0
    || *(_DWORD *)(a1 + 48) != 1
    || (*(_BYTE *)(a2 + 52) & 1) != 0
    || *(_DWORD *)(a2 + 48) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v3, v4);
  }
  else
  {
    v10 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v3, v4);
    sub_182CBA0(v10, a1 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = 1;
  }
  v5 = a1 + 64;
  v6 = a2 + 64;
  if ( (*(_BYTE *)(a1 + 84) & 1) != 0
    || *(_DWORD *)(a1 + 80) != 1
    || (*(_BYTE *)(a2 + 84) & 1) != 0
    || *(_DWORD *)(a2 + 80) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v5, v6);
  }
  else
  {
    v8 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v5, v6);
    sub_182CBA0(v8, a1 + 80);
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = 1;
  }
  return a1;
}

