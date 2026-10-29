void __fastcall sub_F7E2B0(char *a1, char *a2)
{
  char *v2; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // r13
  char *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rdi
  __int64 v16; // rax

  if ( a1 != a2 )
  {
    v2 = a1 + 8;
    if ( a2 != a1 + 8 )
    {
      v4 = (unsigned __int64)&a1[8 * ((unsigned __int64)(a2 - 16 - a1) >> 3) + 16];
      while ( 1 )
      {
        v5 = *(_QWORD *)v2;
        v6 = v2 + 8;
        if ( !sub_F7DD90(*(_QWORD *)v2 + 24LL, *(_QWORD *)a1 + 24LL) )
          break;
        if ( v2 - a1 > 0 )
          memmove(&v6[-((v2 - a1) >> 3)], &v2[-8 * ((v2 - a1) >> 3)], v2 - a1);
        *(_QWORD *)a1 = v5;
LABEL_18:
        v2 += 8;
        if ( (_QWORD *)v4 == v6 )
          return;
      }
      v7 = v2;
      v8 = 8LL * *(unsigned int *)(v5 + 32);
      while ( 1 )
      {
        v9 = *((_QWORD *)v7 - 1);
        v10 = *(unsigned int *)(v9 + 32);
        v11 = *(_QWORD **)(v9 + 24);
        v12 = *(_QWORD **)(v5 + 24);
        v13 = 8 * v10;
        v14 = &v12[(unsigned __int64)v13 / 8];
        if ( v13 >= v8 )
          v14 = &v12[(unsigned __int64)v8 / 8];
        if ( v12 == v14 )
        {
          v15 = v11;
        }
        else
        {
          if ( *v11 > *v12 )
            goto LABEL_16;
          if ( *v11 < *v12 )
            goto LABEL_17;
          v15 = v11;
          while ( 1 )
          {
            ++v12;
            ++v15;
            if ( v14 == v12 )
              break;
            if ( *v12 < *v15 )
              goto LABEL_16;
            if ( *v12 > *v15 )
              goto LABEL_17;
          }
        }
        if ( v15 == &v11[(unsigned __int64)v13 / 8] )
        {
LABEL_17:
          *(_QWORD *)v7 = v5;
          goto LABEL_18;
        }
LABEL_16:
        v16 = *((_QWORD *)v7 - 1);
        v7 -= 8;
        *((_QWORD *)v7 + 1) = v16;
      }
    }
  }
}
