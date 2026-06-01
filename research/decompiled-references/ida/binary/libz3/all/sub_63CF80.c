__int64 __fastcall sub_63CF80(_QWORD *a1)
{
  void ***v2; // rbx
  __int64 result; // rax
  void ***i; // r13
  void **v5; // rbp
  void *v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi

  v2 = (void ***)a1[1];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; ++v2 )
    {
      v5 = *v2;
      if ( *v2 )
      {
        if ( *v5 )
          sub_186B220(*v5);
        result = sub_186B220(v5);
      }
    }
  }
  v6 = (void *)a1[11];
  if ( v6 )
    result = sub_186B220(v6);
  v7 = a1[10];
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = (void *)a1[7];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = a1[6];
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = a1[5];
  if ( v10 )
    result = sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[2];
  if ( v11 )
    result = sub_186B220(v11);
  v12 = a1[1];
  if ( v12 )
    return sub_186B220((void *)(v12 - 8));
  return result;
}

