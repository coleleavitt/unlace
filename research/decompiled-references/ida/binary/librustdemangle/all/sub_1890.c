unsigned __int64 __fastcall sub_1890(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // r13
  __int64 i; // rbp

  result = *(_QWORD *)(a1 + 32);
  if ( result < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + result) == 71 )
  {
    *(_QWORD *)(a1 + 32) = result + 1;
    result = sub_1430(a1);
    v2 = result;
    if ( result != -1 )
    {
      if ( !*(_QWORD *)(a1 + 40) )
        (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("for<", 4, *(_QWORD *)(a1 + 16));
      for ( i = 0; ; ++i )
      {
        ++*(_QWORD *)(a1 + 64);
        result = sub_1740(a1, 1);
        if ( i == v2 )
          break;
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
      }
      if ( !*(_QWORD *)(a1 + 40) )
        return (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("> ", 2, *(_QWORD *)(a1 + 16));
    }
  }
  return result;
}

