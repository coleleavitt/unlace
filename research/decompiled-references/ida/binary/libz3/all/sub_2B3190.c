__int64 __fastcall sub_2B3190(__int64 a1, const char *a2)
{
  size_t v4; // rax
  __int64 v5; // rdx
  size_t v6; // rbp
  _BYTE *v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  char *v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  char *v16; // rdi
  __int64 v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // rax
  size_t n; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]
  size_t v24; // [rsp+8h] [rbp-40h]

  v4 = strlen(a2);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v4;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < v4 )
    std::__throw_length_error("basic_string::append");
  v7 = *(_BYTE **)a1;
  v8 = a1 + 16;
  v9 = v5 + v4;
  if ( *(_QWORD *)a1 == a1 + 16 )
  {
    if ( (unsigned __int64)v9 <= 0xF )
    {
LABEL_4:
      if ( v6 )
      {
        v11 = &v7[v5];
        if ( v6 == 1 )
          *v11 = *a2;
        else
          memcpy(v11, a2, v6);
        v7 = *(_BYTE **)a1;
      }
      goto LABEL_8;
    }
    if ( v9 >= 0 )
    {
      if ( (unsigned __int64)v9 <= 0x1D )
      {
        nb = *(_QWORD *)(a1 + 8);
        v17 = operator new(0x1Fu);
        v15 = nb;
        n = 30;
        v7 = (_BYTE *)v17;
        if ( !v15 )
          goto LABEL_13;
        goto LABEL_22;
      }
      goto LABEL_11;
    }
LABEL_34:
    std::__throw_length_error("basic_string::_M_create");
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 >= v9 )
    goto LABEL_4;
  if ( v9 < 0 )
    goto LABEL_34;
  v13 = 2 * v10;
  n = v13;
  if ( v9 < (unsigned __int64)v13 )
  {
    if ( v13 >= 0 )
    {
      v24 = *(_QWORD *)(a1 + 8);
      v19 = operator new(v13 + 1);
      v15 = v24;
      v7 = (_BYTE *)v19;
      if ( !v24 )
        goto LABEL_24;
      goto LABEL_22;
    }
LABEL_27:
    std::__throw_bad_alloc();
  }
LABEL_11:
  if ( v9 + 1 < 0 )
    goto LABEL_27;
  na = *(_QWORD *)(a1 + 8);
  v14 = operator new(v9 + 1);
  v15 = na;
  n = v9;
  v7 = (_BYTE *)v14;
  if ( !v15 )
    goto LABEL_13;
LABEL_22:
  v18 = *(_BYTE **)a1;
  if ( v15 == 1 )
  {
    *v7 = *v18;
  }
  else
  {
    v23 = v15;
    memcpy(v7, v18, v15);
    v15 = v23;
  }
LABEL_24:
  if ( v6 )
  {
LABEL_13:
    v16 = &v7[v15];
    if ( v6 == 1 )
      *v16 = *a2;
    else
      memcpy(v16, a2, v6);
  }
  if ( v8 != *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = n;
LABEL_8:
  *(_QWORD *)(a1 + 8) = v9;
  v7[v9] = 0;
  return a1;
}

