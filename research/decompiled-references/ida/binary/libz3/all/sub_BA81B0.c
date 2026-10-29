__int64 __fastcall sub_BA81B0(_QWORD ***a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax
  _QWORD **v3; // r12
  _QWORD *v4; // rbp

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v3 = &v1[result];
    if ( v1 == v3 )
      return sub_186B220(v3 - 1);
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        if ( *v4 )
          sub_186B220((void *)(*v4 - 8LL));
        result = sub_186B220(v4);
      }
      ++v1;
    }
    while ( v1 != v3 );
    v3 = *a1;
    if ( *a1 )
      return sub_186B220(v3 - 1);
  }
  return result;
}

