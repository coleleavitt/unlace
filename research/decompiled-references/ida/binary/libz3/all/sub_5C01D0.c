char __fastcall sub_5C01D0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  char result; // al
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // r12
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r15d
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned int i; // [rsp+4h] [rbp-54h]
  _QWORD *v29; // [rsp+10h] [rbp-48h]
  unsigned int v30; // [rsp+10h] [rbp-48h]
  _QWORD *v31; // [rsp+18h] [rbp-40h]

  v3 = a1[6];
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = a1[7];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = a1[10];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = (_QWORD *)a1[9];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[8];
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_14;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_14:
    v6 = (_QWORD *)a1[9];
    if ( v6 )
LABEL_15:
      *((_DWORD *)v6 - 1) = 0;
  }
  result = sub_5BFF30(a1, *(_QWORD *)(a2 + 40), 1, 0);
  for ( i = 0; i < *(_DWORD *)(a2 + 68); result = i )
  {
    v12 = *(_QWORD *)(a2 + 8LL * i + 80) & 0xFFFFFFFFFFFFFFF8LL;
    v13 = *(_QWORD *)(a2 + 8LL * i + 80) & 7LL;
    v14 = sub_5BCCC0((__int64)a1, *(_QWORD *)(v12 + 16));
    if ( *(_DWORD *)(v12 + 24) )
    {
      v10 = v13 == 1;
      v15 = 0;
      if ( v10 )
      {
        v16 = v14[1];
        do
        {
          while ( 1 )
          {
            v17 = v15 >> 5;
            v18 = 1 << v15;
            *(_DWORD *)(v16 + 4 * v17) &= ~(1 << v15);
            v19 = *(_QWORD *)(v12 + 8LL * v15 + 32);
            if ( *(_WORD *)(v19 + 4) == 1 )
              break;
            if ( ++v15 >= *(_DWORD *)(v12 + 24) )
              goto LABEL_26;
          }
          v20 = *(unsigned int *)(v19 + 16);
          v21 = a1[6];
          if ( !v21 || (unsigned int)v20 >= *(_DWORD *)(v21 - 4) )
          {
            v29 = v14;
            sub_5BF460(a1, v20);
            v14 = v29;
            v21 = a1[6];
            v18 = 1 << v15;
            v16 = v29[1];
          }
          *(_BYTE *)(v21 + v20) = 1;
          ++v15;
          *(_BYTE *)(a1[10] + v20) &= (*(_DWORD *)(v16 + 4 * v17) & v18) != 0;
        }
        while ( v15 < *(_DWORD *)(v12 + 24) );
      }
      else
      {
        do
        {
          v22 = *(_QWORD *)(v12 + 8LL * v15 + 32);
          v23 = 1 << v15;
          v24 = v15 >> 5;
          if ( *(_WORD *)(v22 + 4) == 1 )
          {
            v25 = *(unsigned int *)(v22 + 16);
            v26 = a1[6];
            if ( !v26 || (unsigned int)v25 >= *(_DWORD *)(v26 - 4) )
            {
              v31 = v14;
              v30 = v25;
              sub_5BF460(a1, v25);
              v26 = a1[6];
              v14 = v31;
              v25 = v30;
            }
            *(_BYTE *)(v26 + v25) = 1;
            *(_BYTE *)(a1[10] + v25) &= (*(_DWORD *)(v14[1] + 4 * v24) & v23) != 0;
          }
          else
          {
            *(_DWORD *)(v14[1] + 4 * v24) &= ~v23;
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v12 + 24) );
      }
    }
LABEL_26:
    ++i;
  }
  return result;
}

