_QWORD *__fastcall sub_B8DFD0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int16 v10; // ax

  v4 = a3;
  v6 = sub_ED1590(a4, 0, a3);
  v9 = sub_B6C230(48, a1, a2, v6, v7, v8);
  v9[1] = 0;
  v9[2] = 0;
  *v9 = off_2BD8B30;
  v9[3] = v9[3] & 0xFFFF000000000000LL | 0x601100000000LL;
  v10 = sub_B68380(17);
  *((_BYTE *)v9 + 32) &= 0xF8u;
  *((_WORD *)v9 + 15) = v10 & 0x3FFF | *((_WORD *)v9 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(17);
  v9[5] = 0;
  *v9 = &off_2BDA120;
  v9[5] = sub_ED1650(v9 + 6, a4, 0, v4);
  return v9;
}

