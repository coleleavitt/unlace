__int64 __fastcall sub_36B870(__int64 a1, __int64 a2)
{
  _QWORD *next_fchunk; // rax

  next_fchunk = (_QWORD *)get_next_fchunk(*(_QWORD *)(a1 + 8));
  if ( next_fchunk )
    *(_QWORD *)(a2 + 8) = *next_fchunk;
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
