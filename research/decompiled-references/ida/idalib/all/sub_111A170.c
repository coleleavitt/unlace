_QWORD *__fastcall sub_111A170(_QWORD *a1, _BYTE *a2, signed __int64 a3)
{
  _QWORD *v5; // rax
  _BYTE *v6; // rdi
  __int64 v7; // rax
  size_t v9; // rdx
  void *src; // [rsp+8h] [rbp-40h] BYREF
  void *v11; // [rsp+10h] [rbp-38h]
  size_t n; // [rsp+18h] [rbp-30h]
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v11 = v13;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = a2;
    v5 = (_QWORD *)operator new(a3 + 1);
    v13[0] = a3;
    v11 = v5;
LABEL_17:
    memcpy(v5, a2, a3);
    v5 = v11;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v13[0]) = *a2;
    v5 = v13;
    goto LABEL_6;
  }
  v5 = v13;
  if ( a3 )
    goto LABEL_17;
LABEL_6:
  n = a3;
  *((_BYTE *)v5 + a3) = 0;
  v6 = (_BYTE *)a1[8];
  if ( v11 == v13 )
  {
    v9 = n;
    if ( n )
    {
      if ( n == 1 )
        *v6 = v13[0];
      else
        memcpy(v6, v11, n);
      v9 = n;
      v6 = (_BYTE *)a1[8];
    }
    a1[9] = v9;
    v6[v9] = 0;
    v6 = v11;
  }
  else
  {
    if ( v6 == (_BYTE *)(a1 + 10) )
    {
      src = (void *)v13[0];
      a1[8] = v11;
      *(__m128 *)(a1 + 9) = _mm_loadh_ps((const double *)&src);
    }
    else
    {
      src = (void *)v13[0];
      v7 = a1[10];
      a1[8] = v11;
      *(__m128 *)(a1 + 9) = _mm_loadh_ps((const double *)&src);
      if ( v6 )
      {
        v11 = v6;
        v13[0] = v7;
        goto LABEL_10;
      }
    }
    v6 = v13;
    v11 = v13;
  }
LABEL_10:
  n = 0;
  *v6 = 0;
  if ( v11 != v13 )
    operator delete(v11);
  sub_1119A00((__int64)(a1 + 8));
  return a1;
}
