_QWORD *__fastcall sub_514C30(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 1392);
  v3 = (_QWORD *)(v2 + 8);
  v4 = (_QWORD *)(v2 + 64);
  do
  {
    result = (_QWORD *)*v3;
    if ( *v3 )
      result = (_QWORD *)sub_75D1E0(*result, a2);
    ++v3;
  }
  while ( v3 != v4 );
  return result;
}

