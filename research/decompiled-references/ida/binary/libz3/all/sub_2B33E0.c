__int64 __fastcall sub_2B33E0(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v3; // r8
  size_t v6; // r12
  _BYTE *v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  _BYTE *v10; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // r8
  _BYTE *v16; // rcx
  _BYTE *v17; // rsi
  _BYTE *v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+0h] [rbp-48h]

  v3 = a1 + 16;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)a1;
  v8 = a3 + v6;
  if ( *(_QWORD *)a1 == a1 + 16 )
  {
    if ( (unsigned __int64)v8 <= 0xF )
    {
LABEL_3:
      if ( a3 )
      {
        v10 = &v7[v6];
        if ( a3 == 1 )
          *v10 = *a2;
        else
          memcpy(v10, a2, a3);
        v7 = *(_BYTE **)a1;
      }
      goto LABEL_7;
    }
    if ( v8 >= 0 )
    {
      if ( (unsigned __int64)v8 <= 0x1D )
      {
        v13 = 31;
        v12 = 30;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
LABEL_30:
    std::__throw_length_error("basic_string::_M_create");
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 >= v8 )
    goto LABEL_3;
  if ( v8 < 0 )
    goto LABEL_30;
  v12 = 2 * v9;
  if ( v8 < (unsigned __int64)v12 )
  {
    v13 = v12 + 1;
    if ( v12 >= 0 )
      goto LABEL_11;
LABEL_22:
    std::__throw_bad_alloc();
  }
LABEL_10:
  v12 = a3 + v6;
  v13 = v8 + 1;
  if ( v8 + 1 < 0 )
    goto LABEL_22;
LABEL_11:
  v19 = v3;
  v14 = (_BYTE *)operator new(v13);
  v15 = v19;
  v16 = a2;
  v7 = v14;
  if ( v6 )
  {
    v17 = *(_BYTE **)a1;
    if ( v6 == 1 )
    {
      *v14 = *v17;
    }
    else
    {
      memcpy(v14, v17, v6);
      v16 = a2;
      v15 = v19;
    }
  }
  if ( v16 && a3 )
  {
    v18 = &v7[v6];
    if ( a3 == 1 )
    {
      *v18 = *v16;
    }
    else
    {
      v20 = v15;
      memcpy(v18, v16, a3);
      v15 = v20;
    }
  }
  if ( v15 != *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v12;
LABEL_7:
  *(_QWORD *)(a1 + 8) = v8;
  v7[v8] = 0;
  return a1;
}

