_QWORD *__fastcall sub_FDBEA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _BYTE *v9; // r15
  signed __int64 v10; // rbp
  _BYTE *v11; // rax
  void **v12; // rbp
  void **v13; // rbx
  _QWORD *result; // rax
  bool v15; // zf
  __int64 v16; // [rsp+0h] [rbp-70h]
  __int64 v17; // [rsp+8h] [rbp-68h]
  void *v18[2]; // [rsp+18h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-48h]

  v5 = a2;
  v6 = 4 * a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL);
  *(_OWORD *)v18 = 0;
  v19 = nullptr;
  v17 = v7;
  v16 = a2 + 32 * a3;
  if ( (32 * a3) >> 5 )
  {
    if ( (unsigned __int64)((32 * a3) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v8 = (_QWORD *)operator new(v6 * 8);
  }
  else
  {
    v8 = nullptr;
  }
  v18[0] = v8;
  v19 = &v8[v6];
  if ( a2 != v16 )
  {
    v9 = *(_BYTE **)a2;
    v10 = *(_QWORD *)(a2 + 8);
    *v8 = v8 + 2;
    if ( &v9[v10] )
      goto LABEL_11;
    while ( (unsigned __int64)v10 <= 0xF )
    {
      v11 = (_BYTE *)*v8;
      if ( v10 == 1 )
      {
        *v11 = *v9;
        v11 = (_BYTE *)*v8;
        goto LABEL_9;
      }
      if ( v10 )
        goto LABEL_17;
LABEL_9:
      v8[1] = v10;
      v5 += 32;
      v8 += 4;
      v11[v10] = 0;
      if ( v16 == v5 )
        goto LABEL_18;
      v9 = *(_BYTE **)v5;
      v10 = *(_QWORD *)(v5 + 8);
      *v8 = v8 + 2;
      if ( &v9[v10] )
      {
LABEL_11:
        if ( !v9 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
    }
    if ( v10 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (_BYTE *)operator new(v10 + 1);
    v8[2] = v10;
    *v8 = v11;
LABEL_17:
    memcpy(v11, v9, v10);
    v11 = (_BYTE *)*v8;
    goto LABEL_9;
  }
LABEL_18:
  v18[1] = v8;
  sub_FDBDE0(a1, (__int64)v18, v17);
  v12 = (void **)v18[1];
  v13 = (void **)v18[0];
  if ( v18[1] != v18[0] )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_21;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_21:
    v13 = (void **)v18[0];
  }
  if ( v13 )
    operator delete(v13);
  result = (_QWORD *)*a1;
  v15 = *(_QWORD *)*a1 == *(_QWORD *)(*a1 + 8);
  a1[2] = a4;
  *((_BYTE *)a1 + 8) = v15;
  return result;
}

