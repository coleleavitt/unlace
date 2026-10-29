__int64 __fastcall sub_369240(__int64 a1, __int64 a2)
{
  _QWORD *func; // rax

  func = (_QWORD *)get_func(*(_QWORD *)(a1 + 8));
  if ( func )
    *(_QWORD *)(a2 + 8) = *func;
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
