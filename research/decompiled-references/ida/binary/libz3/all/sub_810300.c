__int64 __fastcall sub_810300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int *v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  char *v10; // rdx
  __int64 v11; // r12
  char *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  _QWORD *v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // r13
  __int64 v18; // r15
  _QWORD *v19; // r12
  __int64 v20; // rbp
  _DWORD *v22; // r12
  _DWORD *v23; // r15
  _DWORD *v24; // r14
  int v25; // r12d
  _DWORD *v26; // rbp
  __int64 v27; // r14
  _DWORD *v28; // r12
  _DWORD *v29; // r13
  _DWORD *v30; // r13
  int v31; // r12d
  _DWORD *v32; // rbp
  int v33; // [rsp+0h] [rbp-48h]
  int v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+8h] [rbp-40h]
  __int64 v37; // [rsp+8h] [rbp-40h]

  v3 = *(unsigned int *)(a3 + 16);
  v4 = *(unsigned int *)(a3 + 20);
  v5 = *(unsigned int *)(a3 + 12);
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 0:
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *(_DWORD *)(a3 + 28) == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      goto LABEL_25;
    case 1:
      std::__ostream_insert<char,std::char_traits<char>>();
      v22 = *(_DWORD **)(*(_QWORD *)(a1 + 600) + 8 * v3);
      if ( !v22 )
        goto LABEL_35;
      v33 = *(v22 - 1);
      if ( !v33 )
        goto LABEL_35;
      if ( *v22 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      if ( v33 == 1 )
        goto LABEL_35;
      v23 = v22 + 1;
      v36 = (__int64)&v22[v33 - 2 + 2];
      do
      {
        while ( 1 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( *v23 == -2 )
            break;
          ++v23;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          if ( v23 == (_DWORD *)v36 )
            goto LABEL_35;
        }
        ++v23;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v23 != (_DWORD *)v36 );
LABEL_35:
      std::__ostream_insert<char,std::char_traits<char>>();
      v24 = *(_DWORD **)(*(_QWORD *)(a1 + 600) + 8 * v4);
      if ( v24 )
      {
        v25 = *(v24 - 1);
        if ( v25 )
        {
          if ( *v24 == -2 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
          }
          if ( v25 != 1 )
          {
            v26 = v24 + 1;
            v27 = (__int64)&v24[v25 - 2 + 2];
            do
            {
              while ( 1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( *v26 == -2 )
                  break;
                ++v26;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                if ( (_DWORD *)v27 == v26 )
                  goto LABEL_44;
              }
              ++v26;
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( (_DWORD *)v27 != v26 );
          }
        }
      }
LABEL_44:
      std::__ostream_insert<char,std::char_traits<char>>();
      return std::ostream::_M_insert<unsigned long>();
    case 2:
      std::__ostream_insert<char,std::char_traits<char>>();
      v28 = *(_DWORD **)(*(_QWORD *)(a1 + 600) + 8LL * (unsigned int)v3);
      if ( !v28 )
        goto LABEL_54;
      v34 = *(v28 - 1);
      if ( !v34 )
        goto LABEL_54;
      if ( *v28 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      if ( v34 == 1 )
        goto LABEL_54;
      v29 = v28 + 1;
      v37 = (__int64)&v28[v34 - 2 + 2];
      do
      {
        while ( 1 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( *v29 == -2 )
            break;
          ++v29;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          if ( v29 == (_DWORD *)v37 )
            goto LABEL_54;
        }
        ++v29;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v29 != (_DWORD *)v37 );
LABEL_54:
      std::__ostream_insert<char,std::char_traits<char>>();
      v30 = *(_DWORD **)(*(_QWORD *)(a1 + 600) + 8LL * (unsigned int)v4);
      if ( v30 )
      {
        v31 = *(v30 - 1);
        if ( v31 )
        {
          if ( *v30 == -2 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
          }
          if ( v31 != 1 )
          {
            v32 = v30 + 1;
            v35 = (__int64)&v30[v31 - 2 + 2];
            do
            {
              while ( 1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                if ( *v32 == -2 )
                  break;
                ++v32;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                if ( (_DWORD *)v35 == v32 )
                  goto LABEL_25;
              }
              ++v32;
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( (_DWORD *)v35 != v32 );
          }
        }
      }
LABEL_25:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      return std::ostream::operator<<();
    case 3:
      v7 = (unsigned int *)sub_7E4F60(a1, *(_DWORD *)(a3 + 24) >> 1);
      v8 = sub_7E4F00(a1, v7);
      v9 = *(_DWORD *)(a1 + 12);
      v10 = (char *)(*(_QWORD *)(v8 + 176) + 88LL);
      if ( *(int *)v10 >> 8 == -1 )
        goto LABEL_71;
      break;
    case 4:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v14 = std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v15 = *(_QWORD **)(a3 + 32);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a1 + 80);
        v14 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v14, *(_QWORD *)(v16 + 1592), *v15, 3);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = *(_QWORD **)(a3 + 40);
      if ( v17 )
      {
        v18 = *(_QWORD *)(a1 + 80);
        v14 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v14, *(_QWORD *)(v18 + 1592), *v17, 3);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v19 = *(_QWORD **)(a3 + 48);
      if ( !v19 )
        goto LABEL_69;
      v20 = *(_QWORD *)(a1 + 80);
      v14 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v14, *(_QWORD *)(v20 + 1592), *v19, 3);
      return v14;
    default:
      sub_1872CE0("");
      sub_1873130(114, 768);
  }
  do
  {
    if ( v9 == *v10 )
    {
      v11 = 8LL * (unsigned int)(*(int *)v10 >> 8);
      goto LABEL_7;
    }
    v10 = *((char **)v10 + 1);
  }
  while ( v10 );
LABEL_71:
  v11 = 0x7FFFFFFF8LL;
LABEL_7:
  v12 = (char *)(*(_QWORD *)(v8 + 184) + 88LL);
  if ( *(int *)v12 >> 8 == -1 )
  {
LABEL_70:
    v13 = 0x7FFFFFFF8LL;
  }
  else
  {
    while ( v9 != *v12 )
    {
      v12 = *((char **)v12 + 1);
      if ( !v12 )
        goto LABEL_70;
    }
    v13 = 8LL * (unsigned int)(*(int *)v12 >> 8);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v14 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 600) + v11) + 4 * v5) == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 600) + v13) + 4 * v5) == -2 )
  {
LABEL_69:
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  return v14;
}

