void __fastcall sub_DBFB20(_QWORD *a1, _BYTE *a2, size_t a3)
{
  size_t v4; // rdx
  _BYTE *v5; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rax
  size_t v14; // rdx
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  size_t n; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a3 )
    std::__throw_length_error("basic_string::append");
  v5 = (_BYTE *)*a1;
  v8 = v4 + a3;
  if ( (_QWORD *)*a1 == a1 + 2 )
  {
    if ( (unsigned __int64)v8 <= 0xF )
    {
LABEL_4:
      if ( a3 )
      {
        v10 = &v5[v4];
        if ( a3 == 1 )
          *v10 = *a2;
        else
          memcpy(v10, a2, a3);
        v5 = (_BYTE *)*a1;
      }
      goto LABEL_8;
    }
    if ( v8 >= 0 )
    {
      if ( (unsigned __int64)v8 <= 0x1D )
      {
        v12 = 31;
        v11 = 30;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
LABEL_29:
    std::__throw_length_error("basic_string::_M_create");
  }
  v9 = a1[2];
  if ( v9 >= v8 )
    goto LABEL_4;
  if ( v8 < 0 )
    goto LABEL_29;
  v11 = 2 * v9;
  if ( v8 < 2 * v9 )
  {
    v12 = v11 + 1;
    if ( (v9 & 0x4000000000000000LL) == 0 )
      goto LABEL_12;
LABEL_21:
    std::__throw_bad_alloc();
  }
LABEL_11:
  v11 = v4 + a3;
  v12 = v8 + 1;
  if ( v8 + 1 < 0 )
    goto LABEL_21;
LABEL_12:
  n = v4;
  v13 = (_BYTE *)operator new(v12);
  v14 = n;
  v5 = v13;
  if ( n )
  {
    v15 = (_BYTE *)*a1;
    if ( n == 1 )
    {
      *v13 = *v15;
    }
    else
    {
      memcpy(v13, v15, n);
      v14 = n;
    }
  }
  if ( a2 && a3 )
  {
    v16 = &v5[v14];
    if ( a3 == 1 )
      *v16 = *a2;
    else
      memcpy(v16, a2, a3);
  }
  sub_233E40((__int64)a1);
  *a1 = v5;
  a1[2] = v11;
LABEL_8:
  a1[1] = v8;
  v5[v8] = 0;
}

