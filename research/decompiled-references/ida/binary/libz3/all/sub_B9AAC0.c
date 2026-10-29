__int64 __fastcall sub_B9AAC0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  int v5; // r14d
  __int64 v6; // r14
  __int64 v7; // r12
  int v8; // r14d
  int v9; // eax
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // r12
  int v13; // r14d
  __int64 v14; // r14
  int v15; // r12d
  __int64 v16; // r12
  __int64 result; // rax
  int v18; // [rsp+4h] [rbp-64h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  int v22; // [rsp+1Ch] [rbp-4Ch]
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = a3 + 3;
  v22 = a3 + 2;
  v18 = a3 + 4;
  do
  {
    v5 = 0;
    if ( a3 )
    {
      do
      {
        ++v5;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( a3 != v5 );
    }
    sub_B9A350(a1, a2);
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      while ( (unsigned int)(*(_DWORD *)v6 - 26) > 1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_B9A350(a1, v6);
        v6 = *(_QWORD *)(v6 + 8);
        if ( !v6 )
          goto LABEL_50;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = a2;
      v7 = v6;
      do
      {
        v8 = 0;
        if ( a3 != -1 )
        {
          do
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v9 = v8++;
          }
          while ( a3 != v9 );
        }
        sub_B9A350(a1, v7);
        v10 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          while ( (unsigned int)(*(_DWORD *)v10 - 26) > 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_B9A350(a1, v10);
            v10 = *(_QWORD *)(v10 + 8);
            if ( !v10 )
              goto LABEL_49;
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          v24 = v7;
          v20 = v10;
          do
          {
            v11 = 0;
            if ( v22 )
            {
              do
              {
                ++v11;
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              while ( v22 != v11 );
            }
            sub_B9A350(a1, v20);
            v12 = *(_QWORD *)(v20 + 8);
            if ( v12 )
            {
              while ( (unsigned int)(*(_DWORD *)v12 - 26) > 1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_B9A350(a1, v12);
                v12 = *(_QWORD *)(v12 + 8);
                if ( !v12 )
                  goto LABEL_48;
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              do
              {
                v13 = 0;
                if ( v3 )
                {
                  do
                  {
                    ++v13;
                    std::__ostream_insert<char,std::char_traits<char>>();
                  }
                  while ( v3 != v13 );
                }
                sub_B9A350(a1, v12);
                v14 = *(_QWORD *)(v12 + 8);
                if ( v14 )
                {
                  while ( (unsigned int)(*(_DWORD *)v14 - 26) > 1 )
                  {
                    std::__ostream_insert<char,std::char_traits<char>>();
                    sub_B9A350(a1, v14);
                    v14 = *(_QWORD *)(v14 + 8);
                    if ( !v14 )
                      goto LABEL_47;
                  }
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v19 = v12;
                  do
                  {
                    v15 = 0;
                    if ( v18 )
                    {
                      do
                      {
                        ++v15;
                        std::__ostream_insert<char,std::char_traits<char>>();
                      }
                      while ( v18 != v15 );
                    }
                    sub_B9A350(a1, v14);
                    v16 = *(_QWORD *)(v14 + 8);
                    if ( v16 )
                    {
                      while ( (unsigned int)(*(_DWORD *)v16 - 26) > 1 )
                      {
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_B9A350(a1, v16);
                        v16 = *(_QWORD *)(v16 + 8);
                        if ( !v16 )
                          goto LABEL_46;
                      }
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_B9AAC0(a1, v16, (unsigned int)(a3 + 5));
                    }
                    else
                    {
LABEL_46:
                      std::__ostream_insert<char,std::char_traits<char>>();
                    }
                    v14 = *(_QWORD *)(v14 + 16);
                  }
                  while ( v14 );
                  v12 = v19;
                }
                else
                {
LABEL_47:
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                v12 = *(_QWORD *)(v12 + 16);
              }
              while ( v12 );
            }
            else
            {
LABEL_48:
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            result = *(_QWORD *)(v20 + 16);
            v20 = result;
          }
          while ( result );
          v7 = v24;
        }
        else
        {
LABEL_49:
          result = std::__ostream_insert<char,std::char_traits<char>>();
        }
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v7 );
      a2 = v23;
    }
    else
    {
LABEL_50:
      result = std::__ostream_insert<char,std::char_traits<char>>();
    }
    a2 = *(_QWORD *)(a2 + 16);
  }
  while ( a2 );
  return result;
}

