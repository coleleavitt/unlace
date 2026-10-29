__int64 __fastcall sub_7F02D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // r15
  unsigned int v8; // r13d
  char byte; // al

  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v4;
  if ( (debug & 4) != 0 )
    sub_365330();
  if ( (int)v4 <= 0 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      while ( !*(_BYTE *)(v5 + 2 * v7) )
      {
        if ( (debug & 4) != 0 )
          sub_365330();
        if ( v6 <= (int)++v7 )
        {
LABEL_10:
          if ( (debug & 4) != 0 )
            sub_365330();
          return v8;
        }
      }
      byte = get_byte((unsigned int)(a3 + v7));
      if ( (debug & 4) != 0 )
        sub_365330();
      if ( *(_BYTE *)(v5 + 2 * v7 + 1) != byte )
        break;
      ++v7;
      ++v8;
      if ( v6 <= (int)v7 )
        goto LABEL_10;
    }
    if ( (debug & 4) != 0 )
      sub_365330();
    return (unsigned int)-1;
  }
}

