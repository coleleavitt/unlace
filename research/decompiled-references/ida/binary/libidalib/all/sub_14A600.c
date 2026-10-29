__int64 __fastcall sub_14A600(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = qword_252590;
  v2 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( (_QWORD)xmmword_252598 << 8 )
  {
    if ( a1 )
    {
      do
      {
        while ( *(_DWORD *)result == a1 )
        {
          *(_BYTE *)(result + 112) = 1;
          result += 256;
          if ( result == v2 )
            return result;
        }
        result += 256;
      }
      while ( result != v2 );
    }
    else
    {
      do
      {
        *(_BYTE *)(result + 112) = 1;
        result += 256;
      }
      while ( result != v2 );
    }
  }
  return result;
}

