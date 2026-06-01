void __fastcall sub_62B500(__int64 a1, char a2, char a3)
{
  void *v5; // rdi
  _DWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  char *v9; // r13
  char *i; // rbp
  const char *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rax
  int v16; // edx
  const char *v17; // rcx
  unsigned int v18; // eax
  int v19; // edx

  v5 = *(void **)(a1 + 56);
  if ( a2 || v5 )
  {
    qfree(v5);
    v6 = (_DWORD *)qcalloc(*(unsigned int *)(a1 + 16), 4);
    *(_QWORD *)(a1 + 56) = v6;
    if ( v6 )
    {
      if ( *(_DWORD *)(a1 + 16) )
      {
        *v6 = 0x7FFFFFFF;
        v7 = 1;
        if ( *(_DWORD *)(a1 + 16) > 1u )
        {
          do
          {
            v8 = v7++;
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v8) = 0x7FFFFFFF;
          }
          while ( (unsigned int)v7 < *(_DWORD *)(a1 + 16) );
        }
      }
      v9 = *(char **)(a1 + 64);
      for ( i = &v9[*(unsigned int *)(a1 + 76)]; v9 < i; v9 += strlen(v11) + 9 )
      {
        v11 = v9 + 4;
        if ( a3 )
        {
          if ( !v9 )
            break;
          v12 = *(_QWORD *)(a1 + 64);
          v11 = v9 + 4;
          if ( (unsigned __int64)(v9 + 4) > v12 + *(unsigned int *)(a1 + 76) )
            break;
          if ( (unsigned __int64)v9 < v12 )
            break;
          v13 = *(_QWORD *)(a1 + 32);
          if ( (unsigned __int64)v11 < v13 )
            break;
          v14 = v13 + *(unsigned int *)(a1 + 20) - 1;
          if ( (unsigned __int64)v11 >= v14 )
            break;
          v15 = v9 + 4;
          while ( *v15 )
          {
            if ( ++v15 == (_BYTE *)v14 )
              return;
          }
          if ( (unsigned __int64)v15 >= v14 )
            break;
        }
        v16 = *v11;
        v17 = v11 + 1;
        v18 = 0;
        if ( *v11 )
        {
          do
          {
            ++v17;
            v18 = v16 ^ __ROL4__(v18, 5);
            v16 = *(v17 - 1);
          }
          while ( *(v17 - 1) );
        }
        v19 = v18 % *(_DWORD *)(a1 + 16);
        *(_DWORD *)v9 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v19);
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v19) = (_DWORD)v9 - *(_DWORD *)(a1 + 64);
      }
    }
  }
}

