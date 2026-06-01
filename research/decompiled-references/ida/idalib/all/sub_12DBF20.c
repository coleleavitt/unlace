void __fastcall sub_12DBF20(__int64 *a1)
{
  int v1; // r14d
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbp
  void **v8; // r13
  void **v9; // r15
  int v10; // edx
  int v11; // ebx
  unsigned int v12; // eax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  __int64 v19; // rdx
  _DWORD *j; // rdx
  _DWORD *i; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 || *((_DWORD *)a1 + 3) )
  {
    v2 = *a1;
    v4 = 4 * v1;
    v5 = *((unsigned int *)a1 + 4);
    v6 = 16 * v5;
    if ( (unsigned int)(4 * v1) < 0x40 )
      v4 = 64;
    v7 = v2 + v6;
    if ( (unsigned int)v5 <= v4 )
    {
      for ( ; v2 != v7; v2 += 16 )
      {
        if ( *(_DWORD *)v2 )
        {
          if ( *(_DWORD *)v2 != -1 )
          {
            v8 = *(void ***)(v2 + 8);
            if ( v8 )
            {
              if ( *v8 != v8 + 2 )
                free(*v8);
              operator delete(v8, 0x410u);
            }
          }
          *(_DWORD *)v2 = 0;
        }
      }
LABEL_15:
      a1[1] = 0;
      return;
    }
    do
    {
      if ( (unsigned int)(*(_DWORD *)v2 + 1) > 1 )
      {
        v9 = *(void ***)(v2 + 8);
        if ( v9 )
        {
          if ( *v9 != v9 + 2 )
            free(*v9);
          operator delete(v9, 0x410u);
        }
      }
      v2 += 16;
    }
    while ( v2 != v7 );
    v10 = *((_DWORD *)a1 + 4);
    if ( !v1 )
    {
      if ( v10 )
      {
        operator delete(*a1, v6, 8);
        *a1 = 0;
        a1[1] = 0;
        *((_DWORD *)a1 + 4) = 0;
        return;
      }
      goto LABEL_15;
    }
    v11 = 64;
    if ( v1 != 1 )
    {
      _BitScanReverse(&v12, v1 - 1);
      v11 = 1 << (33 - (v12 ^ 0x1F));
      if ( v11 < 64 )
        v11 = 64;
    }
    v13 = (_DWORD *)*a1;
    if ( v10 == v11 )
    {
      a1[1] = 0;
      for ( i = &v13[4 * v10]; i != v13; v13 += 4 )
        *v13 = 0;
    }
    else
    {
      operator delete(v13, v6, 8);
      v14 = 4 * v11 / 3u;
      v15 = ((((((((((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
                 | (unsigned int)(v14 + 1)
                 | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 4)
               | (((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
               | (unsigned int)(v14 + 1)
               | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 8)
             | (((((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
               | (unsigned int)(v14 + 1)
               | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 4)
             | (((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
             | (unsigned int)(v14 + 1)
             | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 16)
           | (((((((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
               | (unsigned int)(v14 + 1)
               | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 4)
             | (((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
             | (unsigned int)(v14 + 1)
             | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 8)
           | (((((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
             | (unsigned int)(v14 + 1)
             | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 4)
           | (((unsigned int)(v14 + 1) | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1)) >> 2)
           | (unsigned int)(v14 + 1)
           | ((unsigned __int64)(unsigned int)(v14 + 1) >> 1))
          + 1;
      *((_DWORD *)a1 + 4) = v15;
      v18 = (_DWORD *)sub_22300B0(16 * v15, 8, v14, 2863311531LL, v16, v17);
      v19 = *((unsigned int *)a1 + 4);
      a1[1] = 0;
      *a1 = (__int64)v18;
      for ( j = &v18[4 * v19]; j != v18; v18 += 4 )
        *v18 = 0;
    }
  }
}
