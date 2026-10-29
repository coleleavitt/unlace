_QWORD *__fastcall sub_B9B8F0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int16 v8; // ax

  v7 = sub_B6C230(40, a1, a2, 24LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x605400000000LL;
  v8 = sub_B68380(84);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(84);
  *((_DWORD *)v7 + 9) = a3;
  *v7 = &off_2BDA3D0;
  return v7;
}

