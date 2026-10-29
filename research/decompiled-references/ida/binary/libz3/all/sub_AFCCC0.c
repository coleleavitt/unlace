__int64 __fastcall sub_AFCCC0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int *v12; // rbp
  unsigned int *v13; // r14
  unsigned int *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  int *v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // edx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rdx
  int v28; // edi
  int *v29; // rcx
  int v30; // edx

  v4 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4LL * a2) = v4;
  *(_DWORD *)(a1 + 176) = v4 + 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 144) + a2) = 1;
  v7 = *(_QWORD *)(a1 + 168);
  if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
  {
    sub_313C10((unsigned int **)(a1 + 168));
    v7 = *(_QWORD *)(a1 + 168);
    v8 = *(unsigned int *)(v7 - 4);
  }
  *(_DWORD *)(v7 + 4 * v8) = a2;
  ++*(_DWORD *)(v7 - 4);
  result = *(_QWORD *)(a1 + 160);
  if ( !result || (v10 = *(unsigned int *)(result - 4), (_DWORD)v10 == *(_DWORD *)(result - 8)) )
  {
    sub_313C10((unsigned int **)(a1 + 160));
    result = *(_QWORD *)(a1 + 160);
    v10 = *(unsigned int *)(result - 4);
  }
  *(_DWORD *)(result + 4 * v10) = a2;
  v11 = *(_QWORD *)(a1 + 48);
  ++*(_DWORD *)(result - 4);
  v12 = *(unsigned int **)(v11 + 8LL * a2);
  if ( !v12 )
    goto LABEL_13;
  v13 = &v12[*(v12 - 1)];
  if ( v12 == v13 )
    goto LABEL_13;
  do
  {
    v14 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL * *v12);
    if ( *((_BYTE *)v14 + 24) )
    {
      v15 = v14[1];
      if ( !(v14[2] + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * *v14) - *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v15)) )
      {
        v16 = *(_QWORD *)(a1 + 152);
        v17 = (int *)(v16 + 4 * v15);
        v18 = *v17;
        if ( *v17 == -1 )
        {
          sub_AFCCC0(a1, (unsigned int)v15, a3);
        }
        else if ( *(_BYTE *)(*(_QWORD *)(a1 + 144) + v15) )
        {
          v25 = *(_QWORD *)(a1 + 160);
          if ( v25 )
          {
            v26 = *(_DWORD *)(v25 - 4);
            v27 = (unsigned int)(v26 - 1);
            if ( v18 < *(_DWORD *)(v16 + 4LL * *(unsigned int *)(v25 + 4 * v27)) )
            {
              while ( 1 )
              {
                v28 = v26;
                *(_DWORD *)(v25 - 4) = v27;
                v26 = v27;
                if ( *v17 >= *(_DWORD *)(v16 + 4LL * *(unsigned int *)(v25 + 4LL * (unsigned int)(v28 - 2))) )
                  break;
                LODWORD(v27) = v27 - 1;
              }
            }
          }
          else
          {
            v29 = (int *)(v16 + 4LL * MEMORY[0x3FFFFFFFC]);
            if ( v18 < *v29 )
            {
              v30 = MEMORY[0xFFFFFFFFFFFFFFFC];
              do
                MEMORY[0xFFFFFFFFFFFFFFFC] = --v30;
              while ( *v29 > *v17 );
            }
          }
        }
      }
    }
    ++v12;
  }
  while ( v13 != v12 );
  result = *(_QWORD *)(a1 + 160);
  v19 = 0x3FFFFFFFCLL;
  if ( result )
LABEL_13:
    v19 = 4LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  if ( *(_DWORD *)(result + v19) == a2 )
  {
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)(a1 + 168);
      ++v20;
      v22 = *(_DWORD *)(v21 + 4LL * (unsigned int)--*(_DWORD *)(v21 - 4));
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + v22) = 0;
      v23 = *(_DWORD *)(a1 + 180);
      v24 = (_DWORD *)(*a3 + 4LL * v22);
      *v24 = v23;
    }
    while ( a2 != v22 );
    if ( v20 == 1 )
      *v24 = -1;
    else
      *(_DWORD *)(a1 + 180) = v23 + 1;
    result = *(_QWORD *)(a1 + 160);
    --*(_DWORD *)(result - 4);
  }
  return result;
}

