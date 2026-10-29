__int64 __fastcall sub_DF17E0(__int64 a1)
{
  void **v1; // rbx
  __int64 result; // rax
  unsigned __int64 v3; // r12
  void (__fastcall ***v4)(void *); // rbp

  v1 = *(void ***)a1;
  result = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1 + 8 * result;
  if ( *(_QWORD *)a1 < v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (void (__fastcall ***)(void *))*v1;
        if ( *v1 )
        {
          if ( (*((_DWORD *)v4 + 2))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v1 >= v3 )
          goto LABEL_7;
      }
      ++v1;
      (**v4)(v4);
      result = sub_186B220(v4);
    }
    while ( (unsigned __int64)v1 < v3 );
LABEL_7:
    v1 = *(void ***)a1;
  }
  if ( v1 != (void **)(a1 + 16) )
  {
    if ( v1 )
      return sub_186B220(v1);
  }
  return result;
}

