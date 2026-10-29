__int64 __fastcall sub_13D3700(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v8; // rax
  void *v9; // rdi
  size_t v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rsi
  size_t v14; // rdx
  char v15; // [rsp+Fh] [rbp-49h] BYREF
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  size_t v17; // [rsp+18h] [rbp-40h]
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3 - *(_QWORD *)(a1 + 152);
  a2[1] = v5;
  *a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), v5);
  *((_WORD *)a2 + 8) = 4;
  v6 = *(_BYTE *)(a1 + 24) == 0;
  *(_QWORD *)(a1 + 152) = a3;
  if ( v6 || *(_BYTE *)(a1 + 26) )
    return 1;
  v8 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  sub_13D35F0((__int64)&v16, (__int64)a2, *(_QWORD *)(v8 + 88), *(_QWORD *)(v8 + 56), &v15);
  if ( v15 )
  {
    v9 = v16;
    if ( v16 == v18 )
      return 1;
LABEL_6:
    operator delete(v9);
    return 1;
  }
  *((_BYTE *)v16 + 1) = 42;
  v10 = v17;
  if ( v17 == 0x7FFFFFFFFFFFFFFFLL || v17 == 9223372036854775806LL )
    std::__throw_length_error("basic_string::append");
  if ( v16 == v18 )
    v11 = 15;
  else
    v11 = v18[0];
  if ( v17 + 2 > v11 )
    sub_998B30((__int64)&v16, v17, 0, "*/", 2u);
  else
    *(_WORD *)((char *)v16 + v17) = 12074;
  v17 = v10 + 2;
  *((_BYTE *)v16 + v10 + 2) = 0;
  v12 = *a2;
  v13 = v16;
  v14 = v17;
  *((_WORD *)a2 + 8) = 4;
  sub_145C860(*(_QWORD *)(a1 + 8), v13, v14, a2, v12, (unsigned int)v12);
  v9 = v16;
  if ( v16 != v18 )
    goto LABEL_6;
  return 1;
}
