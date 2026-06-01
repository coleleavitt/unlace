__int64 __fastcall sub_187C20(__int64 a1, const char *a2)
{
  unsigned int v2; // r14d
  int i; // r12d
  const char *v5; // rcx
  __int64 v6; // rsi
  size_t v7; // r8
  char *v8; // rax
  size_t v9; // rax

  v2 = 0;
  for ( i = 1; ; i += sub_187B20(a1, v6, i, v5, v7) )
  {
    v8 = strchr(a2, 10);
    if ( !v8 )
      break;
    v5 = a2;
    v6 = v2;
    v7 = v8 - a2;
    a2 = v8 + 1;
    ++v2;
  }
  v9 = strlen(a2);
  return i + (unsigned int)sub_187B20(a1, v2, i, a2, v9) - 1;
}

