/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008390
// Address: 0x0000000100008390

//----- (0000000100008390) ----------------------------------------------------
char __fastcall sub_100008390(_QWORD *a1)
{
  _QWORD *v1; // r15
  char result; // al
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  bool v5; // zf

  v1 = (_QWORD *)a1[151];
  if ( v1 == a1 + 152 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 688LL))(a1, *((unsigned int *)v1 + 10));
    if ( !result )
      break;
    v3 = (_QWORD *)v1[1];
    if ( v3 )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
    else
    {
      do
      {
        v4 = (_QWORD *)v1[2];
        v5 = *v4 == (_QWORD)v1;
        v1 = v4;
      }
      while ( !v5 );
    }
    v1 = v4;
    if ( v4 == a1 + 152 )
      return result;
  }
  return 0;
}
