__int64 __fastcall sub_36B840(__int64 a1, __int64 a2)
{
  _QWORD *prev_fchunk; // rax

  prev_fchunk = (_QWORD *)get_prev_fchunk(*(_QWORD *)(a1 + 8));
  if ( prev_fchunk )
    *(_QWORD *)(a2 + 8) = *prev_fchunk;
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
