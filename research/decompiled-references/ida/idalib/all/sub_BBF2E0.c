unsigned __int64 __fastcall sub_BBF2E0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  char v16; // al
  char v17; // [rsp+7h] [rbp-41h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v17 = sub_BBBE60(a5, a2);
  v10 = sub_B902D0(72, a1, a2, 0);
  *(_QWORD *)v10 = off_2C02B30;
  if ( a2
    && (v11 = sub_B8C1B0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) != 0)
    && (*(char *)(v11 + 29) >= 0 || (v18 = *(_QWORD *)(v11 + 8) & 7LL, v16 = sub_B8C610(v11), v12 = v18, v16)) )
  {
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  *(_QWORD *)(v10 + 8) = v13;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v10 + 24) = a3;
  *(_WORD *)(v10 + 28) = 24649;
  v14 = sub_B8C0C0(73);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v14 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(73);
  *(_QWORD *)(v10 + 40) = a4;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 56) = a5;
  *(_QWORD *)v10 = &off_2C04358;
  *(_QWORD *)(v10 + 64) = a6;
  if ( v17 )
    sub_B88650(v10, 1);
  return v10;
}
