void __fastcall sub_13D11F0(__int64 *a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v3; // r15
  _QWORD *v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  char *v7; // rbp
  char v8; // dl
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rbp
  _BYTE *v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi

  v1 = a1[1];
  if ( v1 )
  {
    v3 = 0;
    v4 = a1 + 3;
    while ( 1 )
    {
      v6 = *a1;
      v7 = (char *)(*a1 + v3);
      v8 = *v7;
      if ( *v7 == 92 || v8 == 34 )
      {
        v9 = a1[1];
        v10 = a1[2];
        v11 = (_BYTE *)(v6 + v9);
        v12 = v9 + 1;
        if ( v7 == (char *)(v6 + v9) )
        {
          if ( v12 > v10 )
          {
            sub_2236E10(a1, v4, v12, 1);
            v11 = (_BYTE *)(*a1 + a1[1]);
          }
          *v11 = 92;
          ++a1[1];
        }
        else
        {
          if ( v12 > v10 )
          {
            sub_2236E10(a1, v4, v12, 1);
            v6 = *a1;
            v9 = a1[1];
            v7 = (char *)(*a1 + v3);
            v11 = (_BYTE *)(*a1 + v9);
          }
          *v11 = *(_BYTE *)(v6 + v9 - 1);
          v13 = a1[1];
          if ( *a1 + v13 - 1 != (_QWORD)v7 )
          {
            memmove(&v7[*a1 + 1 - *a1], v7, *a1 + v13 - 1 - (_QWORD)v7);
            v13 = a1[1];
          }
          a1[1] = v13 + 1;
          *v7 = 92;
        }
        v5 = v3 + 2;
        if ( v3 + 2 >= ++v1 )
          return;
      }
      else
      {
        v5 = v3 + 1;
        if ( v8 == 13 || v8 == 10 )
        {
          if ( v1 - 1 > v3 && ((v14 = *(_BYTE *)(v6 + v5), v14 == 13) || v14 == 10) && v8 != v14 )
          {
            *v7 = 92;
            *(_BYTE *)(*a1 + v5) = 110;
          }
          else
          {
            *v7 = 92;
            v15 = *a1;
            v16 = a1[1];
            v17 = (_BYTE *)(*a1 + v5);
            v18 = (_BYTE *)(*a1 + v16);
            v19 = v16 + 1;
            if ( v17 == v18 )
            {
              if ( v19 > a1[2] )
              {
                sub_2236E10(a1, v4, v19, 1);
                v18 = (_BYTE *)(*a1 + a1[1]);
              }
              *v18 = 110;
              ++a1[1];
            }
            else
            {
              if ( v19 > a1[2] )
              {
                sub_2236E10(a1, v4, v19, 1);
                v15 = *a1;
                v16 = a1[1];
                v17 = (_BYTE *)(*a1 + v5);
                v18 = (_BYTE *)(*a1 + v16);
              }
              *v18 = *(_BYTE *)(v15 + v16 - 1);
              v20 = a1[1];
              if ( *a1 + v20 - 1 != (_QWORD)v17 )
              {
                memmove(&v17[*a1 + 1 - *a1], v17, *a1 + v20 - 1 - (_QWORD)v17);
                v20 = a1[1];
              }
              a1[1] = v20 + 1;
              *v17 = 110;
            }
            ++v1;
          }
          v5 = v3 + 2;
        }
        if ( v5 >= v1 )
          return;
      }
      v3 = v5;
    }
  }
}
