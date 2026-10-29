_QWORD *__fastcall sub_EC5960(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = *(unsigned int **)(a2 + 24);
  result = a1;
  if ( v2 && *((_BYTE *)v2 + 8) )
  {
    v4 = *v2;
    a1[1] = 0;
    a1[4] = 0;
    v5 = 8 * v4 + 16;
    v6 = v2[1];
    *result = (char *)&v2[2 * v6] + v5;
    result[3] = (char *)&v2[2 * (unsigned int)(v6 + 1)] + v5;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
  }
  return result;
}

