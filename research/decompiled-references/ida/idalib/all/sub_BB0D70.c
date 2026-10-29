unsigned __int64 __fastcall sub_BB0D70(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        const void *a7,
        __int64 a8)
{
  size_t v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int16 v15; // ax
  void *v16; // r8
  char v18; // al
  __int64 v20; // [rsp+18h] [rbp-40h]

  v10 = 8 * a8;
  v11 = sub_B902D0(64, a1, a2, 8 * a8);
  *(_QWORD *)v11 = off_2C02B30;
  if ( a2
    && (v12 = sub_B8C1B0(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) != 0)
    && (*(char *)(v12 + 29) >= 0 || (v20 = *(_QWORD *)(v12 + 8) & 7LL, v18 = sub_B8C610(v12), v13 = v20, v18)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  *(_QWORD *)(v11 + 8) = v14;
  *(_DWORD *)(v11 + 24) = a3;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24589;
  v15 = sub_B8C0C0(13);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v15 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(13);
  *(_DWORD *)(v11 + 36) = a4;
  v16 = (void *)(v11 + 64);
  *(_BYTE *)(v11 + 33) = 13;
  *(_DWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)v11 = &off_2C03F20;
  if ( v10 )
    v16 = memmove((void *)(v11 + 64), a7, v10);
  *(_QWORD *)(v11 + 48) = v16;
  *(_QWORD *)(v11 + 56) = a8;
  return v11;
}
