_QWORD *__fastcall sub_B8D1A0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int16 v8; // ax
  void *v9; // rcx

  v6 = a3;
  v7 = sub_B6C230(64, a1, a2, 8LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2BD8B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x600D00000000LL;
  v8 = sub_B68380(13);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(13);
  *((_BYTE *)v7 + 33) = 20;
  v9 = v7 + 8;
  *(_QWORD *)((char *)v7 + 36) = 0;
  v7[6] = 0;
  v7[7] = 0;
  *v7 = &off_2BD9F20;
  if ( (_DWORD)v6 )
    v9 = memset(v7 + 8, 0, 8LL * (unsigned int)(v6 - 1) + 8);
  v7[6] = v9;
  v7[7] = v6;
  return v7;
}

