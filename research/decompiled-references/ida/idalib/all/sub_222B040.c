_WORD *__fastcall sub_222B040(__int64 *a1, char *a2, size_t a3)
{
  _WORD *result; // rax
  _WORD *v4; // rdx
  bool v5; // zf

  result = (_WORD *)sub_222AD60(a1, a2, a3);
  if ( result )
  {
    v4 = result + 4;
    v5 = *result == 7;
    result = nullptr;
    if ( v5 )
      return v4;
  }
  return result;
}
