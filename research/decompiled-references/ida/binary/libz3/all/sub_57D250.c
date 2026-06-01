__int64 __fastcall sub_57D250(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  void (__fastcall ***v8)(_QWORD); // rbp
  __int64 v9; // rax
  _QWORD *v10; // rbx
  void *v11; // rdi

  result = (__int64)&off_1C51650;
  v2 = (_QWORD *)a1[4];
  *a1 = &off_1C51650;
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    if ( !(_DWORD)result )
      return sub_186B220(v2 - 1);
    v4 = 8 * result;
    v5 = 0;
    do
    {
      v6 = (_QWORD *)v2[v5 / 8];
      if ( v6 )
      {
        result = *((unsigned int *)v6 - 1);
        v7 = &v6[result];
        if ( v6 != v7 )
        {
          do
          {
            v8 = (void (__fastcall ***)(_QWORD))*v6;
            if ( *v6 )
            {
              (**v8)(*v6);
              result = sub_186B220(v8);
            }
            ++v6;
          }
          while ( v7 != v6 );
          v2 = (_QWORD *)a1[4];
        }
      }
      v5 += 8LL;
    }
    while ( v4 != v5 );
    if ( v2 )
    {
      v9 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = &v2[v9];
        do
        {
          while ( *v2 )
          {
            v11 = (void *)(*v2++ - 8LL);
            sub_186B220(v11);
            if ( v10 == v2 )
            {
              v2 = (_QWORD *)a1[4];
              return sub_186B220(v2 - 1);
            }
          }
          ++v2;
        }
        while ( v10 != v2 );
        v2 = (_QWORD *)a1[4];
      }
      return sub_186B220(v2 - 1);
    }
  }
  return result;
}

