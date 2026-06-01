_QWORD *__fastcall object_fd_close(_QWORD *result)
{
  _QWORD *v1; // x19

  if ( *result )
  {
    v1 = result;
    result = (_QWORD *)closefd(result + 1, "object");
    *v1 = 0;
  }
  return result;
}
