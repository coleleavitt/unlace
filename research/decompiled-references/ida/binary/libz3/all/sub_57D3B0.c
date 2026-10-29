void __fastcall sub_57D3B0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  unsigned __int64 v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  void (__fastcall ***v8)(_QWORD); // rbp
  __int64 v9; // rax
  _QWORD *v10; // rbx
  void *v11; // rdi

  v2 = (_QWORD *)a1[4];
  *a1 = &off_1C51650;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( !(_DWORD)v3 )
    {
LABEL_17:
      sub_186B220(v2 - 1);
      goto LABEL_18;
    }
    v4 = 8 * v3;
    v5 = 0;
    do
    {
      v6 = (_QWORD *)v2[v5 / 8];
      if ( v6 )
      {
        v7 = &v6[*((unsigned int *)v6 - 1)];
        if ( v6 != v7 )
        {
          do
          {
            v8 = (void (__fastcall ***)(_QWORD))*v6;
            if ( *v6 )
            {
              (**v8)(*v6);
              sub_186B220(v8);
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
              goto LABEL_17;
            }
          }
          ++v2;
        }
        while ( v2 != v10 );
        v2 = (_QWORD *)a1[4];
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  operator delete(a1, 0x28u);
}

