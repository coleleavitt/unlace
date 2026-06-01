__int64 __fastcall sub_952C10(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 12);
  v5 = *(__int64 **)(v2 + 1104);
  v6 = *(unsigned int *)(v2 + 1112);
  v7 = v6 - 1;
  v6 *= 16;
  v8 = (__int64 *)((char *)v5 + v6);
  v9 = 16LL * (v3 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 == v6 )
  {
LABEL_9:
    while ( v10 != v5 )
    {
      v13 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v3 && a2 == v13 )
        {
          v11 = v5;
          return v11[1];
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v5 += 2;
    }
LABEL_19:
    BUG();
  }
  v11 = &v5[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (unsigned __int64)*v11 > 1 )
        break;
      if ( !v12 )
        goto LABEL_19;
      v11 += 2;
      if ( v8 == v11 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v12 + 12) == v3 && a2 == v12 )
      return v11[1];
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_9;
  }
}

