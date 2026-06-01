unsigned __int64 __fastcall sub_22875B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  unsigned __int64 v11; // rbx
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  unsigned __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // r14
  unsigned __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // r13
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // r10
  __int64 v48; // rdi
  __int64 v49; // r13
  unsigned __int128 v50; // rax
  __int64 v51; // rcx
  unsigned __int128 v52; // rax
  __int64 v53; // rcx
  unsigned __int128 v54; // rax
  __int64 v55; // rcx
  unsigned __int128 v56; // rax
  __int64 *v58; // [rsp+0h] [rbp-E0h] BYREF
  unsigned __int64 v59; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+10h] [rbp-D0h]
  __int64 v61; // [rsp+18h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+28h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+30h] [rbp-B0h]
  __int64 v65; // [rsp+38h] [rbp-A8h]
  __int64 v66; // [rsp+40h] [rbp-A0h]
  __int64 *v67; // [rsp+48h] [rbp-98h]
  __int64 v68; // [rsp+50h] [rbp-90h]
  __int64 v69; // [rsp+58h] [rbp-88h]
  __int64 v70; // [rsp+60h] [rbp-80h]
  __m128 si128; // [rsp+68h] [rbp-78h]
  __m128 v72; // [rsp+78h] [rbp-68h]
  __m128 v73; // [rsp+88h] [rbp-58h]
  __m128i v74; // [rsp+98h] [rbp-48h]

  v70 = a2 - 1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23ABD10);
  v69 = a1;
  v72 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23ABD20);
  v68 = a2;
  v73 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23ABD30);
  v74 = _mm_load_si128((const __m128i *)&xmmword_23ABD40);
  if ( (unsigned __int64)(a2 - 1) >> 10 )
  {
    v2 = 2654435761LL;
    v3 = 0x85EBCA77C2B2AE63LL;
    v4 = 0xC2B2AE3D27D4EB4FLL;
    v5 = 3266489917LL;
    v6 = 0x165667B19E3779F9LL;
    v7 = 0x9E3779B185EBCA87LL;
    v59 = 0xC3EBD33483ACC5EALL;
    v60 = 0xEB6313FAFFA081C5LL;
    v61 = 0x49DAF0B751DD0D17LL;
    v62 = 0x9E68D429265516D3LL;
    v63 = 0xFCA1477D58BE162BLL;
    v64 = 0xCE31D07AD1B8F88FLL;
    v65 = 0x280416958F3ACB45LL;
    v66 = 0x7E404BBBCAFBD7AFLL;
    v8 = (__int64 *)(a1 + 8);
    v9 = 0x27D4EB2F165667C5LL;
    v10 = &v8[128 * ((unsigned __int64)(a2 - 1) >> 10)];
    v58 = v8;
    v11 = 2246822519LL;
    v67 = v10;
    do
    {
      v12 = v58;
      v13 = qword_26FB360;
      do
      {
        v14 = *(v12 - 1);
        v5 += *v12 + ((v14 ^ (unsigned __int64)*v13) >> 32) * ((unsigned int)v14 ^ *(_DWORD *)v13);
        v15 = v14 + ((*v12 ^ (unsigned __int64)v13[1]) >> 32) * (unsigned int)(*(_DWORD *)v12 ^ *((_DWORD *)v13 + 2));
        v16 = v12[1];
        v7 += v15;
        v17 = v12[2];
        v4 += v17 + ((v16 ^ (unsigned __int64)v13[2]) >> 32) * ((unsigned int)v16 ^ *((_DWORD *)v13 + 4));
        v18 = v16 + ((v17 ^ (unsigned __int64)v13[3]) >> 32) * ((unsigned int)v17 ^ *((_DWORD *)v13 + 6));
        v19 = v12[3];
        v6 += v18;
        v20 = v12[4];
        v3 += v20 + ((v19 ^ (unsigned __int64)v13[4]) >> 32) * ((unsigned int)v19 ^ *((_DWORD *)v13 + 8));
        v21 = v19 + ((v20 ^ (unsigned __int64)v13[5]) >> 32) * ((unsigned int)v20 ^ *((_DWORD *)v13 + 10));
        v22 = v12[5];
        v11 += v21;
        v23 = v12[6];
        v24 = v23 ^ v13[7];
        v25 = (unsigned int)v22 ^ *((_DWORD *)v13 + 12);
        v26 = (v22 ^ (unsigned __int64)v13[6]) >> 32;
        ++v13;
        v12 += 8;
        v9 += v23 + v26 * v25;
        v2 += v22 + HIDWORD(v24) * (unsigned int)v24;
      }
      while ( &qword_26FB3E0 != v13 );
      v5 = 2654435761u * ((v5 >> 47) ^ v59 ^ v5);
      v7 = 2654435761u * ((v7 >> 47) ^ v60 ^ v7);
      v4 = 2654435761u * (v4 ^ v61 ^ (v4 >> 47));
      v6 = 2654435761u * (v6 ^ v62 ^ (v6 >> 47));
      v3 = 2654435761u * ((v3 >> 47) ^ v63 ^ v3);
      v11 = 2654435761u * (v11 ^ v64 ^ (v11 >> 47));
      v9 = 2654435761u * ((v9 >> 47) ^ v65 ^ v9);
      v2 = 2654435761u * ((v2 >> 47) ^ v66 ^ v2);
      v58 += 128;
    }
    while ( v67 != v58 );
    v58 = (__int64 *)v7;
    si128 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v6;
    v72 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v11;
    v73 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v2;
    v74 = (__m128i)_mm_loadh_ps((const double *)&v58);
  }
  else
  {
    v9 = 0x27D4EB2F165667C5LL;
    v2 = 2654435761LL;
    v11 = 2246822519LL;
    v3 = 0x85EBCA77C2B2AE63LL;
    v4 = 0xC2B2AE3D27D4EB4FLL;
    v5 = 3266489917LL;
    v6 = 0x165667B19E3779F9LL;
    v7 = 0x9E3779B185EBCA87LL;
  }
  v27 = (v70 - (v70 & 0xFFFFFFFFFFFFFC00LL)) >> 6;
  if ( v27 )
  {
    v28 = qword_26FB360;
    v29 = (_QWORD *)(v69 + (v70 & 0xFFFFFFFFFFFFFC00LL) + 8);
    v58 = &qword_26FB360[v27];
    do
    {
      v30 = *(v29 - 1);
      v5 += ((unsigned int)v30 ^ *(_DWORD *)v28) * ((v30 ^ (unsigned __int64)*v28) >> 32) + *v29;
      v31 = v29[2];
      v7 += (unsigned int)(*(_DWORD *)v29 ^ *((_DWORD *)v28 + 2)) * ((*v29 ^ (unsigned __int64)v28[1]) >> 32) + v30;
      v32 = v29[1];
      v33 = ((unsigned int)v31 ^ *((_DWORD *)v28 + 6)) * ((v31 ^ (unsigned __int64)v28[3]) >> 32);
      v4 += ((unsigned int)v32 ^ *((_DWORD *)v28 + 4)) * ((v32 ^ (unsigned __int64)v28[2]) >> 32) + v31;
      v34 = v29[4];
      v6 += v33 + v32;
      v35 = v29[3];
      v36 = ((unsigned int)v34 ^ *((_DWORD *)v28 + 10)) * ((v34 ^ (unsigned __int64)v28[5]) >> 32);
      v3 += ((unsigned int)v35 ^ *((_DWORD *)v28 + 8)) * ((v35 ^ (unsigned __int64)v28[4]) >> 32) + v34;
      v37 = v29[6];
      v11 += v36 + v35;
      v38 = v29[5];
      v39 = v37 ^ v28[7];
      v40 = (unsigned int)v38 ^ *((_DWORD *)v28 + 12);
      v41 = (v38 ^ (unsigned __int64)v28[6]) >> 32;
      v29 += 8;
      ++v28;
      v9 += v40 * v41 + v37;
      v2 += (unsigned int)v39 * HIDWORD(v39) + v38;
    }
    while ( v28 != v58 );
    v58 = (__int64 *)v7;
    si128 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v6;
    v72 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v11;
    v73 = _mm_loadh_ps((const double *)&v58);
    v58 = (__int64 *)v2;
    v74 = (__m128i)_mm_loadh_ps((const double *)&v58);
  }
  v42 = *(_QWORD *)(v69 + v68 - 64);
  v43 = *(_QWORD *)(v69 + v68 - 16);
  v44 = *(_QWORD *)(v69 + v68 - 56);
  v45 = *(_QWORD *)(v69 + v68 - 40);
  v46 = *(_QWORD *)(v69 + v68 - 24);
  v47 = *(_QWORD *)(v69 + v68 - 48);
  v59 = v42 ^ 0xEA647378D9C97E9FLL;
  v48 = *(_QWORD *)(v69 + v68 - 32);
  v49 = *(_QWORD *)(v69 + v68 - 8);
  v58 = (__int64 *)(v43 ^ 0x45CE31D07AD1B8F8LL);
  v50 = ((((v44 ^ 0xC5C3EBD33483ACC5LL) >> 32) * ((unsigned int)v44 ^ 0x3483ACC5) + si128.m128_u64[1] + v42)
       ^ 0xA44072DB979083E9LL)
      * (unsigned __int128)((v44 + si128.m128_u64[0] + (unsigned int)v59 * HIDWORD(v59)) ^ 0x6DD4DE1CAD21F72CLL);
  v51 = *((_QWORD *)&v50 + 1) ^ v50;
  v52 = ((v72.m128_u64[1] + v47 + ((unsigned int)v45 ^ 0xB751DD0D) * ((v45 ^ 0xD349DAF0B751DD0DLL) >> 32))
       ^ 0xD05A8278E5C0CC4ELL)
      * (unsigned __int128)((v45
                           + v72.m128_u64[0]
                           + ((unsigned int)v47 ^ 0xFAFFA081) * ((v47 ^ 0x17EB6313FAFFA081uLL) >> 32))
                          ^ 0xE679CB1F67B3B7A4LL);
  v53 = v51 + (*((_QWORD *)&v52 + 1) ^ v52) - 0x61C8864E7A143579LL * v68;
  v54 = ((v73.m128_u64[1] + v48 + ((unsigned int)v46 ^ 0x7D58BE16) * ((v46 ^ 0x8FFCA1477D58BE16LL) >> 32))
       ^ 0x9035E08E2443F774LL)
      * (unsigned __int128)((v46
                           + v73.m128_u64[0]
                           + ((unsigned int)v48 ^ 0x29265516) * ((v48 ^ 0x2B9E68D429265516uLL) >> 32))
                          ^ 0x4608B82172FFCC7DLL);
  v55 = (v54 ^ *((_QWORD *)&v54 + 1)) + v53;
  v56 = ((((v49 ^ 0xAF280416958F3ACBLL) >> 32) * ((unsigned int)v49 ^ 0x958F3ACB) + v74.m128i_i64[1] + v43)
       ^ 0x65D088CB00C391BBLL)
      * (unsigned __int128)((v49
                           + v74.m128i_i64[0]
                           + ((unsigned int)v43 ^ 0x7AD1B8F8) * ((v43 ^ 0x45CE31D07AD1B8F8uLL) >> 32))
                          ^ 0x52283C4C263A81E6LL);
  return (0x165667919E3779F9LL
        * (((v55 + (*((_QWORD *)&v56 + 1) ^ (unsigned __int64)v56)) >> 37) ^ (v55 + (*((_QWORD *)&v56 + 1) ^ v56))))
       ^ ((0x165667919E3779F9LL
         * (((v55 + (*((_QWORD *)&v56 + 1) ^ (unsigned __int64)v56)) >> 37)
          ^ (v55 + (*((_QWORD *)&v56 + 1) ^ (unsigned __int64)v56)))) >> 32);
}
