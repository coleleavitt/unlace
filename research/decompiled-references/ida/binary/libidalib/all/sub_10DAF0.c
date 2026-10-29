__int64 sub_10DAF0()
{
  __int64 result; // rax
  unsigned __int8 v1; // [rsp+Fh] [rbp-9h]

  result = create_undo_point();
  if ( (_BYTE)result )
  {
    v1 = result;
    mark_builtin_widgets();
    return v1;
  }
  return result;
}

