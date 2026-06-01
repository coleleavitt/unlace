__int64 get_undo_state()
{
  char v0; // dl
  __int64 result; // rax

  v0 = sub_3FB5F0();
  result = 0;
  if ( v0 )
    return *(unsigned int *)(*(_QWORD *)(qword_2CCB598 + 1848) + 116LL);
  return result;
}
