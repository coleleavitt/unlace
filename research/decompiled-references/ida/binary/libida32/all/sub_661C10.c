__int64 __fastcall sub_661C10(_QWORD *a1, unsigned int a2)
{
  unsigned __int8 v2; // al
  int i; // r13d
  unsigned int v5; // ebx
  __int64 v7; // rdx
  const char *v8; // rsi
  const char *v9; // rdx

  v2 = 0;
  for ( i = 2; ; i = 1 )
  {
    v5 = v2;
    if ( sub_6A9B20(a1[1], a1 + 2, a2, v2) > 0 )
    {
      v7 = a1[3];
      v8 = haystack;
      if ( v7 )
      {
        v8 = (const char *)a1[2];
        --v7;
      }
      if ( (unsigned __int8)sub_661700(a1 + 5, v8, v7, 1) )
      {
        v9 = haystack;
        if ( a1[6] )
          v9 = (const char *)a1[5];
        sub_6A9AB0(a1[1], a2, v9, v5);
      }
    }
    v2 = 1;
    if ( i == 1 )
      break;
  }
  return 0;
}

