__int64 __fastcall sub_15AD890(
        unsigned int *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  unsigned int v8; // r10d
  __int64 result; // rax
  int v10; // r11d
  unsigned int v11; // r10d

  v8 = *a1;
  result = 0;
  v10 = *a1 & 0x7F000;
  if ( v10 != 282624 )
  {
    if ( v10 )
      __asm { jmp     rax }
    a1[48] = a3;
    *((_QWORD *)a1 + 1) = a7;
    v11 = ((a2 & 0x7F) << 12) | v8 & 0xFFF80FFF;
    a1[52] = a4;
    *a1 = v11;
    *((_BYTE *)a1 + 2) = ((a8 & (a7 != 0)) << 6) | BYTE2(v11) & 0xBF;
  }
  return result;
}
