bool __fastcall sub_952D70(__int64 *a1, unsigned int *a2, unsigned int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // r14
  unsigned int v10; // edi
  __int64 v11; // r11
  unsigned int **v12; // rcx
  int v13; // r12d
  __int64 v14; // r11
  unsigned int **v15; // rsi
  __int64 v16; // r12
  unsigned int **v17; // r9
  unsigned int **v18; // rax
  unsigned int *v19; // rdx
  unsigned int **v20; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // eax
  unsigned int **v23; // rax
  unsigned int *v24; // rdx
  unsigned int *v25; // rax
  unsigned int *v26; // rax
  __int64 v27; // r12
  unsigned int v28; // ebx
  unsigned int v31; // eax
  unsigned int v33; // [rsp+4h] [rbp-44h]

  v9 = *a1;
  v10 = a2[3];
  v11 = *(unsigned int *)(v9 + 1112);
  v12 = *(unsigned int ***)(v9 + 1104);
  v13 = v11 - 1;
  v14 = 16 * v11;
  v15 = &v12[(unsigned __int64)v14 / 8];
  v16 = 16LL * (v10 & v13);
  v17 = &v12[(unsigned __int64)v16 / 8];
  if ( v16 == v14 )
  {
LABEL_9:
    if ( v12 == v17 )
      goto LABEL_8;
    v20 = *(unsigned int ***)(v9 + 1104);
    while ( 1 )
    {
      v21 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
      {
        if ( v21[3] == v10 && a2 == v21 )
        {
          v31 = v20[1][2];
          if ( a6 >= v31 )
            v31 = a6;
          v33 = v31;
          if ( v16 == v14 )
          {
            while ( 1 )
            {
LABEL_32:
              v25 = *v12;
              if ( (unsigned __int64)*v12 > 1 )
              {
                if ( v25[3] == v10 && a2 == v25 )
                {
                  v23 = v12;
                  goto LABEL_36;
                }
              }
              else if ( !v25 )
              {
                goto LABEL_8;
              }
              v12 += 2;
              if ( v12 == v17 )
                goto LABEL_8;
            }
          }
          goto LABEL_20;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_8;
      }
      v20 += 2;
      if ( v17 == v20 )
        goto LABEL_8;
    }
  }
  v18 = &v12[(unsigned __int64)v16 / 8];
  while ( 1 )
  {
    v19 = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
    {
      if ( !v19 )
        goto LABEL_8;
      goto LABEL_5;
    }
    if ( v19[3] == v10 && a2 == v19 )
      break;
LABEL_5:
    v18 += 2;
    if ( v15 == v18 )
      goto LABEL_9;
  }
  v22 = v18[1][2];
  if ( a6 >= v22 )
    v22 = a6;
  v33 = v22;
LABEL_20:
  v23 = &v12[(unsigned __int64)v16 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = *v23;
      if ( (unsigned __int64)*v23 > 1 )
        break;
      if ( !v24 )
        goto LABEL_8;
      v23 += 2;
      if ( v23 == v15 )
      {
LABEL_27:
        if ( v12 != v17 )
          goto LABEL_32;
LABEL_8:
        BUG();
      }
    }
    if ( v24[3] == v10 && a2 == v24 )
      break;
    v23 += 2;
    if ( v23 == v15 )
      goto LABEL_27;
  }
LABEL_36:
  v26 = v23[1];
  if ( v26[10] < v33 )
    v26[10] = v33;
  v27 = sub_B70A50(*(_QWORD *)(v9 + 8) + 8440LL, a2, *a2, a3, a4, a5);
  if ( v27 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 104LL) + 912LL) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v28 = a3 - 1;
      std::ostream::_M_insert<unsigned long>();
      if ( a3 )
      {
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v28-- != 0 );
      }
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    sub_ADBB40(v9 + 24, v27, 0, v33, a6, a6);
    ++*(_DWORD *)(v9 + 1200);
  }
  return v27 != 0;
}

