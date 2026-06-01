__int64 __fastcall sub_225A700(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // ebp
  _WORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // r15
  __int64 i; // rbp
  __int64 v11; // rdi

  v6 = 0;
  if ( a4 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 1u )
          break;
        ++v6;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v6 )
          goto LABEL_4;
      }
      ++v6;
      *v7 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v6 );
  }
LABEL_4:
  result = sub_995540(a2, "OverlayFileSystem\n");
  if ( a3 )
  {
    if ( a3 == 1 )
      a3 = 0;
    v9 = *(_QWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 24);
    for ( i = v9 + 8 * result;
          v9 != i;
          result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 128LL))(
                     v11,
                     a2,
                     a3,
                     (unsigned int)(a4 + 1)) )
    {
      v11 = *(_QWORD *)(i - 8);
      i -= 8;
    }
  }
  return result;
}
