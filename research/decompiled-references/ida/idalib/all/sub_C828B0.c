__int64 __fastcall sub_C828B0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int8 v8; // r12
  __int64 v10; // rax
  __int32 v11; // ecx
  __int64 v12; // r15
  _BYTE *v13; // rax
  __m128i v14; // xmm0
  unsigned int v15; // r12d
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  const __m128i *v23; // r14
  __int64 v24; // rsi
  const __m128i *v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  const __m128i *v29; // rax
  const __m128i *v30; // rdx
  const __m128i *v31; // rsi
  const __m128i *v32; // rdx
  __int64 v33; // rdx
  __m128i v34; // xmm1
  const __m128i *i; // r12
  __int64 v36; // rdx
  __int64 v37; // [rsp+10h] [rbp-4A8h]
  unsigned int *v38; // [rsp+18h] [rbp-4A0h]
  unsigned int v39; // [rsp+20h] [rbp-498h]
  unsigned int v40; // [rsp+24h] [rbp-494h]
  __int64 v41; // [rsp+28h] [rbp-490h] BYREF
  __int16 v42; // [rsp+30h] [rbp-488h] BYREF
  __int64 v43; // [rsp+38h] [rbp-480h]
  __m128 *v44; // [rsp+40h] [rbp-478h] BYREF
  __int64 *v45; // [rsp+48h] [rbp-470h]
  __m128i v46; // [rsp+50h] [rbp-468h] BYREF
  __int64 v47; // [rsp+60h] [rbp-458h]
  char v48; // [rsp+68h] [rbp-450h]
  __int64 v49; // [rsp+78h] [rbp-440h]
  void *ptr; // [rsp+80h] [rbp-438h]
  __int64 v51; // [rsp+88h] [rbp-430h]
  _BYTE v52[80]; // [rsp+90h] [rbp-428h] BYREF
  __m128 v53; // [rsp+E0h] [rbp-3D8h] BYREF
  _BYTE *v54; // [rsp+F8h] [rbp-3C0h]
  unsigned int *v55; // [rsp+100h] [rbp-3B8h]
  unsigned __int8 v56; // [rsp+114h] [rbp-3A4h]
  const __m128i *v57; // [rsp+1E8h] [rbp-2D0h]
  unsigned int v58; // [rsp+1F0h] [rbp-2C8h]
  __m128i v59; // [rsp+3F8h] [rbp-C0h]
  int v60; // [rsp+408h] [rbp-B0h]
  unsigned int *v61; // [rsp+410h] [rbp-A8h]
  __int64 v62; // [rsp+458h] [rbp-60h]

  v8 = a6;
  v41 = a4;
  v53.m128_u64[0] = (unsigned __int64)&v41;
  v10 = sub_224AF30("EvaluateAsInitializer", 21, sub_C111C0, &v53, a5, a6);
  v43 = a5;
  v11 = 2;
  v12 = v10;
  v42 = 0;
  if ( v8 )
  {
    v13 = *(_BYTE **)(a3 + 2320);
    v11 = 0;
    if ( (v13[1] & 8) == 0 )
      v11 = 2 * ((*v13 & 8) == 0);
  }
  sub_C12870(&v53, a3, (__int64)&v42, v11);
  sub_A4F2A0((__int64)&v46, v41, 0, 0);
  v14 = _mm_load_si128(&v46);
  v53.m128_i8[8] = v8;
  v60 = 1;
  v15 = v56;
  v59 = v14;
  v61 = a2;
  v39 = *(_DWORD *)(v41 + 24);
  v37 = *(_QWORD *)(v41 + 48);
  if ( !v56 )
  {
    ptr = v52;
    v51 = 0x800000000LL;
    v46 = 0u;
    v47 = 0;
    v48 |= 1u;
    v49 = 0;
    v52[65] = 0;
    sub_A4F2A0((__int64)&v44, v41, 0, 0);
    sub_C24210((__int64)&v46, (__int64)v44, v45, 0);
    v44 = &v53;
    LODWORD(v45) = v58;
    v18 = v55;
    v19 = v55[36];
    v17 = v55[37];
    v20 = v55[40] + 1;
    v55[40] = v20;
    if ( v19 + 1 > v17 )
    {
      v17 = (unsigned __int64)(v18 + 38);
      v40 = v20;
      v38 = v18;
      sub_2237220(v18 + 34, v18 + 38, v19 + 1, 4);
      v18 = v38;
      v20 = v40;
      v19 = v38[36];
    }
    v21 = *((_QWORD *)v18 + 17);
    *(_DWORD *)(v21 + 4 * v19) = v20;
    ++v18[36];
    if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (v17 = (unsigned __int64)&v53,
          !(unsigned __int8)sub_C4F870((__int64)a2, (__int64)&v53, (__int64)&v46, (unsigned __int16 *)a1, v20))
      || (_BYTE)v42 )
    {
      sub_C559A0((__int64)&v44, v17, v21, v19, v20);
      if ( ptr != v52 )
        free(ptr);
      goto LABEL_14;
    }
    sub_C559A0((__int64)&v44, (__int64)&v53, v21, v19, v20);
    v23 = v57;
    v24 = 32LL * v58;
    v25 = &v57[(unsigned __int64)v24 / 0x10];
    v26 = v24 >> 5;
    v27 = v24 >> 7;
    LODWORD(v28) = v26;
    if ( v27 )
    {
      if ( (v57->m128i_i8[0] & 6) != 0 )
      {
        v29 = v57 + 2;
        if ( (v57[2].m128i_i8[0] & 6) != 0 )
        {
          v30 = v57;
          v29 = v57 + 4;
          v31 = &v57[8 * v27];
          if ( (v57[4].m128i_i8[0] & 6) != 0 )
          {
            while ( 1 )
            {
              if ( (v30[6].m128i_i8[0] & 6) == 0 )
              {
                v29 = v30 + 6;
                goto LABEL_30;
              }
              v29 = v30 + 8;
              if ( v31 == &v30[8] )
              {
                v36 = ((char *)v25 - (char *)v29) >> 5;
                goto LABEL_49;
              }
              if ( (v30[8].m128i_i8[0] & 6) == 0 )
                goto LABEL_30;
              if ( (v30[10].m128i_i8[0] & 6) == 0 )
              {
                v29 = v30 + 10;
                goto LABEL_30;
              }
              if ( (v30[12].m128i_i8[0] & 6) == 0 )
                break;
              v30 += 8;
            }
            v29 = v30 + 12;
          }
        }
      }
      else
      {
        v29 = v57;
      }
LABEL_30:
      if ( v25 != v29 )
      {
        v32 = v29 + 2;
        if ( v25 == &v29[2] )
          goto LABEL_61;
        do
        {
          if ( (v32->m128i_i8[0] & 6) != 0 )
          {
            v29 += 2;
            v29[-2] = _mm_loadu_si128(v32);
            v29[-1] = _mm_loadu_si128(v32 + 1);
          }
          v32 += 2;
        }
        while ( v25 != v32 );
        v23 = v57;
        v33 = ((char *)&v57[2 * v58] - (char *)v25) >> 5;
        if ( (char *)&v57[2 * v58] - (char *)v25 <= 0 )
        {
LABEL_61:
          LODWORD(v28) = ((char *)v29 - (char *)v23) >> 5;
          v26 = (unsigned int)v28;
        }
        else
        {
          do
          {
            v34 = _mm_loadu_si128(v25);
            v29 += 2;
            v25 += 2;
            v29[-2] = v34;
            v29[-1] = _mm_loadu_si128(v25 - 1);
            --v33;
          }
          while ( v33 );
          v23 = v57;
          LODWORD(v28) = ((char *)v29 - (char *)v57) >> 5;
          v26 = (unsigned int)v28;
        }
        goto LABEL_38;
      }
      goto LABEL_52;
    }
    v36 = v26;
    v29 = v57;
LABEL_49:
    if ( v36 != 2 )
    {
      if ( v36 != 3 )
      {
        if ( v36 != 1 )
        {
LABEL_52:
          v28 = ((char *)v25 - (char *)v57) >> 5;
          v26 = (unsigned int)v28;
LABEL_38:
          v58 = v28;
          for ( i = &v23[2 * v26]; i != v23; *v54 = 1 )
          {
            while ( !(unsigned int)sub_F65A30(v23[1].m128i_i64[1]) )
            {
              v23 += 2;
              if ( i == v23 )
                goto LABEL_43;
            }
            v23 += 2;
          }
LABEL_43:
          v58 = 0;
          if ( ptr != v52 )
            free(ptr);
          v17 = v39;
          v15 = sub_C2BA60((__int64)&v53, v39, v37, a2, 0);
          if ( !(_BYTE)v15 )
            goto LABEL_6;
          if ( v62 )
            sub_C139C0((__int64)&v53);
          goto LABEL_14;
        }
        goto LABEL_59;
      }
      if ( (v29->m128i_i8[0] & 6) == 0 )
        goto LABEL_30;
      v29 += 2;
    }
    if ( (v29->m128i_i8[0] & 6) == 0 )
      goto LABEL_30;
    v29 += 2;
LABEL_59:
    if ( (v29->m128i_i8[0] & 6) != 0 )
      goto LABEL_38;
    goto LABEL_30;
  }
  v16 = sub_A5F520(a3);
  v17 = (unsigned __int64)&v53;
  if ( !(unsigned __int8)sub_CE5CB0(v16, &v53, v41, a2) )
  {
LABEL_6:
    v15 = 0;
    goto LABEL_14;
  }
  v17 = v39;
  v15 = sub_C2BA60((__int64)&v53, v39, v37, a2, 0);
LABEL_14:
  sub_C23D80((__int64)&v53, v17);
  if ( v12 )
    sub_224D6D0(v12);
  return v15;
}
