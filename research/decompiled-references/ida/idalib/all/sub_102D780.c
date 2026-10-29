void __fastcall sub_102D780(_QWORD *a1, _BYTE *a2, signed __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  _BYTE *v8; // rdx
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  size_t v11; // rdx
  void *src; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !a2 )
  {
    LOBYTE(v15[0]) = 0;
    v9 = (_BYTE *)a1[36];
    v11 = 0;
    v13 = v15;
LABEL_10:
    a1[37] = v11;
    v9[v11] = 0;
    v9 = v13;
    goto LABEL_11;
  }
  v7 = v15;
  v13 = v15;
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = a2;
    v7 = (_QWORD *)operator new(a3 + 1);
    v15[0] = a3;
    v13 = v7;
LABEL_18:
    memcpy(v7, a2, a3);
    v7 = v13;
    goto LABEL_5;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v15[0]) = *a2;
    goto LABEL_5;
  }
  if ( a3 )
    goto LABEL_18;
LABEL_5:
  n = a3;
  v8 = a1 + 38;
  *((_BYTE *)v7 + a3) = 0;
  v9 = (_BYTE *)a1[36];
  if ( v13 == v15 )
  {
    v11 = n;
    if ( n )
    {
      if ( n == 1 )
        *v9 = v15[0];
      else
        memcpy(v9, v13, n);
      v11 = n;
      v9 = (_BYTE *)a1[36];
    }
    goto LABEL_10;
  }
  if ( v9 == v8 )
  {
    src = (void *)v15[0];
    a1[36] = v13;
    *(__m128 *)(a1 + 37) = _mm_loadh_ps((const double *)&src);
  }
  else
  {
    src = (void *)v15[0];
    v10 = a1[38];
    a1[36] = v13;
    *(__m128 *)(a1 + 37) = _mm_loadh_ps((const double *)&src);
    if ( v9 )
    {
      v13 = v9;
      v15[0] = v10;
      goto LABEL_11;
    }
  }
  v9 = v15;
  v13 = v15;
LABEL_11:
  n = 0;
  *v9 = 0;
  if ( v13 != v15 )
    operator delete(v13);
  a1[40] = a4;
}
