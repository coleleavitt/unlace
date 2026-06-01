__int64 __fastcall sub_5DE240(__int64 a1, __int64 *a2, int *a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  void *v6; // rbp
  int v7; // eax
  void *v8; // rbp
  int v10; // [rsp+10h] [rbp-78h] BYREF
  char v11; // [rsp+14h] [rbp-74h]
  __int64 v12; // [rsp+18h] [rbp-70h]
  int v13; // [rsp+20h] [rbp-68h] BYREF
  char v14; // [rsp+24h] [rbp-64h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  void *v16; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *(_DWORD *)(v4 - 4) )
        break;
      sub_1850940(&v16, qword_1C7F2C0, 32LL * v5 + v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v16 != v17 )
        operator delete(v16, v17[0] + 1LL);
      ++v5;
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = *a2;
    }
    while ( *a2 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 &= 0xFCu;
  v6 = qword_1C7F2C0;
  v14 &= 0xFCu;
  v10 = 0;
  v12 = 0;
  v13 = 1;
  v15 = 0;
  if ( (a3[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v10, a3);
    if ( (a3[5] & 1) == 0 )
      goto LABEL_9;
  }
  else
  {
    v10 = *a3;
    if ( (a3[5] & 1) == 0 )
    {
LABEL_9:
      v7 = a3[4];
      v14 &= ~1u;
      v13 = v7;
      goto LABEL_10;
    }
  }
  sub_182C690(v6, &v13, a3 + 4);
LABEL_10:
  sub_1831620(qword_1C7F2C0, &v10);
  sub_1850940(&v16, qword_1C7F2C0, &v10);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v16 != v17 )
    operator delete(v16, v17[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v10);
  return sub_182CBA0(v8, &v13);
}

