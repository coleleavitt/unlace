__int64 __fastcall sub_70FEA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // r9
  __int64 *i; // rax
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = *a2;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v5 = *(unsigned int *)(v3 + 12);
  v6 = *(__int64 **)v4;
  v7 = *(unsigned int *)(v4 + 8);
  v8 = v7 - 1;
  v7 *= 8;
  v9 = (__int64 *)((char *)v6 + v7);
  v10 = 8LL * ((unsigned int)v5 & v8);
  v11 = (__int64 *)((char *)v6 + v10);
  if ( v10 != v7 )
  {
    for ( i = (__int64 *)((char *)v6 + v10); v9 != i; ++i )
    {
      v10 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        v13 = *(_DWORD *)(v10 + 12) == (_DWORD)v5;
        LOBYTE(v10) = v3 == v10;
        LOBYTE(a2) = v10 & v13;
        if ( (_BYTE)a2 )
          goto LABEL_8;
      }
      else if ( !v10 )
      {
        goto LABEL_7;
      }
    }
  }
  for ( ; v11 != v6; ++v6 )
  {
    v26 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      LOBYTE(a2) = v3 == v26 && *(_DWORD *)(v26 + 12) == (_DWORD)v5;
      if ( (_BYTE)a2 )
        goto LABEL_8;
    }
    else if ( !v26 )
    {
      break;
    }
  }
LABEL_7:
  a2 = nullptr;
LABEL_8:
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *))(**(_QWORD **)(a1 + 24)
                                                                                             + 32LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          v10,
          v6,
          v5,
          v11);
  v15 = *(_DWORD *)(v3 + 12);
  v16 = *(__int64 **)v14;
  v17 = *(unsigned int *)(v14 + 8);
  v18 = v17 - 1;
  v17 *= 8;
  v19 = (__int64 *)((char *)v16 + v17);
  v20 = 8LL * (v15 & v18);
  v21 = &v16[(unsigned __int64)v20 / 8];
  if ( v20 == v17 )
  {
LABEL_16:
    if ( v16 != v21 )
    {
      while ( 1 )
      {
        v25 = *v16;
        if ( (unsigned __int64)*v16 > 1 )
        {
          if ( *(_DWORD *)(v25 + 12) == v15 && v3 == v25 )
            goto LABEL_31;
        }
        else if ( !v25 )
        {
          return 0;
        }
        if ( v21 == ++v16 )
          return 0;
      }
    }
    return 0;
  }
  v22 = &v16[(unsigned __int64)v20 / 8];
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned __int64)*v22 > 1 )
      break;
    if ( !v23 )
      return 0;
LABEL_12:
    if ( v19 == ++v22 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v23 + 12) != v15 || v3 != v23 )
    goto LABEL_12;
LABEL_31:
  if ( !(_BYTE)a2 )
    return 0;
  return 3;
}

