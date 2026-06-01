__int64 __fastcall sub_9F1AA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void (__fastcall *v5)(void **); // rax
  _WORD *v6; // rax
  _BYTE *v7; // rdi
  __int64 v9; // r14
  const char *v10; // r15
  size_t v11; // rax
  __int64 v12; // r14
  size_t v13; // rax
  __int64 v14; // r14
  size_t v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // rdi
  int v21; // r15d
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rax
  _BYTE *v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // [rsp+10h] [rbp-378h]
  __int64 v29; // [rsp+10h] [rbp-378h]
  _BYTE *v30; // [rsp+10h] [rbp-378h]
  __int64 v31; // [rsp+18h] [rbp-370h]
  void *ptr; // [rsp+30h] [rbp-358h] BYREF
  __int64 v33; // [rsp+38h] [rbp-350h]
  _BYTE v34[16]; // [rsp+40h] [rbp-348h] BYREF
  void *v35; // [rsp+50h] [rbp-338h] BYREF
  __int64 v36; // [rsp+58h] [rbp-330h]
  __int64 v37; // [rsp+60h] [rbp-328h] BYREF
  _BYTE v38[24]; // [rsp+70h] [rbp-318h] BYREF
  void *v39; // [rsp+88h] [rbp-300h]
  __int64 v40; // [rsp+98h] [rbp-2F0h] BYREF
  char *v41; // [rsp+B0h] [rbp-2D8h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-2D0h]
  char v43; // [rsp+C0h] [rbp-2C8h] BYREF
  _WORD *v44; // [rsp+1C0h] [rbp-1C8h] BYREF
  _BYTE v45[8]; // [rsp+1C8h] [rbp-1C0h] BYREF
  __int64 v46; // [rsp+1D0h] [rbp-1B8h] BYREF
  __int64 v47; // [rsp+1D8h] [rbp-1B0h] BYREF

  v5 = *(void (__fastcall **)(void **))(*a2 + 16LL);
  if ( (char *)v5 == (char *)sub_9EBBB0 )
  {
    v6 = *(_WORD **)(a2[2] + 16LL);
    if ( (*v6 & 0x1FF) != 0x47 )
      v6 = nullptr;
    v44 = v6;
    ptr = v34;
    v33 = 0x100000000LL;
    sub_9EF3C0((__int64)&ptr, &v44, v45);
  }
  else
  {
    v5(&ptr);
  }
  v7 = ptr;
  if ( (_DWORD)v33 != 1 )
    goto LABEL_6;
  v9 = *(_QWORD *)(*(_QWORD *)ptr + 16LL);
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_6;
  if ( (unsigned int)sub_9EF070(a3, *(_QWORD *)(*(_QWORD *)ptr + 16LL)) != 1 )
  {
    v7 = ptr;
LABEL_6:
    *(_BYTE *)(a1 + 272) = 0;
    goto LABEL_7;
  }
  v41 = &v43;
  v42 = 0x400000000LL;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v44, 24);
  v10 = sub_995750(v9);
  v28 = sub_B8C330(v9);
  v11 = j__strlen("(");
  std::__ostream_insert<char,std::char_traits<char>>(&v46, "(", v11);
  v12 = std::operator<<<std::char_traits<char>>(&v46, v10);
  v13 = j__strlen(" = ");
  std::__ostream_insert<char,std::char_traits<char>>(v12, " = ", v13);
  v14 = std::operator<<<std::char_traits<char>>(v12, v10);
  v15 = j__strlen(".subspan(1)).data()");
  std::__ostream_insert<char,std::char_traits<char>>(v14, ".subspan(1)).data()", v15);
  v16 = a2[2];
  v17 = *(_QWORD *)(v28 + 2320);
  v18 = *(_QWORD *)(v28 + 2312);
  if ( *(_BYTE *)(v16 + 2) <= 0xFu )
  {
    v20 = *(unsigned int *)(v16 + 4);
  }
  else
  {
    v29 = *(_QWORD *)(v28 + 2320);
    v19 = sub_EEC140(*(_QWORD *)(v16 + 16));
    v17 = v29;
    v20 = v19;
  }
  v21 = sub_13DC0F0(v20, v18, v17);
  if ( v21
    && (*(_BYTE *)(v16 + 2) <= 0xFu ? (v22 = *(_DWORD *)(v16 + 4)) : (v22 = sub_EEC140(*(_QWORD *)(v16 + 16))),
        (v23 = v21 + v22 - 1) != 0) )
  {
    std::stringbuf::str(&v35, &v47);
    v24 = a2[2];
    v25 = v35;
    v26 = v36;
    if ( *(_BYTE *)(v24 + 2) <= 0xFu )
    {
      v31 = v36;
      v30 = v35;
      v27 = sub_EEB7E0(*(_QWORD *)(v24 + 16));
      v25 = v30;
      v26 = v31;
    }
    else
    {
      v27 = *(_DWORD *)(v24 + 4);
    }
    sub_9EC0C0((__int64)v38, __SPAIR64__(v23, v27), 1, v25, v26);
    sub_9EEAF0((__int64)&v41, (unsigned __int64)v38);
    if ( v39 != &v40 )
      operator delete(v39);
    if ( v35 != &v37 )
      operator delete(v35);
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    if ( (_DWORD)v42 )
      sub_9F0880(a1, (__int64)&v41);
    *(_BYTE *)(a1 + 272) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(&v44);
  sub_9ED140((__int64)&v41);
  v7 = ptr;
LABEL_7:
  if ( v7 != v34 )
    free(v7);
  return a1;
}
