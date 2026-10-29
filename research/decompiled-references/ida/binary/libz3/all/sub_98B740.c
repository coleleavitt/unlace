__int64 __fastcall sub_98B740(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+8h] [rbp-20h]
  void *v7; // [rsp+8h] [rbp-20h]
  void *v8; // [rsp+8h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, a1, a2);
  }
  else
  {
    v7 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, a1, a2);
    sub_182CBA0(v7, a1 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = 1;
  }
  v3 = a1 + 32;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0
    || *(_DWORD *)(a1 + 48) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v3, a2);
  }
  else
  {
    v8 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, v3, a2);
    sub_182CBA0(v8, a1 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = 1;
  }
  v4 = a1 + 64;
  if ( (*(_BYTE *)(a1 + 84) & 1) != 0
    || *(_DWORD *)(a1 + 80) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    return sub_1848FF0(qword_1C7F2C0, v4, a2);
  }
  v6 = qword_1C7F2C0;
  sub_1831650(qword_1C7F2C0, v4, a2);
  result = sub_182CBA0(v6, a1 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  *(_DWORD *)(a1 + 80) = 1;
  return result;
}

