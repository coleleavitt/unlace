__int64 *__fastcall sub_41F0C0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 *v4; // rbx
  int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rdi
  __int64 v13; // rdi

  v3 = sub_62A5E0(*a2);
  v4 = *(__int64 **)a1;
  v5 = v3;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = v6 - 1;
  v6 *= 16;
  v8 = (__int64 *)(*(_QWORD *)a1 + v6);
  v9 = 16LL * (v5 & v7);
  v10 = (__int64 *)(*(_QWORD *)a1 + v9);
  if ( v9 != v6 )
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + v9);
    do
    {
      v11 = *v4;
      if ( (unsigned __int64)*v4 <= 1 )
      {
        if ( !v11 )
          return nullptr;
      }
      else if ( v5 == (unsigned int)sub_62A5E0(v11) && *a2 == *v4 )
      {
        return v4;
      }
      v4 += 2;
    }
    while ( v8 != v4 );
    v4 = *(__int64 **)a1;
  }
  for ( ; v10 != v4; v4 += 2 )
  {
    v13 = *v4;
    if ( (unsigned __int64)*v4 <= 1 )
    {
      if ( !v13 )
        return nullptr;
    }
    else if ( v5 == (unsigned int)sub_62A5E0(v13) && *v4 == *a2 )
    {
      return v4;
    }
  }
  return nullptr;
}

