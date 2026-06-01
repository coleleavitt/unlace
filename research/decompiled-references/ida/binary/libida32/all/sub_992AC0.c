__int64 __fastcall sub_992AC0(__int64 *a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r12
  unsigned __int64 v12; // rdx
  __int64 *v14; // rax

  v1 = a1 + 2;
  v2 = *((unsigned int *)a1 + 2);
  v4 = *a1;
  v5 = v2;
  for ( i = *(_QWORD *)(*a1 + 8 * v2 - 8); ; *v14 = i )
  {
    while ( 1 )
    {
      v7 = 8 * v2;
      v8 = i & 3;
      v9 = (__int64 *)(v4 + 8 * v2 - 8);
      v10 = i & 0xFFFFFFFFFFFFFFFCLL;
      if ( v8 != 1 )
        break;
      v11 = *(_QWORD *)(v10 + 16);
      if ( v11 )
      {
LABEL_5:
        v12 = v2 + 1;
        if ( v12 > *((unsigned int *)a1 + 3) )
        {
          sub_22134E0(a1, v1, v12, 8);
          v4 = *a1;
          v7 = 8LL * *((unsigned int *)a1 + 2);
        }
        *(_QWORD *)(v4 + v7) = v11;
        v5 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
        *((_DWORD *)a1 + 2) = v5;
        goto LABEL_8;
      }
      *v9 = i | 3;
LABEL_8:
      if ( (_DWORD)v5 )
      {
        v4 = *a1;
        v2 = (unsigned int)v5;
        i = *(_QWORD *)(*a1 + 8LL * (unsigned int)v5 - 8);
        if ( (i & 3) != 1 )
          continue;
      }
      return (__int64)a1;
    }
    if ( (i & 3) == 0 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
        goto LABEL_5;
      *v9 = i | 1;
      goto LABEL_8;
    }
    if ( v8 != 3 )
      return sub_992C00(v8, v5, v2, i, v4, v10);
    v5 = (unsigned int)(v5 - 1);
    *((_DWORD *)a1 + 2) = v5;
    if ( !(_DWORD)v5 )
      return (__int64)a1;
    v2 = (unsigned int)v5;
    v14 = (__int64 *)(v4 + 8LL * (unsigned int)v5 - 8);
    i = *v14;
    v8 = *v14 & 3;
    if ( (*v14 & 3) == 0 )
    {
      *v14 = i | 1;
      return (__int64)a1;
    }
    if ( v8 != 1 )
      break;
    i |= 3uLL;
  }
  return sub_992C00(v8, v5, v2, i, v4, v10);
}

