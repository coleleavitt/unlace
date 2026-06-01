__int64 __fastcall sub_9F1E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // al
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // r13
  size_t v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  size_t v22; // rax
  __int64 v23; // rdx
  char *v24; // rsi
  size_t v25; // rax
  size_t v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // rsi
  size_t v29; // rax
  __int64 v30; // [rsp+8h] [rbp-390h]
  __int64 v31; // [rsp+8h] [rbp-390h]
  __int64 v32; // [rsp+8h] [rbp-390h]
  __int64 v33; // [rsp+10h] [rbp-388h]
  __int64 v34; // [rsp+18h] [rbp-380h]
  int v35; // [rsp+20h] [rbp-378h]
  _BYTE *v36; // [rsp+20h] [rbp-378h]
  __int64 v37; // [rsp+28h] [rbp-370h]
  _BYTE *v38; // [rsp+40h] [rbp-358h] BYREF
  __int64 v39; // [rsp+48h] [rbp-350h]
  char v40; // [rsp+50h] [rbp-348h]
  void *v41; // [rsp+60h] [rbp-338h] BYREF
  __int64 v42; // [rsp+68h] [rbp-330h]
  char v43; // [rsp+70h] [rbp-328h] BYREF
  void *v44; // [rsp+80h] [rbp-318h] BYREF
  __int64 v45; // [rsp+88h] [rbp-310h]
  char v46; // [rsp+90h] [rbp-308h] BYREF
  void *v47; // [rsp+98h] [rbp-300h]
  __int64 v48; // [rsp+A8h] [rbp-2F0h] BYREF
  void *v49; // [rsp+C0h] [rbp-2D8h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-2D0h]
  _BYTE v51[256]; // [rsp+D0h] [rbp-2C8h] BYREF
  _BYTE v52[16]; // [rsp+1D0h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+1E0h] [rbp-1B8h] BYREF
  __int64 v54; // [rsp+1E8h] [rbp-1B0h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  if ( sub_9ECBA0(v7, a2, a3, a4, a5) )
    v8 = *(_QWORD *)(v7 + 16);
  else
    v8 = *(_QWORD *)(v7 + 24);
  v9 = sub_BFB840(v8);
  v10 = sub_B8C330(*(_QWORD *)(v9 + 16));
  if ( sub_9ECBA0(v7, a2, v11, v12, v13) )
    v30 = *(_QWORD *)(v7 + 24);
  else
    v30 = *(_QWORD *)(v7 + 16);
  v33 = *(_QWORD *)(v10 + 2312);
  v34 = *(_QWORD *)(v10 + 2320);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v52, 24);
  sub_C3EB00(&v49, v30, v10, 0);
  if ( v51[0] )
  {
    if ( (unsigned int)v50 <= 0x40 )
    {
      v14 = v49 == nullptr;
    }
    else
    {
      v35 = v50;
      v14 = v35 == (unsigned int)sub_2206780(&v49);
    }
    if ( v14 )
    {
      sub_98E4B0((__int64)&v49);
      sub_9B4DD0((__int64)&v38, v9, v33, v34);
      if ( v40 )
      {
        if ( v38 )
        {
          v49 = v51;
          sub_9EB4F0(&v49, v38, (__int64)&v38[v39]);
          v15 = v50;
          v16 = v49;
        }
        else
        {
          v16 = v51;
          v51[0] = 0;
          v15 = 0;
          v49 = v51;
          v50 = 0;
        }
        v17 = std::__ostream_insert<char,std::char_traits<char>>(&v53, v16, v15);
        v18 = j__strlen(".data()");
        std::__ostream_insert<char,std::char_traits<char>>(v17, ".data()", v18);
        v19 = v49;
        if ( v49 == v51 )
          goto LABEL_14;
        goto LABEL_13;
      }
LABEL_21:
      *(_BYTE *)(a1 + 272) = 0;
      goto LABEL_22;
    }
  }
  sub_98E4B0((__int64)&v49);
  sub_9B4DD0((__int64)&v38, v9, v33, v34);
  if ( !v40 )
    goto LABEL_21;
  v36 = v38;
  v37 = v39;
  sub_9B4DD0((__int64)&v41, v30, v33, v34);
  if ( !v43 )
    goto LABEL_21;
  v22 = j__strlen("&");
  std::__ostream_insert<char,std::char_traits<char>>(&v53, "&", v22);
  if ( v36 )
  {
    v44 = &v46;
    sub_9EB4F0(&v44, v36, (__int64)&v36[v37]);
    v23 = v45;
    v24 = (char *)v44;
  }
  else
  {
    v24 = &v46;
    v46 = 0;
    v23 = 0;
    v44 = &v46;
    v45 = 0;
  }
  v31 = std::__ostream_insert<char,std::char_traits<char>>(&v53, v24, v23);
  v25 = j__strlen(".data()");
  std::__ostream_insert<char,std::char_traits<char>>(v31, ".data()", v25);
  v26 = j__strlen("[");
  std::__ostream_insert<char,std::char_traits<char>>(v31, "[", v26);
  if ( v41 )
  {
    v49 = v51;
    sub_9EB4F0(&v49, v41, (__int64)v41 + v42);
    v27 = v50;
    v28 = v49;
  }
  else
  {
    v28 = v51;
    v51[0] = 0;
    v27 = 0;
    v49 = v51;
    v50 = 0;
  }
  v32 = std::__ostream_insert<char,std::char_traits<char>>(v31, v28, v27);
  v29 = j__strlen("]");
  std::__ostream_insert<char,std::char_traits<char>>(v32, "]", v29);
  if ( v49 != v51 )
    operator delete(v49);
  v19 = v44;
  if ( v44 == &v46 )
    goto LABEL_14;
LABEL_13:
  operator delete(v19);
LABEL_14:
  std::stringbuf::str(&v41, &v54);
  v20 = sub_EEC8C0(a2);
  sub_9EC0C0((__int64)&v44, v20, 1, v41, v42);
  v49 = v51;
  v50 = 0x400000000LL;
  sub_9EEBE0((__int64)&v49, (__int64)&v44, (__int64)&v49);
  *(_QWORD *)(a1 + 8) = 0x400000000LL;
  *(_QWORD *)a1 = a1 + 16;
  if ( (_DWORD)v50 )
    sub_9F0880(a1, (__int64)&v49);
  *(_BYTE *)(a1 + 272) = 1;
  sub_9ED140((__int64)&v49);
  if ( v47 != &v48 )
    operator delete(v47);
  if ( v41 != &v43 )
    operator delete(v41);
LABEL_22:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v52);
  return a1;
}
