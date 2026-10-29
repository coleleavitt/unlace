_QWORD *__fastcall sub_BB1F40(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int16 v8; // ax

  v4 = sub_EF52D0(a3, 0, 0);
  v7 = sub_B8FF70(48, a1, a2, v4, v5, v6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2C02B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x601000000000LL;
  v8 = sub_B8C0C0(16);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(16);
  v7[5] = 0;
  *v7 = &off_2C04188;
  v7[5] = sub_EF5390(v7 + 6, a3, 0, 0);
  return v7;
}
