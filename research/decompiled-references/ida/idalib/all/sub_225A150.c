__int64 __fastcall sub_225A150(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int i; // ebp
  _WORD *v6; // rdx

  if ( a4 )
  {
    for ( i = 0; i != a4; ++i )
    {
      while ( 1 )
      {
        v6 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v6 > 1u )
          break;
        ++i;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == i )
          return sub_995540(a2, "InMemoryFileSystem\n");
      }
      *v6 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
  }
  return sub_995540(a2, "InMemoryFileSystem\n");
}
