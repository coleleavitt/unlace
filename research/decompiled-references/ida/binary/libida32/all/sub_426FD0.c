void __fastcall sub_426FD0(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
  signed __int64 v4; // r15
  _BYTE *v8; // r14
  signed __int64 v9; // r13
  _BYTE *v10; // r13
  size_t v11; // rdx
  size_t v12; // rdx
  _BYTE *v13; // r13
  _BYTE *v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // r13
  _BYTE *v17; // r13
  __int64 v18; // rcx
  _BYTE *v19; // rcx
  signed __int64 v20; // r14
  _BYTE *v21; // rcx
  _BYTE *v22; // rbp
  _BYTE *v23; // rsi
  signed __int64 v24; // rdx
  _BYTE *v25; // rdi
  _BYTE *dest; // [rsp+0h] [rbp-50h]
  _BYTE *src; // [rsp+8h] [rbp-48h]

  if ( a3 == a4 )
    return;
  v4 = a4 - a3;
  v8 = *(_BYTE **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) - (_QWORD)v8 < (unsigned __int64)(a4 - a3) )
  {
    v13 = &v8[-*(_QWORD *)a1];
    src = *(_BYTE **)a1;
    if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v13 < (unsigned __int64)v4 )
      std::__throw_length_error("vector::_M_range_insert");
    v14 = &v8[-*(_QWORD *)a1];
    if ( v4 >= (unsigned __int64)v13 )
      v14 = (_BYTE *)(a4 - a3);
    v15 = __CFADD__(v14, v13);
    v16 = (unsigned __int64)&v13[(_QWORD)v14];
    if ( v15 )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( !v16 )
      {
        dest = nullptr;
        v17 = nullptr;
        goto LABEL_18;
      }
      if ( v16 > 0x7FFFFFFFFFFFFFFFLL )
        v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    dest = (_BYTE *)operator new(v16);
    v17 = &dest[v16];
LABEL_18:
    v18 = a2 - src;
    if ( a2 - src <= 1 )
    {
      if ( a2 - src == 1 )
        *dest = *src;
    }
    else
    {
      memmove(dest, src, a2 - src);
      v18 = a2 - src;
    }
    v19 = &dest[v18];
    if ( v4 <= 1 )
    {
      if ( v4 == 1 )
        *v19 = *a3;
    }
    else
    {
      v19 = memmove(v19, a3, v4);
    }
    v20 = v8 - a2;
    v21 = &v19[v4];
    if ( v20 <= 1 )
    {
      if ( v20 == 1 )
        *v21 = *a2;
    }
    else
    {
      v21 = memmove(v21, a2, v20);
    }
    v22 = &v21[v20];
    if ( src )
      operator delete(src, *(_QWORD *)(a1 + 16) - (_QWORD)src);
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)a1 = dest;
    return;
  }
  v9 = v8 - a2;
  if ( v4 >= (unsigned __int64)(v8 - a2) )
  {
    v23 = &a3[v9];
    v24 = a4 - &a3[v9];
    if ( v24 <= 1 )
    {
      if ( v24 == 1 )
      {
        *v8 = *v23;
        v8 = *(_BYTE **)(a1 + 8);
      }
    }
    else
    {
      memmove(*(void **)(a1 + 8), v23, v24);
      v8 = *(_BYTE **)(a1 + 8);
    }
    v25 = &v8[v4 - v9];
    *(_QWORD *)(a1 + 8) = v25;
    if ( v9 > 1 )
    {
      memmove(v25, a2, v9);
      *(_QWORD *)(a1 + 8) += v9;
      v12 = v9;
      goto LABEL_9;
    }
    if ( v9 == 1 )
    {
      *v25 = *a2;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_38;
    }
    *(_QWORD *)(a1 + 8) = &v8[v4];
    return;
  }
  v10 = &v8[-v4];
  if ( v4 <= 1 )
  {
    if ( v4 == 1 )
    {
      v11 = v10 - a2;
      *v8 = *v10;
      ++*(_QWORD *)(a1 + 8);
      if ( v10 - a2 > 1 )
        goto LABEL_6;
      if ( v10 - a2 != 1 )
        goto LABEL_38;
    }
    else
    {
      v11 = v10 - a2;
      *(_QWORD *)(a1 + 8) = &v8[v4];
      if ( v10 - a2 > 1 )
        goto LABEL_6;
      if ( v10 - a2 != 1 )
        goto LABEL_37;
    }
  }
  else
  {
    memmove(*(void **)(a1 + 8), &v8[-v4], a4 - a3);
    *(_QWORD *)(a1 + 8) += v4;
    v11 = v10 - a2;
    if ( v10 - a2 > 1 )
    {
LABEL_6:
      memmove(&v8[-v11], a2, v11);
      goto LABEL_7;
    }
    if ( v10 - a2 != 1 )
      goto LABEL_8;
  }
  *(v8 - 1) = *a2;
LABEL_7:
  if ( v4 > 1 )
  {
LABEL_8:
    v12 = v4;
LABEL_9:
    memmove(a2, a3, v12);
    return;
  }
LABEL_37:
  if ( v4 == 1 )
LABEL_38:
    *a2 = *a3;
}

