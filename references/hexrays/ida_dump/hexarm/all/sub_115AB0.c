__int64 __fastcall sub_115AB0(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_BYTE *)a1 == 4 )
  {
    result = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)(*(_DWORD *)result - 17) > 1 )
    {
      while ( result )
      {
        if ( (unsigned int)(*(_DWORD *)result - 8) > 2 || *(_BYTE *)(result + 32) != 4 )
          return 0;
        result = *(_QWORD *)(result + 40);
        if ( (unsigned int)(*(_DWORD *)result - 17) <= 1 )
          return result;
      }
    }
  }
  return result;
}
