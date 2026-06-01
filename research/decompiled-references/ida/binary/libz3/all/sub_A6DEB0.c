__int64 __fastcall sub_A6DEB0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v7; // rax
  int v8; // r8d
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  v2 = *(unsigned int **)(a2 + 24);
  if ( !v2 || (v3 = *v2, (_DWORD)v3 == -1) )
  {
    v7 = *(unsigned int *)(a1 + 88);
    v8 = *(_DWORD *)(a2 + 12);
    v9 = *(__int64 **)(a1 + 80);
    v10 = v7 - 1;
    v7 *= 8;
    v11 = (__int64 *)((char *)v9 + v7);
    v12 = 8LL * (v8 & v10);
    v13 = &v9[(unsigned __int64)v12 / 8];
    if ( v12 != v7 )
    {
      for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
      {
        v15 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v15 + 12) == v8 && v15 == a2 )
            return 0;
        }
        else if ( !v15 )
        {
          return 1;
        }
      }
    }
    for ( ; v13 != v9; ++v9 )
    {
      v16 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v8 && v16 == a2 )
          return 0;
      }
      else if ( !v16 )
      {
        return 1;
      }
    }
  }
  else
  {
    if ( !(_DWORD)v3 )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8672LL);
    if ( v4 )
    {
      if ( (unsigned int)v3 < *(_DWORD *)(v4 - 4) )
      {
        v5 = *(_QWORD *)(v4 + 8 * v3);
        if ( v5 )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 344LL))(v5);
      }
    }
  }
  return 1;
}

