__int64 __fastcall get_custom_data_types(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]

  v5 = qword_2CA1698;
  if ( a1 )
    a1[1] = 0;
  v6 = *(__int64 **)(v5 + 1360);
  v7 = *v6;
  v8 = *v6 + 40 * v6[1];
  if ( *v6 == v8 )
    return 0;
  v9 = 0;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)v7 )
        goto LABEL_5;
      v11 = *(_DWORD *)(*(_QWORD *)v7 + 56LL);
      if ( a3 < v11 || v11 < a2 )
        goto LABEL_5;
      if ( a1 )
        break;
      ++v10;
LABEL_5:
      v7 += 40;
      ++v9;
      if ( v8 == v7 )
        goto LABEL_13;
    }
    v12 = a1[1];
    v13 = *a1;
    v14 = v9;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v17 = v10;
      v16 = qvector_reserve(a1, v13, v12 + 1, 4);
      v10 = v17;
      v14 = v9;
      *a1 = v16;
      v13 = v16;
      v12 = a1[1];
    }
    v7 += 40;
    *(_DWORD *)(v13 + 4 * v12) = v14;
    ++v9;
    ++a1[1];
  }
  while ( v8 != v7 );
LABEL_13:
  if ( a1 )
    return *((unsigned int *)a1 + 2);
  return v10;
}

