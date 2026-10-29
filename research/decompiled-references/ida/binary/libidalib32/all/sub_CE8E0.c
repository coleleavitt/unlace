__int64 __fastcall sub_CE8E0(int a1, int a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx

  if ( a2 < 0 )
    return 0;
  if ( a2 < (unsigned __int64)xmmword_251378 && dword_2515A4 < 0 )
  {
    v4 = qword_251370 + 56LL * a2;
    if ( a1 != 0 && a3 != 0 )
    {
      if ( v4 )
      {
        v5 = qword_251410;
        v6 = qword_251410 + 232 * xmmword_251418;
        if ( qword_251410 != v6 )
        {
          while ( a1 != *(_DWORD *)v5 )
          {
            v5 += 232;
            if ( v6 == v5 )
              return 0;
          }
          if ( v5 && sub_CE480(v5, a2) )
            return sub_C6270(v4, a3, (_QWORD *)(v5 + 40));
        }
      }
    }
  }
  return 0;
}

