_BYTE *__fastcall sub_722380(__int64 a1, _BYTE *a2)
{
  _BYTE *result; // rax

  if ( !*a2 )
    return (_BYTE *)sub_5FF0F0(a1, ", ");
  *a2 = 0;
  result = *(_BYTE **)(a1 + 32);
  if ( *(_BYTE **)(a1 + 24) == result )
    return (_BYTE *)sub_26240F0(a1, "(", 1);
  *result = 40;
  ++*(_QWORD *)(a1 + 32);
  return result;
}

