__int64 *__fastcall sub_4C3D70(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rsi
  __int64 **v5; // rax

  v2 = *(__int64 **)(a1 + 24);
  if ( !v2 )
    return v2;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 != v2 )
  {
    v4 = *a2;
    v5 = *(__int64 ***)(a1 + 24);
    while ( 1 )
    {
      v2 = *v5;
      if ( (*v5)[2] == v4 )
        break;
      if ( v3 == (__int64 *)++v5 )
        return nullptr;
    }
    return v2;
  }
  return nullptr;
}

