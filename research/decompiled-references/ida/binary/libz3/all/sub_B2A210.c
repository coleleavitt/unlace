unsigned int *__fastcall sub_B2A210(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbp
  __int64 v7; // r13
  unsigned int *result; // rax
  __int64 v9; // rdi

  v5 = a3;
  if ( a4 == a2 || a4 == a3 )
  {
    if ( a2 )
    {
      if ( !a3 || a2 == a3 )
        return a2;
      v9 = *(_QWORD *)(*a1 + 56);
LABEL_16:
      result = (unsigned int *)sub_180C100(v9, 24);
      *a2 = (*a2 + 1) & 0x3FFFFFFF | *a2 & 0xC0000000;
      *v5 = (*v5 + 1) & 0x3FFFFFFF | *v5 & 0xC0000000;
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = a2;
      *((_QWORD *)result + 2) = v5;
      return result;
    }
    return a3;
  }
  v7 = *a1;
  if ( a2 == a5 || a3 == a5 )
  {
    if ( a2 )
    {
      if ( !a3 || a2 == a3 )
        return a2;
LABEL_21:
      v9 = *(_QWORD *)(v7 + 56);
      goto LABEL_16;
    }
    return a3;
  }
  if ( !a4 || !a5 )
  {
    if ( a2 )
    {
      if ( a2 == a3 || !a3 )
        return a2;
      goto LABEL_21;
    }
    return a3;
  }
  if ( !a2 )
  {
    if ( !a3 )
      return a4;
LABEL_11:
    result = (unsigned int *)sub_180C100(*(_QWORD *)(v7 + 56), 24);
    *v5 = (*v5 + 1) & 0x3FFFFFFF | *v5 & 0xC0000000;
    *a4 = (*a4 + 1) & 0x3FFFFFFF | *a4 & 0xC0000000;
    *(_QWORD *)result = 0;
    *((_QWORD *)result + 1) = v5;
    *((_QWORD *)result + 2) = a4;
    return result;
  }
  if ( !a3 )
  {
    v5 = a2;
    goto LABEL_11;
  }
  if ( a2 == a3 )
    goto LABEL_11;
  result = (unsigned int *)sub_180C100(*(_QWORD *)(v7 + 56), 24);
  *a2 = (*a2 + 1) & 0x3FFFFFFF | *a2 & 0xC0000000;
  *v5 = (*v5 + 1) & 0x3FFFFFFF | *v5 & 0xC0000000;
  *((_QWORD *)result + 2) = v5;
  v5 = result;
  *(_QWORD *)result = 0;
  *((_QWORD *)result + 1) = a2;
  if ( a4 != result )
    goto LABEL_11;
  return result;
}

