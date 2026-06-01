_QWORD *__fastcall find_ioport(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // rax
  _QWORD *result; // rax

  v2 = a1[1];
  if ( !v2 )
    return nullptr;
  v3 = *a1;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    result = (_QWORD *)(v3 + 88 * v5);
    if ( *result == a2 )
      break;
    v5 = ++v4;
    if ( v4 >= v2 )
      return nullptr;
  }
  return result;
}
