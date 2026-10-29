__int64 __fastcall sub_7CBCE0(_QWORD *a1, __int64 a2)
{
  unsigned int *v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // r14d
  unsigned int *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-48h]
  unsigned int *v19; // [rsp+8h] [rbp-40h]

  sub_13D4AF0(a1 + 199);
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = (unsigned int *)a1[297];
  if ( v3 )
  {
    v19 = &v3[*(v3 - 1)];
    while ( v19 != v3 )
    {
      v4 = *v3;
      v5 = *v3;
      v6 = *(unsigned int **)(a1[291] + 8 * v4);
      std::ostream::_M_insert<unsigned long>();
      sub_7CB810((__int64)a1, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v18 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = sub_17F35B0(v18, *(unsigned int *)(*(_QWORD *)(a1[3] + 3288LL) + 8LL * v5));
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v7, a1[18], v6, 1);
      v8 = a1[215];
      if ( v8 )
      {
        v9 = *v6;
        if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
        {
          v10 = *(_QWORD *)(v8 + 8 * v9);
          if ( v10 )
          {
            if ( *(int *)(v10 + 88) >> 8 != -1 )
            {
              v11 = (char *)(v10 + 88);
              do
              {
                while ( 1 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v12 = *(_QWORD *)(a1[300] + 8LL * (unsigned int)*v11);
                  v13 = *(_QWORD *)(v12 + 16);
                  if ( (v13 & 7) == 0 )
                    break;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::operator<<();
                  v11 = *((char **)v11 + 1);
                  if ( !v11 )
                    goto LABEL_13;
                }
                if ( v13 )
                  strlen(*(const char **)(v12 + 16));
                std::__ostream_insert<char,std::char_traits<char>>();
                v11 = *((char **)v11 + 1);
              }
              while ( v11 );
            }
          }
        }
      }
LABEL_13:
      ++v3;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v14 = (__int64 *)a1[299];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    while ( v15 != v14 )
    {
      v16 = *v14++;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 224LL))(v16, a2);
    }
  }
  return a2;
}

