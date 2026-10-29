__int64 __fastcall sub_147AE90(char *a1)
{
  __int64 v2; // rax
  bool v3; // sf
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 i; // r12
  void *v7; // rdi
  void *v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edx
  unsigned int j; // r15d
  __int64 v16; // rax
  void **v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r15
  void **v21; // r14
  void *v22; // r14
  __int64 v23; // r14
  void *v24; // rdi
  void *v25; // rdi
  char v26; // al
  __int64 v27; // rbx
  void *v28; // rdi
  __int64 v29; // rdi
  __int64 result; // rax
  void *v31; // rdi
  void **v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r12
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)a1;
  v3 = a1[123] < 0;
  *((_QWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 2) = 0;
  v4 = *((_QWORD *)a1 + 14);
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 14) = 0;
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 10) = 0;
  v5 = *(_QWORD *)(v2 + 160);
  *((_DWORD *)a1 + 27) = 0;
  *((_QWORD *)a1 + 11) = v5;
  *((_DWORD *)a1 + 26) = 0;
  if ( v3 )
  {
    if ( v4 )
    {
      v33 = 112LL * *(_QWORD *)(v4 - 8);
      v34 = v4 + v33;
      if ( v4 + v33 != v4 )
      {
        while ( 1 )
        {
          v4 = v34 - 112;
          if ( !*(_BYTE *)(v34 - 16) )
            goto LABEL_65;
          sub_15DCED0(*(_QWORD *)(v34 - 56), v4 + 56);
          v35 = *(void **)(v34 - 48);
          if ( v35 != (void *)(v4 + 80) )
            free(v35);
          v36 = *(void **)(v4 + 24);
          if ( v36 == (void *)(v4 + 40) )
          {
LABEL_65:
            if ( *((_QWORD *)a1 + 14) == v4 )
              goto LABEL_72;
          }
          else
          {
            free(v36);
            if ( *((_QWORD *)a1 + 14) == v4 )
            {
LABEL_72:
              v33 = 112LL * *(_QWORD *)(v34 - 120);
              break;
            }
          }
          v34 -= 112;
        }
      }
      operator delete[]((void *)(v4 - 8), v33 + 8);
    }
  }
  else
  {
    for ( i = v4 + 112LL * (*((_DWORD *)a1 + 30) & 0x7FFFFFFF); i != v4; v4 += 112 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v4 + 96) )
        {
          *(_BYTE *)(v4 + 96) = 0;
          sub_15DCED0(*(_QWORD *)(v4 + 56), v4 + 56);
          v7 = *(void **)(v4 + 64);
          if ( v7 != (void *)(v4 + 80) )
            free(v7);
          v8 = *(void **)(v4 + 24);
          if ( v8 != (void *)(v4 + 40) )
            break;
        }
        v4 += 112;
        if ( i == v4 )
          goto LABEL_10;
      }
      free(v8);
    }
  }
LABEL_10:
  v9 = *((_DWORD *)a1 + 34);
  *((_QWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 30) = 0;
  if ( !v9 )
    goto LABEL_53;
  v10 = *((_QWORD *)a1 + 16);
  v11 = 0;
  v37 = 16 * (9LL * (unsigned int)(v9 - 1) + 9);
  do
  {
    while ( 1 )
    {
      v12 = v10 + v11;
      v13 = *(_DWORD *)(v10 + v11);
      if ( v13 != 3 )
      {
        if ( v13 != 5 || !*(_DWORD *)(v12 + 92) )
          goto LABEL_14;
        free(*(void **)(v12 + 80));
        goto LABEL_48;
      }
      v14 = *(_DWORD *)(v12 + 72);
      for ( j = 0; j < v14; ++j )
      {
        v16 = *(_QWORD *)(v12 + 96) + 32LL * j;
        v17 = *(void ***)(v16 + 24);
        *(_QWORD *)(v16 + 24) = 0;
        if ( v17 )
        {
          if ( *v17 != v17 + 2 )
            free(*v17);
          operator delete(v17, 0x70u);
          v14 = *(_DWORD *)(v12 + 72);
        }
      }
      if ( (*(_BYTE *)(v12 + 57) & 1) != 0 )
      {
        v18 = *(_QWORD *)(v12 + 96);
        if ( v18 )
        {
          v19 = 32LL * *(_QWORD *)(v18 - 8);
          v20 = v18 + v19;
          if ( v18 != v18 + v19 )
          {
            while ( 1 )
            {
              v21 = *(void ***)(v20 - 8);
              if ( v21 )
              {
                if ( *v21 != v21 + 2 )
                  free(*v21);
                operator delete(v21, 0x70u);
                v18 = *(_QWORD *)(v12 + 96);
              }
              if ( v20 - 32 == v18 )
                break;
              v20 -= 32;
            }
            v19 = 32LL * *(_QWORD *)(v20 - 40);
          }
          operator delete[]((void *)(v18 - 8), v19 + 8);
        }
        *(_BYTE *)(v12 + 57) &= ~1u;
      }
      v22 = *(void **)(v12 + 112);
      *(_DWORD *)(v12 + 72) = 0;
      if ( v22 )
      {
        sub_15D7C30(v22);
        operator delete(v22, 0x520u);
      }
      v23 = *(_QWORD *)(v12 + 104);
      if ( v23 )
      {
        if ( *(_DWORD *)(v23 + 140) )
          free(*(void **)(v23 + 128));
        sub_15DCED0(*(_QWORD *)(v23 + 72), v23 + 72);
        v24 = *(void **)(v23 + 80);
        if ( v24 != (void *)(v23 + 96) )
          free(v24);
        v25 = *(void **)(v23 + 40);
        if ( v25 != (void *)(v23 + 56) )
          free(v25);
        operator delete((void *)v23, 0x128u);
      }
      v26 = *(_BYTE *)(v12 + 56) >> 4;
      if ( v26 != 2 )
        break;
LABEL_55:
      v31 = *(void **)(v12 + 120);
      if ( !v31 )
        goto LABEL_48;
      operator delete[](v31);
      v10 = *((_QWORD *)a1 + 16);
LABEL_14:
      v11 += 144;
      if ( v37 == v11 )
        goto LABEL_49;
    }
    if ( v26 == 11 )
    {
      v32 = *(void ***)(v12 + 120);
      if ( v32 )
      {
        if ( *v32 != v32 + 2 )
          free(*v32);
        operator delete(v32, 0x70u);
        v10 = *((_QWORD *)a1 + 16);
        goto LABEL_14;
      }
    }
    else if ( !v26 && *(_DWORD *)(v12 + 76) )
    {
      goto LABEL_55;
    }
LABEL_48:
    v10 = *((_QWORD *)a1 + 16);
    v11 += 144;
  }
  while ( v37 != v11 );
LABEL_49:
  v27 = v10 + 144LL * *((unsigned int *)a1 + 34);
  while ( v27 != v10 )
  {
    while ( 1 )
    {
      v27 -= 144;
      v28 = *(void **)(v27 + 24);
      if ( v28 == (void *)(v27 + 40) )
        break;
      free(v28);
      if ( v27 == v10 )
        goto LABEL_53;
    }
  }
LABEL_53:
  v29 = *((_QWORD *)a1 + 96);
  *((_DWORD *)a1 + 34) = 0;
  *((_DWORD *)a1 + 186) = 0;
  result = sub_15DCED0(v29, a1 + 768);
  *((_DWORD *)a1 + 196) = 0;
  *((_QWORD *)a1 + 91) = 0;
  *((_QWORD *)a1 + 102) = 0;
  *((_WORD *)a1 + 360) &= 0xFC3Fu;
  *((_QWORD *)a1 + 331) = 0;
  *((_QWORD *)a1 + 332) = 0;
  return result;
}
