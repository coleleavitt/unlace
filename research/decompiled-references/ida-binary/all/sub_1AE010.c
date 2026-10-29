__int64 __fastcall next_ah_t__::vfunc_1(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  char v4; // r9
  char *v5; // rsi
  char *v6; // rax
  __int64 v7; // rax

  v2 = 6;
  if ( a2[2] == 31 )
  {
    if ( *(_QWORD *)a2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
      v2 = 7;
      if ( v3 )
      {
        v4 = *(_BYTE *)(a1 + 12);
        v5 = (char *)qword_8CAE00 + 8 * xmmword_8CAE08;
        if ( qword_8CAE00 == v5 )
        {
          if ( !v4 )
            return (unsigned __int64)xmmword_8CAE08 < 2 ? 7 : 3;
        }
        else
        {
          v6 = (char *)qword_8CAE00;
          do
          {
            if ( v3 == *(_QWORD *)v6 )
              break;
            v6 += 8;
          }
          while ( v5 != v6 );
          v7 = (v6 - (_BYTE *)qword_8CAE00) >> 3;
          if ( v4 )
          {
            return 4 * (unsigned int)((int)v7 <= 0) + 3;
          }
          else
          {
            v2 = 7;
            if ( (unsigned __int64)xmmword_8CAE08 > 1 )
              return (int)v7 < (unsigned __int64)(xmmword_8CAE08 - 1) ? 3 : 7;
          }
        }
      }
    }
  }
  return v2;
}
