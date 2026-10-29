__int64 sub_104920()
{
  __int64 undo_param; // rax

  if ( !qword_252C10 )
  {
    undo_param = get_undo_param();
    if ( !undo_param )
      undo_param = -1;
    qword_252C10 = undo_param;
  }
  get_undo_param();
  return (unsigned __int8)set_undo_param();
}

