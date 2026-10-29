_QWORD *__fastcall sub_20BE180(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v1 = (_QWORD *)sub_208F990(a1, 69);
  if ( v1 )
    sub_208DD30(v1);
  v2 = (_QWORD *)sub_208F990(a1, 71);
  if ( v2 )
    sub_208DD30(v2);
  v3 = (_QWORD *)sub_208F990(a1, 68);
  if ( v3 )
    sub_208DD30(v3);
  result = (_QWORD *)sub_208F990(a1, 70);
  if ( result )
    return (_QWORD *)sub_208DD30(result);
  return result;
}
