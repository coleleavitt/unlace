void __fastcall __noreturn sub_646610(__int64 a1)
{
  size_t v1; // rbp
  _BYTE *v2; // r12
  char v3; // al
  _BYTE *v4; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // r14
  _BYTE *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rcx
  __int64 v13; // rax
  _BYTE *v14; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_BYTE **)a1;
  v3 = *(_BYTE *)(*(_QWORD *)a1 + v1 - 1);
  if ( v3 == 92 || v3 == 47 )
  {
LABEL_3:
    sub_1872CE0("");
    sub_1873130(107, 606);
  }
  v4 = (_BYTE *)(a1 + 16);
  v6 = v1 + 1;
  if ( v2 == (_BYTE *)(a1 + 16) )
  {
    if ( v1 != 15 )
      goto LABEL_6;
    v9 = 30;
    v13 = operator new(0x1Fu);
    v12 = *(_BYTE **)a1;
    v2 = (_BYTE *)v13;
LABEL_16:
    if ( v1 == 1 )
    {
      *v2 = *v12;
    }
    else
    {
      v14 = v12;
      memcpy(v2, v12, v1);
      v12 = v14;
    }
LABEL_11:
    if ( v12 != v4 )
      operator delete(v12, *(_QWORD *)(a1 + 16) + 1LL);
    *(_QWORD *)a1 = v2;
    *(_QWORD *)(a1 + 16) = v9;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 >= v6 )
  {
LABEL_6:
    v2[v1] = 47;
    v8 = *(_BYTE **)a1;
    *(_QWORD *)(a1 + 8) = v6;
    v8[v1 + 1] = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v9 = 2 * v7;
  if ( v6 < (unsigned __int64)v9 )
  {
    v10 = v9 + 1;
    if ( v9 >= 0 )
    {
LABEL_10:
      v11 = operator new(v10);
      v12 = *(_BYTE **)a1;
      v2 = (_BYTE *)v11;
      if ( !v1 )
        goto LABEL_11;
      goto LABEL_16;
    }
  }
  else
  {
    v9 = v1 + 1;
    v10 = v1 + 2;
    if ( (__int64)(v1 + 2) >= 0 )
      goto LABEL_10;
  }
  std::__throw_bad_alloc();
}

