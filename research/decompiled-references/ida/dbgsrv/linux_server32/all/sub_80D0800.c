/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0800
// Address: 0x080D0800

//----- (080D0800) --------------------------------------------------------
_BYTE *__cdecl sub_80D0800(unsigned int a1, char *a2, int a3)
{
  _BYTE *result; // eax
  unsigned int v5; // esi
  char v6; // cl
  int v7; // [esp-10h] [ebp-18h]
  int v8; // [esp-Ch] [ebp-14h]
  int v9; // [esp-8h] [ebp-10h]

  result = (_BYTE *)a1;
  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v7, v8, v9);
LABEL_13:
    BUG();
  }
  v5 = a1 + a3;
  if ( a1 >= a1 + a3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(520, v7, v8, v9);
    goto LABEL_13;
  }
  if ( a1 == v5 - 1 )
  {
LABEL_8:
    *(_BYTE *)(v5 - 1) = 0;
    return (_BYTE *)(v5 - 1);
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *result = v6;
      if ( !v6 )
        break;
      if ( ++result == (_BYTE *)(v5 - 1) )
        goto LABEL_8;
    }
  }
  return result;
}
// 80D0883: variable 'v7' is possibly undefined
// 80D0883: variable 'v8' is possibly undefined
// 80D0883: variable 'v9' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
