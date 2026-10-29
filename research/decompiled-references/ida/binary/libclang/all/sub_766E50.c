unsigned __int8 *__fastcall sub_766E50(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rcx

  v2 = a1;
  v3 = a2 - (_QWORD)a1;
  v4 = (a2 - (__int64)a1) >> 2;
  if ( v4 <= 0 )
  {
LABEL_11:
    if ( v3 != 2 )
    {
      if ( v3 != 3 )
      {
        if ( v3 != 1 )
          return (unsigned __int8 *)a2;
LABEL_14:
        if ( (*((_BYTE *)qword_3CAF3E0 + 2 * *v2) & 7) == 0 )
          return v2;
        return (unsigned __int8 *)a2;
      }
      v6 = v2;
      if ( (*((_BYTE *)qword_3CAF3E0 + 2 * *v2) & 7) == 0 )
        return v6;
      ++v2;
    }
    v6 = v2;
    if ( (*((_BYTE *)qword_3CAF3E0 + 2 * *v2) & 7) != 0 )
    {
      ++v2;
      goto LABEL_14;
    }
    return v6;
  }
  v5 = &a1[4 * v4];
  while ( 1 )
  {
    if ( (*((_BYTE *)qword_3CAF3E0 + 2 * *v2) & 7) == 0 )
      return v2;
    if ( (*((_BYTE *)qword_3CAF3E0 + 2 * v2[1]) & 7) == 0 )
      return v2 + 1;
    if ( (*((_BYTE *)qword_3CAF3E0 + 2 * v2[2]) & 7) == 0 )
      return v2 + 2;
    if ( (*((_BYTE *)qword_3CAF3E0 + 2 * v2[3]) & 7) == 0 )
      return v2 + 3;
    v2 += 4;
    if ( v2 == v5 )
    {
      v3 = a2 - (_QWORD)v2;
      goto LABEL_11;
    }
  }
}

