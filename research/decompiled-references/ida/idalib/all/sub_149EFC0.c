__int64 __fastcall sub_149EFC0(__int64 a1, __int64 a2, char a3, _BYTE *a4, signed __int64 a5)
{
  _BYTE *v5; // r14
  _QWORD *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rdx
  size_t v13; // rdx
  double v14[3]; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-48h]
  size_t n; // [rsp+28h] [rbp-40h]
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = (_BYTE *)(a1 + 40);
  *(_QWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  src = v17;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a3;
  if ( &a4[a5] && !a4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a5 > 0xF )
  {
    if ( a5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (_QWORD *)operator new(a5 + 1);
    v17[0] = a5;
    src = v9;
LABEL_17:
    memcpy(v9, a4, a5);
    v9 = src;
    goto LABEL_6;
  }
  if ( a5 == 1 )
  {
    LOBYTE(v17[0]) = *a4;
    v9 = v17;
    goto LABEL_6;
  }
  v9 = v17;
  if ( a5 )
    goto LABEL_17;
LABEL_6:
  n = a5;
  *((_BYTE *)v9 + a5) = 0;
  v10 = *(_BYTE **)(a1 + 24);
  if ( src == v17 )
  {
    v13 = n;
    if ( n )
    {
      if ( n == 1 )
        *v10 = v17[0];
      else
        memcpy(v10, src, n);
      v13 = n;
      v10 = *(_BYTE **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v13;
    v10[v13] = 0;
    v10 = src;
  }
  else
  {
    if ( v5 == v10 )
    {
      v14[0] = *(double *)v17;
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps(v14);
    }
    else
    {
      v14[0] = *(double *)v17;
      v11 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps(v14);
      if ( v10 )
      {
        src = v10;
        v17[0] = v11;
        goto LABEL_10;
      }
    }
    v10 = v17;
    src = v17;
  }
LABEL_10:
  n = 0;
  *v10 = 0;
  if ( src != v17 )
    operator delete(src);
  return a1;
}
