__int64 __fastcall sub_E3BD80(__int64 a1)
{
  __int64 result; // rax
  void **v2; // rbx
  void **v3; // r12
  void (__fastcall ***v4)(void *); // rbp

  result = sub_E3B820(a1 + 88);
  v2 = *(void ***)(a1 + 48);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v3 = &v2[result];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = (void (__fastcall ***)(void *))*v2;
        if ( *v2 )
        {
          if ( (*((_DWORD *)v4 + 4))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      ++v2;
      (**v4)(v4);
      result = sub_186B220(v4);
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(void ***)(a1 + 48);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  return result;
}

