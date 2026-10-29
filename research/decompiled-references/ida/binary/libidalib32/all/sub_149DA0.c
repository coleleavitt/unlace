__int64 __fastcall sub_149DA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx

  if ( dword_244108 != -1 )
  {
    v3 = qword_251410;
    v4 = *(_DWORD *)(qword_251410 + 232LL * dword_244108);
    v5 = qword_251410 + 232 * xmmword_251418;
    if ( 232LL * (_QWORD)xmmword_251418 )
    {
      if ( v4 )
      {
        do
        {
          if ( v4 == *(_DWORD *)v3 )
            *(_BYTE *)(v3 + 112) = 1;
          v3 += 232;
        }
        while ( v3 != v5 );
      }
      else
      {
        do
        {
          *(_BYTE *)(v3 + 112) = 1;
          v3 += 232;
        }
        while ( v3 != v5 );
      }
    }
  }
  sub_149D30();
  return a2;
}

