unsigned int *__fastcall sub_8952A0(_QWORD *a1, unsigned int a2)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rsi
  unsigned int *v5; // rdx
  unsigned int *v6; // rcx
  unsigned int *v7; // rax

  v3 = sub_8951C0(a1, a2, 0, a1[3]);
  v4 = (unsigned int *)a1[2];
  v5 = (unsigned int *)a1[10];
  if ( v4 == v3 )
    return v5;
  v6 = v3 - 4;
  if ( v3 - 4 == v5 )
    return v5;
  if ( a2 < *(v3 - 3) )
  {
    v7 = v3 - 8;
    if ( v4 != v6 )
      return v7;
    return v5;
  }
  return v3 - 4;
}

