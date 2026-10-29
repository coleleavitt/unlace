__int64 __fastcall sub_9DDEB0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rbx
  char v6; // r15
  __int64 v7; // rbp
  void *v8; // rbp
  __int64 v9; // rbx
  __int64 i; // rbp
  unsigned int v11; // esi
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-98h]
  char v16; // [rsp+17h] [rbp-81h]
  _QWORD v18[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v20; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+50h] [rbp-48h] BYREF

  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *a3;
  if ( !v5 || (v15 = v5 + 40LL * *(unsigned int *)(v5 - 4), v15 == v5) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_31;
  }
  v16 = 0;
  v6 = 1;
  do
  {
    while ( 1 )
    {
      v7 = *(unsigned int *)(v5 + 32);
      if ( (_DWORD)v7 != -1 )
        break;
LABEL_11:
      v5 += 40;
      if ( v15 == v5 )
        goto LABEL_18;
    }
    if ( !sub_9B2ED0((__int64)a1, v7) )
    {
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
      {
        v16 = 1;
        if ( v6 )
          goto LABEL_5;
      }
      else
      {
        v16 |= *(_DWORD *)(v5 + 16) != 1;
        if ( v6 )
          goto LABEL_5;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_5:
      if ( (*(_BYTE *)(v5 + 4) & 1) != 0
        || *(_DWORD *)v5 != 1
        || (*(_BYTE *)(v5 + 20) & 1) != 0
        || *(_DWORD *)(v5 + 16) != 1 )
      {
        sub_1850940(&v20, qword_1C7F2C0, v5);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v20 != v21 )
          operator delete(v20, v21[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      v6 = 0;
      goto LABEL_11;
    }
    sub_3EBE30((__int64)&v20, v5, *(_QWORD *)(a1[85] + 8 * v7) + 16LL);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v18, (__int64)&v20, (__int64)v18);
    v8 = qword_1C7F2C0;
    v5 += 40;
    sub_182CBA0(qword_1C7F2C0, &v20);
    sub_182CBA0(v8, v21);
  }
  while ( v15 != v5 );
LABEL_18:
  if ( LODWORD(v18[0]) )
  {
    if ( !v6 )
      std::__ostream_insert<char,std::char_traits<char>>();
    sub_2FCE40((__int64)a2, (__int64)v18);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v16 )
  {
    v9 = *a3;
    if ( *a3 )
    {
      for ( i = v9 + 40LL * *(unsigned int *)(v9 - 4); v9 != i; v9 += 40 )
      {
        v11 = *(_DWORD *)(v9 + 32);
        if ( v11 != -1 )
        {
          if ( ((*(_BYTE *)(a1[82] + 4LL * v11 + 3) >> 4) & 3) == 1
            || !sub_9B2ED0((__int64)a1, v11)
            && ((v12 = *(unsigned int *)(v9 + 32), v11 = *(_DWORD *)(v9 + 32), *(_QWORD *)(a1[85] + 8 * v12))
             || *(_QWORD *)(a1[86] + 8 * v12)) )
          {
            sub_9DD9E0(a1, a2, v11);
          }
        }
      }
    }
  }
LABEL_31:
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  return sub_182CBA0(v13, v19);
}

