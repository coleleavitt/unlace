__int64 __fastcall sub_41EAA0(void **ptr)
{
  void **v1; // rbx
  void **v2; // r12
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbx
  __int64 result; // rax

  if ( ptr )
  {
    v1 = (void **)ptr[2];
    if ( v1 )
    {
      v2 = &v1[*((unsigned int *)v1 - 1)];
      if ( v1 >= v2 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v3 = (void (__fastcall ***)(void *))*v1;
          if ( *v1 )
          {
            v4 = (*((_DWORD *)v3 + 12))-- == 1;
            if ( v4 )
              break;
          }
          if ( ++v1 >= v2 )
            goto LABEL_9;
        }
        ++v1;
        (**v3)(v3);
        sub_186B220(v3);
      }
      while ( v1 < v2 );
LABEL_9:
      v1 = (void **)ptr[2];
      if ( v1 )
LABEL_10:
        sub_186B220(v1 - 1);
    }
    v5 = (void (__fastcall ***)(void *))*ptr;
    if ( *ptr )
    {
      v4 = (*((_DWORD *)v5 + 12))-- == 1;
      if ( v4 )
      {
        (**v5)(v5);
        sub_186B220(v5);
      }
    }
    return sub_186B220(ptr);
  }
  return result;
}

