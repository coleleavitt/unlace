_QWORD *__fastcall sub_B9ACB0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int16 v10; // ax

  v8 = 2LL * a3;
  v9 = sub_B6C230(88, a1, a2, v8 * 8 + 8LL * a4, a5, a6);
  v9[1] = 0;
  v9[2] = 0;
  *v9 = off_2BD8B30;
  v9[3] = v9[3] & 0xFFFF000000000000LL | 0x602F00000000LL;
  v10 = sub_B68380(47);
  *((_BYTE *)v9 + 32) &= 0xF8u;
  *((_WORD *)v9 + 15) = v10 & 0x3FFF | *((_WORD *)v9 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(47);
  v9[7] = 0;
  *(_OWORD *)(v9 + 5) = 0;
  v9[8] = 0;
  *v9 = &off_2BDA5A8;
  v9[9] = 0;
  *((_WORD *)v9 + 40) = 257;
  *((_DWORD *)v9 + 21) = a3;
  if ( a4 )
    v9[v8 + 11] = 0;
  return v9;
}

