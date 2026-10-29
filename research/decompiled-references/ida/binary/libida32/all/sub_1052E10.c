__int64 __fastcall sub_1052E10(__int64 a1, __int64 a2, char **a3)
{
  char *v4; // rsi
  char v5; // al
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rdx
  _BYTE *v9; // rdi
  size_t v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __m128i *v13; // rax
  unsigned __int16 *v14; // rdi
  unsigned __int64 v15; // rdx
  size_t v17; // rdx
  _BYTE *v18; // rdi
  size_t v19; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-C0h] BYREF
  void *dest; // [rsp+10h] [rbp-B8h]
  __m128 v22; // [rsp+18h] [rbp-B0h] BYREF
  void *v23; // [rsp+30h] [rbp-98h] BYREF
  size_t v24; // [rsp+38h] [rbp-90h]
  _QWORD v25[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v26; // [rsp+50h] [rbp-78h] BYREF
  size_t v27; // [rsp+58h] [rbp-70h]
  _QWORD v28[2]; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]
  _OWORD v31[4]; // [rsp+80h] [rbp-48h] BYREF

  v4 = *a3;
  v22.m128_i8[8] = 0;
  v20 = (_QWORD *)(a1 + 16);
  dest = &v22.m128_u16[4];
  v22.m128_u64[0] = 0;
  v5 = *v4;
  if ( *v4 < 84 )
    goto LABEL_34;
  if ( v5 <= 85 )
  {
    v26 = v28;
    sub_104C2D0(&v26, v4, (__int64)(v4 + 2));
    v23 = v25;
    v20 = v25;
    sub_104C2D0(&v23, "^", (__int64)"");
    v9 = v23;
    v10 = v24 + v27;
    if ( v23 == v25 )
      v11 = 15;
    else
      v11 = v25[0];
    if ( v10 <= v11 )
    {
      if ( v27 )
      {
        v18 = (char *)v23 + v24;
        if ( v27 == 1 )
          *v18 = *(_BYTE *)v26;
        else
          memcpy(v18, v26, v27);
        v9 = v23;
      }
    }
    else
    {
      if ( v26 == v28 )
        v12 = 15;
      else
        v12 = v28[0];
      if ( v10 <= v12 )
      {
        v13 = (__m128i *)sub_978080(&v26, 0, 0, v23, v24);
LABEL_18:
        src = v31;
        if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
        {
          v31[0] = _mm_loadu_si128(v13 + 1);
        }
        else
        {
          src = (void *)v13->m128i_i64[0];
          *(_QWORD *)&v31[0] = v13[1].m128i_i64[0];
        }
        n = v13->m128i_u64[1];
        v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
        v14 = (unsigned __int16 *)dest;
        v13->m128i_i64[1] = 0;
        v13[1].m128i_i8[0] = 0;
        if ( src == v31 )
        {
          v19 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)v14 = v31[0];
            else
              memcpy(v14, src, n);
            v19 = n;
            v14 = (unsigned __int16 *)dest;
          }
          v22.m128_u64[0] = v19;
          *((_BYTE *)v14 + v19) = 0;
          v14 = (unsigned __int16 *)src;
          goto LABEL_24;
        }
        if ( v14 == &v22.m128_u16[4] )
        {
          v20 = *(_QWORD **)&v31[0];
          dest = src;
          v22 = _mm_loadh_ps((const double *)&v20);
        }
        else
        {
          v20 = *(_QWORD **)&v31[0];
          v15 = v22.m128_u64[1];
          dest = src;
          v22 = _mm_loadh_ps((const double *)&v20);
          if ( v14 )
          {
            src = v14;
            *(_QWORD *)&v31[0] = v15;
LABEL_24:
            n = 0;
            *(_BYTE *)v14 = 0;
            if ( src != v31 )
              operator delete(src);
            if ( v23 != v25 )
              operator delete(v23);
            if ( v26 != v28 )
              operator delete(v26);
            ++*a3;
            goto LABEL_31;
          }
        }
        v14 = (unsigned __int16 *)v31;
        src = v31;
        goto LABEL_24;
      }
      sub_974DF0((__int64)&v23, v24, 0, v26, v27);
      v9 = v23;
    }
    v24 = v10;
    v13 = (__m128i *)&v23;
    v9[v10] = 0;
    goto LABEL_18;
  }
  if ( v5 != 112 )
  {
LABEL_34:
    *(_BYTE *)(a1 + 16) = v5;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 17) = 0;
    return a1;
  }
  src = v31;
  sub_104C2D0(&src, "r", (__int64)"");
  v6 = dest;
  if ( src == v31 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v31[0];
      else
        memcpy(dest, src, n);
      v17 = n;
      v6 = dest;
    }
    v22.m128_u64[0] = v17;
    v6[v17] = 0;
    v6 = src;
    goto LABEL_8;
  }
  if ( dest == &v22.m128_u16[4] )
  {
    v20 = *(_QWORD **)&v31[0];
    dest = src;
    v22 = _mm_loadh_ps((const double *)&v20);
  }
  else
  {
    v20 = *(_QWORD **)&v31[0];
    v7 = v22.m128_u64[1];
    dest = src;
    v22 = _mm_loadh_ps((const double *)&v20);
    if ( v6 )
    {
      src = v6;
      *(_QWORD *)&v31[0] = v7;
      goto LABEL_8;
    }
  }
  v6 = v31;
  src = v31;
LABEL_8:
  n = 0;
  *v6 = 0;
  if ( src != v31 )
    operator delete(src);
LABEL_31:
  *(_QWORD *)a1 = a1 + 16;
  if ( dest == &v22.m128_u16[4] )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v22.m128_u16[4]);
  }
  else
  {
    *(_QWORD *)a1 = dest;
    *(_QWORD *)(a1 + 16) = v22.m128_u64[1];
  }
  *(_QWORD *)(a1 + 8) = v22.m128_u64[0];
  return a1;
}

