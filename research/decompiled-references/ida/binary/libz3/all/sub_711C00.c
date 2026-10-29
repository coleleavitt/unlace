__int64 *__fastcall sub_711C00(_QWORD *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v4; // r15
  __int64 *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // r8d
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 *i; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  void *v25; // [rsp+10h] [rbp-A8h]
  _BYTE v26[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v27[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v29[88]; // [rsp+60h] [rbp-58h] BYREF

  result = (__int64 *)std::__ostream_insert<char,std::char_traits<char>>();
  v4 = (__int64 *)a1[5];
  v5 = &v4[2 * *((unsigned int *)a1 + 12)];
  if ( v4 != v5 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v5 == v4 )
        goto LABEL_12;
    }
    if ( v5 != v4 )
    {
      v6 = *v4;
      do
      {
        sub_1606360(v26, v6, *a1, 0, 0, 0);
        v7 = sub_160E8B0(a2, v26);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v28, v4[1], *a1, 0, 0, 0);
        sub_160E8B0(v7, v28);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v29);
        sub_18572D0(v27);
        result = v4 + 2;
        if ( v5 == v4 + 2 )
          break;
        while ( 1 )
        {
          v6 = *result;
          v4 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          result += 2;
          if ( v5 == result )
            goto LABEL_12;
        }
      }
      while ( v5 != result );
    }
  }
LABEL_12:
  v8 = a1[1];
  if ( v8 )
  {
    result = (__int64 *)v26;
    v9 = 0;
    do
    {
      if ( v9 >= *(_DWORD *)(v8 - 4) )
        break;
      std::__ostream_insert<char,std::char_traits<char>>();
      v10 = 16LL * v9;
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = a1[1];
      result = *(__int64 **)(v8 + v10 + 8);
      if ( result )
      {
        v11 = 0;
        do
        {
          if ( v11 >= *((_DWORD *)result - 1) )
            break;
          v12 = (__int64 *)a1[5];
          v13 = result[v11];
          v14 = *((unsigned int *)a1 + 12);
          v15 = *(_DWORD *)(v13 + 12);
          v16 = v14 - 1;
          v14 *= 16;
          v17 = (__int64 *)((char *)v12 + v14);
          v18 = 16LL * (v15 & v16);
          v19 = &v12[(unsigned __int64)v18 / 8];
          if ( v18 != v14 )
          {
            for ( i = &v12[(unsigned __int64)v18 / 8]; v17 != i; i += 2 )
            {
              v21 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v21 + 12) == v15 && v13 == v21 )
                {
LABEL_30:
                  v25 = (void *)i[1];
                  sub_1606360(v26, v13, *a1, 0, 0, 0);
                  v22 = sub_160E8B0(a2, v26);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(v28, v25, *a1, 0, 0, 0);
                  sub_160E8B0(v22, v28);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_18572D0(v29);
                  sub_18572D0(v27);
                  goto LABEL_26;
                }
              }
              else if ( !v21 )
              {
                goto LABEL_25;
              }
            }
          }
          for ( ; v19 != v12; v12 += 2 )
          {
            v23 = *v12;
            if ( (unsigned __int64)*v12 > 1 )
            {
              if ( *(_DWORD *)(v23 + 12) == v15 && v13 == v23 )
              {
                i = v12;
                goto LABEL_30;
              }
            }
            else if ( !v23 )
            {
              break;
            }
          }
LABEL_25:
          sub_1606360(v28, v13, *a1, 0, 0, 0);
          sub_160E8B0(a2, v28);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v29);
LABEL_26:
          v8 = a1[1];
          ++v11;
          result = *(__int64 **)(v8 + v10 + 8);
        }
        while ( result );
      }
      ++v9;
    }
    while ( v8 );
  }
  return result;
}

