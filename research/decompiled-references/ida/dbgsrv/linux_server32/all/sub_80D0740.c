/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0740
// Address: 0x080D0740

//----- (080D0740) --------------------------------------------------------
unsigned int __cdecl sub_80D0740(unsigned int a1, char *a2, int a3)
{
  unsigned int v4; // esi
  _BYTE *v5; // eax
  char v6; // cl
  int v8; // [esp-Ch] [ebp-18h]
  int v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-4h] [ebp-10h]

  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v8, v9, v10);
LABEL_13:
    BUG();
  }
  v4 = a1 + a3;
  if ( a1 >= a1 + a3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(520, v8, v9, v10);
    goto LABEL_13;
  }
  v5 = (_BYTE *)a1;
  if ( a1 == v4 - 1 )
  {
LABEL_8:
    *(_BYTE *)(v4 - 1) = 0;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *v5 = v6;
      if ( !v6 )
        return a1;
      if ( ++v5 == (_BYTE *)(v4 - 1) )
        goto LABEL_8;
    }
  }
}
// 80D07C1: variable 'v8' is possibly undefined
// 80D07C1: variable 'v9' is possibly undefined
// 80D07C1: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
