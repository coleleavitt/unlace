_QWORD *__fastcall sub_593538(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // [rsp+18h] [rbp-8h]

  v3 = (_QWORD *)sub_5917F2(0, a2 * *a1, 3, 34, -1, 0);
  if ( v3 == (_QWORD *)-1LL )
    return nullptr;
  *v3 = a1[1];
  v3[1] = a2;
  a1[1] = v3;
  a1[4] += a2;
  return v3;
}
