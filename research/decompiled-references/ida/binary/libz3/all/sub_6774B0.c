__int64 __fastcall sub_6774B0(_QWORD *a1)
{
  void ***v2; // rbx
  void ***v3; // r12
  void **v4; // rbp
  void *v5; // rdi
  __int64 result; // rax
  void *v7; // rdi
  void (__fastcall ***v8)(void *); // rbx
  bool v9; // zf
  void (__fastcall ***v10)(void *); // rbx
  void *v11; // rdi

  v2 = (void ***)a1[17];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_9;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( *v4 )
          sub_186B220(*v4);
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (void ***)a1[17];
    if ( v3 )
    {
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
      sub_186B220(v3 - 1);
    }
  }
  v5 = (void *)a1[14];
  if ( v5 )
    sub_186B220(v5);
  sub_2334C0(a1 + 12);
  result = sub_2334C0(a1 + 10);
  v7 = (void *)a1[7];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (void (__fastcall ***)(void *))a1[6];
  if ( v8 )
  {
    v9 = (*((_DWORD *)v8 + 12))-- == 1;
    if ( v9 )
    {
      (**v8)(v8);
      result = sub_186B220(v8);
    }
  }
  v10 = (void (__fastcall ***)(void *))a1[5];
  if ( v10 )
  {
    v9 = (*((_DWORD *)v10 + 4))-- == 1;
    if ( v9 )
    {
      (**v10)(v10);
      result = sub_186B220(v10);
    }
  }
  v11 = (void *)a1[2];
  if ( v11 )
    return sub_186B220(v11);
  return result;
}

