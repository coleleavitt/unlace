__int64 __fastcall sub_2232350(_BYTE *a1, _QWORD *a2)
{
  char v2; // dl
  char v3; // dl
  char v4; // dl
  char v5; // dl
  unsigned __int8 v6; // cl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // dl
  char v14; // dl
  unsigned __int8 v15; // cl
  char v16; // dl
  __int64 result; // rax

  if ( a2[1] != 32 )
  {
    if ( a2[1] <= 0x20u && a2[2] <= 0x1Fu )
      sub_2236E10(a2, a2 + 3, 32, 1);
    a2[1] = 32;
  }
  v2 = a0123456789abcd_3[*a1 & 0xF] | 0x20;
  *(_BYTE *)*a2 = a0123456789abcd_3[*a1 >> 4] | 0x20;
  *(_BYTE *)(*a2 + 1LL) = v2;
  v3 = a0123456789abcd_3[a1[1] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 2LL) = a0123456789abcd_3[a1[1] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 3LL) = v3;
  v4 = a0123456789abcd_3[a1[2] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 4LL) = a0123456789abcd_3[a1[2] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 5LL) = v4;
  v5 = a0123456789abcd_3[a1[3] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 6LL) = a0123456789abcd_3[a1[3] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 7LL) = v5;
  v6 = a1[4];
  *(_BYTE *)(*a2 + 8LL) = a0123456789abcd_3[v6 >> 4] | 0x20;
  *(_BYTE *)(*a2 + 9LL) = a0123456789abcd_3[v6 & 0xF] | 0x20;
  v7 = a0123456789abcd_3[a1[5] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 10LL) = a0123456789abcd_3[a1[5] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 11LL) = v7;
  v8 = a0123456789abcd_3[a1[6] & 0xF];
  *(_BYTE *)(*a2 + 12LL) = a0123456789abcd_3[((unsigned __int64)(unsigned __int8)a1[6] >> 4) & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 13LL) = v8 | 0x20;
  v9 = a0123456789abcd_3[a1[7] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 14LL) = a0123456789abcd_3[a1[7] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 15LL) = v9;
  v10 = a0123456789abcd_3[a1[8] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 16LL) = a0123456789abcd_3[a1[8] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 17LL) = v10;
  v11 = a0123456789abcd_3[a1[9] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 18LL) = a0123456789abcd_3[a1[9] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 19LL) = v11;
  v12 = a0123456789abcd_3[a1[10] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 20LL) = a0123456789abcd_3[a1[10] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 21LL) = v12;
  v13 = a0123456789abcd_3[a1[11] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 22LL) = a0123456789abcd_3[a1[11] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 23LL) = v13;
  v14 = a0123456789abcd_3[a1[12] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 24LL) = a0123456789abcd_3[a1[12] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 25LL) = v14;
  v15 = a1[13];
  *(_BYTE *)(*a2 + 26LL) = a0123456789abcd_3[v15 >> 4] | 0x20;
  *(_BYTE *)(*a2 + 27LL) = a0123456789abcd_3[v15 & 0xF] | 0x20;
  v16 = a0123456789abcd_3[a1[14] & 0xF] | 0x20;
  *(_BYTE *)(*a2 + 28LL) = a0123456789abcd_3[a1[14] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 29LL) = v16;
  result = (unsigned __int8)a0123456789abcd_3[a1[15] & 0xF] | 0x20u;
  *(_BYTE *)(*a2 + 30LL) = a0123456789abcd_3[a1[15] >> 4] | 0x20;
  *(_BYTE *)(*a2 + 31LL) = result;
  return result;
}
