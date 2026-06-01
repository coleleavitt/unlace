__m128i *__fastcall sub_8322A0(__m128i *a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  _BYTE *v6; // rax
  int v7; // r9d
  void *v8; // r15
  char *v9; // rbx
  char *v10; // r12
  void *v11; // rbp
  char *v12; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  void *v15; // [rsp+8h] [rbp-50h]
  int v16; // [rsp+10h] [rbp-48h]

  v6 = (_BYTE *)sub_186B270(0x180u);
  v6[20] &= 0xFCu;
  v6[36] &= 0xFCu;
  v6[68] &= 0xFCu;
  v6[84] &= 0xFCu;
  v6[116] &= 0xFCu;
  v6[132] &= 0xFCu;
  v6[164] &= 0xFCu;
  v6[180] &= 0xFCu;
  v6[212] &= 0xFCu;
  *(_QWORD *)v6 = 0;
  *((_QWORD *)v6 + 3) = 0;
  *((_QWORD *)v6 + 5) = 0;
  *((_QWORD *)v6 + 6) = 0;
  *((_QWORD *)v6 + 9) = 0;
  *((_QWORD *)v6 + 11) = 0;
  *((_QWORD *)v6 + 12) = 0;
  *((_QWORD *)v6 + 15) = 0;
  *((_QWORD *)v6 + 17) = 0;
  *((_QWORD *)v6 + 18) = 0;
  *((_QWORD *)v6 + 21) = 0;
  *((_QWORD *)v6 + 23) = 0;
  *((_QWORD *)v6 + 24) = 0;
  *((_QWORD *)v6 + 27) = 0;
  v6[228] &= 0xFCu;
  v6[260] &= 0xFCu;
  v6[276] &= 0xFCu;
  v6[308] &= 0xFCu;
  v6[324] &= 0xFCu;
  v6[356] &= 0xFCu;
  v6[372] &= 0xFCu;
  *((_QWORD *)v6 + 29) = 0;
  *((_QWORD *)v6 + 30) = 0;
  *((_QWORD *)v6 + 33) = 0;
  *((_QWORD *)v6 + 35) = 0;
  *((_QWORD *)v6 + 36) = 0;
  *((_QWORD *)v6 + 39) = 0;
  *((_QWORD *)v6 + 41) = 0;
  *((_QWORD *)v6 + 42) = 0;
  *((_QWORD *)v6 + 45) = 0;
  *((_QWORD *)v6 + 47) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 16) = 0;
  *((_DWORD *)v6 + 28) = 0;
  *((_DWORD *)v6 + 40) = 0;
  *((_DWORD *)v6 + 52) = 0;
  *((_DWORD *)v6 + 64) = 0;
  *((_DWORD *)v6 + 76) = 0;
  *((_DWORD *)v6 + 88) = 0;
  *((_DWORD *)v6 + 8) = 1;
  *((_DWORD *)v6 + 20) = 1;
  *((_DWORD *)v6 + 32) = 1;
  *((_DWORD *)v6 + 44) = 1;
  *((_DWORD *)v6 + 56) = 1;
  *((_DWORD *)v6 + 68) = 1;
  *((_DWORD *)v6 + 80) = 1;
  *((_DWORD *)v6 + 92) = 1;
  ptr = v6;
  v15 = &byte_8;
  v16 = 0;
  sub_830100(a2, a3, (unsigned int *)&ptr, (__int64)&qword_1C7F280);
  sub_82C4A0(a1, (__int64)a2, (__int64 *)&ptr, (unsigned __int64 *)&qword_1C7F2A0, a4, v7);
  v8 = ptr;
  if ( ptr )
  {
    if ( (_DWORD)v15 )
    {
      v9 = (char *)ptr;
      v10 = (char *)ptr + 48 * (unsigned int)v15;
      do
      {
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9 + 16);
        v12 = v9 + 32;
        v9 += 48;
        sub_182CBA0(v11, v12);
      }
      while ( v9 != v10 );
    }
    sub_186B220(v8);
  }
  return a1;
}

