_QWORD *__fastcall sub_9EE560(_QWORD *a1, _BYTE *a2, size_t a3)
{
  _QWORD *v4; // r8
  size_t v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r8
  _BYTE *v9; // rdi

  v4 = a1 + 2;
  v5 = a1[1];
  v6 = (_QWORD *)*a1;
  v7 = a3 + v5;
  if ( v6 == v4 )
    v8 = 15;
  else
    v8 = a1[2];
  if ( v7 > v8 )
  {
    sub_998B30((__int64)a1, v5, 0, a2, a3);
    v6 = (_QWORD *)*a1;
  }
  else if ( a3 )
  {
    v9 = (char *)v6 + v5;
    if ( a3 == 1 )
      *v9 = *a2;
    else
      memcpy(v9, a2, a3);
    v6 = (_QWORD *)*a1;
  }
  a1[1] = v7;
  *((_BYTE *)v6 + v7) = 0;
  return a1;
}
