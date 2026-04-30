__int64 sub_3DA7E0()
{
  __int64 v0; // rax

  if ( !(_QWORD)xmmword_8D1248 )
    return 0;
  v0 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(qword_8D1240 + 8 * v0) + 1116LL) != -1 )
  {
    if ( ++v0 == (_QWORD)xmmword_8D1248 )
      return 0;
  }
  return *(_QWORD *)(qword_8D1240 + 8 * v0);
}
