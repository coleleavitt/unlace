__int64 __fastcall sub_3A5C90(char *s2)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1384);
  v2 = *(_QWORD *)(v1 + 224);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(v1 + 216);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = haystack;
    v8 = v3 + 24 * v6;
    if ( *(_QWORD *)(v8 + 8) )
      v7 = *(const char **)v8;
    if ( !strcmp(v7, s2) )
      break;
    v6 = (int)++v5;
    if ( (int)v5 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v5;
}

