__int64 __fastcall sub_51C510(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax

  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v3 )
    return 1;
  while ( *v2 <= 1u )
  {
    if ( (_QWORD *)v3 == ++v2 )
      return 1;
  }
LABEL_5:
  if ( (_QWORD *)v3 == v2 )
    return 1;
  v5 = *a1;
  sub_654200(*a1, 0);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 2968) + 192LL))(*(_QWORD *)(v5 + 2968));
  v7 = *v2;
  v8 = *(__int64 **)(v6 + 144);
  v9 = *(unsigned int *)(v6 + 152);
  v10 = *(_DWORD *)(*v2 + 12LL);
  v11 = v9 - 1;
  v9 *= 8;
  v12 = (__int64 *)((char *)v8 + v9);
  v13 = 8LL * (v10 & v11);
  v14 = &v8[(unsigned __int64)v13 / 8];
  if ( v13 != v9 )
  {
    for ( i = &v8[(unsigned __int64)v13 / 8]; v12 != i; ++i )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && v7 == v16 )
        {
LABEL_14:
          v18 = v2 + 1;
          if ( (_QWORD *)v3 == v2 + 1 )
            return 1;
          while ( 1 )
          {
            v2 = v18;
            if ( *v18 > 1u )
              break;
            if ( (_QWORD *)v3 == ++v18 )
              return 1;
          }
          goto LABEL_5;
        }
      }
      else if ( !v16 )
      {
        return 0;
      }
    }
  }
  for ( ; v14 != v8; ++v8 )
  {
    v19 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v19 + 12) == v10 && v7 == v19 )
        goto LABEL_14;
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  return 0;
}

