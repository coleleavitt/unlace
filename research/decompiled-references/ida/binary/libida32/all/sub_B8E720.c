_QWORD *__fastcall sub_B8E720(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int16 v8; // ax

  v4 = sub_ED1590(a3, 0, 1);
  v7 = sub_B6C230(120, a1, a2, v4, v5, v6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x601B00000000LL;
  v8 = sub_B68380(27);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(27);
  v7[7] = 0;
  *(_OWORD *)(v7 + 5) = 0;
  *v7 = &off_2BDA040;
  sub_B6A340((__int64)(v7 + 8), 27);
  v7[12] = 0;
  v7[13] = 0;
  *v7 = &off_2BDA268;
  v7[14] = 0;
  v7[7] = sub_ED1650(v7 + 15, a3, 0, 1);
  return v7;
}

