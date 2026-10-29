unsigned __int8 *__fastcall sub_B2FAF0(unsigned __int8 **a1, unsigned __int8 (__fastcall *a2)(_QWORD))
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // rbp
  unsigned __int8 *i; // rbp
  unsigned __int8 *v7; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v9; // rdx
  signed __int64 v10; // r12
  unsigned __int8 *v11; // rcx
  size_t v12; // rdx
  unsigned __int8 *v13; // rsi

  v2 = (__int64)a1[1];
  v3 = *a1;
  v4 = &(*a1)[v2];
  if ( v2 >> 2 > 0 )
  {
    v5 = &v3[4 * (v2 >> 2)];
    while ( !a2(*v3) )
    {
      if ( a2(v3[1]) )
      {
        ++v3;
        goto LABEL_8;
      }
      if ( a2(v3[2]) )
      {
        v3 += 2;
        goto LABEL_8;
      }
      if ( a2(v3[3]) )
      {
        v3 += 3;
        goto LABEL_8;
      }
      v3 += 4;
      if ( v5 == v3 )
      {
        v2 = v4 - v3;
        goto LABEL_22;
      }
    }
    goto LABEL_8;
  }
LABEL_22:
  if ( v2 == 2 )
  {
LABEL_29:
    if ( a2(*v3) )
      goto LABEL_8;
    ++v3;
    goto LABEL_31;
  }
  if ( v2 == 3 )
  {
    if ( a2(*v3) )
      goto LABEL_8;
    ++v3;
    goto LABEL_29;
  }
  if ( v2 != 1 )
  {
LABEL_25:
    v3 = v4;
    goto LABEL_13;
  }
LABEL_31:
  if ( !a2(*v3) )
    goto LABEL_25;
LABEL_8:
  if ( v4 != v3 )
  {
    for ( i = v3 + 1; v4 != i; ++i )
    {
      if ( !a2(*i) )
        *v3++ = *i;
    }
  }
LABEL_13:
  v7 = *a1;
  result = a1[1];
  v9 = (unsigned __int8 *)(v3 - *a1);
  if ( v4 == &result[(_QWORD)*a1] )
  {
    a1[1] = v9;
    *v3 = 0;
  }
  else
  {
    v10 = v4 - v3;
    v11 = &v9[v10];
    v12 = result - &v9[v10];
    if ( v12 && v10 )
    {
      v13 = &v7[(_QWORD)v11];
      if ( v12 == 1 )
        *v3 = *v13;
      else
        memmove(v3, v13, v12);
      result = a1[1];
      v7 = *a1;
    }
    result -= v10;
    a1[1] = result;
    result[(_QWORD)v7] = 0;
  }
  return result;
}

