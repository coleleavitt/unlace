void __fastcall sub_2D4FA0(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 *func; // rax
  unsigned __int64 not_tail; // rax
  int v7; // r14d
  const char *v8; // r15

  v3 = 0;
  func = (unsigned __int64 *)get_func(a2);
  if ( func )
    v3 = *func;
  if ( *a3 <= 0 )
  {
    v8 = (const char *)a2;
  }
  else
  {
    not_tail = a2;
    v7 = 0;
    while ( 1 )
    {
      v8 = (const char *)not_tail;
      not_tail = prev_not_tail(not_tail);
      if ( not_tail == -1 || not_tail < v3 )
        break;
      if ( *a3 <= ++v7 )
      {
        v8 = (const char *)not_tail;
        break;
      }
    }
  }
  sub_2D4CE0(a1, v8, a3, a2, 0);
}
