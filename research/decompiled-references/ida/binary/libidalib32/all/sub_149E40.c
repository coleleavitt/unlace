__int64 __fastcall sub_149E40(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = qword_251410;
  v2 = qword_251410 + 232 * xmmword_251418;
  if ( 232LL * (_QWORD)xmmword_251418 )
  {
    if ( a1 )
    {
      do
      {
        while ( *(_DWORD *)result == a1 )
        {
          *(_BYTE *)(result + 112) = 1;
          result += 232;
          if ( result == v2 )
            return result;
        }
        result += 232;
      }
      while ( result != v2 );
    }
    else
    {
      do
      {
        *(_BYTE *)(result + 112) = 1;
        result += 232;
      }
      while ( result != v2 );
    }
  }
  return result;
}

