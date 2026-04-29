__int64 __fastcall sub_3D2C00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // cc
  void *v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbp
  _QWORD *v24; // r15
  unsigned __int64 v25; // r14
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  bool v31; // al
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 i; // r12
  _QWORD *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r13
  __int64 v41; // r12
  bool v42; // cl
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // edx
  int v49; // ebx
  __int64 v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rcx
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // [rsp+8h] [rbp-180h]
  __int128 v62; // [rsp+10h] [rbp-178h]
  __int64 v63; // [rsp+20h] [rbp-168h]
  int v64; // [rsp+2Ch] [rbp-15Ch]
  int v65; // [rsp+30h] [rbp-158h]
  __int64 v66; // [rsp+38h] [rbp-150h]
  __int64 v68; // [rsp+48h] [rbp-140h]
  __int64 v69; // [rsp+50h] [rbp-138h] BYREF
  __int128 v70; // [rsp+58h] [rbp-130h]
  _BYTE v71[16]; // [rsp+70h] [rbp-118h] BYREF
  unsigned __int64 v72; // [rsp+80h] [rbp-108h] BYREF
  __int64 v73; // [rsp+88h] [rbp-100h]
  int v74; // [rsp+A4h] [rbp-E4h]
  __int64 (__fastcall **v75)(); // [rsp+B0h] [rbp-D8h] BYREF
  int v76; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v77; // [rsp+BCh] [rbp-CCh]
  __int64 v78; // [rsp+C4h] [rbp-C4h]
  __int64 v79; // [rsp+CCh] [rbp-BCh]
  __m128i v80; // [rsp+D8h] [rbp-B0h]
  __int128 v81; // [rsp+E8h] [rbp-A0h]
  __int64 (__fastcall **v82)(); // [rsp+100h] [rbp-88h] BYREF
  _BYTE v83[12]; // [rsp+10Ch] [rbp-7Ch]
  _QWORD v84[2]; // [rsp+118h] [rbp-70h]
  __int128 v85; // [rsp+128h] [rbp-60h]
  __int128 v86; // [rsp+138h] [rbp-50h]
  unsigned __int64 v87; // [rsp+148h] [rbp-40h]

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 40);
  v87 = __readfsqword(0x28u);
  if ( !v4 )
  {
    *(_DWORD *)a2 = -1;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    v17 = *(_QWORD *)(a2 + 32) <= 0xDu;
    v18 = *(void **)(a2 + 16);
    *(_QWORD *)(v3 + 8) = v16;
    if ( v17 )
    {
      v52 = qvector_reserve(v3 + 16, v18, 14, 1);
      *(_QWORD *)(v3 + 16) = v52;
      v18 = (void *)v52;
    }
    *(_QWORD *)(v3 + 24) = 14;
    qmemcpy(v18, "Invalid model", 13);
    *(_BYTE *)(*(_QWORD *)(v3 + 16) + 13LL) = 0;
    return 0;
  }
  v78 = 0;
  v75 = off_4BCA30;
  v80 = (__m128i)-1LL;
  v77 = 3;
  v79 = 0x4900000000LL;
  v6.m128i_i64[0] = -1;
  if ( dword_4C1968 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    v10 = *(_DWORD *)(a3 + 16);
    if ( v10 == *(_DWORD *)(v4 + 72) )
    {
      v53 = qalloc_or_throw(72);
      v54 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)v53 = off_4BCA30;
      *(_DWORD *)(v53 + 8) = v54;
      v55 = *(_QWORD *)(a3 + 12);
      v56 = _mm_loadu_si128((const __m128i *)(a3 + 56));
      *(_QWORD *)(v53 + 20) = *(_QWORD *)(a3 + 20);
      v57 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v58 = *(_QWORD *)(a3 + 28);
      *(_QWORD *)(v53 + 12) = v55;
      *(__m128i *)(v53 + 40) = v57;
      *(_QWORD *)(v53 + 28) = v58;
      *(__m128i *)(v53 + 56) = v56;
      v59 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 56) = v53;
      if ( v59 )
        qfree(v59);
      if ( *(_QWORD *)(a3 + 48) != *(_QWORD *)(a3 + 56) )
      {
        sub_3CD110((__int64)&v82, a3, (_QWORD *)v4);
        sub_1AA520(
          *(unsigned __int64 *)&v83[4],
          *(_QWORD *)&v83[4] + v84[0],
          (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3CB060,
          (__int64)&v82);
        v60 = *(_QWORD *)&v83[4];
        *(_DWORD *)(a2 + 68) = HIDWORD(v85);
        if ( v60 )
        {
          v84[0] = 0;
          qfree(v60);
        }
      }
      return 1;
    }
    *(_QWORD *)&v62 = *(_QWORD *)(a3 + 56);
    if ( (_QWORD)v62 == -1 )
    {
      v81 = -1;
      if ( !(unsigned __int8)sub_3CF2F0(a1, (__int64)&v75, (_DWORD *)a3, NAN) )
        return 0;
      v62 = v81;
    }
    else
    {
      v11 = _mm_cvtsi32_si128(v10);
      v12 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12));
      v13 = *(_DWORD *)(a3 + 8);
      v78 = *(_QWORD *)(a3 + 20);
      v14 = *(_QWORD *)(a3 + 28);
      v77 = _mm_unpacklo_epi32(v12, v11).m128i_u64[0];
      v6 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v79 = v14;
      v15 = *(_QWORD *)(a3 + 64);
      v76 = v13;
      *((_QWORD *)&v62 + 1) = v15;
      v80 = v6;
    }
  }
  else
  {
    *((_QWORD *)&v62 + 1) = -1;
    *(_QWORD *)&v62 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)a3 + 128LL))(a3, NAN);
  }
  if ( *(_QWORD *)(v4 + 8) == (_QWORD)v62 )
  {
    v8 = qalloc_or_throw(72);
    *(_QWORD *)v8 = off_4BCA30;
    *(_QWORD *)(v8 + 20) = 0;
    *(_QWORD *)(v8 + 12) = 3;
    *(_QWORD *)(v8 + 28) = 0x4900000000LL;
    *(_OWORD *)(v8 + 40) = -1;
    *(_OWORD *)(v8 + 56) = -1;
    v9 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = v8;
    if ( v9 )
    {
      qfree(v9);
      v8 = *(_QWORD *)(a2 + 56);
    }
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v4 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 20) = 0;
      sub_3CECB0(a1, v8, v4, NAN);
      return 1;
    }
    return 0;
  }
  if ( !*(_QWORD *)(v4 + 24) || (v19 = v62, v20 = v4 + 16, !rangeset_t_find_range(v4 + 16, v62)) )
  {
    *(_DWORD *)v3 = -2;
    *(_QWORD *)(v3 + 8) = v62;
    sub_66DF0((__int64 *)(v3 + 16), (__int64)"Unable to find to microcode for %08llX", (_QWORD)v62);
    return 0;
  }
  v21 = *(_QWORD *)(v4 + 64);
  v22 = *(_DWORD *)(v21 + 64);
  if ( v22 > 0 )
  {
    v68 = v3;
    v65 = -1;
    v23 = 0x7FFFFFFFFFFFFFFFLL;
    v64 = -1;
    v24 = (_QWORD *)v4;
    v66 = v22;
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      if ( v22 <= (int)v25 )
        goto LABEL_40;
      if ( (unsigned int)v25 >= v22 )
        sub_3C8F80(*(double *)v6.m128i_i64, v20, v19);
      v27 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v25);
      if ( !v27 )
        goto LABEL_40;
      v28 = *(_QWORD *)(v27 + 32);
      if ( v28 == -1 )
        goto LABEL_40;
      if ( v28 == (_QWORD)v62 )
        break;
      v29 = v62 - v28;
      if ( v26 < 0 )
      {
        v26 = 0;
LABEL_64:
        v64 = v25;
        v23 = v29;
        v65 = 0;
        goto LABEL_40;
      }
      if ( !v26 )
      {
        v19 = -v23;
        if ( v23 > 0 )
          v19 = v23;
        v30 = v28 - v62;
        if ( v29 > 0 )
          v30 = v29;
        if ( v19 > v30 )
          goto LABEL_64;
        if ( v19 >= v30 )
        {
          v31 = v23 > v29;
          v19 = 0;
LABEL_39:
          if ( v31 )
          {
            v26 = v19;
            goto LABEL_64;
          }
        }
      }
LABEL_40:
      v32 = v24[15];
      if ( v25 < v32 )
      {
        v19 = 3 * v25;
        v33 = *(_QWORD *)(v24[14] + 24 * v25 + 8);
        if ( (int)v33 > 0 )
        {
          v61 = (unsigned int)(v33 - 1);
          for ( i = 0; ; ++i )
          {
            if ( v25 < v32 )
            {
              v35 = (_QWORD *)(24 * v25 + v24[14]);
              if ( i < v35[1] )
              {
                v20 = *(_QWORD *)(*v35 + 8 * i);
                if ( v20 )
                {
                  v19 = (__int64)&v75;
                  v81 = v62;
                  v36 = sub_3C9CF0(v20, (__int64)&v75, (__int64)v24, 0, 0);
                  if ( v26 < v37 )
                    goto LABEL_57;
                  if ( v26 > v37 )
                    goto LABEL_58;
                  if ( v26 )
                  {
                    if ( v23 < v36 )
                      goto LABEL_57;
                  }
                  else
                  {
                    v19 = -v23;
                    if ( v23 > 0 )
                      v19 = v23;
                    v38 = -v36;
                    if ( v36 > 0 )
                      v38 = v36;
                    if ( v19 > v38 || v19 >= v38 && v23 > v36 )
                    {
LABEL_57:
                      v23 = v36;
                      v65 = i;
                      v26 = v37;
                      v64 = v25;
                    }
                  }
                }
              }
            }
LABEL_58:
            if ( v61 == i )
              break;
            v32 = v24[15];
          }
        }
      }
      if ( ++v25 == v66 )
      {
        v3 = v68;
        v4 = (__int64)v24;
        goto LABEL_69;
      }
      v21 = v24[8];
      v22 = *(_DWORD *)(v21 + 64);
    }
    if ( v26 <= 1 )
    {
      v64 = v25;
      v26 = 2;
      v65 = 0;
      v23 = 8;
      goto LABEL_40;
    }
    if ( v26 != 2 )
      goto LABEL_40;
    v19 = 2;
    v29 = 8;
    v31 = v23 <= 7;
    goto LABEL_39;
  }
  v65 = -1;
  v26 = 0;
  v23 = 0x7FFFFFFFFFFFFFFFLL;
  v64 = -1;
LABEL_69:
  v39 = *(_QWORD *)(v4 + 136);
  if ( v39 + 24LL * *(_QWORD *)(v4 + 144) == v39 )
    goto LABEL_85;
  v63 = v3;
  v40 = v39 + 24LL * *(_QWORD *)(v4 + 144);
  v41 = *(_QWORD *)(v4 + 136);
  do
  {
    while ( 1 )
    {
      v45 = *(_DWORD *)(v41 + 16);
      v46 = *(_QWORD *)v41;
      v81 = v62;
      v47 = sub_3CAE20(v46, v45, (__int64)&v75, v4, 0, *(double *)v6.m128i_i64);
      if ( v26 < v48 )
        goto LABEL_83;
      if ( v26 <= v48 )
        break;
LABEL_81:
      v41 += 24;
      if ( v40 == v41 )
        goto LABEL_84;
    }
    v42 = v23 < v47;
    if ( v26 )
      goto LABEL_80;
    v43 = -v23;
    if ( v23 > 0 )
      v43 = v23;
    v44 = -v47;
    if ( v47 > 0 )
      v44 = v47;
    if ( v43 <= v44 )
    {
      if ( v43 < v44 )
        goto LABEL_81;
      v42 = v23 > v47;
LABEL_80:
      if ( v42 )
        goto LABEL_83;
      goto LABEL_81;
    }
LABEL_83:
    v49 = *(_DWORD *)(v41 + 8);
    v41 += 24;
    v23 = v47;
    v64 = v49;
    v65 = *(_DWORD *)(v41 - 12);
    v26 = v48;
  }
  while ( v40 != v41 );
LABEL_84:
  v3 = v63;
LABEL_85:
  v50 = qalloc_or_throw(72);
  *(_QWORD *)v50 = off_4BCA30;
  *(_QWORD *)(v50 + 20) = 0;
  *(_QWORD *)(v50 + 12) = 3;
  *(_QWORD *)(v50 + 28) = 0x4900000000LL;
  *(_OWORD *)(v50 + 40) = -1;
  *(_OWORD *)(v50 + 56) = -1;
  v51 = *(_QWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 56) = v50;
  if ( v51 )
    qfree(v51);
  if ( v64 < 0 || !(unsigned __int8)sub_3CF290(a1, (_DWORD *)v50, v4, v64, v65, NAN) )
    return 0;
  v82 = off_4BCA30;
  v85 = -1;
  *(_QWORD *)v83 = 3;
  *(_QWORD *)((char *)v84 + 4) = 0x4900000000LL;
  *(_DWORD *)&v83[8] = v64;
  LODWORD(v84[0]) = v65;
  v86 = v62;
  sub_3CD110((__int64)v71, (__int64)&v82, (_QWORD *)v4);
  sub_1AA520(
    v72,
    v72 + v73,
    (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3CB060,
    (__int64)v71);
  v69 = 0;
  v70 = 0;
  sub_3D14E0(&v69, (__int64)&v72);
  if ( !(unsigned __int8)sub_3CEB10(a1, v50, v4, v74, &v69, 0.0) )
  {
    sub_1AA7D0(&v69);
    if ( v72 )
    {
      v73 = 0;
      qfree(v72);
    }
    return 0;
  }
  *(_DWORD *)(v3 + 68) = v74;
  sub_1AA7D0(&v69);
  if ( v72 )
  {
    v73 = 0;
    qfree(v72);
  }
  return 1;
}
