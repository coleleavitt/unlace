/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B4D0
// Address: 0x000000014005B4D0

//----- (000000014005B4D0) ----------------------------------------------------
_BYTE *__fastcall sub_14005B4D0(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *v5; // r9
  _BYTE *v7; // rcx
  unsigned int v8; // r8d
  _BYTE *v9; // rax

  v5 = a1;
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( a3 > 0x7F )
  {
    if ( a3 > 0x3FFF )
    {
      v8 = HIWORD(a3);
      if ( a3 > 0x1FFFFFFF )
        *a1++ = -1;
      else
        LOWORD(v8) = v8 | 0xC000;
      v9 = sub_14005B490(a1, a2, v8);
      return sub_14005B490(v9, a2, a3);
    }
    else
    {
      if ( (unsigned __int64)a1 < a2 )
      {
        *a1 = BYTE1(a3) | 0x80;
        v7 = a1 + 1;
        v5 = v7;
        if ( (unsigned __int64)v7 < a2 )
        {
          *v7 = a3;
          return v7 + 1;
        }
      }
      return v5;
    }
  }
  else
  {
    if ( (unsigned __int64)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
    return v5;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
