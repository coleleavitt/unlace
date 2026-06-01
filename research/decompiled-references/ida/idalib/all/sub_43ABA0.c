unsigned __int8 *__fastcall sub_43ABA0(unsigned __int8 *a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // r12
  int v8; // ebp
  int v10; // ebp
  int v11; // r12d

  v4 = a2 - (_QWORD)a1;
  v5 = (a2 - (__int64)a1) >> 2;
  v6 = a1;
  if ( v5 > 0 )
  {
    v7 = &a1[4 * v5];
    v8 = tolower(*a3);
    while ( tolower(*v6) != v8 )
    {
      if ( v8 == tolower(v6[1]) )
        return v6 + 1;
      if ( v8 == tolower(v6[2]) )
        return v6 + 2;
      if ( v8 == tolower(v6[3]) )
        return v6 + 3;
      v6 += 4;
      if ( v6 == v7 )
      {
        v4 = a2 - (_QWORD)v6;
        goto LABEL_10;
      }
    }
    return v6;
  }
LABEL_10:
  if ( v4 == 2 )
  {
    v10 = tolower(*a3);
LABEL_15:
    if ( v10 == tolower(*v6) )
      return v6;
    ++v6;
    goto LABEL_17;
  }
  if ( v4 == 3 )
  {
    v11 = tolower(*v6);
    v10 = tolower(*a3);
    if ( v11 == v10 )
      return v6;
    ++v6;
    goto LABEL_15;
  }
  if ( v4 != 1 )
    return (unsigned __int8 *)a2;
  v10 = tolower(*a3);
LABEL_17:
  if ( v10 != tolower(*v6) )
    return (unsigned __int8 *)a2;
  return v6;
}
