__int64 __fastcall sub_3DBC30(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // esi
  char v14; // si
  unsigned int v15; // edx
  unsigned int v16; // edi
  unsigned int v17; // ecx
  __int64 v18; // rcx
  int v19; // edx
  char v20; // si
  unsigned int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 j; // rax
  __int64 v29; // rcx
  int v30; // edx
  char v31; // dl
  __int64 k; // r12
  unsigned __int64 v33; // rcx
  int v34; // r8d

  result = a2 - a1;
  if ( (__int64)(a2 - a1) <= 192 )
    return result;
  for ( i = a2; ; i = v10 )
  {
    v7 = 0xAAAAAAAAAAAAAAABLL * (result >> 2);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_BYTE *)(a1 + 16);
    --a3;
    v10 = a1 + 12;
    v11 = a1 + 12 * v8;
    v12 = *(_BYTE *)(v11 + 4);
    if ( v9 < v12
      || v9 <= v12
      && ((v13 = *(_DWORD *)(a1 + 12), v13 < *(_DWORD *)v11)
       || *(_DWORD *)v11 >= v13 && *(_BYTE *)(a1 + 20) < *(_BYTE *)(v11 + 8)) )
    {
      v20 = *(_BYTE *)(i - 8);
      if ( v12 >= v20 )
      {
        if ( v12 > v20
          || (v21 = *(_DWORD *)(i - 12), *(_DWORD *)v11 >= v21)
          && (v21 < *(_DWORD *)v11 || *(_BYTE *)(v11 + 8) >= *(_BYTE *)(i - 4)) )
        {
          if ( v9 < v20
            || v9 <= v20
            && ((v22 = *(_DWORD *)(a1 + 12), v23 = *(_DWORD *)(i - 12), v22 < v23)
             || v23 >= v22 && *(_BYTE *)(a1 + 20) < *(_BYTE *)(i - 4)) )
          {
LABEL_31:
            v26 = *(_QWORD *)a1;
            v27 = *(_DWORD *)(a1 + 8);
            *(_QWORD *)a1 = *(_QWORD *)(i - 12);
            *(_BYTE *)(a1 + 8) = *(_BYTE *)(i - 4);
            *(_QWORD *)(i - 12) = v26;
            *(_BYTE *)(i - 4) = v27;
            goto LABEL_32;
          }
LABEL_30:
          v24 = *(_QWORD *)a1;
          v25 = *(_DWORD *)(a1 + 8);
          *(_QWORD *)a1 = *(_QWORD *)(a1 + 12);
          *(_BYTE *)(a1 + 8) = *(_BYTE *)(a1 + 20);
          *(_QWORD *)(a1 + 12) = v24;
          *(_BYTE *)(a1 + 20) = v25;
          goto LABEL_32;
        }
      }
    }
    else
    {
      v14 = *(_BYTE *)(i - 8);
      if ( v9 < v14 )
        goto LABEL_30;
      if ( v9 <= v14 )
      {
        v15 = *(_DWORD *)(a1 + 12);
        v16 = *(_DWORD *)(i - 12);
        if ( v15 < v16 || v16 >= v15 && *(_BYTE *)(a1 + 20) < *(_BYTE *)(i - 4) )
          goto LABEL_30;
      }
      if ( v12 < v14 )
        goto LABEL_31;
      if ( v12 <= v14 )
      {
        v17 = *(_DWORD *)(i - 12);
        if ( *(_DWORD *)v11 < v17 || v17 >= *(_DWORD *)v11 && *(_BYTE *)(v11 + 8) < *(_BYTE *)(i - 4) )
          goto LABEL_31;
      }
    }
    v18 = *(_QWORD *)a1;
    v19 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = *(_QWORD *)v11;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v11 + 8);
    *(_QWORD *)v11 = v18;
    *(_BYTE *)(v11 + 8) = v19;
LABEL_32:
    for ( j = i; ; *(_BYTE *)(j + 8) = v30 )
    {
      v31 = *(_BYTE *)(a1 + 4);
      while ( *(char *)(v10 + 4) < v31
           || *(char *)(v10 + 4) <= v31
           && (*(_DWORD *)v10 < *(_DWORD *)a1
            || *(_DWORD *)a1 >= *(_DWORD *)v10 && *(_BYTE *)(v10 + 8) < *(_BYTE *)(a1 + 8)) )
        v10 += 12LL;
      do
      {
        do
          j -= 12LL;
        while ( v31 < *(char *)(j + 4) );
      }
      while ( v31 <= *(char *)(j + 4)
           && (*(_DWORD *)a1 < *(_DWORD *)j || *(_DWORD *)j >= *(_DWORD *)a1 && *(_BYTE *)(a1 + 8) < *(_BYTE *)(j + 8)) );
      if ( v10 >= j )
        break;
      v29 = *(_QWORD *)v10;
      v10 += 12LL;
      v30 = *(_DWORD *)(v10 - 4);
      *(_QWORD *)(v10 - 12) = *(_QWORD *)j;
      *(_BYTE *)(v10 - 4) = *(_BYTE *)(j + 8);
      *(_QWORD *)j = v29;
    }
    sub_3DBC30(v10, i, a3);
    result = v10 - a1;
    if ( (__int64)(v10 - a1) <= 192 )
      return result;
  }
  for ( k = v8 - 1; ; --k )
  {
    sub_3DB670(a1, k, v7, *(_QWORD *)(a1 + 12 * k), *(_DWORD *)(a1 + 12 * k + 8));
    if ( !k )
      break;
  }
  for ( result = i - a1;
        (__int64)(i - a1) > 12;
        result = sub_3DB670(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 2), v33, v34) )
  {
    i -= 12LL;
    v33 = *(_QWORD *)i;
    v34 = *(_DWORD *)(i + 8);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_BYTE *)(i + 8) = *(_BYTE *)(a1 + 8);
  }
  return result;
}

