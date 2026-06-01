void __fastcall sub_974DF0(__int64 a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  _BYTE *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // r9
  _BYTE *v15; // rcx
  _BYTE *v16; // r15
  _BYTE *v17; // rdi
  size_t v18; // rax
  _BYTE *v19; // rdi
  _BYTE *v20; // rsi
  size_t n; // [rsp+0h] [rbp-58h]
  _BYTE *srca; // [rsp+8h] [rbp-50h]
  _BYTE *srcb; // [rsp+8h] [rbp-50h]
  _BYTE *srcc; // [rsp+8h] [rbp-50h]
  size_t v26; // [rsp+10h] [rbp-48h]
  _BYTE *v27; // [rsp+18h] [rbp-40h]

  v7 = (_BYTE *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  v26 = a3 + a2;
  v9 = v8 + a5 - a3;
  n = v8 - (a3 + a2);
  if ( a1 + 16 == *(_QWORD *)a1 )
    v10 = 15;
  else
    v10 = *(_QWORD *)(a1 + 16);
  if ( v9 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  if ( v9 <= v10 || (v11 = 2 * v10, v9 >= (unsigned __int64)v11) )
  {
    v12 = v9 + 1;
  }
  else
  {
    v12 = 0x8000000000000000LL;
    v9 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v11 >= 0 )
    {
      v12 = v11 + 1;
      v9 = v11;
    }
  }
  v13 = (_BYTE *)operator new(v12);
  v14 = *(_BYTE **)a1;
  v15 = a4;
  v16 = v13;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *v13 = *v14;
    }
    else
    {
      v27 = a4;
      srca = *(_BYTE **)a1;
      memcpy(v13, *(const void **)a1, a2);
      v15 = v27;
      v14 = srca;
    }
  }
  if ( v15 && a5 )
  {
    v17 = &v16[a2];
    if ( a5 == 1 )
    {
      *v17 = *v15;
      v18 = n;
      if ( !n )
        goto LABEL_17;
      goto LABEL_20;
    }
    srcb = v14;
    memcpy(v17, v15, a5);
    v14 = srcb;
  }
  v18 = n;
  if ( !n )
    goto LABEL_17;
LABEL_20:
  v19 = &v16[a5 + a2];
  v20 = &v14[v26];
  if ( v18 == 1 )
  {
    *v19 = *v20;
  }
  else
  {
    srcc = v14;
    memcpy(v19, v20, v18);
    v14 = srcc;
  }
LABEL_17:
  if ( v7 != v14 )
    operator delete(v14);
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 16) = v9;
}

