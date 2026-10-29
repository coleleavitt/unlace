__int64 __fastcall sub_22B0D00(unsigned int a1)
{
  char **v1; // rcx
  __int64 i; // rdx
  __int64 v3; // rax
  char **v4; // rsi

  v1 = &off_2BF5820;
  for ( i = 70; ; i = v3 )
  {
    v3 = i >> 1;
    v4 = &v1[5 * (i >> 1)];
    if ( a1 <= *((_DWORD *)v4 + 8) )
      break;
    v1 = v4 + 5;
    v3 = i - v3 - 1;
    if ( v3 <= 0 )
      goto LABEL_6;
LABEL_3:
    ;
  }
  if ( v3 )
    goto LABEL_3;
LABEL_6:
  if ( v1 == (char **)&unk_2BF6310 || a1 != *((_DWORD *)v1 + 8) )
    return 0;
  else
    return *((unsigned int *)v1 + 9);
}
