__int64 sub_1C7660()
{
  __int64 result; // rax
  unsigned __int8 v1; // [rsp+Fh] [rbp-9h]

  result = create_undo_point();
  if ( (_BYTE)result )
  {
    v1 = result;
    mark_builtin_widgets(0x40000000000000LL, 0, 1);
    return v1;
  }
  return result;
}
