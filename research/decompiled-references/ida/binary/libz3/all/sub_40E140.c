__int64 __fastcall sub_40E140(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 *v5; // rax

  v2 = *(__int64 **)(a1 + 264);
  v3 = &v2[2 * *(unsigned int *)(a1 + 272)];
  if ( v2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return 1;
    }
    while ( v3 != v2 )
    {
      sub_EE4F40(*(_QWORD *)(a1 + 152));
      result = sub_40DF30(a1, a2, *v2);
      if ( !(_BYTE)result )
        return result;
      v5 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v5;
        if ( (unsigned __int64)*v5 > 1 )
          break;
        v5 += 2;
        if ( v3 == v5 )
          return 1;
      }
    }
  }
  return 1;
}

