__int64 __fastcall sub_28D560(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r12
  __int64 func; // rax

  v4 = (_QWORD *)*a4;
  v5 = *a4 + 8LL * a4[1];
  if ( v5 == *a4 )
    return 1;
  v6 = 0;
  do
  {
    func = get_func(*v4);
    if ( !(unsigned int)sub_28B520(func) )
      return (unsigned int)v6 + 1;
    ++v4;
    v6 = 1;
  }
  while ( (_QWORD *)v5 != v4 );
  return 2;
}
