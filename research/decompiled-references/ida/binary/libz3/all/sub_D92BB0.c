__int64 *__fastcall sub_D92BB0(__int64 a1, __int64 a2)
{
  char **v2; // r15
  char **v3; // rbp
  char *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  char **v7; // rax
  char **v8; // r15
  __int64 v9; // r11
  char **v10; // rbp
  char *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  char **v14; // rax
  char **v15; // rbp
  __int64 v16; // r11
  char **v17; // r15
  char *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  char **v21; // rax
  __int64 *v22; // r15
  __int64 *result; // rax
  __int64 *v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r12
  const char *v27; // r14
  __int64 v28; // r14
  char *v29; // [rsp+18h] [rbp-B0h]
  char *v30; // [rsp+18h] [rbp-B0h]
  char *v31; // [rsp+18h] [rbp-B0h]
  unsigned int v32; // [rsp+18h] [rbp-B0h]
  char *v33; // [rsp+20h] [rbp-A8h]
  char *v34; // [rsp+20h] [rbp-A8h]
  char *v35; // [rsp+20h] [rbp-A8h]
  _BYTE v36[16]; // [rsp+30h] [rbp-98h] BYREF
  char v37[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v38[16]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v39[88]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(char ***)(a1 + 120);
  v3 = &v2[2 * *(unsigned int *)(a1 + 128)];
  if ( v3 != v2 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_16;
    }
    if ( v3 != v2 )
    {
      v4 = *v2;
      do
      {
        v33 = v4;
        v29 = v4 + 16;
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = *((_QWORD *)v33 + 2);
        if ( (v5 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v5 )
            strlen(*((const char **)v33 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = sub_180D4A0(v29, " ");
        sub_1606360(v38, v2[1], *(_QWORD *)(a1 + 8), (unsigned int)(v6 + 4), 0, 0);
        sub_160E8B0(a2, v38);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v39);
        v7 = v2 + 2;
        if ( v3 == v2 + 2 )
          break;
        while ( 1 )
        {
          v4 = *v7;
          v2 = v7;
          if ( (unsigned __int64)*v7 > 1 )
            break;
          v7 += 2;
          if ( v3 == v7 )
            goto LABEL_16;
        }
      }
      while ( v3 != v7 );
    }
  }
LABEL_16:
  v8 = *(char ***)(a1 + 144);
  v9 = 2LL * *(unsigned int *)(a1 + 152);
  v10 = &v8[v9];
  if ( v8 != &v8[v9] )
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      v8 += 2;
      if ( v10 == v8 )
        goto LABEL_31;
    }
    if ( v10 != v8 )
    {
      v11 = *v8;
      do
      {
        v34 = v11;
        v30 = v11 + 16;
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = *((_QWORD *)v34 + 2);
        if ( (v12 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v12 )
            strlen(*((const char **)v34 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v13 = sub_180D4A0(v30, " ");
        sub_1606360(v38, v8[1], *(_QWORD *)(a1 + 8), (unsigned int)(v13 + 4), 0, 0);
        sub_160E8B0(a2, v38);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v39);
        v14 = v8 + 2;
        if ( v10 == v8 + 2 )
          break;
        while ( 1 )
        {
          v11 = *v14;
          v8 = v14;
          if ( (unsigned __int64)*v14 > 1 )
            break;
          v14 += 2;
          if ( v10 == v14 )
            goto LABEL_31;
        }
      }
      while ( v10 != v14 );
    }
  }
LABEL_31:
  v15 = *(char ***)(a1 + 168);
  v16 = 2LL * *(unsigned int *)(a1 + 176);
  v17 = &v15[v16];
  if ( v15 != &v15[v16] )
  {
    while ( (unsigned __int64)*v15 <= 1 )
    {
      v15 += 2;
      if ( v17 == v15 )
        goto LABEL_46;
    }
    if ( v17 != v15 )
    {
      v18 = *v15;
      do
      {
        v35 = v18;
        v31 = v18 + 16;
        std::__ostream_insert<char,std::char_traits<char>>();
        v19 = *((_QWORD *)v35 + 2);
        if ( (v19 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v19 )
            strlen(*((const char **)v35 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = sub_180D4A0(v31, " ");
        sub_1606360(v38, v15[1], *(_QWORD *)(a1 + 8), (unsigned int)(v20 + 4), 0, 0);
        sub_160E8B0(a2, v38);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v39);
        v21 = v15 + 2;
        if ( v17 == v15 + 2 )
          break;
        while ( 1 )
        {
          v18 = *v21;
          v15 = v21;
          if ( (unsigned __int64)*v21 > 1 )
            break;
          v21 += 2;
          if ( v17 == v21 )
            goto LABEL_46;
        }
      }
      while ( v21 != v17 );
    }
  }
LABEL_46:
  v22 = *(__int64 **)(a1 + 192);
  result = (__int64 *)(3LL * *(unsigned int *)(a1 + 200));
  v24 = &v22[3 * *(unsigned int *)(a1 + 200)];
  if ( v22 != v24 )
  {
    while ( (unsigned __int64)*v22 <= 1 )
    {
      v22 += 3;
      if ( v24 == v22 )
        return result;
    }
    if ( v24 != v22 )
    {
      v25 = *v22;
      do
      {
        v26 = v25 + 16;
        std::__ostream_insert<char,std::char_traits<char>>();
        v27 = *(const char **)(v25 + 16);
        if ( ((unsigned __int8)v27 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v27 )
            strlen(v27);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v32 = sub_180D4A0(v26, " ") + 4;
        sub_1606360(v36, v22[1], *(_QWORD *)(a1 + 8), v32, 0, 0);
        v28 = sub_160E8B0(a2, v36);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v38, v22[2], *(_QWORD *)(a1 + 8), v32, 0, 0);
        sub_160E8B0(v28, v38);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v39);
        sub_18572D0(v37);
        result = v22 + 3;
        if ( v24 == v22 + 3 )
          break;
        while ( 1 )
        {
          v25 = *result;
          v22 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          result += 3;
          if ( v24 == result )
            return result;
        }
      }
      while ( result != v24 );
    }
  }
  return result;
}

