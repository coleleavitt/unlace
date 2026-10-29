__int64 __fastcall sub_9CDD60(__int64 a1, _QWORD *a2, __int64 a3)
{
  void (__fastcall *v5)(void **); // rax
  _WORD *v6; // rax
  _BYTE *v7; // rdi
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rdi
  int v15; // r15d
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rax
  _BYTE *v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // [rsp+10h] [rbp-378h]
  __int64 v23; // [rsp+10h] [rbp-378h]
  _BYTE *v24; // [rsp+10h] [rbp-378h]
  __int64 v25; // [rsp+18h] [rbp-370h]
  void *ptr; // [rsp+30h] [rbp-358h] BYREF
  __int64 v27; // [rsp+38h] [rbp-350h]
  _BYTE v28[16]; // [rsp+40h] [rbp-348h] BYREF
  void *v29; // [rsp+50h] [rbp-338h]
  __int64 v30; // [rsp+58h] [rbp-330h]
  __int64 v31; // [rsp+60h] [rbp-328h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-318h] BYREF
  void *v33; // [rsp+88h] [rbp-300h]
  __int64 v34; // [rsp+98h] [rbp-2F0h] BYREF
  char *v35; // [rsp+B0h] [rbp-2D8h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-2D0h]
  char v37; // [rsp+C0h] [rbp-2C8h] BYREF
  _WORD *v38; // [rsp+1C0h] [rbp-1C8h] BYREF
  _BYTE v39[448]; // [rsp+1C8h] [rbp-1C0h] BYREF

  v5 = *(void (__fastcall **)(void **))(*a2 + 16LL);
  if ( (char *)v5 == (char *)sub_9C7E70 )
  {
    v6 = *(_WORD **)(a2[2] + 16LL);
    if ( (*v6 & 0x1FF) != 0x47 )
      v6 = nullptr;
    v38 = v6;
    ptr = v28;
    v27 = 0x100000000LL;
    sub_9CB680((__int64)&ptr, &v38, v39);
  }
  else
  {
    v5(&ptr);
  }
  v7 = ptr;
  if ( (_DWORD)v27 != 1 )
    goto LABEL_6;
  v9 = *(_QWORD *)(*(_QWORD *)ptr + 16LL);
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_6;
  if ( (unsigned int)sub_9CB330(a3, *(_QWORD *)(*(_QWORD *)ptr + 16LL)) != 1 )
  {
    v7 = ptr;
LABEL_6:
    *(_BYTE *)(a1 + 272) = 0;
    goto LABEL_7;
  }
  v35 = &v37;
  v36 = 0x400000000LL;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
  sub_971A10(v9);
  v22 = sub_B685F0(v9);
  j__strlen("(");
  std::__ostream_insert<char,std::char_traits<char>>();
  std::operator<<<std::char_traits<char>>();
  j__strlen(" = ");
  std::__ostream_insert<char,std::char_traits<char>>();
  std::operator<<<std::char_traits<char>>();
  j__strlen(".subspan(1)).data()");
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = a2[2];
  v11 = *(_QWORD *)(v22 + 2320);
  v12 = *(_QWORD *)(v22 + 2312);
  if ( *(_BYTE *)(v10 + 2) <= 0xFu )
  {
    v14 = *(unsigned int *)(v10 + 4);
  }
  else
  {
    v23 = *(_QWORD *)(v22 + 2320);
    v13 = sub_EC8400(*(_QWORD *)(v10 + 16));
    v11 = v23;
    v14 = v13;
  }
  v15 = sub_13B83B0(v14, v12, v11);
  if ( v15
    && (*(_BYTE *)(v10 + 2) <= 0xFu ? (v16 = *(_DWORD *)(v10 + 4)) : (v16 = sub_EC8400(*(_QWORD *)(v10 + 16))),
        (v17 = v15 + v16 - 1) != 0) )
  {
    std::stringbuf::str();
    v18 = a2[2];
    v19 = v29;
    v20 = v30;
    if ( *(_BYTE *)(v18 + 2) <= 0xFu )
    {
      v25 = v30;
      v24 = v29;
      v21 = sub_EC7AA0(*(_QWORD *)(v18 + 16));
      v19 = v24;
      v20 = v25;
    }
    else
    {
      v21 = *(_DWORD *)(v18 + 4);
    }
    sub_9C8380((__int64)v32, __SPAIR64__(v17, v21), 1, v19, v20);
    sub_9CADB0((__int64)&v35, (unsigned __int64)v32);
    if ( v33 != &v34 )
      operator delete(v33);
    if ( v29 != &v31 )
      operator delete(v29);
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    if ( (_DWORD)v36 )
      sub_9CCB40(a1, (__int64)&v35);
    *(_BYTE *)(a1 + 272) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  sub_9C9400((__int64)&v35);
  v7 = ptr;
LABEL_7:
  if ( v7 != v28 )
    free(v7);
  return a1;
}

