__int64 __fastcall sub_173E490(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  __int64 v7; // rax
  __m128i *v8; // r14
  __m128i *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const __m128i *v13; // r14
  __m128i *v14; // r15
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 result; // rax
  __int64 *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __m128i *v30; // rcx
  const __m128i *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // r9
  __int64 v52; // r11
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int128 v55; // [rsp-20h] [rbp-108h]
  __int128 v56; // [rsp-20h] [rbp-108h]
  __int128 v57; // [rsp-20h] [rbp-108h]
  __int128 v58; // [rsp-20h] [rbp-108h]
  __int64 v59; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+20h] [rbp-C8h]
  __m128i *v62; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v64; // [rsp+30h] [rbp-B8h]
  __int64 v65; // [rsp+30h] [rbp-B8h]
  __int64 v66; // [rsp+38h] [rbp-B0h]
  signed __int64 v67; // [rsp+38h] [rbp-B0h]
  unsigned int v68; // [rsp+4Ch] [rbp-9Ch] BYREF
  __int64 v69; // [rsp+50h] [rbp-98h]
  unsigned int *v70; // [rsp+58h] [rbp-90h]
  __int64 v71; // [rsp+60h] [rbp-88h]
  __int64 v72; // [rsp+70h] [rbp-78h] BYREF
  __int64 v73; // [rsp+78h] [rbp-70h]
  __m128i *v74; // [rsp+80h] [rbp-68h]
  __int128 v75; // [rsp+90h] [rbp-58h]
  __int64 v76; // [rsp+A0h] [rbp-48h]

  v7 = *(unsigned int *)(a3 + 8);
  v8 = *(__m128i **)a3;
  v68 = a4;
  v7 *= 168;
  v9 = (__m128i *)((char *)v8 + v7);
  v59 = v7;
  sub_172F290(&v72, v8, (__int64)v8->m128i_i64 + v7);
  if ( v74 )
  {
    v69 = a1;
    v70 = &v68;
    v71 = a3;
    *((_QWORD *)&v55 + 1) = &v68;
    *(_QWORD *)&v55 = a1;
    sub_173E350(v8, v9, v74, v73, v11, v12, v55, a3);
  }
  else if ( (unsigned __int64)v59 <= 0x930 )
  {
    *(_QWORD *)&v75 = a1;
    *((_QWORD *)&v75 + 1) = &v68;
    v76 = a3;
    sub_17021E0(v8, v9, 0, v10, v11, v12, a1, &v68, a3);
  }
  else
  {
    *(_QWORD *)&v75 = a1;
    *((_QWORD *)&v75 + 1) = &v68;
    v76 = a3;
    v32 = (__int64)(0xCF3CF3CF3CF3CF3DLL * (v59 >> 3)) >> 1;
    v33 = 5 * v32;
    v34 = (__m128i *)((char *)v8 + 168 * v32);
    v64 = 168 * v32;
    v35 = 0xCF3CF3CF3CF3CF3DLL * ((168 * v32) >> 3);
    v61 = v35;
    if ( v64 <= 0x930 )
    {
      sub_17021E0(v8, v34, v35, v33, 0xCF3CF3CF3CF3CF3DLL, v12, a1, *((unsigned int **)&v75 + 1), v76);
    }
    else
    {
      v36 = v35 >> 1;
      v66 = 168 * v36;
      *((_QWORD *)&v56 + 1) = *((_QWORD *)&v75 + 1);
      *(_QWORD *)&v56 = a1;
      v62 = (__m128i *)((char *)v8 + 168 * v36);
      sub_1730690(v8, v62, v36, 168 * v36, 0xCF3CF3CF3CF3CF3DLL, v12, v56, v76);
      sub_1730690(v62, v34, v37, v38, v39, v40, v75, v76);
      sub_17301D0(
        v8,
        v62,
        (__int64)v34,
        0xCF3CF3CF3CF3CF3DLL * (v66 >> 3),
        0xCF3CF3CF3CF3CF3DLL * ((__int64)(v64 - v66) >> 3),
        v41,
        v75,
        v76);
    }
    v45 = v59 - v64;
    *(_QWORD *)&v75 = a1;
    v76 = a3;
    *((_QWORD *)&v75 + 1) = &v68;
    if ( (__int64)(v59 - v64) <= 2352 )
    {
      v63 = 0xCF3CF3CF3CF3CF3DLL * (v45 >> 3);
      sub_17021E0(v34, v9, 0xCF3CF3CF3CF3CF3DLL, v42, v43, v44, a1, *((unsigned int **)&v75 + 1), v76);
      v52 = v63;
    }
    else
    {
      v67 = 0xCF3CF3CF3CF3CF3DLL * (v45 >> 3);
      v65 = 168 * (v67 >> 1);
      *((_QWORD *)&v57 + 1) = *((_QWORD *)&v75 + 1);
      *(_QWORD *)&v57 = a1;
      sub_1730690(v34, (__m128i *)((char *)v34 + v65), 0xCF3CF3CF3CF3CF3DLL, v65, v43, v44, v57, v76);
      sub_1730690((__m128i *)((char *)v34 + v65), v9, v46, v47, v48, v49, v75, v76);
      sub_17301D0(
        v34,
        (__m128i *)((char *)v34 + v65),
        (__int64)v9,
        0xCF3CF3CF3CF3CF3DLL * (v65 >> 3),
        0xCF3CF3CF3CF3CF3DLL * (((char *)v9 - &v34->m128i_i8[v65]) >> 3),
        v50,
        v75,
        v76);
      v52 = v67;
    }
    *(_QWORD *)&v75 = a1;
    *((_QWORD *)&v75 + 1) = &v68;
    v76 = a3;
    *((_QWORD *)&v58 + 1) = &v68;
    *(_QWORD *)&v58 = a1;
    sub_17301D0(v8, v34, (__int64)v9, v61, v52, v51, v58, a3);
  }
  v13 = v74;
  v14 = (__m128i *)((char *)v74 + 168 * v73);
  if ( v74 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v15 = (_QWORD *)v13[4].m128i_i64[1];
        v16 = (_QWORD *)v13[4].m128i_i64[0];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v17 = (_QWORD *)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              v16 += 8;
              if ( v15 == v16 )
                goto LABEL_7;
            }
            v16 += 8;
          }
          while ( v15 != v16 );
LABEL_7:
          v16 = (_QWORD *)v13[4].m128i_i64[0];
        }
        if ( !v16 )
          break;
        v13 = (const __m128i *)((char *)v13 + 168);
        operator delete(v16);
        if ( v14 == v13 )
          goto LABEL_10;
      }
      v13 = (const __m128i *)((char *)v13 + 168);
    }
    while ( v14 != v13 );
LABEL_10:
    v14 = v74;
  }
  operator delete(v14, (const std::nothrow_t *)&std::nothrow);
  v18 = *(unsigned int *)(a3 + 8);
  v19 = *(__int64 **)a3;
  result = 21 * v18;
  v21 = &v19[result];
  if ( v21 != v19 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*v19
          || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v19 + 32LL))(*v19),
              (*(_BYTE *)(result + 82) & 0x40) == 0)
          && ((v22 = *v19, result = sub_1BD7850(1, *v19), !(_BYTE)result)
           || (result = sub_B76070(*v19, v22, v23, v24), !a5)
           || (result = (unsigned int)result, (unsigned int)result > a5)) )
        {
          if ( (v19[13] & 1) != 0 )
            break;
        }
        v19 += 21;
        if ( v21 == v19 )
          return result;
      }
      v25 = *v19;
      v26 = *(_QWORD *)a2;
      LODWORD(v72) = 0;
      v27 = *(unsigned int *)(a2 + 12);
      v73 = v25;
      v28 = *(unsigned int *)(a2 + 8);
      v29 = v28 + 1;
      v30 = (__m128i *)(v26 + 24 * v28);
      v31 = (const __m128i *)&v72;
      if ( v29 <= v27 )
        goto LABEL_19;
      v53 = a2 + 16;
      if ( v26 > (unsigned __int64)&v72 )
        break;
      v54 = a2;
      if ( v30 <= (__m128i *)&v72 )
        goto LABEL_39;
      sub_2237220(a2, v53, v29, 24);
      v31 = (const __m128i *)((char *)&v72 + *(_QWORD *)a2 - v26);
      v30 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
LABEL_19:
      v19 += 21;
      *v30 = _mm_loadu_si128(v31);
      result = v31[1].m128i_i64[0];
      v30[1].m128i_i64[0] = result;
      ++*(_DWORD *)(a2 + 8);
      if ( v21 == v19 )
        return result;
    }
    v54 = a2;
LABEL_39:
    sub_2237220(v54, v53, v29, 24);
    v30 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    v31 = (const __m128i *)&v72;
    goto LABEL_19;
  }
  return result;
}
