void __fastcall sub_23A830(_QWORD *a1, size_t a2, __int64 a3, char *a4, size_t a5)
{
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  char *v15; // rcx
  _BYTE *v16; // r12
  _BYTE *v17; // rsi
  _BYTE *v18; // rdi
  size_t v19; // rax
  _QWORD *v20; // rcx
  _BYTE *v21; // rdi
  _BYTE *v22; // rsi
  char v23; // al
  size_t n; // [rsp+8h] [rbp-50h]
  _QWORD *srca; // [rsp+10h] [rbp-48h]
  size_t v27; // [rsp+18h] [rbp-40h]

  v8 = a1 + 2;
  v9 = a1[1];
  v27 = a3 + a2;
  v10 = v9 + a5 - a3;
  n = v9 - (a3 + a2);
  if ( a1 + 2 == (_QWORD *)*a1 )
  {
    if ( v10 >= 0 )
    {
      if ( (unsigned __int64)(v10 - 16) <= 0xD )
      {
        v10 = 30;
        v13 = 31;
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_29:
    std::__throw_length_error("basic_string::_M_create");
  }
  v11 = a1[2];
  if ( v10 < 0 )
    goto LABEL_29;
  if ( v11 < v10 )
  {
    v12 = 2 * v11;
    if ( v10 < (unsigned __int64)v12 )
    {
      if ( v12 < 0 )
        goto LABEL_6;
      v13 = v12 + 1;
      v10 = v12;
      goto LABEL_10;
    }
  }
LABEL_9:
  v13 = v10 + 1;
  if ( v10 + 1 < 0 )
LABEL_6:
    std::__throw_bad_alloc();
LABEL_10:
  v14 = (_BYTE *)operator new(v13);
  v15 = a4;
  v16 = v14;
  if ( a2 )
  {
    v17 = (_BYTE *)*a1;
    if ( a2 == 1 )
    {
      *v14 = *v17;
    }
    else
    {
      memcpy(v14, v17, a2);
      v15 = a4;
    }
  }
  if ( v15 && a5 )
  {
    v18 = &v16[a2];
    if ( a5 == 1 )
    {
      v23 = *v15;
      v20 = (_QWORD *)*a1;
      *v18 = v23;
      v19 = n;
      if ( !n )
        goto LABEL_18;
      goto LABEL_21;
    }
    memcpy(v18, v15, a5);
  }
  v19 = n;
  v20 = (_QWORD *)*a1;
  if ( !n )
    goto LABEL_18;
LABEL_21:
  v21 = &v16[a2 + a5];
  v22 = (char *)v20 + v27;
  if ( v19 == 1 )
  {
    *v21 = *v22;
  }
  else
  {
    srca = v20;
    memcpy(v21, v22, v19);
    v20 = srca;
  }
LABEL_18:
  if ( v8 != v20 )
    operator delete(v20, a1[2] + 1LL);
  *a1 = v16;
  a1[2] = v10;
}

