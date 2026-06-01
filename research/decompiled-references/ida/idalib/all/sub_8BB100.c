_QWORD *__fastcall sub_8BB100(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax

  v3 = a2;
  result = (_QWORD *)a1[11];
  v5 = (_QWORD *)a1[2];
  if ( a2 == result )
  {
    if ( a2 != v5 )
    {
      result = (_QWORD *)*a2;
      if ( *(a2 - 2) >= *a2 )
      {
        v6 = a2 - 3;
LABEL_14:
        v6[1] = v3[1];
        v9 = 0xAAAAAAAAAAAAAAABLL * (a2 - v3);
LABEL_15:
        memmove(v3, a2, a1[2] + 24LL * a1[3] - (_QWORD)a2);
        v10 = a1[3] - v9;
        a1[3] = v10;
        result = (_QWORD *)(a1[2] + 24 * v10);
        a1[11] = result;
      }
    }
  }
  else
  {
    a2 += 3;
    if ( v3 == v5 )
    {
      if ( result == a2 )
        return result;
    }
    else
    {
      v6 = v3 - 3;
      if ( v3 - 3 != result )
      {
        v7 = *(v3 - 2);
        v8 = *v3;
        if ( result == a2 || (result = (_QWORD *)v3[3], v3[1] < (unsigned __int64)result) )
        {
          if ( v7 < v8 )
            return result;
          goto LABEL_14;
        }
        if ( v7 >= v8 )
        {
          a2 = v3 + 6;
          v9 = 2;
          *(v3 - 2) = v3[4];
          goto LABEL_15;
        }
LABEL_10:
        v3[1] = v3[4];
        return sub_8B8C80(a1, (__int64)a2);
      }
      if ( v6 == a2 )
        return result;
    }
    result = (_QWORD *)v3[3];
    if ( v3[1] >= (unsigned __int64)result )
      goto LABEL_10;
  }
  return result;
}
