__int64 __fastcall sub_36BD20(__int64 a1, __int64 a2)
{
  _QWORD *next_func; // rax

  next_func = (_QWORD *)get_next_func(*(_QWORD *)(a1 + 8));
  if ( next_func )
    *(_QWORD *)(a2 + 8) = *next_func;
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
