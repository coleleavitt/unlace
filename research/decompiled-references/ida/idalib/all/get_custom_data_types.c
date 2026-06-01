__int64 __fastcall get_custom_data_types(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rsi
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]

  v5 = qword_2CCB598;
  if ( a1 )
    a1[1] = 0;
  v6 = *(__int64 **)(v5 + 1552);
  v7 = *v6;
  v8 = *v6 + 48 * v6[1];
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
      v11 = *(_QWORD *)(*(_QWORD *)v7 + 56LL);
      if ( a3 < v11 || v11 < a2 )
        goto LABEL_5;
      if ( a1 )
        break;
      ++v10;
LABEL_5:
      v7 += 48;
      ++v9;
      if ( v8 == v7 )
        goto LABEL_13;
    }
    v12 = a1[1];
    v13 = v9;
    v14 = *a1;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v17 = v10;
      v16 = qvector_reserve(a1, v14, v12 + 1, 4);
      v10 = v17;
      v13 = v9;
      *a1 = v16;
      v14 = v16;
      v12 = a1[1];
    }
    v7 += 48;
    *(_DWORD *)(v14 + 4 * v12) = v13;
    ++v9;
    ++a1[1];
  }
  while ( v8 != v7 );
LABEL_13:
  if ( a1 )
    return *((unsigned int *)a1 + 2);
  return v10;
}
