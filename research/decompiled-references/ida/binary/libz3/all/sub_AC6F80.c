__int64 __fastcall sub_AC6F80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 *v4; // rcx
  unsigned int v5; // edx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  v2 = *(unsigned int *)(a1 + 48);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(__int64 **)(a1 + 40);
  v5 = v2 - 1;
  v2 *= 16;
  v6 = (__int64 *)((char *)v4 + v2);
  v7 = 16LL * (v3 & v5);
  v8 = &v4[(unsigned __int64)v7 / 8];
  if ( v7 == v2 )
  {
LABEL_9:
    while ( v8 != v4 )
    {
      v11 = *v4;
      if ( (unsigned __int64)*v4 > 1 )
      {
        if ( *(_DWORD *)(v11 + 12) == v3 && a2 == v11 )
        {
          v9 = v4;
          return v9[1];
        }
      }
      else if ( !v11 )
      {
        break;
      }
      v4 += 2;
    }
LABEL_19:
    BUG();
  }
  v9 = &v4[(unsigned __int64)v7 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
        break;
      if ( !v10 )
        goto LABEL_19;
      v9 += 2;
      if ( v6 == v9 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v10 + 12) == v3 && a2 == v10 )
      return v9[1];
    v9 += 2;
    if ( v6 == v9 )
      goto LABEL_9;
  }
}

