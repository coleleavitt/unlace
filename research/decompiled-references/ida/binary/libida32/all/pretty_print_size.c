__int64 __fastcall pretty_print_size(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  char *v6; // rax
  const char *v7; // rdx
  char v8; // cl
  char v10; // [rsp+0h] [rbp-8h]

  if ( a3 <= 0x270F )
    return (int)qsnprintf((int)a1, a2, (int)"%llu", a3, a5, a6, v10);
  if ( a3 <= 0x18FCB )
    return (int)qsnprintf((int)a1, a2, (int)"%0.01fk", a3, a5, a6, v10);
  if ( a3 <= 0xF9FFF )
    return (int)qsnprintf((int)a1, a2, (int)"%lluk", a3 >> 10, a5, a6, v10);
  if ( a3 <= (unsigned __int64)&loc_9FEB84 )
    return (int)qsnprintf((int)a1, a2, (int)"%0.02fM", a3, a5, a6, v10);
  if ( a3 <= 0x63F3332 )
    return (int)qsnprintf((int)a1, a2, (int)"%0.01fM", a3, a5, a6, v10);
  if ( a3 <= 0x3E7FFFFF )
    return (int)qsnprintf((int)a1, a2, (int)"%lluM", a3 >> 20, a5, a6, v10);
  if ( a3 <= 0x27FAE1479LL )
    return (int)qsnprintf((int)a1, a2, (int)"%0.02fG", a3, a5, a6, v10);
  if ( a3 <= 0x18FCCCCCCBLL )
    return (int)qsnprintf((int)a1, a2, (int)"%0.01fG", a3, a5, a6, v10);
  if ( a3 <= 0xF9FFFFFFFFLL )
    return (int)qsnprintf((int)a1, a2, (int)"%lluG", a3 >> 30, a5, a6, v10);
  if ( a3 <= 0x9FEB851EB84LL )
    return (int)qsnprintf((int)a1, a2, (int)"%0.02fT", a3, a5, a6, v10);
  if ( a3 <= 0x63F333333332LL )
    return (int)qsnprintf((int)a1, a2, (int)"%0.01fT", a3, a5, a6, v10);
  if ( a3 <= 0x3E7FFFFFFFFFFLL )
    return (int)qsnprintf((int)a1, a2, (int)"%lluT", a3 >> 40, a5, a6, v10);
  if ( a2 <= 0 )
  {
    if ( !under_debugger )
      interr(520);
    BUG();
  }
  if ( a2 == 1 )
  {
    *a1 = 0;
    return 0;
  }
  else
  {
    *a1 = 105;
    v6 = a1;
    v7 = "nfty";
    do
    {
      v8 = *v7;
      ++v6;
      ++v7;
      *v6 = v8;
    }
    while ( v8 );
    return v6 - a1;
  }
}

