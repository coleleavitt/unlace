__int64 *__fastcall sub_401C10(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *result; // rax

  if ( a2 )
  {
    result = &qword_8CC800;
    if ( *(_QWORD *)(a1 + 280) != (_QWORD)xmmword_8CC810 )
      return (__int64 *)sub_400520(a1, xmmword_8CC810, a3, a4, a5, a6);
  }
  return result;
}
