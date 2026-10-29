_QWORD *__fastcall sub_B81CF0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int16 v8; // ax
  int v9; // edx

  v7 = sub_B6C230(72, a1, a2, 8LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x605600000000LL;
  v8 = sub_B68380(86);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(86);
  *((_BYTE *)v7 + 64) &= ~1u;
  v9 = *((_DWORD *)v7 + 16);
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  *v7 = &off_2BD9828;
  *((_DWORD *)v7 + 16) = (2 * a3) | v9 & 1;
  return v7;
}

