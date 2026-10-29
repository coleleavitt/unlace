_QWORD *__fastcall sub_B9BAA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax

  v6 = sub_B6C230(64, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2BD8B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x605500000000LL;
  v7 = sub_B68380(85);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(85);
  *(_QWORD *)((char *)v6 + 36) = 0;
  *(_QWORD *)((char *)v6 + 44) = 0;
  *(_QWORD *)((char *)v6 + 52) = 0;
  *v6 = &off_2BDA798;
  return v6;
}

