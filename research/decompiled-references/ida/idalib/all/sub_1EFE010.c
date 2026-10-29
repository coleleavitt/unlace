void __fastcall sub_1EFE010(__int64 a1, __int64 *a2, __int64 *a3)
{
  char ***v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *i; // rdx
  __int64 v10; // r8
  int v11; // esi
  unsigned int v12; // ecx
  char ***v13; // rdi
  char **v14; // rdx
  __int64 *v15; // rdi
  char **v16; // rax
  int v17; // edx
  int v18; // r9d
  char ***v19; // r10

  v5 = (char ***)a2;
  v6 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = 5LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = 10;
  }
  for ( i = &v7[v8]; v7 != i; v7 += 5 )
    *v7 = -4096;
  if ( a2 != a3 )
  {
    do
    {
      v16 = *v5;
      if ( *v5 != (char **)-4096LL && v16 != (char **)-8192LL )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v10 = a1 + 8;
          v11 = 1;
        }
        else
        {
          v17 = *(_DWORD *)(a1 + 16);
          v10 = *(_QWORD *)(a1 + 8);
          if ( !v17 )
          {
            *(_QWORD *)&dword_0 = *v5;
            BUG();
          }
          v11 = v17 - 1;
        }
        v12 = v11 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v13 = (char ***)(v10 + 40LL * v12);
        v14 = *v13;
        if ( v16 != *v13 )
        {
          v18 = 1;
          v19 = nullptr;
          if ( v14 != (char **)-4096LL )
          {
            while ( 1 )
            {
              if ( v14 == (char **)-8192LL && !v19 )
                v19 = v13;
              v12 = v11 & (v18 + v12);
              v13 = (char ***)(v10 + 40LL * v12);
              v14 = *v13;
              if ( v16 == *v13 )
                break;
              if ( v14 == (char **)-4096LL )
              {
                if ( v19 )
                  v13 = v19;
                break;
              }
              ++v18;
            }
          }
        }
        *v13 = v16;
        v13[1] = (char **)(v13 + 3);
        v13[2] = (char **)0x200000000LL;
        if ( *((_DWORD *)v5 + 4) )
          sub_1EB4A10(v13 + 1, v5 + 1);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        v15 = (__int64 *)v5[1];
        if ( v15 != (__int64 *)(v5 + 3) )
          free(v15);
      }
      v5 += 5;
    }
    while ( a3 != (__int64 *)v5 );
  }
}
