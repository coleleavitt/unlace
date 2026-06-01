__int64 __fastcall llong_scan(char *a1, int a2, _QWORD *a3)
{
  char *v3; // r14
  __int64 v5; // rbp
  int i; // ebx
  int v8; // ebx

  v3 = a1;
  v5 = 0;
  for ( i = *a1; (unsigned int)i <= 0x7F; i = *v3 )
  {
    if ( !isalnum(i) )
      break;
    if ( i > 57 )
    {
      if ( i > 96 )
        i -= 32;
      i -= 7;
    }
    v8 = i - 48;
    if ( v8 >= a2 )
      break;
    ++v3;
    v5 = v8 + a2 * v5;
  }
  if ( a3 )
    *a3 = v3;
  return v5;
}

