__int64 __fastcall sub_8743A0(__int64 a1)
{
  void ***v1; // rbx
  __int64 result; // rax
  void ***i; // r12
  void **v4; // rbp

  v1 = *(void ****)(a1 + 528);
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    for ( i = &v1[result]; v1 != i; ++v1 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        if ( *v4 )
          sub_186B220(*v4);
        result = sub_186B220(v4);
      }
    }
  }
  return result;
}

