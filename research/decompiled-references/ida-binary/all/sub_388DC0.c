__int64 __fastcall sub_388DC0(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = qword_8CC430;
  v2 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( (_QWORD)xmmword_8CC438 << 8 )
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
