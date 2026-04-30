unsigned __int64 __fastcall sub_403D00(__int64 a1)
{
  int v1; // eax
  const char **v3; // r15
  char v5; // dl
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  const char **v8; // r12
  const char **v9; // rbx
  const char *v10; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm1
  __int8 v13; // r11
  __int8 v14; // r10
  __int8 v15; // r9
  const char **v16; // rdx
  __m128i *v17; // rax
  __int64 v18; // rax
  const char **v19; // r13
  const char **v20; // rbp
  const char **v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  const char **v27; // rdx
  __int64 v28; // rcx
  const __m128i *v29; // rdi
  const char *v30; // rsi
  __int64 v31; // xmm1_8
  __int8 v32; // r11
  __int8 v33; // r10
  __int8 v34; // r9
  __m128i v35; // xmm0
  char v37; // dl
  unsigned __int64 v38; // rsi
  __int64 v39; // [rsp+0h] [rbp-148h]
  const char **v40; // [rsp+8h] [rbp-140h]
  __m128i v41; // [rsp+10h] [rbp-138h] BYREF
  __int64 v42; // [rsp+20h] [rbp-128h]
  __int64 v43; // [rsp+28h] [rbp-120h]
  __int64 v44; // [rsp+30h] [rbp-118h]
  const char ***v45; // [rsp+38h] [rbp-110h]
  __int128 v46; // [rsp+40h] [rbp-108h] BYREF
  __int128 v47; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v50; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v55[2]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-68h]
  const char **v57; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v58; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+108h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 24);
  v59 = __readfsqword(0x28u);
  v56 = 0;
  if ( v1 == 1 )
  {
    v5 = *(_BYTE *)(a1 + 28);
    v6 = *(_QWORD *)(a1 + 16);
    v45 = &v57;
    sub_3F0ED0((__int64)&v57, v6, v5);
  }
  else
  {
    if ( v1 != 2 )
    {
      v39 = 0;
      v3 = nullptr;
      v57 = nullptr;
      v58 = 0;
      goto LABEL_4;
    }
    v37 = *(_BYTE *)(a1 + 28);
    v38 = *(_QWORD *)(a1 + 16);
    v45 = &v57;
    sub_3F1010((__int64)&v57, v38, v37);
  }
  v3 = v57;
  v57 = nullptr;
  v7 = *((_QWORD *)&v58 + 1);
  v39 = v58;
  v58 = 0;
  v56 = v7;
  v8 = &v3[3 * v39];
  v44 = 24 * v39;
  if ( v8 != v3 )
  {
    v9 = v3;
    do
    {
      v46 = 0;
      getinf_buf(26, &v46, 16);
      v10 = *v9;
      if ( (unsigned __int64)*v9 >= (unsigned __int64)v46 && (unsigned __int64)v10 < *((_QWORD *)&v46 + 1) )
      {
        v11 = v58;
        v12 = _mm_loadl_epi64((const __m128i *)(v9 + 1));
        v13 = *((_BYTE *)v9 + 16);
        v14 = *((_BYTE *)v9 + 17);
        v15 = *((_BYTE *)v9 + 18);
        if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
        {
          v42 = *((_QWORD *)&v58 + 1);
          v41.m128i_i8[15] = v15;
          v41.m128i_i8[14] = v14;
          v41.m128i_i8[0] = v13;
          v40 = (const char **)v12.m128i_i64[0];
          v26 = qvector_reserve(v45, 0, v58 + 1, 24);
          v27 = (const char **)v26;
          v28 = *((_QWORD *)&v58 + 1);
          v29 = (const __m128i *)v57;
          v30 = (const char *)(v58 - 1);
          *((_QWORD *)&v58 + 1) = v42;
          v31 = (__int64)v40;
          v32 = v41.m128i_i8[0];
          v33 = v41.m128i_i8[14];
          v34 = v41.m128i_i8[15];
          if ( (__int64)v58 - 1 >= 0 )
          {
            do
            {
              v35 = _mm_loadu_si128(v29);
              v26 += 24;
              v29 = (const __m128i *)((char *)v29 + 24);
              *(__m128i *)(v26 - 24) = v35;
              *(_QWORD *)(v26 - 8) = v29[-1].m128i_i64[1];
            }
            while ( v30-- != nullptr );
            v29 = (const __m128i *)v57;
          }
          v43 = v28;
          LOBYTE(v42) = v34;
          v41.m128i_i8[15] = v33;
          v41.m128i_i8[14] = v32;
          v40 = v27;
          v41.m128i_i64[0] = v31;
          qfree(v29, v30);
          v16 = v40;
          v11 = v58;
          v15 = v42;
          v57 = v40;
          v14 = v41.m128i_i8[15];
          *((_QWORD *)&v58 + 1) = v43;
          v13 = v41.m128i_i8[14];
          v12 = _mm_loadl_epi64(&v41);
        }
        else
        {
          v16 = v57;
        }
        v17 = (__m128i *)&v16[3 * v11];
        v17[1].m128i_i8[0] = v13;
        v17[1].m128i_i8[1] = v14;
        v17[1].m128i_i8[2] = v15;
        *v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, v12);
        *(_QWORD *)&v58 = v58 + 1;
      }
      v9 += 3;
    }
    while ( v8 != v9 );
    v18 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v44 >> 3)) >> 2;
    if ( v18 > 0 )
    {
      v19 = v3;
      v20 = &v3[12 * v18];
      while ( 1 )
      {
        v47 = 0;
        getinf_buf(26, &v47, 16);
        if ( (unsigned __int64)*v19 >= (unsigned __int64)v47 && (unsigned __int64)*v19 < *((_QWORD *)&v47 + 1) )
          goto LABEL_22;
        v48 = 0;
        getinf_buf(26, &v48, 16);
        v22 = (unsigned __int64)v19[3];
        if ( v22 >= (unsigned __int64)v48 && v22 < *((_QWORD *)&v48 + 1) )
        {
          v19 += 3;
          goto LABEL_22;
        }
        v49 = 0;
        getinf_buf(26, &v49, 16);
        v23 = (unsigned __int64)v19[6];
        if ( v23 >= (unsigned __int64)v49 && v23 < *((_QWORD *)&v49 + 1) )
        {
          v19 += 6;
          goto LABEL_22;
        }
        v50 = 0;
        getinf_buf(26, &v50, 16);
        v24 = (unsigned __int64)v19[9];
        if ( v24 >= (unsigned __int64)v50 && v24 < *((_QWORD *)&v50 + 1) )
        {
          v19 += 9;
          goto LABEL_22;
        }
        v19 += 12;
        if ( v19 == v20 )
        {
          v25 = 0xAAAAAAAAAAAAAAABLL * (v9 - v19);
          goto LABEL_40;
        }
      }
    }
    v19 = v3;
    v25 = 0xAAAAAAAAAAAAAAABLL * (v9 - v3);
LABEL_40:
    if ( v25 != 2 )
    {
      if ( v25 != 3 )
      {
        if ( v25 != 1 )
          goto LABEL_4;
LABEL_43:
        v53 = 0;
        getinf_buf(26, &v53, 16);
        if ( (unsigned __int64)*v19 < (unsigned __int64)v53 || (unsigned __int64)*v19 >= *((_QWORD *)&v53 + 1) )
          goto LABEL_4;
        goto LABEL_22;
      }
      v51 = 0;
      getinf_buf(26, &v51, 16);
      if ( (unsigned __int64)*v19 >= (unsigned __int64)v51 && (unsigned __int64)*v19 < *((_QWORD *)&v51 + 1) )
      {
LABEL_22:
        if ( v9 != v19 )
        {
          v21 = v19 + 3;
          if ( v9 == v19 + 3 )
          {
            --v39;
          }
          else
          {
            do
            {
              v54 = 0;
              getinf_buf(26, &v54, 16);
              if ( (unsigned __int64)*v21 < (unsigned __int64)v54 || (unsigned __int64)*v21 >= *((_QWORD *)&v54 + 1) )
              {
                v19 += 3;
                *(__m128i *)(v19 - 3) = _mm_loadu_si128((const __m128i *)v21);
                *(_DWORD *)((char *)v19 - 9) = *(_DWORD *)((char *)v21 + 15);
              }
              v21 += 3;
            }
            while ( v9 != v21 );
            v39 -= 0xAAAAAAAAAAAAAAABLL * (v9 - v19);
          }
        }
        goto LABEL_4;
      }
      v19 += 3;
    }
    v52 = 0;
    getinf_buf(26, &v52, 16);
    if ( (unsigned __int64)*v19 < (unsigned __int64)v52 || (unsigned __int64)*v19 >= *((_QWORD *)&v52 + 1) )
    {
      v19 += 3;
      goto LABEL_43;
    }
    goto LABEL_22;
  }
LABEL_4:
  v55[0] = v3;
  v55[1] = v39;
  sub_3FF890(a1, (__int64)v55);
  sub_403300(a1, &v57);
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57, (const char *)&v57);
  }
  if ( v3 )
    qfree(v3, (const char *)&v57);
  return v59 - __readfsqword(0x28u);
}
