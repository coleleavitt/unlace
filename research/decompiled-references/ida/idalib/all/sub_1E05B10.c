void __fastcall sub_1E05B10(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v8; // r13
  int v9; // eax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rsi
  int v16; // edi
  const void *v17; // rsi
  int v18; // ecx
  const void *v19; // rsi

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
    sub_2237220(a1, a1 + 2, v3, 16);
    v8 = *((unsigned int *)a1 + 2);
    v9 = v8;
    if ( *((_DWORD *)a2 + 3) >= (unsigned int)v8 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v8 = *((unsigned int *)a1 + 2);
  v9 = v8;
  if ( *((_DWORD *)a2 + 3) < (unsigned int)v8 )
  {
LABEL_23:
    sub_2237220(a2, a2 + 2, v8, 16);
    v8 = *((unsigned int *)a1 + 2);
    v9 = *((_DWORD *)a1 + 2);
  }
LABEL_7:
  v10 = *((unsigned int *)a2 + 2);
  v11 = v8;
  if ( v10 <= v8 )
    v11 = *((unsigned int *)a2 + 2);
  if ( v11 )
  {
    v12 = 0;
    do
    {
      v13 = (__int64 *)(v12 + *a2);
      v14 = (__int64 *)(v12 + *a1);
      v12 += 16;
      v15 = *v14;
      *v14 = *v13;
      v16 = *((_DWORD *)v13 + 2);
      *v13 = v15;
      LODWORD(v15) = *((_DWORD *)v14 + 2);
      *((_DWORD *)v14 + 2) = v16;
      *((_DWORD *)v13 + 2) = v15;
    }
    while ( 16 * v11 != v12 );
    v8 = *((unsigned int *)a1 + 2);
    v10 = *((unsigned int *)a2 + 2);
    v9 = *((_DWORD *)a1 + 2);
  }
  if ( v10 >= v8 )
  {
    if ( v10 > v8 )
    {
      v18 = v8;
      v19 = (const void *)(*a2 + 16 * v11);
      if ( v19 != (const void *)(16 * v10 + *a2) )
      {
        memcpy((void *)(*a1 + 16 * v8), v19, 16 * v10 - 16 * v11);
        v18 = *((_DWORD *)a1 + 2);
      }
      *((_DWORD *)a1 + 2) = v18 + v10 - v8;
      *((_DWORD *)a2 + 2) = v11;
    }
  }
  else
  {
    v17 = (const void *)(*a1 + 16 * v11);
    if ( v17 != (const void *)(16 * v8 + *a1) )
    {
      memcpy((void *)(*a2 + 16 * v10), v17, 16 * v8 - 16 * v11);
      v9 = v8 + *((_DWORD *)a2 + 2) - v10;
    }
    *((_DWORD *)a2 + 2) = v9;
    *((_DWORD *)a1 + 2) = v11;
  }
}
