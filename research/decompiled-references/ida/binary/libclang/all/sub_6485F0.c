void __fastcall sub_6485F0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  _BYTE *v5; // r14
  size_t v6; // rbp
  _BYTE *v7; // rdi
  void *v8; // r13
  void **v9; // rbp
  void **v10; // rbx
  void **v11; // rdi
  __int64 v12; // rax
  size_t v13; // [rsp+8h] [rbp-50h]
  void *v14; // [rsp+10h] [rbp-48h] BYREF
  void **v15; // [rsp+18h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-38h]

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 == *(__int64 **)(a1 + 16) )
  {
    sub_648250(a1, (__int64)a2, a3);
    return;
  }
  sub_644390((__int64)&v14, a3);
  v5 = (_BYTE *)*a2;
  v6 = a2[1];
  *v4 = (__int64)(v4 + 2);
  if ( v5 )
  {
    v13 = v6;
    if ( v6 > 0xF )
    {
      v12 = std::string::_M_create();
      *v4 = v12;
      v7 = (_BYTE *)v12;
      v4[2] = v6;
LABEL_18:
      memcpy(v7, v5, v6);
      v6 = v13;
      v7 = (_BYTE *)*v4;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v6 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v13 = 0;
  }
  v7 = (_BYTE *)*v4;
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_6;
    goto LABEL_18;
  }
  *v7 = *v5;
  v6 = v13;
  v7 = (_BYTE *)*v4;
LABEL_6:
  v4[1] = v6;
  v7[v6] = 0;
  sub_644390((__int64)(v4 + 4), (__int64 *)&v14);
  v8 = v14;
  v9 = v15;
  v10 = (void **)v14;
  if ( v15 != v14 )
  {
    do
    {
      v11 = (void **)v10[5];
      if ( v11 != v10 + 7 )
        operator delete(v11, (unsigned __int64)v10[7] + 1);
      if ( *v10 != v10 + 2 )
        operator delete(*v10, (unsigned __int64)v10[2] + 1);
      v10 += 10;
    }
    while ( v9 != v10 );
  }
  if ( v8 )
    operator delete(v8, v16 - (_QWORD)v8);
  *(_QWORD *)(a1 + 8) += 56LL;
}

