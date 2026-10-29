__int64 __fastcall sub_14A560(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx

  if ( dword_245160 != -1 )
  {
    v3 = qword_252590;
    v4 = *(_DWORD *)(qword_252590 + ((__int64)dword_245160 << 8));
    v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( (_QWORD)xmmword_252598 << 8 )
    {
      if ( v4 )
      {
        do
        {
          if ( v4 == *(_DWORD *)v3 )
            *(_BYTE *)(v3 + 112) = 1;
          v3 += 256;
        }
        while ( v3 != v5 );
      }
      else
      {
        do
        {
          *(_BYTE *)(v3 + 112) = 1;
          v3 += 256;
        }
        while ( v3 != v5 );
      }
    }
  }
  sub_14A4F0();
  return a2;
}

