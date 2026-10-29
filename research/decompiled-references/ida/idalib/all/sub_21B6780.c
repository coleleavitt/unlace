__int64 *__fastcall sub_21B6780(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *result; // rax
  __int64 *v3; // r12
  void *v4; // rbp

  v1 = *(__int64 **)(a1 + 8);
  result = (__int64 *)*(unsigned int *)(a1 + 16);
  v3 = &v1[(_QWORD)result];
  if ( v1 != v3 )
  {
    while ( !*v1 )
    {
      if ( v3 == ++v1 )
        return result;
    }
    while ( 1 )
    {
      v4 = (void *)*v1;
      if ( *v1 )
      {
        sub_21B59C0(*v1);
        operator delete(v4, 0x58u);
      }
      result = v1 + 1;
      if ( v3 == v1 + 1 )
        break;
      if ( !v1[1] )
      {
        do
        {
          if ( v3 == ++result )
            return result;
        }
        while ( !*result );
      }
      v1 = result;
    }
  }
  return result;
}
