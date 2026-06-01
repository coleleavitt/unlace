__int64 sub_104680()
{
  __int64 undo_param; // rax

  if ( !qword_251A70 )
  {
    undo_param = get_undo_param();
    if ( !undo_param )
      undo_param = -1;
    qword_251A70 = undo_param;
  }
  get_undo_param();
  return (unsigned __int8)set_undo_param();
}

