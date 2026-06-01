unsigned __int64 __fastcall sub_636D20(__m128 *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  _BYTE *v9; // r13
  size_t v10; // rbp
  size_t v11; // rax
  double *v12; // rdx
  double *v13; // rdi
  __int64 v14; // rdx
  double v15; // rcx
  double *v17; // rdi
  double v18; // [rsp+8h] [rbp-50h]
  double *v19; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]
  double src[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = &a1->m128_u64[1];
  v3 = a1[1].m128_u64[0];
  if ( !v3 )
  {
    v1 = sub_636810(a1);
    v3 = v1[1];
  }
  v4 = sub_2635250(*v1, v3, 0);
  v6 = sub_2635250(v4, v5, 0);
  v19 = src;
  v9 = (_BYTE *)sub_2635250(v6, v7, 0);
  v10 = v8;
  v11 = v8;
  if ( !v9 && v8 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v18 = *(double *)&v8;
  if ( v8 > 0xF )
  {
    v19 = (double *)std::string::_M_create();
    v17 = v19;
    src[0] = v18;
  }
  else
  {
    if ( v8 == 1 )
    {
      LOBYTE(src[0]) = *v9;
      v12 = src;
      goto LABEL_8;
    }
    if ( !v8 )
    {
      v12 = src;
      goto LABEL_8;
    }
    v17 = src;
  }
  memcpy(v17, v9, v10);
  v11 = *(_QWORD *)&v18;
  v12 = v19;
LABEL_8:
  n = v11;
  *((_BYTE *)v12 + v11) = 0;
  v13 = (double *)a1[3].m128_u64[1];
  v14 = v11;
  if ( v13 == (double *)&a1[4].m128_u16[4] )
  {
    if ( v19 != src )
    {
      a1[3].m128_u64[1] = (unsigned __int64)v19;
      a1[4] = _mm_loadh_ps(src);
LABEL_21:
      v19 = src;
      v13 = src;
      goto LABEL_12;
    }
  }
  else if ( v19 != src )
  {
    v15 = *(double *)&a1[4].m128_u64[1];
    a1[3].m128_u64[1] = (unsigned __int64)v19;
    a1[4] = _mm_loadh_ps(src);
    if ( v13 )
    {
      v19 = v13;
      src[0] = v15;
      goto LABEL_12;
    }
    goto LABEL_21;
  }
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      *(_BYTE *)v13 = LOBYTE(src[0]);
      v14 = 1;
    }
    else
    {
      memcpy(v13, src, v11);
      v14 = n;
    }
    v13 = (double *)a1[3].m128_u64[1];
  }
  a1[4].m128_u64[0] = v14;
  *((_BYTE *)v13 + v14) = 0;
  v13 = v19;
LABEL_12:
  *(_BYTE *)v13 = 0;
  if ( v19 != src )
    operator delete(v19, *(_QWORD *)&src[0] + 1LL);
  return a1[3].m128_u64[1];
}

