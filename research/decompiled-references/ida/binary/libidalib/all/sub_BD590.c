struct _Unwind_Exception *__fastcall sub_BD590(_QWORD *a1)
{
  __int64 v2; // rbp
  char *v3; // rdi
  char *v4; // rdx
  struct _Unwind_Exception *result; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  v2 = a1[24];
  *a1 = off_22FD00;
  v3 = *(char **)(v2 + 24);
  v4 = &v3[8 * *(_QWORD *)(v2 + 32)];
  if ( v3 != v4 )
  {
    while ( a1 != *(_QWORD **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 8, v4 - v3 - 8);
      --*(_QWORD *)(v2 + 32);
    }
  }
LABEL_7:
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  if ( a1[29] )
  {
    a1[30] = 0;
    qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  result = &stru_236898;
  v6 = a1 + 22;
  v7 = a1 + 10;
  *(v7 - 10) = &stru_236898;
  do
  {
    v8 = *(v6 - 3);
    v6 -= 3;
    if ( v8 )
    {
      v6[1] = 0;
      result = (struct _Unwind_Exception *)qfree();
    }
  }
  while ( v7 != v6 );
  return result;
}

