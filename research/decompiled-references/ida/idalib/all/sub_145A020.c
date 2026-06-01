__int64 *__fastcall sub_145A020(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rdi
  char *v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 *result; // rax

  v4 = (__int64 *)a1[1];
  v5 = (char *)a2 - *a1;
  if ( v4 == (__int64 *)a1[2] )
  {
    sub_1459ED0((__int64)a1, a2, a3);
    return (__int64 *)&v5[*a1];
  }
  else
  {
    v6 = *a3;
    v7 = v4 + 1;
    if ( v4 == a2 )
    {
      *v4 = v6;
      a1[1] = v7;
      return v4;
    }
    else
    {
      *v4 = *(v4 - 1);
      a1[1] = v7;
      result = v4 - 1;
      if ( a2 != v4 - 1 )
      {
        memmove(a2 + 1, a2, (char *)(v4 - 1) - (char *)a2);
        result = (__int64 *)&v5[*a1];
      }
      *a2 = v6;
    }
  }
  return result;
}
