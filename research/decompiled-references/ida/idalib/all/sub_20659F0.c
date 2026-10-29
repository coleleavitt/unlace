unsigned __int64 __fastcall sub_20659F0(__int64 a1, char a2, unsigned int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int *v15; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r10
  int v20; // esi
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int8 v26; // [rsp+Fh] [rbp-29h]

  v5 = a4;
  v6 = a1 + 64;
  if ( a2 != 105 )
  {
    v6 = a1 + 128;
    v8 = a1 + 176;
    if ( a2 == 118 )
      v6 = v8;
  }
  v9 = *(unsigned int *)(v6 + 8);
  v10 = *(_QWORD *)v6;
  v11 = 8 * v9;
  v12 = *(_QWORD *)v6;
  v13 = (8 * v9) >> 3;
  if ( 8 * v9 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v13 >> 1;
        v15 = (unsigned int *)(v12 + 8 * (v13 >> 1));
        if ( *v15 >= a3 )
          break;
        v12 = (__int64)(v15 + 2);
        v13 = v13 - v14 - 1;
        if ( v13 <= 0 )
          goto LABEL_7;
      }
      v13 >>= 1;
    }
    while ( v14 );
    result = v10 + v11;
    if ( v10 + v11 == v12 )
      goto LABEL_19;
LABEL_8:
    if ( *(_DWORD *)v12 != a3 )
    {
      v17 = v9 + 1;
      v18 = v12 - v10;
      if ( v17 > *(unsigned int *)(v6 + 12) )
      {
        v26 = a5;
        sub_2237220(v6, v6 + 16, v17, 8);
        v10 = *(_QWORD *)v6;
        a5 = v26;
        v11 = 8LL * *(unsigned int *)(v6 + 8);
        v12 = *(_QWORD *)v6 + v18;
        result = *(_QWORD *)v6 + v11;
      }
      *(_QWORD *)result = *(_QWORD *)(v10 + v11 - 8);
      v19 = 8LL * *(unsigned int *)(v6 + 8);
      v20 = *(_DWORD *)(v6 + 8);
      v21 = v19 - 8 - v18;
      result = v21 >> 3;
      if ( v21 > 0 )
      {
        v22 = v10 + -8LL * result + v19 - 8;
        v23 = v10 + v19 - 8 * result;
        do
        {
          *(_DWORD *)(v23 + 8 * result - 8) = *(_DWORD *)(v22 + 8 * result - 8);
          *(_WORD *)(v23 + 8 * result - 4) = *(_WORD *)(v22 + 8 * result - 4);
          --result;
        }
        while ( result );
        v20 = *(_DWORD *)(v6 + 8);
      }
      *(_DWORD *)(v6 + 8) = v20 + 1;
      *(_DWORD *)v12 = a3;
    }
    *(_BYTE *)(v12 + 4) = v5;
    *(_BYTE *)(v12 + 5) = a5;
    return result;
  }
LABEL_7:
  result = v10 + v11;
  if ( v10 + v11 != v12 )
    goto LABEL_8;
LABEL_19:
  v24 = v9 + 1;
  result = *(unsigned int *)(v6 + 12);
  v25 = ((unsigned __int64)a5 << 40) | (v5 << 32) | a3;
  if ( v24 > result )
  {
    sub_2237220(v6, v6 + 16, v24, 8);
    result = *(_QWORD *)v6;
    v12 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  }
  *(_QWORD *)v12 = v25;
  ++*(_DWORD *)(v6 + 8);
  return result;
}
