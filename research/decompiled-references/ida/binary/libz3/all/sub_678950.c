__int64 __fastcall sub_678950(_QWORD ***a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax
  _QWORD **v4; // r12
  _QWORD *v5; // rbp
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 == v4 )
      goto LABEL_9;
    do
    {
      v5 = *v1;
      if ( *v1 )
      {
        v6 = (void *)v5[2];
        if ( v6 )
          sub_186B220(v6);
        result = sub_186B220(v5);
      }
      ++v1;
    }
    while ( v4 != v1 );
    v4 = *a1;
    if ( *a1 )
    {
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
      return sub_186B220(v4 - 1);
    }
  }
  return result;
}

