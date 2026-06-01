_QWORD *__fastcall sub_ACC740(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdx
  _QWORD *result; // rax

  v1 = a1[1];
  v2 = (_QWORD *)*a1;
  v3 = v1 + 1;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v4 = 15;
  else
    v4 = a1[2];
  if ( v3 > v4 )
  {
    sub_998B30((__int64)a1, a1[1], 0, nullptr, 1u);
    v2 = (_QWORD *)*a1;
  }
  *((_BYTE *)v2 + v1) = 32;
  result = (_QWORD *)*a1;
  a1[1] = v3;
  *((_BYTE *)result + v1 + 1) = 0;
  return result;
}
