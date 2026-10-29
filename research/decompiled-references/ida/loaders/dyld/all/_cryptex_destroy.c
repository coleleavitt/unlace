_QWORD *__fastcall cryptex_destroy(_QWORD *result)
{
  __int64 v1; // x21
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21

  v1 = *result;
  if ( *result )
  {
    v2 = result;
    closefd_optional(v1 + 24, "object directory");
    v3 = 0;
    v4 = v1 + 32;
    do
    {
      result = (_QWORD *)object_fd_close(v4 + v3);
      v3 += 16;
    }
    while ( v3 != 64 );
    *v2 = 0;
  }
  return result;
}
