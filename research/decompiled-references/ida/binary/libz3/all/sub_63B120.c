void __fastcall sub_63B120(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // r11
  _QWORD *v3; // r14
  _QWORD *v4; // r13
  __int64 v5; // r8
  __int64 v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rbx
  const char *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  const char *v16; // rbx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD *v20; // [rsp+8h] [rbp-50h]
  _QWORD *v21; // [rsp+8h] [rbp-50h]
  _QWORD *v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  _QWORD *v25; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD **)a1;
  v2 = 16LL * *(unsigned int *)(a1 + 8);
  v3 = (_QWORD *)(*(_QWORD *)a1 + v2);
  if ( *(_QWORD **)a1 != v3 )
  {
    while ( *v1 <= 1u )
    {
      v1 += 2;
      if ( v3 == v1 )
        return;
    }
    if ( v3 != v1 )
    {
      v4 = (_QWORD *)(*(_QWORD *)a1 + v2);
      v5 = *v1;
      do
      {
        v6 = v1[1];
        if ( !*(_DWORD *)(v6 + 12) )
        {
          v16 = *(const char **)(v5 + 16);
          v23 = v5;
          v20 = v1;
          if ( ((unsigned __int8)v16 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            v18 = v23;
            v17 = v20;
          }
          else
          {
            if ( v16 )
              strlen(v16);
            std::__ostream_insert<char,std::char_traits<char>>();
            v17 = v20;
            v18 = v23;
          }
          v24 = v18;
          v21 = v17;
          std::__ostream_insert<char,std::char_traits<char>>();
          v5 = v24;
          v1 = v21;
        }
        v7 = *(_QWORD **)v6;
        v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
        if ( *(_QWORD *)v6 != v8 )
        {
          while ( *v7 <= 1u )
          {
            if ( (_QWORD *)v8 == ++v7 )
              goto LABEL_28;
          }
          if ( v7 != (_QWORD *)v8 )
          {
            v25 = v1;
            v9 = *v7;
            v19 = v5;
            v22 = v4;
            v10 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
            v11 = v7;
            do
            {
              v12 = *(_QWORD *)(v19 + 16);
              if ( (v12 & 7) != 0 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::operator<<();
              }
              else
              {
                if ( v12 )
                  strlen(*(const char **)(v19 + 16));
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              v13 = *(const char **)(v9 + 16);
              if ( ((unsigned __int8)v13 & 7) != 0 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::operator<<();
              }
              else
              {
                if ( v13 )
                  strlen(v13);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              v14 = v11 + 1;
              if ( (_QWORD *)v10 == v11 + 1 )
                break;
              while ( 1 )
              {
                v9 = *v14;
                v11 = v14;
                if ( *v14 > 1u )
                  break;
                if ( (_QWORD *)v10 == ++v14 )
                  goto LABEL_27;
              }
            }
            while ( v14 != (_QWORD *)v10 );
LABEL_27:
            v4 = v22;
            v1 = v25;
          }
        }
LABEL_28:
        v15 = v1 + 2;
        if ( v4 == v1 + 2 )
          break;
        while ( 1 )
        {
          v5 = *v15;
          v1 = v15;
          if ( *v15 > 1u )
            break;
          v15 += 2;
          if ( v4 == v15 )
            return;
        }
      }
      while ( v15 != v4 );
    }
  }
}

