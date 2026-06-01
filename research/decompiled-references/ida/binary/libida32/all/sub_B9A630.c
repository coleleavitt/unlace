_QWORD *__fastcall sub_B9A630(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int16 v8; // ax
  char v9; // al
  char v10; // bp

  v7 = sub_B6C230(80, a1, a2, 24LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x604300000000LL;
  v8 = sub_B68380(67);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(67);
  v7[5] = 0;
  v7[6] = 0;
  *((_DWORD *)v7 + 14) = 0;
  *v7 = &off_2BDA530;
  v9 = *((_BYTE *)v7 + 60);
  *((_DWORD *)v7 + 16) = 0;
  v7[9] = 0;
  v10 = v9 & 0xF8 | (2 * (a3 & 1));
  *((_BYTE *)v7 + 60) = v10;
  return v7;
}

