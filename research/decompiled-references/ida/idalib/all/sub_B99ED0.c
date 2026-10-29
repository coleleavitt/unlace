__int64 __fastcall sub_B99ED0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax

  v9 = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  sub_B725B0(a1, a2, a4, a5);
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)a1 = &off_2C03168;
  result = a7;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a7;
  if ( a8 )
  {
    *(_QWORD *)(a1 + 64) = a8;
    v11 = *(unsigned __int16 *)(a8 + 30);
    LOWORD(v11) = v11 & 0x367F;
    v12 = v11;
    v13 = *(unsigned __int16 *)(a1 + 30);
    LOWORD(v13) = v13 & 0xC000;
    result = v12 | v13;
    *(_WORD *)(a1 + 30) = result;
  }
  *(_BYTE *)(a1 + 29) |= 2u;
  return result;
}
