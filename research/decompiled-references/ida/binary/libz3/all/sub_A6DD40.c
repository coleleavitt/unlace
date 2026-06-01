__int64 __fastcall sub_A6DD40(__int64 *a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // r13
  void (__fastcall ***v3)(_QWORD); // rbp
  __int64 result; // rax
  void **v5; // rbx
  void **v6; // rbp

  v1 = *(_QWORD **)a1[1];
  if ( v1 )
  {
    for ( i = &v1[*((unsigned int *)v1 - 1)]; v1 != i; ++v1 )
    {
      v3 = (void (__fastcall ***)(_QWORD))*v1;
      if ( *v1 )
      {
        (**v3)(*v1);
        sub_186B220(v3);
      }
    }
  }
  result = *a1;
  v5 = *(void ***)(*a1 + 16);
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 == v6 )
      goto LABEL_12;
    do
    {
      if ( *v5 )
        sub_186B220(*v5);
      ++v5;
    }
    while ( v5 != v6 );
    result = *a1;
    v6 = *(void ***)(*a1 + 16);
    if ( v6 )
LABEL_12:
      *((_DWORD *)v6 - 1) = 0;
  }
  return result;
}

