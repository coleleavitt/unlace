void __fastcall sub_1F80B70(char *a1, char *a2)
{
  char *v2; // rbp
  __int64 v3; // r13
  char *v4; // rbx
  unsigned int *v5; // r12
  __int64 v6; // rcx
  size_t v7; // r14
  unsigned int *v8; // rsi
  size_t v9; // rdx
  size_t v10; // r15
  int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  if ( a2 - a1 <= 128 )
  {
    sub_1F6D580(a1, a2);
  }
  else
  {
    v2 = a1 + 128;
    sub_1F6D580(a1, a1 + 128);
    if ( a1 + 128 != a2 )
    {
      v13 = (unsigned __int64)&a1[8 * ((unsigned __int64)(a2 - a1 - 136) >> 3) + 136];
      do
      {
        v3 = *(_QWORD *)v2;
        v4 = v2;
        v5 = *(unsigned int **)(*(_QWORD *)v2 + 16LL);
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = *((_QWORD *)v4 - 1);
            v7 = *v5;
            v8 = *(unsigned int **)(v6 + 16);
            v9 = v7;
            v10 = *v8;
            if ( v10 <= v7 )
              v9 = *v8;
            if ( !v9 )
              break;
            v12 = *((_QWORD *)v4 - 1);
            v11 = memcmp(v5 + 4, v8 + 4, v9);
            v6 = v12;
            if ( !v11 )
              break;
            if ( v11 >= 0 )
              goto LABEL_4;
            *(_QWORD *)v4 = v12;
            v4 -= 8;
          }
          if ( v10 == v7 || v10 <= v7 )
            break;
          *(_QWORD *)v4 = v6;
          v4 -= 8;
        }
LABEL_4:
        *(_QWORD *)v4 = v3;
        v2 += 8;
      }
      while ( v2 != (char *)v13 );
    }
  }
}
