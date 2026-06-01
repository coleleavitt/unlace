_QWORD *__fastcall sub_B8DD80(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int16 v8; // ax

  v3 = a3;
  v4 = sub_ED1590(0, 0, a3);
  v7 = sub_B6C230(48, a1, a2, v4, v5, v6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x600F00000000LL;
  v8 = sub_B68380(15);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(15);
  v7[5] = 0;
  *v7 = &off_2BDA0B8;
  v7[5] = sub_ED1650(v7 + 6, 0, 0, v3);
  return v7;
}

