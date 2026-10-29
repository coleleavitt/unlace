_QWORD **__fastcall sub_593DA0(_QWORD **a1)
{
  _QWORD **result; // rax
  __int64 v2; // rax
  __int64 v3; // [rsp+18h] [rbp-18h]
  _QWORD *v4; // [rsp+20h] [rbp-10h]
  _QWORD *v5; // [rsp+28h] [rbp-8h]

  v5 = *a1;
  while ( 1 )
  {
    result = a1;
    if ( v5 == a1 )
      break;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    v3 = sub_59456C(v4);
    v2 = sub_59458A(a1);
    sub_594598(v2, v3);
    sub_5945BE(a1, v4);
  }
  return result;
}
