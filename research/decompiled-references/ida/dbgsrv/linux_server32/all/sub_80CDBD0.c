/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDBD0
// Address: 0x080CDBD0

//----- (080CDBD0) --------------------------------------------------------
_BYTE *__cdecl sub_80CDBD0(_BYTE *a1, unsigned int a2, unsigned __int16 a3)
{
  _BYTE *result; // eax
  _BYTE *v4; // edx
  int v5; // [esp-18h] [ebp-18h]
  int v6; // [esp-14h] [ebp-14h]
  int v7; // [esp-10h] [ebp-10h]

  result = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v5, v6, v7);
    BUG();
  }
  if ( a3 <= 0x7Fu )
  {
    v4 = a1;
    if ( (unsigned int)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
    return v4;
  }
  if ( a3 <= 0x3FFFu )
  {
    v4 = a1;
    if ( (unsigned int)a1 < a2 )
    {
      v4 = a1 + 1;
      *a1 = (unsigned __int16)(a3 | 0x8000) >> 8;
      if ( (unsigned int)(a1 + 1) < a2 )
      {
        a1[1] = a3;
        return a1 + 2;
      }
    }
    return v4;
  }
  if ( (unsigned int)a1 < a2 )
  {
    v4 = a1 + 1;
    *a1 = -1;
    if ( (int)(a2 - (_DWORD)(a1 + 1)) < 0 )
      sub_80CDBA0();
    if ( (unsigned int)v4 >= a2 )
      return v4;
    v4 = a1 + 2;
    a1[1] = HIBYTE(a3);
    if ( (unsigned int)(a1 + 2) >= a2 )
      return v4;
    a1[2] = a3;
    return a1 + 3;
  }
  return result;
}
// 80CDC85: variable 'v5' is possibly undefined
// 80CDC85: variable 'v6' is possibly undefined
// 80CDC85: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
