unsigned __int64 __fastcall sub_1EAE1F0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  char *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r10
  char *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  char *v14; // r13
  __int64 v15; // rdi
  char *v16; // rsi
  char *v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // r12

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(char **)a1;
  v5 = *a2;
  v6 = 8 * v3;
  v7 = *(char **)a1;
  v8 = (8 * v3) >> 3;
  if ( 8 * v3 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v8 >> 1;
        v10 = &v7[8 * (v8 >> 1)];
        if ( *(_DWORD *)v10 >= (unsigned int)v5 )
          break;
        v7 = v10 + 8;
        v8 = v8 - v9 - 1;
        if ( v8 <= 0 )
          goto LABEL_4;
      }
      v8 >>= 1;
    }
    while ( v9 );
    result = (unsigned __int64)&v4[v6];
    v12 = a2[1];
    if ( &v4[v6] == v7 )
      goto LABEL_16;
LABEL_5:
    if ( *(_DWORD *)v7 != (_DWORD)v5 )
    {
      v13 = v3 + 1;
      v14 = (char *)(v7 - v4);
      if ( v13 > *(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v13, 8);
        v4 = *(char **)a1;
        v6 = 8LL * *(unsigned int *)(a1 + 8);
        v7 = &v14[*(_QWORD *)a1];
        result = *(_QWORD *)a1 + v6;
      }
      *(_QWORD *)result = *(_QWORD *)&v4[v6 - 8];
      v15 = *(unsigned int *)(a1 + 8);
      result = (8 * v15 - 8 - (__int64)v14) >> 3;
      if ( 8 * v15 - 8 - (__int64)v14 > 0 )
      {
        v16 = &v4[8 * v15 - 8 + -8 * result];
        v17 = &v4[8 * v15 + -8 * result];
        do
        {
          *(_DWORD *)&v17[8 * result - 8] = *(_DWORD *)&v16[8 * result - 8];
          *(_DWORD *)&v17[8 * result - 4] = *(_DWORD *)&v16[8 * result - 4];
          --result;
        }
        while ( result );
        LODWORD(v15) = *(_DWORD *)(a1 + 8);
      }
      *(_DWORD *)(a1 + 8) = v15 + 1;
      *(_DWORD *)v7 = v5;
    }
    *((_DWORD *)v7 + 1) = v12;
    return result;
  }
LABEL_4:
  result = (unsigned __int64)&v4[v6];
  v12 = a2[1];
  if ( &v4[v6] != v7 )
    goto LABEL_5;
LABEL_16:
  result = *(unsigned int *)(a1 + 12);
  v18 = v3 + 1;
  v19 = v5 | (v12 << 32);
  if ( v18 > result )
  {
    sub_2237220(a1, a1 + 16, v18, 8);
    result = *(_QWORD *)a1;
    v7 = (char *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  }
  *(_QWORD *)v7 = v19;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
