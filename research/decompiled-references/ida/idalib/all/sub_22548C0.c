bool __fastcall sub_22548C0(unsigned int a1)
{
  char *v1; // rcx
  __int64 i; // rdx
  __int64 v3; // rax
  char *v4; // rsi
  bool result; // al

  v1 = (char *)&unk_26F96C0;
  for ( i = 21; ; i = v3 )
  {
    v3 = i >> 1;
    v4 = &v1[8 * (i >> 1)];
    if ( a1 <= *((_DWORD *)v4 + 1) )
      break;
    v1 = v4 + 8;
    v3 = i - v3 - 1;
    if ( v3 <= 0 )
      goto LABEL_6;
LABEL_3:
    ;
  }
  if ( v3 )
    goto LABEL_3;
LABEL_6:
  result = 0;
  if ( v1 != (char *)&unk_26F9768 )
    return a1 >= *(_DWORD *)v1;
  return result;
}
