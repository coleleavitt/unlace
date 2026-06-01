__int64 __fastcall sub_36BCF0(__int64 a1, __int64 a2)
{
  _QWORD *prev_func; // rax

  prev_func = (_QWORD *)get_prev_func(*(_QWORD *)(a1 + 8));
  if ( prev_func )
    *(_QWORD *)(a2 + 8) = *prev_func;
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
