/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDC90
// Address: 0x080CDC90

//----- (080CDC90) --------------------------------------------------------
_BYTE *__cdecl sub_80CDC90(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // edx
  int v5; // [esp-18h] [ebp-18h]
  int v6; // [esp-14h] [ebp-14h]
  int v7; // [esp-10h] [ebp-10h]

  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v5, v6, v7);
    BUG();
  }
  if ( a3 <= 0x7F )
  {
    v3 = a1;
    if ( (unsigned int)a1 < a2 )
    {
      v3 = a1 + 1;
      *a1 = a3;
    }
    return v3;
  }
  if ( a3 <= 0x3FFF )
  {
    v3 = a1;
    if ( (unsigned int)a1 < a2 )
    {
      v3 = a1 + 1;
      *a1 = (unsigned __int16)(a3 | 0x8000) >> 8;
      if ( (unsigned int)(a1 + 1) < a2 )
      {
        a1[1] = a3;
        return a1 + 2;
      }
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFF )
    {
      v3 = a1 + 1;
      *a1 = -1;
      if ( (int)(a2 - (_DWORD)(a1 + 1)) < 0 )
        goto LABEL_28;
      if ( (unsigned int)v3 >= a2 )
        return v3;
      v3 = a1 + 2;
      a1[1] = HIBYTE(a3);
      if ( (unsigned int)(a1 + 2) < a2 )
      {
        v3 = a1 + 3;
        a1[2] = BYTE2(a3);
        if ( (int)(a2 - (_DWORD)(a1 + 3)) >= 0 )
        {
          if ( (unsigned int)v3 < a2 )
          {
            v3 = a1 + 4;
            a1[3] = BYTE1(a3);
            if ( (unsigned int)(a1 + 4) < a2 )
            {
              a1[4] = a3;
              return a1 + 5;
            }
          }
          return v3;
        }
LABEL_28:
        sub_80CDBA0();
      }
LABEL_27:
      if ( (int)(a2 - (_DWORD)v3) >= 0 )
        return v3;
      goto LABEL_28;
    }
    if ( (unsigned int)a1 >= a2 )
      return a1;
    v3 = a1 + 1;
    *a1 = (unsigned __int16)(HIWORD(a3) | 0xC000) >> 8;
    if ( (unsigned int)(a1 + 1) >= a2 )
      goto LABEL_27;
    v3 = a1 + 2;
    a1[1] = BYTE2(a3);
    if ( (int)(a2 - (_DWORD)(a1 + 2)) < 0 )
      goto LABEL_28;
    if ( (unsigned int)v3 < a2 )
    {
      v3 = a1 + 3;
      a1[2] = BYTE1(a3);
      if ( (unsigned int)(a1 + 3) < a2 )
      {
        a1[3] = a3;
        return a1 + 4;
      }
    }
  }
  return v3;
}
// 80CDDD8: variable 'v5' is possibly undefined
// 80CDDD8: variable 'v6' is possibly undefined
// 80CDDD8: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
