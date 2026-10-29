__int64 __fastcall sub_675A50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rcx
  _QWORD *i; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rcx
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v14; // [rsp+0h] [rbp-58h]
  _QWORD *v15; // [rsp+0h] [rbp-58h]
  _QWORD *v16; // [rsp+8h] [rbp-50h]
  __int64 *v17; // [rsp+10h] [rbp-48h]
  __int64 *v18; // [rsp+18h] [rbp-40h]

  v2 = *(__int64 **)(a1 + 56);
  if ( v2 )
  {
    v18 = &v2[*((unsigned int *)v2 - 1)];
    if ( v18 != v2 )
    {
      v17 = *(__int64 **)(a1 + 56);
      do
      {
        v3 = *v17;
        v4 = *(_QWORD **)(*v17 + 112);
        if ( v4 )
        {
          for ( i = &v4[*((unsigned int *)v4 - 1)]; i != v4; v4 = v8 + 1 )
          {
            v6 = *v4;
            v14 = v4;
            std::__ostream_insert<char,std::char_traits<char>>();
            v7 = *(_QWORD *)(v6 + 16);
            v8 = v14;
            v9 = v7 + 40LL * *(unsigned int *)(v6 + 24);
            if ( v7 != v9 )
            {
              while ( *(_DWORD *)(v7 + 4) != 2 )
              {
                v7 += 40;
                if ( v9 == v7 )
                  goto LABEL_20;
              }
              if ( v9 != v7 )
              {
                v15 = i;
                v16 = v8;
                do
                {
                  v10 = 0;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(a2, *(_QWORD *)(v3 + 8), *(_QWORD *)(v7 + 8), 2);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(a2, *(_QWORD *)(v3 + 8), *(_QWORD *)(v7 + 16), 2);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  do
                  {
                    v11 = *(_DWORD *)(v7 + 32) + v10++;
                    sub_1648CA0(a2, *(_QWORD *)(v3 + 8), *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * v11), 3);
                    std::__ostream_insert<char,std::char_traits<char>>();
                  }
                  while ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL) >= v10 );
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v12 = v7 + 40;
                  if ( v9 == v7 + 40 )
                    break;
                  while ( 1 )
                  {
                    v7 = v12;
                    if ( *(_DWORD *)(v12 + 4) == 2 )
                      break;
                    v12 += 40;
                    if ( v9 == v12 )
                      goto LABEL_19;
                  }
                }
                while ( v9 != v12 );
LABEL_19:
                i = v15;
                v8 = v16;
              }
            }
LABEL_20:
            ;
          }
        }
        ++v17;
      }
      while ( v18 != v17 );
    }
  }
  return a2;
}

