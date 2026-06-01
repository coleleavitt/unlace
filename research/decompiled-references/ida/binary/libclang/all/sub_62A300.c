void __fastcall sub_62A300(__m128i *a1, __m128i *a2, __m128i *a3, __int64 a4, __int64 a5, __m128i *a6, __int64 a7)
{
  __m128i *v8; // r14
  __int64 v9; // r12
  bool v10; // cc
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i *v14; // rbp
  __m128i *v15; // rbx
  __m128i *v16; // r12
  __int64 v17; // r14
  __int64 v18; // rbx
  __m128i *v19; // r13
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i *v23; // r12
  __int64 i; // rbx
  __int64 v25; // rbp
  __m128i *v26; // r14
  __int64 v27; // r8
  size_t v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+10h] [rbp-78h]
  __m128i *v31; // [rsp+18h] [rbp-70h]
  __m128i *dest; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  size_t n; // [rsp+38h] [rbp-50h]
  size_t na; // [rsp+38h] [rbp-50h]
  size_t nb; // [rsp+38h] [rbp-50h]
  __m128i *v38; // [rsp+40h] [rbp-48h]
  size_t v39; // [rsp+48h] [rbp-40h]

  v8 = a1;
  v9 = a4;
  v10 = a5 <= a4;
  v11 = a5;
  if ( !v10 )
    v11 = v9;
  v31 = a1;
  v30 = a5;
  if ( a7 < v11 )
  {
    v38 = a3;
    v29 = v9;
    v12 = v9;
    v13 = a5;
    dest = a6;
    if ( v9 <= a5 )
      goto LABEL_20;
LABEL_5:
    v14 = a2;
    n = v12 / 2;
    v33 = v12 / 2;
    v15 = &v31[v12 / 2];
    v16 = v15;
    v17 = v38 - a2;
    if ( (char *)v38 - (char *)a2 > 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = v17 >> 1;
          v19 = &v14[v17 >> 1];
          if ( !(unsigned __int8)sub_6299B0(
                                   (unsigned __int16 *)v19->m128i_i64[1],
                                   (unsigned __int16 *)v16->m128i_i64[1]) )
            break;
          v14 = v19 + 1;
          v17 = v17 - v18 - 1;
          if ( v17 <= 0 )
            goto LABEL_8;
        }
        if ( !v18 )
          break;
        v17 >>= 1;
      }
LABEL_8:
      v29 -= n;
      v15 = v16;
      v20 = v14 - a2;
      v30 -= v20;
      if ( v20 >= v29 )
        goto LABEL_26;
LABEL_9:
      if ( v20 <= a7 )
      {
        if ( v20 )
        {
          v21 = (char *)a2 - (char *)v15;
          if ( (char *)v14 - (char *)a2 <= 16 )
          {
            if ( (char *)v14 - (char *)a2 == 16 )
            {
              *dest = _mm_loadu_si128(a2);
              if ( v21 <= 16 )
              {
                if ( v21 == 16 )
                  v14[-1] = _mm_loadu_si128(v15);
              }
              else
              {
                memmove((char *)v14 - v21, v15, (char *)a2 - (char *)v15);
              }
              *v15 = _mm_loadu_si128(dest);
            }
            else if ( v21 <= 16 )
            {
              if ( v21 == 16 )
                v14[-1] = _mm_loadu_si128(v15);
            }
            else
            {
              memmove((char *)v14 - v21, v15, (char *)a2 - (char *)v15);
            }
          }
          else
          {
            na = (char *)a2 - (char *)v15;
            memmove(dest, a2, (char *)v14 - (char *)a2);
            if ( (char *)a2 - (char *)v15 <= 16 )
            {
              if ( na == 16 )
                v14[-1] = _mm_loadu_si128(v15);
            }
            else
            {
              memmove((char *)v14 - na, v15, na);
            }
            memmove(v15, dest, (char *)v14 - (char *)a2);
          }
          v8 = (__m128i *)((char *)v15 + (char *)v14 - (char *)a2);
          a2 = v14;
        }
        else
        {
          a2 = v14;
          v8 = v15;
        }
        goto LABEL_16;
      }
      goto LABEL_26;
    }
    v29 -= v33;
    if ( v29 <= 0 || (LODWORD(v20) = 0, v8 = &v31[v12 / 2], a7 < 0) )
    {
      v14 = a2;
      LODWORD(v20) = 0;
      goto LABEL_26;
    }
    while ( 1 )
    {
LABEL_16:
      sub_62A300((_DWORD)v31, (_DWORD)v15, (_DWORD)v8, v33, v20, (_DWORD)dest, a7);
      v22 = v30;
      if ( v29 <= v30 )
        v22 = v29;
      if ( a7 >= v22 )
      {
        a3 = v38;
        v9 = v29;
        a6 = dest;
        goto LABEL_38;
      }
      v12 = v29;
      v13 = v30;
      v31 = v8;
      if ( v29 > v30 )
        goto LABEL_5;
LABEL_20:
      v15 = v31;
      nb = v13 / 2;
      v20 = v13 / 2;
      v14 = &a2[v13 / 2];
      if ( (char *)a2 - (char *)v31 <= 0 )
      {
        LODWORD(v33) = 0;
      }
      else
      {
        v34 = v13 / 2;
        v23 = v31;
        for ( i = a2 - v31; ; i >>= 1 )
        {
          while ( 1 )
          {
            v25 = i >> 1;
            v26 = &v23[i >> 1];
            if ( (unsigned __int8)sub_6299B0(
                                    (unsigned __int16 *)a2[nb].m128i_i64[1],
                                    (unsigned __int16 *)v26->m128i_i64[1]) )
              break;
            v23 = v26 + 1;
            i = i - v25 - 1;
            if ( i <= 0 )
              goto LABEL_24;
          }
          if ( !v25 )
            break;
        }
LABEL_24:
        v14 = &a2[nb];
        v20 = v34;
        v15 = v23;
        v29 -= v23 - v31;
        v33 = v23 - v31;
      }
      v30 -= nb;
      if ( v20 < v29 )
        goto LABEL_9;
LABEL_26:
      if ( a7 < v29 )
        break;
      if ( v29 )
      {
        v27 = (char *)v14 - (char *)a2;
        v8 = (__m128i *)((char *)v14 - ((char *)a2 - (char *)v15));
        if ( (char *)a2 - (char *)v15 <= 16 )
        {
          if ( (char *)a2 - (char *)v15 == 16 )
          {
            *dest = _mm_loadu_si128(v15);
            if ( v27 <= 16 )
            {
              if ( v27 == 16 )
                *v15 = _mm_loadu_si128(a2);
            }
            else
            {
              memmove(v15, a2, (char *)v14 - (char *)a2);
            }
            v14[-1] = _mm_loadu_si128(dest);
          }
          else if ( v27 <= 16 )
          {
            if ( v27 == 16 )
              *v15 = _mm_loadu_si128(a2);
          }
          else
          {
            memmove(v15, a2, (char *)v14 - (char *)a2);
          }
        }
        else
        {
          v39 = (char *)v14 - (char *)a2;
          memmove(dest, v15, (char *)a2 - (char *)v15);
          v28 = (char *)a2 - (char *)v15;
          if ( (char *)v14 - (char *)a2 <= 16 )
          {
            if ( v39 == 16 )
              *v15 = _mm_loadu_si128(a2);
          }
          else
          {
            memmove(v15, a2, v39);
            v28 = (char *)a2 - (char *)v15;
          }
          memmove((char *)v14 - ((char *)a2 - (char *)v15), dest, v28);
        }
LABEL_32:
        a2 = v14;
      }
      else
      {
        a2 = v14;
        v8 = v14;
      }
    }
    v8 = sub_62A0C0(v15, a2, v14);
    goto LABEL_32;
  }
LABEL_38:
  sub_629E90(v8, a2, a3, v9, v30, a6);
}

