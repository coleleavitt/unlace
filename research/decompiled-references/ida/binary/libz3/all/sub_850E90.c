__int64 __fastcall sub_850E90(void ****a1)
{
  void ***v1; // rbx
  __int64 result; // rax
  void ***v3; // r12
  void **v4; // rbp

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v3 = &v1[result];
    if ( v1 == v3 )
      goto LABEL_9;
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        if ( *v4 )
          sub_186B220(*v4);
        result = sub_186B220(v4);
      }
      ++v1;
    }
    while ( v3 != v1 );
    v3 = *a1;
    if ( *a1 )
    {
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
      return sub_186B220(v3 - 1);
    }
  }
  return result;
}

