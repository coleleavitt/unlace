bool __fastcall sub_4A3510(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx

  v1 = (_QWORD *)qword_8D1C20;
  v2 = (_QWORD *)(qword_8D1C20 + 8 * xmmword_8D1C28);
  if ( (_QWORD *)qword_8D1C20 == v2 )
    return 0;
  while ( a1 != *v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  return v2 != v1;
}
