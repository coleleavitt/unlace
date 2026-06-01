__int64 __fastcall sub_2EDD40(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+8h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 528) + 104LL * a2;
  v4 = v3 + 48;
  if ( !*(_BYTE *)(v3 + 80) )
    return sub_2FC4A0(qword_1C7F2C0, v4, a3, v3 + 48);
  if ( (*(_BYTE *)(v3 + 68) & 1) != 0
    || *(_DWORD *)(v3 + 64) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    return sub_1852000(qword_1C7F2C0, v4, a3);
  }
  v6 = qword_1C7F2C0;
  sub_1832A70(qword_1C7F2C0, v4, a3);
  result = sub_182CBA0(v6, v3 + 64);
  *(_BYTE *)(v3 + 68) &= ~1u;
  *(_DWORD *)(v3 + 64) = 1;
  return result;
}

