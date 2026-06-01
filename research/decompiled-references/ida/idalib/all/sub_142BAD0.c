void __fastcall sub_142BAD0(_QWORD *a1, _BYTE *a2, signed __int64 a3)
{
  _QWORD *v5; // rax
  _BYTE *v6; // rdi
  __int64 v7; // rax
  size_t v8; // rdx
  void *src; // [rsp+8h] [rbp-40h] BYREF
  void *v10; // [rsp+10h] [rbp-38h]
  size_t n; // [rsp+18h] [rbp-30h]
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = v12;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = a2;
    v5 = (_QWORD *)operator new(a3 + 1);
    v12[0] = a3;
    v10 = v5;
LABEL_17:
    memcpy(v5, a2, a3);
    v5 = v10;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v12[0]) = *a2;
    v5 = v12;
    goto LABEL_6;
  }
  v5 = v12;
  if ( a3 )
    goto LABEL_17;
LABEL_6:
  n = a3;
  *((_BYTE *)v5 + a3) = 0;
  v6 = (_BYTE *)a1[4];
  if ( v10 == v12 )
  {
    v8 = n;
    if ( n )
    {
      if ( n == 1 )
        *v6 = v12[0];
      else
        memcpy(v6, v10, n);
      v8 = n;
      v6 = (_BYTE *)a1[4];
    }
    a1[5] = v8;
    v6[v8] = 0;
    v6 = v10;
  }
  else
  {
    if ( v6 == (_BYTE *)(a1 + 6) )
    {
      src = (void *)v12[0];
      a1[4] = v10;
      *(__m128 *)(a1 + 5) = _mm_loadh_ps((const double *)&src);
    }
    else
    {
      src = (void *)v12[0];
      v7 = a1[6];
      a1[4] = v10;
      *(__m128 *)(a1 + 5) = _mm_loadh_ps((const double *)&src);
      if ( v6 )
      {
        v10 = v6;
        v12[0] = v7;
        goto LABEL_10;
      }
    }
    v6 = v12;
    v10 = v12;
  }
LABEL_10:
  n = 0;
  *v6 = 0;
  if ( v10 != v12 )
    operator delete(v10);
}
