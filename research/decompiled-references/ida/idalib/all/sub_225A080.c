__int64 __fastcall sub_225A080(__int64 a1, __int64 a2, __int64 a3, int a4)
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
          goto LABEL_5;
      }
      *v6 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
  }
LABEL_5:
  sub_995540(a2, "RealFileSystem using ");
  if ( *(_BYTE *)(a1 + 328) )
    sub_995540(a2, "own");
  else
    sub_995540(a2, "process");
  return sub_995540(a2, " CWD\n");
}
