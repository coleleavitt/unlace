char __fastcall sub_1465EE0(__int64 **a1, int *a2, __m128i a3, double a4)
{
  bool v4; // zf
  __int64 (*v5)(void); // rax
  char result; // al

  v4 = *((_BYTE *)a1 + 26) == 0;
  *((_BYTE *)a1 + 25) = 1;
  if ( v4 )
  {
    result = sub_14634E0(a1[1], a2);
    *((_BYTE *)a1 + 25) = 0;
  }
  else
  {
    v5 = (__int64 (*)(void))(*a1)[3];
    if ( (char *)v5 == (char *)sub_13DB660 )
      result = sub_13DB5F0(a1, (__int64)a2, a3, a4);
    else
      result = v5();
    *((_BYTE *)a1 + 25) = 0;
  }
  return result;
}
