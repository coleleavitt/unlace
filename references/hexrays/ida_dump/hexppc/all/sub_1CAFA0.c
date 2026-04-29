_QWORD *__fastcall sub_1CAFA0(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *func; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return (_QWORD *)v1;
  if ( (*(_BYTE *)(a1 + 5) & 0x40) != 0 )
    return (_QWORD *)v1;
  func = (_QWORD *)get_func(*(_QWORD *)(a1 + 40));
  if ( !func )
    return (_QWORD *)v1;
  if ( *func == *(_QWORD *)(a1 + 40) )
    return func;
  return (_QWORD *)v1;
}
