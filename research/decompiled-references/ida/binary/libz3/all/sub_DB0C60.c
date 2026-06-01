void __fastcall sub_DB0C60(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rbx
  __int64 **v14; // r13
  __int64 *v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v20; // esi

  if ( !*(_DWORD *)(a1 + 36) && !*(_DWORD *)(a1 + 40) )
    goto LABEL_19;
  v2 = *(char **)(a1 + 24);
  v3 = 0;
  v4 = *(unsigned int *)(a1 + 32);
  v5 = v2;
  v6 = &v2[32 * v4];
  if ( v2 != v6 )
  {
    do
    {
      while ( *((_DWORD *)v5 + 1) )
      {
        *((_DWORD *)v5 + 1) = 0;
        v5 += 32;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 32;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 > 0x10 && 3 * (int)v4 < (unsigned int)(4 * v3) )
    {
      if ( v2 )
      {
        sub_186B220(v2);
        v7 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v7 >>= 1;
        v8 = v7;
        *(_DWORD *)(a1 + 32) = v7;
        v9 = sub_186B270(32LL * v7);
        if ( !v7 )
        {
LABEL_17:
          *(_QWORD *)(a1 + 24) = v9;
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
        v20 = (unsigned int)v4 >> 1;
        v8 = v20;
        *(_DWORD *)(a1 + 32) = v20;
        v9 = sub_186B270(32LL * v20);
      }
      v10 = (_QWORD *)v9;
      v11 = (_QWORD *)(v9 + 32 * v8);
      do
      {
        *v10 = 0;
        v10 += 4;
        *(v10 - 3) = 0;
      }
      while ( v11 != v10 );
      v12 = v9;
      if ( ((32 * (_BYTE)v8) & 0x20) == 0 || (v12 = v9 + 32, *(_DWORD *)(v9 + 16) = 0, v11 != (_QWORD *)(v9 + 32)) )
      {
        do
        {
          *(_DWORD *)(v12 + 16) = 0;
          v12 += 64;
          *(_DWORD *)(v12 - 16) = 0;
        }
        while ( v11 != (_QWORD *)v12 );
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 36) = 0;
LABEL_19:
  v13 = *(__int64 ***)(a1 + 48);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 == v14 )
      goto LABEL_31;
    do
    {
      v15 = *v13;
      if ( *v13 )
      {
        v16 = v15[2];
        if ( v16 )
          sub_186B220((void *)(v16 - 8));
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v15[1];
          if ( (*(_DWORD *)(v17 + 8))-- == 1 )
            sub_15D7BC0(v18, v17);
        }
        sub_186B220(v15);
      }
      ++v13;
    }
    while ( v14 != v13 );
    v14 = *(__int64 ***)(a1 + 48);
    if ( v14 )
LABEL_31:
      *((_DWORD *)v14 - 1) = 0;
  }
}

