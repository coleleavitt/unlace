unsigned __int64 __fastcall sub_1E01B30(__m128i **a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // r14d
  int v4; // r15d
  char v5; // bp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int16 v10; // ax
  char v12; // al
  __int64 v13; // [rsp+8h] [rbp-40h]

  v2 = (__int64)a1[3];
  v3 = *(_DWORD *)(a2 + 36);
  v4 = *(_DWORD *)(a2 + 24);
  v5 = (*(_BYTE *)(a2 + 29) >> 5) & 3;
  v6 = sub_B902D0(40, (_QWORD *)(*a1)[15].m128i_i64[1], v2, 0);
  *(_QWORD *)v6 = off_2C02B30;
  if ( v2
    && (v7 = sub_B8C1B0(v2), v8 = *(_QWORD *)(v7 + 8) & 7LL, (*(_QWORD *)(v7 + 8) & 7) != 0)
    && (*(char *)(v7 + 29) >= 0 || (v13 = *(_QWORD *)(v7 + 8) & 7LL, v12 = sub_B8C610(v7), v8 = v13, v12)) )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  *(_QWORD *)(v6 + 8) = v9;
  *(_QWORD *)(v6 + 16) = v2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v6 + 24) = v4;
  *(_WORD *)(v6 + 28) = 24665;
  v10 = sub_B8C0C0(89);
  *(_BYTE *)(v6 + 32) &= 0xF8u;
  *(_WORD *)(v6 + 30) = v10 & 0x3FFF | *(_WORD *)(v6 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(89);
  *(_DWORD *)(v6 + 36) = v3;
  *(_QWORD *)v6 = &off_2C02BF0;
  *(_BYTE *)(v6 + 29) = *(_BYTE *)(v6 + 29) & 0x9F | (32 * (v5 & 3));
  sub_B8EA00(a1[3], v6);
  return v6;
}
