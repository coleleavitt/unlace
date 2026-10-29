_QWORD *__fastcall sub_B9B2B0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int16 v8; // ax
  char v9; // al

  v7 = sub_B6C230(88, a1, a2, 8LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x604400000000LL;
  v8 = sub_B68380(68);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(68);
  v7[5] = 0;
  *((_OWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 16) = 0;
  *v7 = &off_2BDA620;
  v9 = *((_BYTE *)v7 + 80);
  v7[9] = 0;
  *((_DWORD *)v7 + 21) = a3;
  *((_BYTE *)v7 + 80) = v9 & 0xF8 | 6;
  return v7;
}

