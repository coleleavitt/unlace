char **__fastcall sub_E10490(char **a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  char **v6; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r15
  char *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  __int64 *v21; // rsi
  bool v22; // zf
  __int64 *v23; // rax
  __int64 v25; // rdx
  __int64 *i; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ecx
  __int64 *v31; // rax
  __int64 v32; // rdx
  char *v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdx

  v6 = a1 + 2;
  *a1 = (char *)(a1 + 2);
  a1[1] = (char *)0x600000000LL;
  if ( a2 )
  {
    v8 = a2;
    v9 = a4;
    *((_DWORD *)a1 + 16) = a4;
    v10 = (unsigned int)(a4 + 63) >> 6;
    v11 = v10;
    if ( v10 )
    {
      v12 = v10;
      v13 = (char *)(a1 + 2);
      if ( v10 > 6 )
      {
        sub_22134E0(a1, v6, v10, 8);
        v37 = *((unsigned int *)a1 + 2);
        v6 = (char **)*a1;
        v11 += v37;
        v13 = &(*a1)[8 * v37];
      }
      a2 = 0;
      memset(v13, 0, 8 * v12);
      *((_DWORD *)a1 + 2) = v11;
      LODWORD(a4) = *((_DWORD *)a1 + 16);
    }
    v14 = a4 & 0x3F;
    if ( (_DWORD)v14 )
    {
      a3 = ~(-1LL << v14);
      v6[v11 - 1] = (char *)(a3 & (unsigned __int64)v6[v11 - 1]);
    }
    if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
    {
      v15 = sub_B68690(v8, a2, a3, v14, a5, a6);
      v19 = *((unsigned int *)v15 + 2);
      v20 = *v15 + 8 * v19;
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
        v21 = (__int64 *)*sub_B68690(v8, a2, v19, v16, v17, v18);
      else
        v21 = nullptr;
      v22 = v21 == (__int64 *)v20;
      if ( (unsigned __int64)v21 >= v20 )
        goto LABEL_24;
LABEL_12:
      v23 = v21;
      while ( *(_WORD *)(*v23 + 36) != 100 )
      {
        if ( (__int64 *)v20 == ++v23 )
          return a1;
      }
      do
      {
LABEL_16:
        v25 = *v21;
        for ( i = v21 + 1; *(_WORD *)(v25 + 36) != 100; ++i )
        {
          v25 = *i;
          v21 = i;
        }
        v27 = *(unsigned int *)(v25 + 40);
        if ( !(_DWORD)v27 )
        {
          v33 = *a1;
          v34 = 8LL * *((unsigned int *)a1 + 2);
          v35 = (__int64)&(*a1)[v34];
          if ( *a1 != (char *)v35 )
            v33 = (char *)memset(*a1, 255, 8 * ((unsigned __int64)(v35 - (_QWORD)v33 - 8) >> 3) + 8);
          v36 = (_DWORD)a1[8] & 0x3F;
          if ( v36 )
            *(_QWORD *)&v33[v34 - 8] &= ~(-1LL << v36);
          return a1;
        }
        v28 = *(_QWORD *)(v25 + 48);
        v29 = v28 + 4 * v27;
        do
        {
          if ( (*(_DWORD *)v28 & 0x3FFFFFFF) - 1 - (unsigned int)((*(_BYTE *)(v28 + 3) & 0x40) != 0) < v9 )
          {
            v30 = (*(_DWORD *)v28 & 0x3FFFFFFF) - 1 - ((*(_BYTE *)(v28 + 3) & 0x40) != 0);
            *(_QWORD *)&(*a1)[8 * (v30 >> 6)] |= 1LL << v30;
          }
          v28 += 4;
        }
        while ( v29 != v28 );
        v22 = ++v21 == (__int64 *)v20;
        if ( (unsigned __int64)v21 < v20 )
          goto LABEL_12;
LABEL_24:
        if ( v22 )
          return a1;
      }
      while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 100 );
      v31 = (__int64 *)(v20 + 8);
      while ( v21 != v31 )
      {
        v32 = *v31++;
        if ( *(_WORD *)(v32 + 36) == 100 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 16) = 0;
  }
  return a1;
}

