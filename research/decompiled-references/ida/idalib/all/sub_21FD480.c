__int64 __fastcall sub_21FD480(_BYTE *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // dl
  char v6; // cl
  int v7; // r12d

  a1[20] = (a1[20] ^ *(_BYTE *)(a2 + 20)) & 8 | a1[20] & 0xF7;
  result = sub_21FD320((__int64)a1, a2);
  v5 = a1[20];
  v6 = v5 & 7;
  if ( (v5 & 7) == 3 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 20LL) != 2 )
      return result;
    v5 &= ~8u;
    a1[20] = v5;
    v6 = v5 & 7;
  }
  if ( (v5 & 6) != 0 && v6 != 3 )
  {
    v7 = sub_21F9970((__int64)a1, a2);
    result = sub_21FAF10((__int64)a1, a3, v7);
    if ( v7 )
      return (unsigned int)result | 0x10;
  }
  return result;
}
