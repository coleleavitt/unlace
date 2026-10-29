_WORD *__fastcall sub_2222050(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _WORD *result; // rax
  int v6; // ebp

  result = *(_WORD **)(a2 + 32);
  if ( a4 )
  {
    v6 = 0;
    do
    {
      while ( *(_QWORD *)(a2 + 24) - (_QWORD)result <= 1u )
      {
        ++v6;
        sub_227BF10(a2, "  ", 2);
        result = *(_WORD **)(a2 + 32);
        if ( a4 == v6 )
          goto LABEL_5;
      }
      ++v6;
      *result = 8224;
      result = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
      *(_QWORD *)(a2 + 32) = result;
    }
    while ( a4 != v6 );
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 0xAu )
      goto LABEL_9;
    return (_WORD *)sub_227BF10(a2, "FileSystem\n", 11);
  }
LABEL_5:
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)result <= 0xAu )
    return (_WORD *)sub_227BF10(a2, "FileSystem\n", 11);
LABEL_9:
  qmemcpy(result, "FileSystem\n", 11);
  *(_QWORD *)(a2 + 32) += 11LL;
  return result;
}
