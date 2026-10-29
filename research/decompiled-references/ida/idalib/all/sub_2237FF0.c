void __fastcall sub_2237FF0(__int64 a1, __int64 a2, size_t a3, const __m128i *a4)
{
  size_t v4; // r8
  __int64 v7; // r14
  __m128i *v8; // rbx
  __m128i *v9; // r10
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // r12
  __m128i *v13; // r9
  __m128i *v14; // rbp
  __m128i *v15; // rax
  __m128i *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  size_t v23; // r11
  size_t v24; // rdx
  const void *v25; // rsi
  const void *v26; // rdi
  unsigned int v27; // eax
  size_t v28; // rdx
  __m128i *v29; // r8
  __m128i *v30; // rsi
  __int64 v31; // rdx
  size_t v32; // rdx
  __int64 v33; // r14
  unsigned int v34; // eax
  const __m128i *v35; // rcx
  const __m128i *v36; // rax
  __int64 v37; // rdx
  const __m128i *v38; // rbp
  bool v39; // cf
  size_t v40; // rbx
  size_t v41; // rcx
  size_t v42; // rdx
  const void *v43; // rdi
  unsigned int v44; // eax
  size_t v45; // rdx
  __int64 v46; // rax
  __m128i *v47; // rdi
  __int64 v48; // r12
  const __m128i *v49; // rbp
  const __m128i *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rcx
  __m128i *v55; // rdi
  size_t v56; // rdx
  __m128i *v57; // [rsp+8h] [rbp-90h] BYREF
  size_t v58; // [rsp+10h] [rbp-88h]
  __m128i *v59; // [rsp+18h] [rbp-80h]
  size_t v60; // [rsp+20h] [rbp-78h]
  const __m128i *v61; // [rsp+28h] [rbp-70h]
  __m128i v62; // [rsp+30h] [rbp-68h] BYREF
  void *s2; // [rsp+40h] [rbp-58h]
  size_t n; // [rsp+48h] [rbp-50h]
  _OWORD v65[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a3;
  v7 = (__int64)(a3 - 1) / 2;
  v8 = (__m128i *)(a1 + 48 * a2);
  v9 = v8 + 2;
  if ( v7 > a2 )
  {
    v10 = a2;
    while ( 1 )
    {
      v12 = 2 * (v10 + 1);
      v18 = 96 * (v10 + 1);
      v19 = (_QWORD *)(a1 + v18 - 48);
      v8 = (__m128i *)(a1 + v18);
      v20 = v8->m128i_i64[0] < *v19;
      if ( v8->m128i_i64[0] != *v19 )
        break;
      v21 = v19[1];
      v20 = v8->m128i_i64[1] < v21;
      if ( v8->m128i_i64[1] != v21 )
        break;
      v22 = v8[1].m128i_u64[1];
      v23 = v19[3];
      v24 = v23;
      if ( v22 <= v23 )
        v24 = v8[1].m128i_u64[1];
      if ( v24 )
      {
        v25 = (const void *)v19[2];
        v26 = (const void *)v8[1].m128i_i64[0];
        v61 = a4;
        v60 = v4;
        v59 = v9;
        v58 = v23;
        v57 = (__m128i *)v22;
        v27 = memcmp(v26, v25, v24);
        v22 = (unsigned __int64)v57;
        v23 = v58;
        v9 = v59;
        v4 = v60;
        a4 = v61;
        if ( v27 )
        {
          v11 = v27 >> 31;
          goto LABEL_4;
        }
      }
      v52 = v22 - v23;
      if ( v52 <= 0x7FFFFFFF )
      {
        if ( v52 >= (__int64)0xFFFFFFFF80000000LL )
        {
          LOBYTE(v11) = (int)v52 < 0;
          goto LABEL_4;
        }
        goto LABEL_5;
      }
LABEL_6:
      v13 = v8 + 2;
      v14 = (__m128i *)(a1 + 48 * v10);
      *v14 = _mm_loadu_si128(v8);
      v15 = (__m128i *)v8[1].m128i_i64[0];
      v16 = (__m128i *)v14[1].m128i_i64[0];
      if ( v15 == &v8[2] )
      {
        v28 = v8[1].m128i_u64[1];
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v16->m128i_i8[0] = v8[2].m128i_i8[0];
            v28 = v8[1].m128i_u64[1];
            v16 = (__m128i *)v14[1].m128i_i64[0];
          }
          else
          {
            v59 = (__m128i *)a4;
            v58 = v4;
            v57 = v8 + 2;
            memcpy(v16, &v8[2], v28);
            v28 = v8[1].m128i_u64[1];
            v16 = (__m128i *)v14[1].m128i_i64[0];
            a4 = v59;
            v4 = v58;
            v13 = v8 + 2;
          }
        }
        v14[1].m128i_i64[1] = v28;
        v16->m128i_i8[v28] = 0;
        v16 = (__m128i *)v8[1].m128i_i64[0];
      }
      else
      {
        if ( v16 == v9 )
        {
          v14[1].m128i_i64[0] = (__int64)v15;
          v14[1].m128i_i64[1] = v8[1].m128i_i64[1];
          v14[2].m128i_i64[0] = v8[2].m128i_i64[0];
        }
        else
        {
          v14[1].m128i_i64[0] = (__int64)v15;
          v17 = v14[2].m128i_i64[0];
          v14[1].m128i_i64[1] = v8[1].m128i_i64[1];
          v14[2].m128i_i64[0] = v8[2].m128i_i64[0];
          if ( v16 )
          {
            v8[1].m128i_i64[0] = (__int64)v16;
            v8[2].m128i_i64[0] = v17;
            goto LABEL_10;
          }
        }
        v8[1].m128i_i64[0] = (__int64)v13;
        v16 = v8 + 2;
      }
LABEL_10:
      v8[1].m128i_i64[1] = 0;
      v10 = v12;
      v16->m128i_i8[0] = 0;
      if ( v12 >= v7 )
        goto LABEL_26;
      v9 = v13;
    }
    LOBYTE(v11) = v20;
LABEL_4:
    if ( !(_BYTE)v11 )
      goto LABEL_6;
LABEL_5:
    --v12;
    v8 = (__m128i *)(a1 + 48 * v12);
    goto LABEL_6;
  }
  v13 = v8 + 2;
  v12 = a2;
LABEL_26:
  if ( (v4 & 1) != 0 || (__int64)(v4 - 2) / 2 != v12 )
    goto LABEL_27;
  v46 = v12 + 1;
  v47 = (__m128i *)v8[1].m128i_i64[0];
  v48 = 2 * (v12 + 1);
  v49 = (const __m128i *)(a1 + 16 * (v48 + 4 * v46) - 48);
  *v8 = _mm_loadu_si128(v49);
  v50 = (const __m128i *)v49[1].m128i_i64[0];
  if ( v50 == &v49[2] )
  {
    v56 = v49[1].m128i_u64[1];
    if ( v56 )
    {
      if ( v56 == 1 )
      {
        v47->m128i_i8[0] = v49[2].m128i_i8[0];
        v56 = v49[1].m128i_u64[1];
        v47 = (__m128i *)v8[1].m128i_i64[0];
      }
      else
      {
        v57 = (__m128i *)a4;
        memcpy(v47, v50, v56);
        v56 = v49[1].m128i_u64[1];
        v47 = (__m128i *)v8[1].m128i_i64[0];
        a4 = v57;
      }
    }
    v8[1].m128i_i64[1] = v56;
    v47->m128i_i8[v56] = 0;
    v47 = (__m128i *)v49[1].m128i_i64[0];
    goto LABEL_57;
  }
  if ( v47 == v13 )
  {
    v8[1].m128i_i64[0] = (__int64)v50;
    v8[1].m128i_i64[1] = v49[1].m128i_i64[1];
    v8[2].m128i_i64[0] = v49[2].m128i_i64[0];
    goto LABEL_86;
  }
  v8[1].m128i_i64[0] = (__int64)v50;
  v51 = v8[2].m128i_i64[0];
  v8[1].m128i_i64[1] = v49[1].m128i_i64[1];
  v8[2].m128i_i64[0] = v49[2].m128i_i64[0];
  if ( !v47 )
  {
LABEL_86:
    v49[1].m128i_i64[0] = (__int64)v49[2].m128i_i64;
    v47 = (__m128i *)&v49[2];
    goto LABEL_57;
  }
  v49[1].m128i_i64[0] = (__int64)v47;
  v49[2].m128i_i64[0] = v51;
LABEL_57:
  v12 = v48 - 1;
  v49[1].m128i_i64[1] = 0;
  v47->m128i_i8[0] = 0;
  v8 = (__m128i *)(a1 + 48 * v12);
  v13 = v8 + 2;
LABEL_27:
  v29 = &v62;
  v30 = (__m128i *)a4[1].m128i_i64[0];
  v62 = _mm_loadu_si128(a4);
  s2 = v65;
  if ( v30 == &a4[2] )
  {
    v30 = (__m128i *)v65;
    v65[0] = _mm_loadu_si128(a4 + 2);
  }
  else
  {
    v31 = a4[2].m128i_i64[0];
    s2 = v30;
    *(_QWORD *)&v65[0] = v31;
  }
  a4[1].m128i_i64[0] = (__int64)a4[2].m128i_i64;
  v32 = a4[1].m128i_u64[1];
  a4[1].m128i_i64[1] = 0;
  n = v32;
  a4[2].m128i_i8[0] = 0;
  v33 = (v12 - 1) / 2;
  if ( v12 <= a2 )
  {
    v55 = (__m128i *)v8[1].m128i_i64[0];
    goto LABEL_65;
  }
  while ( 1 )
  {
    v38 = (const __m128i *)(a1 + 48 * v33);
    v39 = v38->m128i_i64[0] < (unsigned __int64)v62.m128i_i64[0];
    if ( v38->m128i_i64[0] != v62.m128i_i64[0]
      || (v39 = v38->m128i_i64[1] < (unsigned __int64)v62.m128i_i64[1], v38->m128i_i64[1] != v62.m128i_i64[1]) )
    {
      LOBYTE(v34) = v39;
      goto LABEL_32;
    }
    v40 = v38[1].m128i_u64[1];
    v41 = n;
    v42 = n;
    if ( v40 <= n )
      v42 = v38[1].m128i_u64[1];
    if ( v42 )
    {
      v43 = (const void *)v38[1].m128i_i64[0];
      v59 = v29;
      v58 = n;
      v57 = v13;
      v44 = memcmp(v43, s2, v42);
      v13 = v57;
      v41 = v58;
      v29 = v59;
      if ( v44 )
      {
        v34 = v44 >> 31;
        goto LABEL_32;
      }
    }
    v53 = v40 - v41;
    if ( v53 > 0x7FFFFFFF )
      break;
    if ( v53 < (__int64)0xFFFFFFFF80000000LL )
    {
      v8 = (__m128i *)(a1 + 48 * v12);
      v55 = (__m128i *)v8[1].m128i_i64[0];
      goto LABEL_33;
    }
    LOBYTE(v34) = (int)v53 < 0;
LABEL_32:
    v8 = (__m128i *)(a1 + 48 * v12);
    v55 = (__m128i *)v8[1].m128i_i64[0];
    if ( !(_BYTE)v34 )
    {
      v41 = n;
      goto LABEL_75;
    }
LABEL_33:
    v35 = v38 + 2;
    *v8 = _mm_loadu_si128(v38);
    v36 = (const __m128i *)v38[1].m128i_i64[0];
    if ( v36 == &v38[2] )
    {
      v45 = v38[1].m128i_u64[1];
      if ( v45 )
      {
        if ( v45 == 1 )
        {
          v55->m128i_i8[0] = v38[2].m128i_i8[0];
          v45 = v38[1].m128i_u64[1];
          v55 = (__m128i *)v8[1].m128i_i64[0];
        }
        else
        {
          v58 = (size_t)v29;
          v57 = (__m128i *)&v38[2];
          memcpy(v55, &v38[2], v45);
          v45 = v38[1].m128i_u64[1];
          v55 = (__m128i *)v8[1].m128i_i64[0];
          v29 = (__m128i *)v58;
          v35 = v38 + 2;
        }
      }
      v8[1].m128i_i64[1] = v45;
      v55->m128i_i8[v45] = 0;
      v55 = (__m128i *)v38[1].m128i_i64[0];
    }
    else
    {
      if ( v55 == v13 )
      {
        v8[1].m128i_i64[0] = (__int64)v36;
        v8[1].m128i_i64[1] = v38[1].m128i_i64[1];
        v8[2].m128i_i64[0] = v38[2].m128i_i64[0];
      }
      else
      {
        v8[1].m128i_i64[0] = (__int64)v36;
        v37 = v8[2].m128i_i64[0];
        v8[1].m128i_i64[1] = v38[1].m128i_i64[1];
        v8[2].m128i_i64[0] = v38[2].m128i_i64[0];
        if ( v55 )
        {
          v38[1].m128i_i64[0] = (__int64)v55;
          v38[2].m128i_i64[0] = v37;
          goto LABEL_37;
        }
      }
      v38[1].m128i_i64[0] = (__int64)v35;
      v55 = (__m128i *)&v38[2];
    }
LABEL_37:
    v38[1].m128i_i64[1] = 0;
    v12 = v33;
    v55->m128i_i8[0] = 0;
    if ( a2 >= v33 )
    {
      v55 = (__m128i *)v38[1].m128i_i64[0];
      v30 = (__m128i *)s2;
      v13 = (__m128i *)v35;
      v8 = (__m128i *)(a1 + 48 * v33);
      v32 = n;
      goto LABEL_65;
    }
    v13 = (__m128i *)v35;
    v33 = (v33 - 1) / 2;
  }
  v8 = (__m128i *)(a1 + 48 * v12);
  v55 = (__m128i *)v8[1].m128i_i64[0];
LABEL_75:
  v30 = (__m128i *)s2;
  v32 = v41;
LABEL_65:
  *v8 = _mm_load_si128(&v62);
  if ( v30 == &v29[2] )
  {
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        v55->m128i_i8[0] = v65[0];
        v32 = n;
        v55 = (__m128i *)v8[1].m128i_i64[0];
      }
      else
      {
        v57 = v29;
        memcpy(v55, v30, v32);
        v32 = n;
        v55 = (__m128i *)v8[1].m128i_i64[0];
        v29 = v57;
      }
    }
    v8[1].m128i_i64[1] = v32;
    v55->m128i_i8[v32] = 0;
    v55 = (__m128i *)s2;
  }
  else
  {
    if ( v55 == v13 )
    {
      v57 = *(__m128i **)&v65[0];
      v8[1].m128i_i64[0] = (__int64)v30;
      *(__m128 *)((char *)&v8[1] + 8) = _mm_loadh_ps((const double *)&v57);
    }
    else
    {
      v57 = *(__m128i **)&v65[0];
      v54 = v8[2].m128i_i64[0];
      v8[1].m128i_i64[0] = (__int64)v30;
      *(__m128 *)((char *)&v8[1] + 8) = _mm_loadh_ps((const double *)&v57);
      if ( v55 )
      {
        s2 = v55;
        *(_QWORD *)&v65[0] = v54;
        goto LABEL_69;
      }
    }
    v55 = v29 + 2;
    s2 = &v29[2];
  }
LABEL_69:
  n = 0;
  v55->m128i_i8[0] = 0;
  if ( s2 != &v29[2] )
    operator delete(s2);
}
