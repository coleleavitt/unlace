void __fastcall sub_27DE80(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rsi
  unsigned __int64 i; // rax

  v1 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = (__int64 *)v1[1];
      if ( v1 != (unsigned __int64 *)v2 )
      {
        do
        {
          while ( 1 )
          {
LABEL_4:
            if ( v2[5] == 1 )
            {
              v3 = v2[4];
              if ( v3 )
                v3 = *(_QWORD *)(v3 + 8);
              if ( !*(_QWORD *)(v3 + 40) && *(_DWORD *)(v3 + 32) == -1 )
              {
                v8 = *v2;
                v9 = (unsigned __int64)v2;
                if ( (*v2 & 2) == 0 )
                {
                  v9 = v2[2];
                  if ( (*(_BYTE *)v9 & 2) != 0 )
                  {
                    v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
                    v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v10 & 2) == 0 )
                    {
                      v11 = v2;
                      do
                      {
                        if ( *(__int64 **)(v9 + 16) != v11 )
                          break;
                        v11 = (__int64 *)v9;
                        v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
                        v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
                        v9 = v12;
                      }
                      while ( (v10 & 2) == 0 );
                    }
                  }
                  else
                  {
                    for ( i = *(_QWORD *)(v9 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
                      v9 = i;
                  }
                }
                v13 = v2;
                v2 = (__int64 *)v9;
                sub_27DA30((unsigned __int64 **)a1, v13);
                goto LABEL_12;
              }
            }
            sub_27A4D0((__int64)(v2 + 4));
            if ( (*v2 & 2) == 0 )
              break;
LABEL_12:
            if ( *(__int64 **)a1 == v2 )
              return;
          }
          v4 = (__int64 *)v2[2];
          if ( (*(_BYTE *)v4 & 2) == 0 )
          {
            do
            {
              v2 = v4;
              v4 = (__int64 *)v4[1];
            }
            while ( (*(_BYTE *)v4 & 2) == 0 );
            goto LABEL_12;
          }
          v5 = (__int64 *)(*v2 & 0xFFFFFFFFFFFFFFFCLL);
          v6 = *v5;
          if ( (*v5 & 2) == 0 )
          {
            while ( (__int64 *)v5[2] == v2 )
            {
              v2 = v5;
              v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
              v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v6 & 2) != 0 )
              {
                v2 = (__int64 *)v7;
                if ( *(_QWORD *)a1 != v7 )
                  goto LABEL_4;
                return;
              }
              v5 = (__int64 *)v7;
            }
          }
          v2 = v5;
        }
        while ( *(__int64 **)a1 != v5 );
      }
    }
  }
}
