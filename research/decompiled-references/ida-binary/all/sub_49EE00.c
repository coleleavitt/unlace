__int64 __fastcall sub_49EE00(__int64 a1)
{
  __int64 v1; // rax

  if ( !(_QWORD)xmmword_8D1C28 )
    return 0;
  v1 = 0;
  while ( *(_QWORD *)(*(_QWORD *)(qword_8D1C20 + 8 * v1) + 2392LL) != a1 )
  {
    if ( ++v1 == (_QWORD)xmmword_8D1C28 )
      return 0;
  }
  return *(_QWORD *)(qword_8D1C20 + 8 * v1);
}
