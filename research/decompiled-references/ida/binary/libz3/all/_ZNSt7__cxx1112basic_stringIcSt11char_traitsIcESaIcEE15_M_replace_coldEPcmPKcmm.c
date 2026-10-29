unsigned __int8 __fastcall std::string::_M_replace_cold(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        size_t a5,
        size_t a6)
{
  unsigned __int8 result; // al
  unsigned __int8 *v10; // rbp
  unsigned __int8 *v12; // rsi
  unsigned __int8 *v13; // rdi
  unsigned __int8 *v14; // r13
  unsigned __int8 *v15; // rsi
  size_t v16; // r13
  unsigned __int64 v17; // rcx

  result = a5 - 1;
  v10 = a2;
  if ( a5 - 1 < a3 )
  {
    if ( a5 == 1 )
    {
      result = *a4;
      *a2 = *a4;
    }
    else
    {
      result = (unsigned __int8)memmove(a2, a4, a5);
    }
  }
  if ( a6 && a5 != a3 )
  {
    v12 = &a2[a3];
    v13 = &v10[a5];
    if ( a6 == 1 )
    {
      result = *v12;
      *v13 = *v12;
    }
    else
    {
      result = (unsigned __int8)memmove(v13, v12, a6);
    }
  }
  if ( a3 < a5 )
  {
    v14 = &v10[a3];
    result = (_BYTE)a4 + a5;
    if ( &v10[a3] >= &a4[a5] )
    {
      if ( a5 != 1 )
        return (unsigned __int8)memmove(v10, a4, a5);
      result = *a4;
      *v10 = *a4;
      return result;
    }
    if ( a4 >= v14 )
    {
      v15 = &a4[a5 - a3];
      if ( a5 != 1 )
      {
        qmemcpy(v10, v15, a5);
        return result;
      }
      goto LABEL_22;
    }
    v16 = v14 - a4;
    if ( v16 == 1 )
    {
      result = *a4;
      *v10 = *a4;
    }
    else
    {
      result = (unsigned __int8)memmove(v10, a4, v16);
    }
    v15 = &v10[a5];
    v10 += v16;
    v17 = a5 - v16;
    if ( a5 - v16 == 1 )
    {
LABEL_22:
      result = *v15;
      *v10 = *v15;
      return result;
    }
    if ( v17 )
      qmemcpy(v10, v15, v17);
  }
  return result;
}

