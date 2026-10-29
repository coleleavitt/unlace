void __fastcall sub_A45E90(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r15
  size_t v3; // r14
  __int64 *v4; // rbx
  __m128i *v5; // r13
  size_t v6; // r12
  size_t v7; // rdx
  signed __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rcx
  size_t v14; // rdx
  __m128i **v15; // r12
  __int64 *v16; // r10
  const void *v17; // rsi
  signed __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  const __m128i *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  const __m128i *v25; // rcx
  __int64 v26; // r12
  __m128i *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // rax
  __m128i *v31; // rbp
  __m128i *v32; // rdi
  size_t v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i v37; // xmm1
  size_t v38; // r14
  __m128i *v39; // rbx
  __int64 v40; // [rsp+0h] [rbp-88h] BYREF
  size_t v41; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  const __m128i *v44; // [rsp+20h] [rbp-68h]
  void **v45; // [rsp+28h] [rbp-60h]
  void *v46; // [rsp+30h] [rbp-58h] BYREF
  size_t v47; // [rsp+38h] [rbp-50h]
  __m128i v48; // [rsp+40h] [rbp-48h] BYREF

  if ( (const __m128i *)a1 == a2 || a2 == (const __m128i *)(a1 + 32) )
    return;
  v2 = (const __m128i *)(a1 + 48);
  v44 = a2;
  v45 = &v46;
  v43 = a1;
  src = &v48;
  do
  {
    v3 = v2[-1].m128i_u64[1];
    v4 = (__int64 *)v2;
    v5 = (__m128i *)v2[-1].m128i_i64[0];
    v6 = *(_QWORD *)(v43 + 8);
    v7 = v6;
    if ( v3 <= v6 )
      v7 = v2[-1].m128i_u64[1];
    if ( v7 )
    {
      LODWORD(v8) = memcmp((const void *)v2[-1].m128i_i64[0], *(const void **)v43, v7);
      if ( (_DWORD)v8 )
        goto LABEL_8;
    }
    v8 = v3 - v6;
    if ( (__int64)(v3 - v6) <= 0x7FFFFFFF )
    {
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_8:
        if ( (int)v8 < 0 )
          goto LABEL_42;
        goto LABEL_9;
      }
LABEL_42:
      v46 = src;
      if ( v5 == v2 )
      {
        v48 = _mm_loadu_si128(v2);
      }
      else
      {
        v23 = v2->m128i_i64[0];
        v46 = v5;
        v48.m128i_i64[0] = v23;
      }
      v24 = (__int64)v2[-1].m128i_i64 - v43;
      v2[-1].m128i_i64[0] = (__int64)v2;
      v25 = v2 + 1;
      v47 = v3;
      v2[-1].m128i_i64[1] = 0;
      v26 = v24 >> 5;
      v2->m128i_i8[0] = 0;
      if ( v24 <= 0 )
      {
LABEL_57:
        v40 = (__int64)v25;
        sub_9E6D90(v43, v45);
        v22 = (const __m128i *)v40;
        if ( v46 != src )
        {
          operator delete(v46);
          v22 = (const __m128i *)v40;
        }
        goto LABEL_38;
      }
      v27 = (__m128i *)&v2[-2];
      while ( 1 )
      {
        v31 = (__m128i *)v27[-1].m128i_i64[0];
        v32 = (__m128i *)v27[1].m128i_i64[0];
        if ( v27 == v31 )
        {
          v33 = v27[-1].m128i_u64[1];
          if ( v33 )
          {
            if ( v33 == 1 )
            {
              v32->m128i_i8[0] = v27->m128i_i8[0];
            }
            else
            {
              v40 = (__int64)v25;
              memcpy(v32, v27, v33);
              v25 = (const __m128i *)v40;
            }
          }
          v34 = v31[-1].m128i_i64[1];
          v35 = v31[1].m128i_i64[0];
          v31[1].m128i_i64[1] = v34;
          *(_BYTE *)(v35 + v34) = 0;
          goto LABEL_49;
        }
        if ( v32 == &v27[2] )
          break;
        v28 = v27[-1].m128i_i64[1];
        v29 = v27[2].m128i_i64[0];
        v27[1].m128i_i64[0] = (__int64)v31;
        v27[1].m128i_i64[1] = v28;
        v27[2].m128i_i64[0] = v27->m128i_i64[0];
        if ( !v32 )
          goto LABEL_56;
        v27[-1].m128i_i64[0] = (__int64)v32;
        v27->m128i_i64[0] = v29;
LABEL_49:
        v30 = (_BYTE *)v27[-1].m128i_i64[0];
        v27[-1].m128i_i64[1] = 0;
        v27 -= 2;
        *v30 = 0;
        if ( !--v26 )
          goto LABEL_57;
      }
      v36 = v27[-1].m128i_i64[1];
      v27[1].m128i_i64[0] = (__int64)v31;
      v27[1].m128i_i64[1] = v36;
      v27[2].m128i_i64[0] = v27->m128i_i64[0];
LABEL_56:
      v27[-1].m128i_i64[0] = (__int64)v27;
      goto LABEL_49;
    }
LABEL_9:
    v46 = src;
    if ( v5 == v2 )
    {
      v37 = _mm_loadu_si128(v5);
      v5 = (__m128i *)src;
      v48 = v37;
    }
    else
    {
      v9 = v2->m128i_i64[0];
      v46 = v5;
      v48.m128i_i64[0] = v9;
    }
    v47 = v3;
    v10 = (__int64 *)v2;
    v2[-1].m128i_i64[0] = (__int64)v2;
    v2[-1].m128i_i64[1] = 0;
    v2->m128i_i8[0] = 0;
    while ( 1 )
    {
      v13 = *(v10 - 5);
      v14 = v3;
      v15 = (__m128i **)(v10 - 2);
      v16 = (__int64 *)*(v10 - 6);
      if ( v13 <= v3 )
        v14 = *(v10 - 5);
      if ( v14 )
      {
        v17 = (const void *)*(v10 - 6);
        v41 = *(v10 - 5);
        v40 = (__int64)v16;
        LODWORD(v18) = memcmp(v5, v17, v14);
        v16 = (__int64 *)v40;
        v13 = v41;
        if ( (_DWORD)v18 )
          goto LABEL_22;
      }
      v18 = v3 - v13;
      if ( (__int64)(v3 - v13) > 0x7FFFFFFF )
        break;
      if ( v18 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_22:
        if ( (int)v18 >= 0 )
          break;
      }
      v19 = v10 - 4;
      if ( v16 == v10 - 4 )
      {
        if ( v13 )
        {
          if ( v13 == 1 )
            *(_BYTE *)v4 = *(_BYTE *)v19;
          else
            memcpy(v4, v10 - 4, v13);
          v13 = *(v10 - 5);
          v4 = (__int64 *)v19[2];
        }
        v19[3] = v13;
        *((_BYTE *)v4 + v13) = 0;
        v4 = (__int64 *)*(v10 - 6);
      }
      else
      {
        if ( v4 == v10 )
        {
          v20 = *(v10 - 5);
          v19[2] = (__int64)v16;
          v19[3] = v20;
          *v10 = *(v10 - 4);
        }
        else
        {
          v11 = *(v10 - 5);
          v12 = *v10;
          v19[2] = (__int64)v16;
          v19[3] = v11;
          *v10 = *(v10 - 4);
          if ( v4 )
          {
            *(v10 - 6) = (__int64)v4;
            *v19 = v12;
            goto LABEL_15;
          }
        }
        *(v10 - 6) = (__int64)(v10 - 4);
        v4 = v10 - 4;
      }
LABEL_15:
      *(v10 - 5) = 0;
      v10 -= 4;
      *(_BYTE *)v4 = 0;
      v3 = v47;
      v5 = (__m128i *)v46;
      v4 = (__int64 *)*(v19 - 2);
    }
    if ( v5 == src )
    {
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          *(_BYTE *)v4 = v48.m128i_i8[0];
          v38 = v47;
          v39 = *v15;
          v15[1] = (__m128i *)v47;
          v39->m128i_i8[v38] = 0;
          v4 = (__int64 *)v46;
          goto LABEL_35;
        }
        memcpy(v4, src, v3);
        v3 = v47;
        v4 = (__int64 *)*v15;
      }
      v15[1] = (__m128i *)v3;
      *((_BYTE *)v4 + v3) = 0;
      v4 = (__int64 *)v46;
      goto LABEL_35;
    }
    if ( v4 == v10 )
    {
      v40 = v48.m128i_i64[0];
      *v15 = v5;
      *(__m128 *)(v15 + 1) = _mm_loadh_ps((const double *)&v40);
    }
    else
    {
      v40 = v48.m128i_i64[0];
      v21 = *v10;
      *v15 = v5;
      *(__m128 *)(v15 + 1) = _mm_loadh_ps((const double *)&v40);
      if ( v4 )
      {
        v46 = v4;
        v48.m128i_i64[0] = v21;
        goto LABEL_35;
      }
    }
    v46 = src;
    v4 = (__int64 *)src;
LABEL_35:
    v47 = 0;
    *(_BYTE *)v4 = 0;
    if ( v46 != src )
      operator delete(v46);
    v22 = v2 + 1;
LABEL_38:
    v2 += 2;
  }
  while ( v44 != v22 );
}

