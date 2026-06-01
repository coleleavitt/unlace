unsigned __int64 __fastcall sub_DF6EF0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v1 &= 0xFFFFFFFFFFFFFFF8LL;
    if ( (*a1 & 7) != 0 )
    {
      v2 = *(__int64 **)v1;
      v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
      if ( *(_QWORD *)v1 == v3 )
      {
        return *v2;
      }
      else
      {
        while ( 1 )
        {
          v1 = *v2;
          v4 = v2;
          if ( (unsigned __int64)*v2 > 1 )
            break;
          if ( (__int64 *)v3 == ++v2 )
            return v4[1];
        }
      }
    }
  }
  return v1;
}

