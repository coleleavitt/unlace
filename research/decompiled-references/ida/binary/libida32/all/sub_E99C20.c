unsigned __int64 __fastcall sub_E99C20(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 i; // rdx

  result = sub_E99B50((__int64 *)(a1 + 2352), 8LL * (unsigned int)(2 * a2) + 32, 3u);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 77;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = a2;
  if ( a2 )
  {
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)(result + 8 * i + 32) = 0;
      *(_QWORD *)(result + 8LL * (unsigned int)(a2 + i) + 32) = 0;
      if ( i == a2 - 1 )
        break;
    }
  }
  return result;
}

