__int64 __fastcall sub_328690(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // edx
  __int64 result; // rax
  char v8; // dl
  unsigned __int16 v9; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v9 = (2 * ~BYTE2(xmmword_8BCDC0)) & 2 | BYTE2(xmmword_8BCDB0) & 1 | (4 * ((_WORD)xmmword_8BCDB0 != 0));
  v6 = sub_507F10(1067, (unsigned int)&xmmword_8BCDB0 + 8, (unsigned int)&v9, a4, a5, a6);
  result = 0;
  if ( v6 == 1 )
  {
    WORD1(xmmword_8BCDB0) = v9 & 1;
    v8 = BYTE2(xmmword_8BCDC0) & 0xFE;
    if ( (v9 & 2) == 0 )
      v8 = BYTE2(xmmword_8BCDC0) | 1;
    LOWORD(xmmword_8BCDB0) = (v9 >> 2) & 1;
    BYTE2(xmmword_8BCDC0) = v8;
    return 1;
  }
  return result;
}
