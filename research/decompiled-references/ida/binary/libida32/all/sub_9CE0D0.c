__int64 __fastcall sub_9CE0D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // al
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-390h]
  __int64 v18; // [rsp+10h] [rbp-388h]
  __int64 v19; // [rsp+18h] [rbp-380h]
  int v20; // [rsp+20h] [rbp-378h]
  _BYTE *v21; // [rsp+20h] [rbp-378h]
  __int64 v22; // [rsp+28h] [rbp-370h]
  _BYTE *v23; // [rsp+40h] [rbp-358h] BYREF
  __int64 v24; // [rsp+48h] [rbp-350h]
  char v25; // [rsp+50h] [rbp-348h]
  void *v26; // [rsp+60h] [rbp-338h] BYREF
  __int64 v27; // [rsp+68h] [rbp-330h]
  char v28; // [rsp+70h] [rbp-328h] BYREF
  void *v29[2]; // [rsp+80h] [rbp-318h] BYREF
  char v30; // [rsp+90h] [rbp-308h] BYREF
  void *v31; // [rsp+98h] [rbp-300h]
  __int64 v32; // [rsp+A8h] [rbp-2F0h] BYREF
  void *v33; // [rsp+C0h] [rbp-2D8h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-2D0h]
  _BYTE v35[256]; // [rsp+D0h] [rbp-2C8h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  if ( sub_9C8E60(v6, a2, a3, a4, a5) )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = *(_QWORD *)(v6 + 24);
  v8 = sub_BD7B00(v7);
  v9 = sub_B685F0(*(_QWORD *)(v8 + 16));
  if ( sub_9C8E60(v6, a2, v10, v11, v12) )
    v17 = *(_QWORD *)(v6 + 24);
  else
    v17 = *(_QWORD *)(v6 + 16);
  v18 = *(_QWORD *)(v9 + 2312);
  v19 = *(_QWORD *)(v9 + 2320);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
  sub_C1ADC0(&v33, v17, v9, 0);
  if ( v35[0] )
  {
    if ( (unsigned int)v34 <= 0x40 )
    {
      v13 = v33 == nullptr;
    }
    else
    {
      v20 = v34;
      v13 = v20 == (unsigned int)sub_21E2A40(&v33);
    }
    if ( v13 )
    {
      sub_96A770((__int64)&v33);
      sub_991090((__int64)&v23, v8, v18, v19);
      if ( v25 )
      {
        if ( v23 )
        {
          v33 = v35;
          sub_9C77B0(&v33, v23, (__int64)&v23[v24]);
        }
        else
        {
          v35[0] = 0;
          v33 = v35;
          v34 = 0;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        j__strlen(".data()");
        std::__ostream_insert<char,std::char_traits<char>>();
        v14 = v33;
        if ( v33 == v35 )
          goto LABEL_14;
        goto LABEL_13;
      }
LABEL_21:
      *(_BYTE *)(a1 + 272) = 0;
      goto LABEL_22;
    }
  }
  sub_96A770((__int64)&v33);
  sub_991090((__int64)&v23, v8, v18, v19);
  if ( !v25 )
    goto LABEL_21;
  v21 = v23;
  v22 = v24;
  sub_991090((__int64)&v26, v17, v18, v19);
  if ( !v28 )
    goto LABEL_21;
  j__strlen("&");
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v21 )
  {
    v29[0] = &v30;
    sub_9C77B0(v29, v21, (__int64)&v21[v22]);
  }
  else
  {
    v30 = 0;
    v29[0] = &v30;
    v29[1] = nullptr;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  j__strlen(".data()");
  std::__ostream_insert<char,std::char_traits<char>>();
  j__strlen("[");
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v26 )
  {
    v33 = v35;
    sub_9C77B0(&v33, v26, (__int64)v26 + v27);
  }
  else
  {
    v35[0] = 0;
    v33 = v35;
    v34 = 0;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  j__strlen("]");
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v33 != v35 )
    operator delete(v33);
  v14 = v29[0];
  if ( v29[0] == &v30 )
    goto LABEL_14;
LABEL_13:
  operator delete(v14);
LABEL_14:
  std::stringbuf::str();
  v15 = sub_EC8B80(a2);
  sub_9C8380((__int64)v29, v15, 1, v26, v27);
  v33 = v35;
  v34 = 0x400000000LL;
  sub_9CAEA0((__int64)&v33, (__int64)v29, (__int64)&v33);
  *(_QWORD *)(a1 + 8) = 0x400000000LL;
  *(_QWORD *)a1 = a1 + 16;
  if ( (_DWORD)v34 )
    sub_9CCB40(a1, (__int64)&v33);
  *(_BYTE *)(a1 + 272) = 1;
  sub_9C9400((__int64)&v33);
  if ( v31 != &v32 )
    operator delete(v31);
  if ( v26 != &v28 )
    operator delete(v26);
LABEL_22:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

