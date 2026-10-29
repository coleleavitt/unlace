__int64 __fastcall sub_23F680(int a1, int a2, const char *a3, double a4)
{
  char *v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx

  if ( a2 < 0 )
    return 0;
  if ( a2 < (unsigned __int64)xmmword_8CC398 && dword_8CC5F0 < 0 )
  {
    v5 = (char *)(7LL * a2);
    v6 = qword_8CC390 + 56LL * a2;
    if ( a1 != 0 && a3 != nullptr )
    {
      if ( v6 )
      {
        v7 = qword_8CC430;
        v8 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
        if ( qword_8CC430 != v8 )
        {
          while ( a1 != *(_DWORD *)v7 )
          {
            v7 += 256;
            if ( v8 == v7 )
              return 0;
          }
          if ( v7 )
          {
            LOBYTE(v5) = a1 == 0;
            if ( sub_23F1C0(v7, a2, a4, v8, v5) )
              return sub_236190(v6, a3, (_QWORD *)(v7 + 40));
          }
        }
      }
    }
  }
  return 0;
}
