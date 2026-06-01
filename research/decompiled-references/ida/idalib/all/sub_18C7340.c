void __fastcall sub_18C7340(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v7; // r12
  int v8; // r9d
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rsi
  const void *v15; // rsi
  int v16; // ecx
  const void *v17; // rsi

  if ( a1 == a2 )
    return;
  v2 = *a1;
  v3 = *((_DWORD *)a2 + 2);
  if ( a1 + 2 != (__int64 *)*a1 && (__int64 *)*a2 != a2 + 2 )
  {
    *a1 = *a2;
    *a2 = v2;
    v4 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v3;
    *((_DWORD *)a2 + 2) = v4;
    v5 = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v5;
    return;
  }
  if ( *((_DWORD *)a1 + 3) < v3 )
  {
    sub_2237220(a1, a1 + 2, v3, 8);
    v7 = *((unsigned int *)a1 + 2);
    v8 = v7;
    if ( *((_DWORD *)a2 + 3) >= (unsigned int)v7 )
      goto LABEL_7;
    goto LABEL_21;
  }
  v7 = *((unsigned int *)a1 + 2);
  v8 = v7;
  if ( *((_DWORD *)a2 + 3) < (unsigned int)v7 )
  {
LABEL_21:
    sub_2237220(a2, a2 + 2, v7, 8);
    v7 = *((unsigned int *)a1 + 2);
    v8 = *((_DWORD *)a1 + 2);
  }
LABEL_7:
  v9 = *((unsigned int *)a2 + 2);
  v10 = v7;
  if ( v9 <= v7 )
    v10 = *((unsigned int *)a2 + 2);
  v11 = 0;
  if ( v10 )
  {
    do
    {
      v12 = (__int64 *)(v11 + *a2);
      v13 = (__int64 *)(v11 + *a1);
      v11 += 8;
      v14 = *v13;
      *v13 = *v12;
      *v12 = v14;
    }
    while ( 8 * v10 != v11 );
  }
  if ( v9 >= v7 )
  {
    if ( v9 > v7 )
    {
      v16 = v7;
      v17 = (const void *)(*a2 + 8 * v10);
      if ( v17 != (const void *)(8 * v9 + *a2) )
      {
        memcpy((void *)(*a1 + 8 * v7), v17, 8 * v9 - 8 * v10);
        v16 = *((_DWORD *)a1 + 2);
      }
      *((_DWORD *)a1 + 2) = v16 + v9 - v7;
      *((_DWORD *)a2 + 2) = v10;
    }
  }
  else
  {
    v15 = (const void *)(*a1 + 8 * v10);
    if ( v15 != (const void *)(8 * v7 + *a1) )
    {
      memcpy((void *)(*a2 + 8 * v9), v15, 8 * v7 - 8 * v10);
      v8 = *((_DWORD *)a2 + 2) - v9 + v7;
    }
    *((_DWORD *)a2 + 2) = v8;
    *((_DWORD *)a1 + 2) = v10;
  }
}
