__int64 __fastcall sub_CFEA0(int a1, int a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx

  if ( a2 < 0 )
    return 0;
  if ( a2 < (unsigned __int64)xmmword_2524F8 && dword_25274C < 0 )
  {
    v4 = qword_2524F0 + 56LL * a2;
    if ( a1 != 0 && a3 != 0 )
    {
      if ( v4 )
      {
        v5 = qword_252590;
        v6 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
        if ( qword_252590 != v6 )
        {
          while ( a1 != *(_DWORD *)v5 )
          {
            v5 += 256;
            if ( v6 == v5 )
              return 0;
          }
          if ( v5 && sub_CFA40(v5, a2) )
            return sub_C7700(v4, a3, (_QWORD *)(v5 + 40));
        }
      }
    }
  }
  return 0;
}

