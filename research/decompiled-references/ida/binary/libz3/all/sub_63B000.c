__int64 __fastcall sub_63B000(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r10
  __int64 *i; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // rax

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v3 )
    return 0;
  while ( *v2 <= 1u )
  {
    v2 += 2;
    if ( (_QWORD *)v3 == v2 )
      return 0;
  }
  if ( (_QWORD *)v3 == v2 )
    return 0;
  v5 = *(_DWORD *)(a2 + 12);
  v6 = 0;
  do
  {
    v7 = v2[1];
    v8 = *(__int64 **)v7;
    v9 = *(unsigned int *)(v7 + 8);
    v10 = v9 - 1;
    v9 *= 8;
    v11 = (__int64 *)((char *)v8 + v9);
    v12 = 8LL * (v5 & v10);
    v13 = &v8[(unsigned __int64)v12 / 8];
    if ( v12 != v9 )
    {
      for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; ++i )
      {
        v15 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v15 + 12) == v5 && v15 == a2 )
          {
LABEL_20:
            ++v6;
            goto LABEL_14;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_14;
        }
      }
    }
    for ( ; v13 != v8; ++v8 )
    {
      v18 = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v5 && v18 == a2 )
          goto LABEL_20;
      }
      else if ( !v18 )
      {
        break;
      }
    }
LABEL_14:
    v16 = v2 + 2;
    if ( (_QWORD *)v3 == v2 + 2 )
      break;
    while ( 1 )
    {
      v2 = v16;
      if ( *v16 > 1u )
        break;
      v16 += 2;
      if ( (_QWORD *)v3 == v16 )
        return v6;
    }
  }
  while ( (_QWORD *)v3 != v16 );
  return v6;
}

