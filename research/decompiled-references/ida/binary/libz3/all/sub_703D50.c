__int64 __fastcall sub_703D50(_QWORD ***a1)
{
  _QWORD **v1; // r12
  __int64 result; // rax
  _QWORD **v3; // r13
  _QWORD *v4; // r15
  unsigned int *v5; // rbx
  unsigned int *v6; // rbp
  unsigned int v7; // esi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v3 = &v1[result];
    if ( v1 == v3 )
      goto LABEL_12;
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        v5 = (unsigned int *)v4[1];
        if ( v5 )
        {
          v6 = &v5[*(v5 - 1)];
          if ( v5 == v6 )
            goto LABEL_8;
          do
          {
            v7 = *v5++;
            sub_1144670(*v4, v7 >> 1);
          }
          while ( v6 != v5 );
          v6 = (unsigned int *)v4[1];
          if ( v6 )
          {
LABEL_8:
            *(v6 - 1) = 0;
            sub_186B220(v6 - 2);
          }
        }
        result = sub_186B220(v4);
      }
      ++v1;
    }
    while ( v3 != v1 );
    v3 = *a1;
    if ( *a1 )
    {
LABEL_12:
      *((_DWORD *)v3 - 1) = 0;
      return sub_186B220(v3 - 1);
    }
  }
  return result;
}

