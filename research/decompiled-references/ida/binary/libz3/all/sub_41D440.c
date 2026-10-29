__int64 __fastcall sub_41D440(_QWORD ***a1)
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
    if ( v1 >= v3 )
      return sub_186B220(v1 - 1);
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          if ( (*(_DWORD *)v4)-- == 1 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      ++v1;
      sub_41CB00(v4);
      result = sub_186B220(v4);
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = *a1;
    if ( *a1 )
      return sub_186B220(v1 - 1);
  }
  return result;
}

