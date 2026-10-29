__int64 __fastcall sub_20645B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r15
  int v7; // r14d
  __int64 *v8; // rax
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // r15
  __int64 *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rsi
  __int64 *v15; // rbx
  __int64 *v17; // rbp
  __int64 *v18; // rax
  __int64 *v19; // r15
  __int64 v20; // rsi
  __int64 *v21; // rbp
  __int64 *v22; // rbp
  __int64 *v23; // rbx
  __int64 *v24; // rbp
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = *(__int64 **)a2;
    v4 = *(__int64 **)a1;
    v5 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v6 = *(unsigned int *)(a2 + 8);
      v7 = *(_DWORD *)(a2 + 8);
      if ( v6 <= v5 )
      {
        v18 = *(__int64 **)a1;
        if ( *(_DWORD *)(a2 + 8) )
        {
          v19 = &v4[v6];
          do
          {
            if ( v4 != v2 )
            {
              if ( *v4 )
                sub_20A0850(v4);
              v20 = *v2;
              *v4 = *v2;
              if ( v20 )
              {
                sub_20B3430(v2, v20, v4);
                *v2 = 0;
              }
            }
            ++v4;
            ++v2;
          }
          while ( v4 != v19 );
          v18 = *(__int64 **)a1;
          v5 = *(unsigned int *)(a1 + 8);
        }
        v21 = &v18[v5];
        while ( v4 != v21 )
        {
          while ( *--v21 )
          {
            sub_20A0850(v21);
            if ( v4 == v21 )
              goto LABEL_48;
          }
        }
LABEL_48:
        *(_DWORD *)(a1 + 8) = v7;
        v22 = *(__int64 **)a2;
        v23 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
        if ( *(__int64 **)a2 != v23 )
        {
          while ( !*--v23 )
          {
LABEL_52:
            if ( v22 == v23 )
              goto LABEL_24;
          }
          while ( 1 )
          {
            sub_20A0850(v23);
            if ( v22 == v23 )
              break;
            if ( !*--v23 )
              goto LABEL_52;
          }
        }
      }
      else
      {
        if ( v6 > *(unsigned int *)(a1 + 12) )
        {
          v24 = &v4[v5];
          while ( v24 != v4 )
          {
            while ( *--v24 )
            {
              sub_20A0850(v24);
              if ( v24 == v4 )
                goto LABEL_58;
            }
          }
LABEL_58:
          *(_DWORD *)(a1 + 8) = 0;
          sub_2062C80(a1, v6);
          v2 = *(__int64 **)a2;
          v6 = *(unsigned int *)(a2 + 8);
          v5 = 0;
          v4 = *(__int64 **)a1;
          v8 = *(__int64 **)a2;
        }
        else
        {
          v8 = *(__int64 **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v5 *= 8LL;
            v9 = (__int64 *)((char *)v2 + v5);
            do
            {
              if ( v2 != v4 )
              {
                if ( *v4 )
                {
                  v25 = v5;
                  sub_20A0850(v4);
                  v5 = v25;
                }
                v10 = *v2;
                *v4 = *v2;
                if ( v10 )
                {
                  v26 = v5;
                  sub_20B3430(v2, v10, v4);
                  *v2 = 0;
                  v5 = v26;
                }
              }
              ++v2;
              ++v4;
            }
            while ( v2 != v9 );
            v2 = *(__int64 **)a2;
            v6 = *(unsigned int *)(a2 + 8);
            v4 = *(__int64 **)a1;
            v8 = (__int64 *)(*(_QWORD *)a2 + v5);
          }
        }
        v11 = &v2[v6];
        v12 = (__int64 *)((char *)v4 + v5);
        if ( v11 != v8 )
        {
          v13 = v8;
          do
          {
            v14 = *v13;
            *v12 = *v13;
            if ( v14 )
            {
              sub_20B3430(v13, v14, v12);
              *v13 = 0;
            }
            ++v13;
            ++v12;
          }
          while ( v11 != v13 );
          v2 = *(__int64 **)a2;
        }
        *(_DWORD *)(a1 + 8) = v7;
        v15 = &v2[*(unsigned int *)(a2 + 8)];
        while ( v15 != v2 )
        {
          while ( *--v15 )
          {
            sub_20A0850(v15);
            if ( v15 == v2 )
              goto LABEL_24;
          }
        }
      }
LABEL_24:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v17 = &v4[v5];
      if ( v17 != v4 )
      {
        do
        {
          while ( *--v17 )
          {
            sub_20A0850(v17);
            if ( v17 == v4 )
              goto LABEL_29;
          }
        }
        while ( v17 != v4 );
LABEL_29:
        v4 = *(__int64 **)a1;
      }
      if ( v4 != (__int64 *)(a1 + 16) )
        free(v4);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
