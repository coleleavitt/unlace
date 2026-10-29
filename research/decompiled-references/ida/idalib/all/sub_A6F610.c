_QWORD *__fastcall sub_A6F610(_QWORD *a1, char a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  _QWORD *result; // rax

  v2 = a1[1];
  v3 = (_QWORD *)*a1;
  v4 = v2 + 1;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v5 = 15;
  else
    v5 = a1[2];
  if ( v4 > v5 )
  {
    sub_998B30((__int64)a1, a1[1], 0, nullptr, 1u);
    v3 = (_QWORD *)*a1;
  }
  *((_BYTE *)v3 + v2) = a2;
  result = (_QWORD *)*a1;
  a1[1] = v4;
  *((_BYTE *)result + v2 + 1) = 0;
  return result;
}
