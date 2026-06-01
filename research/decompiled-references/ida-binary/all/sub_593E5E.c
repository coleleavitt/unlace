_QWORD **__fastcall sub_593E5E(_QWORD **a1)
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
    v3 = sub_594660(v4);
    v2 = sub_59467E(a1);
    sub_59468C(v2, v3);
    sub_5946B2(a1, v4);
  }
  return result;
}
