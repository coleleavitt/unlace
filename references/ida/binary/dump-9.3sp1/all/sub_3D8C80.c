__int64 __fastcall sub_3D8C80(__int64 a1, __int64 (__fastcall ***a2)(), __int64 a3)
{
  __int64 (__fastcall ***v3)(); // r12
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // cc
  __int64 (__fastcall **v21)(); // rsi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbp
  _QWORD *v27; // r15
  unsigned __int64 v28; // r14
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // al
  unsigned __int64 v34; // rax
  unsigned __int64 i; // r12
  _QWORD *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // r15
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // [rsp+8h] [rbp-180h]
  __int128 v60; // [rsp+10h] [rbp-178h]
  __int64 (__fastcall ***v61)(); // [rsp+20h] [rbp-168h]
  int v62; // [rsp+2Ch] [rbp-15Ch]
  int v63; // [rsp+30h] [rbp-158h]
  __int64 v64; // [rsp+38h] [rbp-150h]
  __int64 (__fastcall ***v66)(); // [rsp+48h] [rbp-140h]
  __int64 v67; // [rsp+50h] [rbp-138h] BYREF
  __int128 v68; // [rsp+58h] [rbp-130h]
  _BYTE v69[16]; // [rsp+70h] [rbp-118h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-108h] BYREF
  __int64 v71; // [rsp+88h] [rbp-100h]
  int v72; // [rsp+A4h] [rbp-E4h]
  __int64 (__fastcall **v73)(); // [rsp+B0h] [rbp-D8h] BYREF
  int v74; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v75; // [rsp+BCh] [rbp-CCh]
  __int64 v76; // [rsp+C4h] [rbp-C4h]
  __int64 v77; // [rsp+CCh] [rbp-BCh]
  __m128i v78; // [rsp+D8h] [rbp-B0h]
  __int128 v79; // [rsp+E8h] [rbp-A0h]
  __int64 (__fastcall **v80)(); // [rsp+100h] [rbp-88h] BYREF
  _BYTE v81[12]; // [rsp+10Ch] [rbp-7Ch]
  _QWORD v82[2]; // [rsp+118h] [rbp-70h]
  __int128 v83; // [rsp+128h] [rbp-60h]
  __int128 v84; // [rsp+138h] [rbp-50h]
  unsigned __int64 v85; // [rsp+148h] [rbp-40h]

  v3 = a2;
  v4 = (__int64)a2[5];
  v85 = __readfsqword(0x28u);
  if ( !v4 )
  {
    *(_DWORD *)a2 = -1;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    v20 = (unsigned __int64)a2[4] <= 0xD;
    v21 = a2[2];
    v3[1] = (__int64 (__fastcall **)())v19;
    if ( v20 )
    {
      v50 = qvector_reserve((__int64)(v3 + 2), (__int64)v21, 14, 1);
      v3[2] = (__int64 (__fastcall **)())v50;
      v21 = (__int64 (__fastcall **)())v50;
    }
    v3[3] = (__int64 (__fastcall **)())(byte_9 + 5);
    qmemcpy(v21, "Invalid model", 13);
    *((_BYTE *)v3[2] + 13) = 0;
    return 0;
  }
  v76 = 0;
  v73 = off_4E90B0;
  v78 = (__m128i)-1LL;
  v75 = 3;
  v77 = 0x4900000000LL;
  v8.m128i_i64[0] = -1;
  if ( dword_4EEA08 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    v14 = *(_DWORD *)(a3 + 16);
    if ( v14 == *(_DWORD *)(v4 + 72) )
    {
      v51 = qalloc_or_throw(72, (__int64)a2, v6, v7);
      v52 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)v51 = off_4E90B0;
      *(_DWORD *)(v51 + 8) = v52;
      v53 = *(_QWORD *)(a3 + 12);
      v54 = _mm_loadu_si128((const __m128i *)(a3 + 56));
      *(_QWORD *)(v51 + 20) = *(_QWORD *)(a3 + 20);
      v55 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v56 = *(_QWORD *)(a3 + 28);
      *(_QWORD *)(v51 + 12) = v53;
      *(__m128i *)(v51 + 40) = v55;
      *(_QWORD *)(v51 + 28) = v56;
      *(__m128i *)(v51 + 56) = v54;
      v57 = (__int64)a2[7];
      a2[7] = (__int64 (__fastcall **)())v51;
      if ( v57 )
        qfree(v57);
      if ( *(_QWORD *)(a3 + 48) != *(_QWORD *)(a3 + 56) )
      {
        sub_3D3190((__int64)&v80, a3, (_QWORD *)v4);
        sub_1AF220(
          *(unsigned __int64 *)&v81[4],
          *(_QWORD *)&v81[4] + v82[0],
          (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3D10E0,
          (__int64)&v80);
        v58 = *(_QWORD *)&v81[4];
        *((_DWORD *)a2 + 17) = HIDWORD(v83);
        if ( v58 )
        {
          v82[0] = 0;
          qfree(v58);
        }
      }
      return 1;
    }
    v10 = *(_QWORD *)(a3 + 56);
    *(_QWORD *)&v60 = v10;
    if ( v10 == -1 )
    {
      v79 = -1;
      a2 = &v73;
      if ( !(unsigned __int8)sub_3D5370(a1, &v73, (_DWORD *)a3, NAN) )
        return 0;
      v60 = v79;
    }
    else
    {
      v15 = _mm_cvtsi32_si128(v14);
      v16 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12));
      v9 = *(unsigned int *)(a3 + 8);
      v76 = *(_QWORD *)(a3 + 20);
      v17 = *(_QWORD *)(a3 + 28);
      v75 = _mm_unpacklo_epi32(v16, v15).m128i_u64[0];
      v8 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v77 = v17;
      v18 = *(_QWORD *)(a3 + 64);
      v74 = v9;
      *((_QWORD *)&v60 + 1) = v18;
      v78 = v8;
    }
  }
  else
  {
    *((_QWORD *)&v60 + 1) = -1;
    *(_QWORD *)&v60 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)a3 + 128LL))(a3, NAN);
  }
  if ( *(_QWORD *)(v4 + 8) == (_QWORD)v60 )
  {
    v12 = qalloc_or_throw(72, (__int64)a2, v9, v10);
    *(_QWORD *)v12 = off_4E90B0;
    *(_QWORD *)(v12 + 20) = 0;
    *(_QWORD *)(v12 + 12) = 3;
    *(_QWORD *)(v12 + 28) = 0x4900000000LL;
    *(_OWORD *)(v12 + 40) = -1;
    *(_OWORD *)(v12 + 56) = -1;
    v13 = (__int64)v3[7];
    v3[7] = (__int64 (__fastcall **)())v12;
    if ( v13 )
    {
      qfree(v13);
      v12 = (__int64)v3[7];
    }
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v4 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 20) = 0;
      sub_3D4D30(a1, v12, v4, NAN);
      return 1;
    }
    return 0;
  }
  if ( !*(_QWORD *)(v4 + 24) || (v22 = v60, !rangeset_t_find_range()) )
  {
    *(_DWORD *)v3 = -2;
    v3[1] = (__int64 (__fastcall **)())v60;
    sub_6B870((__int64 *)v3 + 2);
    return 0;
  }
  v24 = *(_QWORD *)(v4 + 64);
  v25 = *(_DWORD *)(v24 + 64);
  if ( v25 > 0 )
  {
    v66 = v3;
    v63 = -1;
    v26 = 0x7FFFFFFFFFFFFFFFLL;
    v62 = -1;
    v23 = 0;
    v27 = (_QWORD *)v4;
    v64 = v25;
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v25 <= (int)v28 )
        goto LABEL_40;
      if ( (unsigned int)v28 >= v25 )
        sub_3CF000(*(double *)v8.m128i_i64);
      v30 = *(_QWORD *)(*(_QWORD *)(v24 + 528) + 8 * v28);
      if ( !v30 )
        goto LABEL_40;
      v31 = *(_QWORD *)(v30 + 32);
      if ( v31 == -1 )
        goto LABEL_40;
      v23 = v60;
      if ( v31 == (_QWORD)v60 )
        break;
      v24 = v60 - v31;
      if ( v29 < 0 )
      {
        v29 = 0;
LABEL_64:
        v62 = v28;
        v26 = v24;
        v63 = 0;
        goto LABEL_40;
      }
      if ( !v29 )
      {
        v22 = -v26;
        if ( v26 > 0 )
          v22 = v26;
        v32 = v31 - v60;
        if ( v24 > 0 )
          v32 = v24;
        if ( v22 > v32 )
          goto LABEL_64;
        if ( v22 >= v32 )
        {
          v33 = v26 > v24;
          v22 = 0;
LABEL_39:
          if ( v33 )
          {
            v29 = v22;
            goto LABEL_64;
          }
        }
      }
LABEL_40:
      v34 = v27[15];
      if ( v28 < v34 )
      {
        v22 = 3 * v28;
        v24 = *(_QWORD *)(v27[14] + 24 * v28 + 8);
        if ( (int)v24 > 0 )
        {
          v59 = (unsigned int)(v24 - 1);
          v23 = 24 * v28;
          for ( i = 0; ; ++i )
          {
            if ( v28 < v34 )
            {
              v36 = (_QWORD *)(24 * v28 + v27[14]);
              if ( i < v36[1] )
              {
                v37 = *(_QWORD *)(*v36 + 8 * i);
                if ( v37 )
                {
                  v22 = (__int64)&v73;
                  v79 = v60;
                  v38 = sub_3CFD70(v37, (__int64)&v73, (__int64)v27, 0, 0);
                  if ( v29 < v39 )
                    goto LABEL_57;
                  if ( v29 > v39 )
                    goto LABEL_58;
                  if ( v29 )
                  {
                    if ( v26 < v38 )
                      goto LABEL_57;
                  }
                  else
                  {
                    v22 = -v26;
                    if ( v26 > 0 )
                      v22 = v26;
                    v23 = -v38;
                    if ( v38 > 0 )
                      v23 = v38;
                    if ( v22 > v23 || v22 >= v23 && v26 > v38 )
                    {
LABEL_57:
                      v26 = v38;
                      v63 = i;
                      v29 = v39;
                      v62 = v28;
                    }
                  }
                }
              }
            }
LABEL_58:
            v24 = i + 1;
            if ( v59 == i )
              break;
            v34 = v27[15];
          }
        }
      }
      if ( ++v28 == v64 )
      {
        v3 = v66;
        v4 = (__int64)v27;
        goto LABEL_69;
      }
      v24 = v27[8];
      v25 = *(_DWORD *)(v24 + 64);
    }
    if ( v29 <= 1 )
    {
      v24 = 8;
      v62 = v28;
      v29 = 2;
      v63 = 0;
      v26 = 8;
      goto LABEL_40;
    }
    if ( v29 != 2 )
      goto LABEL_40;
    v22 = 2;
    v24 = 8;
    v33 = v26 <= 7;
    goto LABEL_39;
  }
  v63 = -1;
  v29 = 0;
  v26 = 0x7FFFFFFFFFFFFFFFLL;
  v62 = -1;
LABEL_69:
  v40 = *(_QWORD *)(v4 + 136);
  if ( v40 + 24LL * *(_QWORD *)(v4 + 144) == v40 )
    goto LABEL_85;
  v61 = v3;
  v41 = v40 + 24LL * *(_QWORD *)(v4 + 144);
  v42 = *(_QWORD *)(v4 + 136);
  do
  {
    while ( 1 )
    {
      v22 = *(unsigned int *)(v42 + 16);
      v43 = *(_QWORD *)v42;
      v79 = v60;
      v44 = sub_3D0EA0(v43, v22, (__int64)&v73, v4, 0, *(double *)v8.m128i_i64);
      if ( v29 < (int)v24 )
        goto LABEL_83;
      if ( v29 <= (int)v24 )
        break;
LABEL_81:
      v42 += 24;
      if ( v41 == v42 )
        goto LABEL_84;
    }
    LOBYTE(v23) = v26 < v44;
    if ( v29 )
      goto LABEL_80;
    v22 = -v26;
    if ( v26 > 0 )
      v22 = v26;
    v23 = -v44;
    if ( v44 > 0 )
      v23 = v44;
    if ( v22 <= v23 )
    {
      if ( v22 < v23 )
        goto LABEL_81;
      LOBYTE(v23) = v26 > v44;
LABEL_80:
      if ( (_BYTE)v23 )
        goto LABEL_83;
      goto LABEL_81;
    }
LABEL_83:
    v45 = *(_DWORD *)(v42 + 8);
    v42 += 24;
    v26 = v44;
    v62 = v45;
    v63 = *(_DWORD *)(v42 - 12);
    v29 = v24;
  }
  while ( v41 != v42 );
LABEL_84:
  v3 = v61;
LABEL_85:
  v46 = qalloc_or_throw(72, v22, v24, v23);
  *(_QWORD *)v46 = off_4E90B0;
  *(_QWORD *)(v46 + 20) = 0;
  *(_QWORD *)(v46 + 12) = 3;
  *(_QWORD *)(v46 + 28) = 0x4900000000LL;
  *(_OWORD *)(v46 + 40) = -1;
  *(_OWORD *)(v46 + 56) = -1;
  v47 = (__int64)v3[7];
  v3[7] = (__int64 (__fastcall **)())v46;
  if ( v47 )
    qfree(v47);
  if ( v62 < 0 || !(unsigned __int8)sub_3D5310(a1, (_DWORD *)v46, v4, v62, v63, NAN) )
    return 0;
  v80 = off_4E90B0;
  v83 = -1;
  *(_QWORD *)v81 = 3;
  *(_QWORD *)((char *)v82 + 4) = 0x4900000000LL;
  *(_DWORD *)&v81[8] = v62;
  LODWORD(v82[0]) = v63;
  v84 = v60;
  sub_3D3190((__int64)v69, (__int64)&v80, (_QWORD *)v4);
  sub_1AF220(
    v70,
    v70 + v71,
    (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3D10E0,
    (__int64)v69);
  v67 = 0;
  v68 = 0;
  sub_3D7560(&v67, (__int64)&v70, v48, v49);
  if ( !(unsigned __int8)sub_3D4B90(a1, v46, v4, v72, &v67, 0.0) )
  {
    sub_1AF4D0(&v67);
    if ( v70 )
    {
      v71 = 0;
      qfree(v70);
    }
    return 0;
  }
  *((_DWORD *)v3 + 17) = v72;
  sub_1AF4D0(&v67);
  if ( v70 )
  {
    v71 = 0;
    qfree(v70);
  }
  return 1;
}
