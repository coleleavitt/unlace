__int64 sub_179060()
{
  __int64 v0; // rsi
  __int64 undo_param; // rax

  if ( !qword_8C9658 )
  {
    undo_param = get_undo_param(2);
    if ( !undo_param )
      undo_param = -1;
    qword_8C9658 = undo_param;
  }
  v0 = 0;
  if ( !get_undo_param(0) )
    v0 = qword_8C9658;
  return (unsigned __int8)set_undo_param(2, v0);
}
