__int64 __fastcall sub_66FAD0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  unsigned int j; // ecx
  __int64 v20; // rcx
  __int64 k; // r12
  __int64 v22; // rcx
  unsigned int v23; // r8d

  result = a2 - a1;
  if ( (__int64)(a2 - a1) <= 192 )
    return result;
  for ( i = a2; ; i = v14 )
  {
    v7 = 0xAAAAAAAAAAAAAAABLL * (result >> 2);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_DWORD *)(a1 + 12);
    v10 = *(_DWORD *)(i - 12);
    --a3;
    v11 = a1 + 12 * v8;
    v12 = *(_DWORD *)a1;
    v13 = *(_QWORD *)(a1 + 4);
    v14 = a1 + 12;
    v15 = *(_DWORD *)v11;
    if ( v9 >= *(_DWORD *)v11 )
    {
      if ( v9 >= v10 )
      {
        if ( v15 >= v10 )
        {
LABEL_20:
          *(_QWORD *)a1 = *(_QWORD *)v11;
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(v11 + 8);
          *(_DWORD *)v11 = v12;
          *(_QWORD *)(v11 + 4) = v13;
          v12 = *(_DWORD *)(a1 + 12);
          v17 = *(_DWORD *)(i - 12);
          goto LABEL_8;
        }
LABEL_17:
        v17 = *(_DWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)(i - 12);
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(i - 4);
        *(_DWORD *)(i - 12) = v12;
        *(_QWORD *)(i - 8) = v13;
        v12 = *(_DWORD *)(a1 + 12);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v15 < v10 )
        goto LABEL_20;
      if ( v9 < v10 )
        goto LABEL_17;
    }
    v16 = *(_QWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v12;
    *(_QWORD *)a1 = v16;
    LODWORD(v16) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(a1 + 16) = v13;
    *(_DWORD *)(a1 + 8) = v16;
    v17 = *(_DWORD *)(i - 12);
LABEL_8:
    v18 = i;
    while ( 1 )
    {
      for ( j = *(_DWORD *)a1; v12 < j; v14 += 12LL )
        v12 = *(_DWORD *)(v14 + 12);
      v18 -= 12LL;
      if ( j < v17 )
      {
        do
          v18 -= 12LL;
        while ( j < *(_DWORD *)v18 );
      }
      if ( v14 >= v18 )
        break;
      v20 = *(_QWORD *)(v14 + 4);
      v14 += 12LL;
      *(_QWORD *)(v14 - 12) = *(_QWORD *)v18;
      *(_DWORD *)(v14 - 4) = *(_DWORD *)(v18 + 8);
      v17 = *(_DWORD *)(v18 - 12);
      *(_DWORD *)v18 = v12;
      *(_QWORD *)(v18 + 4) = v20;
      v12 = *(_DWORD *)v14;
    }
    sub_66FAD0(v14, i, a3);
    result = v14 - a1;
    if ( (__int64)(v14 - a1) <= 192 )
      return result;
  }
  for ( k = v8 - 1; ; --k )
  {
    sub_66F580(a1, k, v7, *(_QWORD *)(a1 + 12 * k), *(_DWORD *)(a1 + 12 * k + 8));
    if ( !k )
      break;
  }
  for ( result = i - a1;
        (__int64)(i - a1) > 12;
        result = sub_66F580(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 2), v22, v23) )
  {
    i -= 12LL;
    v22 = *(_QWORD *)i;
    v23 = *(_DWORD *)(i + 8);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_DWORD *)(i + 8) = *(_DWORD *)(a1 + 8);
  }
  return result;
}

