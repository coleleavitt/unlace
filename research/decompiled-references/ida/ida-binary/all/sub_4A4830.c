unsigned __int64 __fastcall sub_4A4830(
        __int64 a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rbx
  int v14; // ebp
  unsigned int v15; // edx
  unsigned __int64 result; // rax
  __int64 v17; // rdi
  int v18; // ecx

  if ( (_QWORD)xmmword_8D1C28 )
  {
    v13 = 0;
    v14 = a3 == 0 ? 7 : 135;
    while ( 1 )
    {
      result = qword_8D1C20;
      v17 = *(_QWORD *)(qword_8D1C20 + 8 * v13);
      if ( a3 )
      {
        if ( (*(_BYTE *)(v17 + 1785) & 0x10) != 0 )
          break;
      }
      v18 = *(_DWORD *)(v17 + 2080);
      if ( v18 < 0 )
        goto LABEL_6;
      result = a2 & ((unsigned __int64)((v18 & 0x40) != 0) << v18) | a1 & ((unsigned __int64)((v18 & 0x40) == 0) << v18);
      v15 = v14;
      if ( result )
      {
LABEL_5:
        result = sub_4A4600(v17, nullptr, v15, 0, a4, a5, a6, a7, a8, a9, a10, a11);
LABEL_6:
        if ( ++v13 >= (unsigned __int64)xmmword_8D1C28 )
          return result;
      }
      else if ( ++v13 >= (unsigned __int64)xmmword_8D1C28 )
      {
        return result;
      }
    }
    v15 = 135;
    goto LABEL_5;
  }
  return result;
}
