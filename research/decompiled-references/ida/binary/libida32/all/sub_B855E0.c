_QWORD *__fastcall sub_B855E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax

  v6 = sub_B6C230(136, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2BD8B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x601500000000LL;
  v7 = sub_B68380(21);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(21);
  v6[5] = 0;
  *v6 = &off_2B206B0;
  sub_B6A340((__int64)(v6 + 6), 21);
  v6[10] = 0;
  *((_DWORD *)v6 + 15) = 0;
  v6[11] = 0;
  *v6 = &off_2BD9CF0;
  v6[12] = 0;
  v6[13] = 0;
  *((_DWORD *)v6 + 28) = 0;
  v6[15] = 0;
  *((_DWORD *)v6 + 32) = 0;
  *((_BYTE *)v6 + 132) &= 0xFCu;
  return v6;
}

