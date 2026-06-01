unsigned __int64 __fastcall sub_EBD8D0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 result; // rax
  __int64 i; // rdx

  result = sub_EBD890((__int64 *)(a1 + 2352), 8LL * (unsigned int)(2 * a3) + 32, 3u);
  *(_DWORD *)result = a4;
  *(_DWORD *)(result + 4) = a6;
  *(_DWORD *)(result + 8) = 77;
  *(_DWORD *)(result + 12) = a5;
  *(_QWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 24) = a3;
  if ( a3 )
  {
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)(result + 8 * i + 32) = 0;
      *(_QWORD *)(result + 8LL * (unsigned int)(a3 + i) + 32) = 0;
      if ( i == a3 - 1 )
        break;
    }
  }
  return result;
}
