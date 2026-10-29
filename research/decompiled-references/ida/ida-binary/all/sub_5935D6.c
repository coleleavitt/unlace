_QWORD *__fastcall sub_5935D6(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // [rsp+10h] [rbp-10h]
  _QWORD *i; // [rsp+18h] [rbp-8h]

  result = (_QWORD *)a1[1];
  for ( i = result; i; i = v2 )
  {
    v2 = (_QWORD *)*i;
    sub_59153A((unsigned __int64)i, *a1 * i[1]);
    result = v2;
  }
  return result;
}
