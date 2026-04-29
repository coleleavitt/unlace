void __fastcall sub_13F9F0(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi

  v14 = *(_QWORD *)(a1 + 792);
  v1 = *(unsigned __int64 **)v14;
  if ( *(_QWORD *)v14 )
  {
    if ( *(_QWORD *)(v14 + 8) )
    {
      v2 = (__int64 *)v1[1];
      if ( v1 != (unsigned __int64 *)v2 )
      {
        do
        {
          while ( 1 )
          {
LABEL_4:
            while ( 1 )
            {
              v3 = *v2;
              v4 = *v2 & 2;
              if ( v2[4] )
                break;
              v6 = (unsigned __int64)v2;
              if ( !v4 )
              {
                v7 = v2[2];
                if ( (*(_BYTE *)v7 & 2) != 0 )
                {
                  v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
                  v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v8 & 2) == 0 )
                  {
                    v9 = (unsigned __int64)v2;
                    do
                    {
                      if ( v9 != *(_QWORD *)(v6 + 16) )
                        break;
                      v9 = v6;
                      v10 = v8 & 0xFFFFFFFFFFFFFFFCLL;
                      v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
                      v6 = v10;
                    }
                    while ( (v8 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v6 = v7;
                    v7 = *(_QWORD *)(v7 + 8);
                  }
                  while ( (*(_BYTE *)v7 & 2) == 0 );
                }
              }
              sub_13F360((unsigned __int64 **)v14, v2);
              v2 = (__int64 *)v6;
              if ( *(_QWORD *)v14 == v6 )
                return;
            }
            if ( !v4 )
              break;
LABEL_8:
            if ( *(__int64 **)v14 == v2 )
              return;
          }
          v5 = (__int64 *)v2[2];
          if ( (*(_BYTE *)v5 & 2) == 0 )
          {
            do
            {
              v2 = v5;
              v5 = (__int64 *)v5[1];
            }
            while ( (*(_BYTE *)v5 & 2) == 0 );
            goto LABEL_8;
          }
          v11 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
          v12 = *v11;
          if ( (*v11 & 2) == 0 )
          {
            while ( v2 == (__int64 *)v11[2] )
            {
              v2 = v11;
              v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
              v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v12 & 2) != 0 )
              {
                v2 = (__int64 *)v13;
                if ( *(_QWORD *)v14 != v13 )
                  goto LABEL_4;
                return;
              }
              v11 = (__int64 *)v13;
            }
          }
          v2 = v11;
        }
        while ( *(__int64 **)v14 != v11 );
      }
    }
  }
  else
  {
    nullsub_303();
  }
}
