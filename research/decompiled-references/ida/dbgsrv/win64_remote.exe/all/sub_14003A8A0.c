/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A8A0
// Address: 0x000000014003A8A0

//----- (000000014003A8A0) ----------------------------------------------------
char *__fastcall sub_14003A8A0(__int64 a1)
{
  char *v2; // rsi
  char v3; // di
  char *v4; // rax
  char v5; // di
  _BYTE *v6; // rcx
  _BYTE *i; // rcx

  while ( 1 )
  {
    v2 = *(char **)(a1 + 8);
    v3 = *v2;
    if ( *v2 != 32 && (unsigned __int8)(v3 - 9) > 4u )
      break;
    *(_QWORD *)(a1 + 8) = v2 + 1;
  }
  if ( v3 >= 0 && isalpha((unsigned __int8)*v2) || v3 == 95 || v3 == 36 )
  {
    while ( 1 )
    {
      v4 = *(char **)(a1 + 8);
      v5 = *v4;
      if ( (*v4 < 0 || !isalnum((unsigned __int8)*v4)) && v5 != 95 && v5 != 36 )
        break;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  v6 = *(_BYTE **)(a1 + 8);
  *(_BYTE *)(a1 + 644) = *v6;
  if ( *v6 )
  {
    *v6 = 0;
    for ( i = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL); ; ++i )
    {
      *(_QWORD *)(a1 + 8) = i;
      if ( *i != 32 && (unsigned __int8)(*i - 9) > 4u )
        break;
    }
  }
  return v2;
}
