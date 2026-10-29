_BOOL4 __fastcall sub_64C9C0(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rax
  const char **v7; // rbp

  v2 = *(_QWORD *)(a1 + 1704);
  v3 = *(_QWORD *)(v2 + 16);
  if ( v3 <= 1 )
    return 0;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = 1;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(const char ***)(v4 + 8 * v6);
    if ( !strcmp(*v7, a2) )
      break;
    v6 = ++v5;
    if ( v5 >= v3 )
      return 0;
  }
  return v7 != nullptr;
}
