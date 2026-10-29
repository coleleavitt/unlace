void __fastcall sub_426B30(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rbp
  char **v7; // r12
  __int64 v8; // rax
  char **v9; // r15
  char *v10; // r13
  __int64 v11; // rbp
  char *v12; // rbx
  char *v13; // rbp
  __int64 v14; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    sub_426580(a1, v2, 0);
    sub_425630(a1, *(_QWORD **)(a1 + 8), 0);
    v3 = *(_QWORD **)(a1 + 8);
    if ( v3 )
    {
      v4 = v3[2];
      if ( v4 )
        sub_186B220((void *)(v4 - 8));
      v5 = (_QWORD *)*v3;
      if ( *v3 )
      {
        if ( (*(_DWORD *)v5)-- == 1 )
        {
          sub_41CB00(v5);
          sub_186B220(v5);
        }
      }
      sub_186B220(v3);
    }
    *(_QWORD *)(a1 + 8) = 0;
  }
  v7 = *(char ***)(a1 + 24);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[3 * v8];
      do
      {
        v10 = *v7;
        if ( *v7 )
        {
          v11 = *((unsigned int *)v7 + 2);
          if ( (_DWORD)v11 )
          {
            v12 = *v7;
            v13 = &v10[16 * v11];
            do
            {
              while ( 1 )
              {
                v14 = *((_QWORD *)v12 + 1);
                if ( !v14 )
                  break;
                v12 += 16;
                sub_186B220((void *)(v14 - 8));
                if ( v13 == v12 )
                  goto LABEL_18;
              }
              v12 += 16;
            }
            while ( v13 != v12 );
          }
LABEL_18:
          sub_186B220(v10);
        }
        v7 += 3;
      }
      while ( v7 != v9 );
      v7 = *(char ***)(a1 + 24);
    }
    *((_DWORD *)v7 - 1) = 0;
  }
}

