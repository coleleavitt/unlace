_QWORD *__fastcall sub_52D120(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 1584);
  v2 = (_QWORD *)(v1 + 8);
  v3 = (_QWORD *)(v1 + 64);
  do
  {
    result = (_QWORD *)*v2;
    if ( *v2 )
      result = (_QWORD *)save_dirtree(*result);
    ++v2;
  }
  while ( v2 != v3 );
  return result;
}
