__int64 __fastcall sub_819DA0(_QWORD ***a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax
  _QWORD **v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 == v4 )
      goto LABEL_13;
    do
    {
      v5 = *v1;
      if ( *v1 )
      {
        v6 = v5[3];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        v7 = v5[2];
        if ( v7 )
          sub_186B220((void *)(v7 - 8));
        v8 = v5[1];
        if ( v8 )
          sub_186B220((void *)(v8 - 8));
        result = sub_186B220(v5);
      }
      ++v1;
    }
    while ( v4 != v1 );
    v4 = *a1;
    if ( *a1 )
    {
LABEL_13:
      *((_DWORD *)v4 - 1) = 0;
      return sub_186B220(v4 - 1);
    }
  }
  return result;
}

