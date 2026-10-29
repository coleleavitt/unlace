unsigned __int64 __fastcall sub_BB1960(_QWORD *a1, __int64 a2, int a3, const void *a4, __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rax
  void *v15; // rax
  size_t v16; // rbp

  v8 = sub_EF52D0(0, 0, (unsigned int)a5);
  v9 = sub_B902D0(48, a1, a2, v8);
  *(_QWORD *)v9 = off_2C02B30;
  if ( a2
    && (v10 = sub_B8C1B0(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) != 0)
    && (*(char *)(v10 + 29) >= 0 || (unsigned __int8)sub_B8C610(v10)) )
  {
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(v9 + 8) = v12;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v9 + 24) = a3;
  *(_WORD *)(v9 + 28) = 24591;
  v13 = sub_B8C0C0(15);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(15);
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)v9 = &off_2C040B8;
  v14 = sub_EF5330(v9 + 48, 0, 0, 0, (unsigned int)a5);
  *(_QWORD *)(v9 + 40) = v14;
  sub_EF5300(v14, 0, 0);
  v15 = (void *)sub_EF5320(*(_QWORD *)(v9 + 40));
  v16 = 8 * a5;
  if ( v16 )
    memmove(v15, a4, v16);
  return v9;
}
