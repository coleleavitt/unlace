__int64 __fastcall sub_67FD80(_QWORD *a1, char *a2, double a3)
{
  _QWORD *v3; // r12
  char *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // r13
  unsigned int v7; // r15d
  _DWORD *v8; // rax
  __int64 v9; // rbp
  __int16 v10; // ax
  int v11; // eax
  int v12; // eax
  __int64 v14; // r14
  __int64 v15; // r14
  int v16; // eax
  __int64 *v17; // r8
  __int64 *v18; // r14
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 *v21; // r8
  __int64 *v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 *v25; // [rsp+8h] [rbp-40h]
  __int64 *v26; // [rsp+8h] [rbp-40h]

  v3 = a1;
  v4 = a2;
  if ( (unsigned int)sub_180B130(a1) <= 8 )
    goto LABEL_2;
  if ( (unsigned __int8)sub_186A530(a3) )
  {
    sub_186A4C0(a3);
    v21 = *((__int64 **)a2 + 1);
    if ( v21 )
    {
      v26 = &v21[*((unsigned int *)v21 - 1)];
      if ( v26 != v21 )
      {
        v22 = *((__int64 **)a2 + 1);
        do
        {
          v23 = *v22++;
          v24 = sub_180B150(a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(v24, *v3, v23, 2);
          a2 = "\n";
          a1 = (_QWORD *)v24;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v26 != v22 );
      }
    }
    sub_186A500(a1, a2);
LABEL_2:
    v5 = *((__int64 **)v4 + 1);
    if ( !v5 )
      return 1;
    goto LABEL_3;
  }
  v17 = *((__int64 **)a2 + 1);
  if ( !v17 )
    return 1;
  v25 = &v17[*((unsigned int *)v17 - 1)];
  if ( v25 == v17 )
    return 1;
  v18 = *((__int64 **)a2 + 1);
  do
  {
    v19 = *v18++;
    v20 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v20, *v3, v19, 2);
    a2 = "\n";
    a1 = (_QWORD *)v20;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  while ( v25 != v18 );
  v5 = *((__int64 **)v4 + 1);
  if ( !v5 )
    return 1;
LABEL_3:
  v6 = &v5[*((unsigned int *)v5 - 1)];
  if ( v6 != v5 )
  {
    v7 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( (unsigned int)sub_180B130(a1) > 9 )
        {
          if ( (unsigned __int8)sub_186A530(a3) )
          {
            sub_186A4C0(a3);
            v14 = sub_180B150(a1, a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v14, *v3, v9, 2);
            a2 = "\n";
            a1 = (_QWORD *)v14;
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v14, "\n");
          }
          else
          {
            v15 = sub_180B150(a1, a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v15, *v3, v9, 2);
            a2 = "\n";
            a1 = (_QWORD *)v15;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        v10 = *(_WORD *)(v9 + 4);
        if ( v10 == 2 )
          break;
        if ( !v10 )
        {
          v8 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
          if ( v8 )
          {
            if ( !*v8 && v8[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
            {
              a2 = *(char **)(v9 + 32);
              if ( *((_WORD *)a2 + 2) == 2 )
              {
                v16 = *((_DWORD *)a2 + 4);
                if ( v16 )
                {
                  if ( v16 == 1 )
                  {
                    a1 = v3;
                    v12 = sub_67C840((__int64)v3, (__int64)a2);
                    goto LABEL_13;
                  }
                }
                else
                {
                  a1 = v3;
                  sub_67F660((__int64)v3, (__int64)a2);
                }
              }
            }
          }
        }
LABEL_8:
        if ( v6 == ++v5 )
          return v7;
      }
      v11 = *(_DWORD *)(v9 + 16);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          a2 = (char *)v9;
          a1 = v3;
          sub_67F660((__int64)v3, v9);
        }
        goto LABEL_8;
      }
      a2 = (char *)v9;
      a1 = v3;
      v12 = sub_67C840((__int64)v3, v9);
LABEL_13:
      LOBYTE(v12) = v12 != 0;
      ++v5;
      v7 &= v12;
      if ( v6 == v5 )
        return v7;
    }
  }
  return 1;
}

