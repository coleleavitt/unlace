__int64 __fastcall sub_DB14F0(__int64 a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax
  _QWORD **v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  v1 = *(_QWORD ***)(a1 + 288);
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 == v4 )
      goto LABEL_11;
    do
    {
      v5 = *v1;
      if ( *v1 )
      {
        v6 = v5[1];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        if ( *v5 )
          sub_186B220((void *)(*v5 - 8LL));
        result = sub_186B220(v5);
      }
      ++v1;
    }
    while ( v4 != v1 );
    v4 = *(_QWORD ***)(a1 + 288);
    if ( v4 )
LABEL_11:
      *((_DWORD *)v4 - 1) = 0;
  }
  return result;
}

