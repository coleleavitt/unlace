__int64 __fastcall sub_2FD180(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax
  void **v3; // r12
  void (__fastcall ***v4)(void *); // rbp

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
        v4 = (void (__fastcall ***)(void *))*v1;
        if ( *v1 )
        {
          if ( (*((_DWORD *)v4 + 4))-- == 1 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      ++v1;
      (**v4)(v4);
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

