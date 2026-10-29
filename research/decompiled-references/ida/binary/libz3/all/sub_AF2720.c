__int64 __fastcall sub_AF2720(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  unsigned int *v10; // rdi
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  unsigned int *v16; // r15
  unsigned int *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned int *v20; // [rsp+18h] [rbp-40h] BYREF

  v4 = a3;
  v5 = a4;
  v6 = a2[3];
  v7 = *(_DWORD *)(v6 + 4LL * a3);
  v8 = *(_DWORD *)(v6 + 4LL * a4);
  if ( v8 == v7 )
  {
    LOBYTE(v5) = a4 != a3;
    return v5;
  }
  if ( v8 <= v7 )
  {
    v7 = v8;
    v4 = a4;
    v5 = a3;
  }
  v9 = sub_186B270(0x10u);
  *(_DWORD *)(v9 + 8) = v5;
  v10 = (unsigned int *)(v9 + 8);
  *(_QWORD *)v9 = 0x100000002LL;
  while ( 1 )
  {
    v11 = *(v10 - 1);
    if ( !v11 )
    {
      v5 = 1;
LABEL_7:
      sub_186B220(v10 - 2);
      return v5;
    }
    v13 = (unsigned int)(v11 - 1);
    v14 = v10[v13];
    *(v10 - 1) = v13;
    if ( v4 == (_DWORD)v14 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( v7 < *(_DWORD *)(a2[3] + 4 * v14) )
    {
      v15 = *(unsigned int **)(a2[6] + 8 * v14);
      if ( v15 )
      {
        v16 = &v15[*(v15 - 1)];
        if ( v16 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v17 = (unsigned int *)(a2[5] + 32LL * *v15);
              if ( *((_BYTE *)v17 + 24) )
              {
                v18 = v17[1];
                if ( *(_DWORD *)(a2[3] + 4 * v18) == *(_DWORD *)(a2[3] + 4LL * *v17) - 1 )
                {
                  if ( v17[2] )
                    break;
                }
              }
              if ( v16 == ++v15 )
                goto LABEL_21;
            }
            if ( !v10 || (v19 = *(v10 - 1), (_DWORD)v19 == *(v10 - 2)) )
            {
              v20 = v10;
              sub_313C10(&v20);
              v10 = v20;
              v19 = *(v20 - 1);
            }
            ++v15;
            v10[v19] = v18;
            ++*(v10 - 1);
          }
          while ( v16 != v15 );
LABEL_21:
          if ( !v10 )
            return 1;
        }
      }
    }
  }
}

