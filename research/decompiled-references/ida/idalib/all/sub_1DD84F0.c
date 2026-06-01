__int64 __fastcall sub_1DD84F0(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        char a9)
{
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rsi
  const __m128i *v20; // r9
  int v21; // esi
  __m128i v22; // xmm0
  bool v23; // zf
  __int64 v24; // r9
  unsigned int v25; // r12d
  __int64 v26; // r8
  __int64 *v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // rbp
  unsigned __int8 v30; // r13
  __int64 *v31; // rdx
  int v32; // esi
  _BYTE *v34; // r15
  __int64 *v35; // rax
  __m128i v36; // xmm1
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // r12
  unsigned __int8 v41; // bp
  __int64 *v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // r14d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // edi
  __int64 v54; // rbx
  __int64 v55; // r12
  __m128i v56; // xmm5
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r9
  int v61; // r8d
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  __int64 v67; // rbx
  _BYTE *v68; // r12
  unsigned __int8 v69; // al
  unsigned int v70; // ebp
  unsigned __int8 v71; // r14
  unsigned __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v76; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v77; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v78; // [rsp+0h] [rbp-D8h]
  __m128i v79; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+20h] [rbp-B8h]
  __int64 v81; // [rsp+38h] [rbp-A0h] BYREF
  __m128i v82; // [rsp+40h] [rbp-98h] BYREF
  __int64 v83; // [rsp+50h] [rbp-88h]
  __m128i v84; // [rsp+60h] [rbp-78h] BYREF
  __int64 v85; // [rsp+70h] [rbp-68h]
  __m128i v86; // [rsp+80h] [rbp-58h] BYREF
  __int64 v87; // [rsp+90h] [rbp-48h]

  v81 = a3;
  v13 = sub_F22BD0(&v81, 0);
  if ( !v13
    || (*(_BYTE *)(v13 + 28) & 0x7F) != 0x44
    || (v14 = *(_QWORD *)(a1 + 32),
        v15 = *(unsigned int *)(v14 + 112),
        v16 = *(_DWORD *)(v13 + 64) & 0xFFFFF,
        v17 = v15 + *(_DWORD *)(v14 + 8),
        (unsigned int)v16 >= v17) )
  {
    v34 = sub_F22F10(&v81);
    if ( !v34 )
    {
      v84.m128i_i64[0] = v81;
      v46 = sub_F22F50(v84.m128i_i64);
      if ( v46 )
      {
        v76 = v46;
        v86.m128i_i64[0] = *(_QWORD *)(v46 + 16);
        v47 = sub_F22BD0(v86.m128i_i64, 0);
        v51 = sub_1DD8310(a1, a4, v47, v48, v49, v50, a7, a8);
        if ( !v51 )
          return 0;
        v52 = *(_QWORD *)a1;
        v53 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
        v54 = *(_QWORD *)(v76 + 8);
        if ( v53 || a2->m128i_i64[1] != (v54 & 0xFFFFFFFFFFFFFFF8LL) || v47 != v51 )
        {
          v55 = *(_QWORD *)(v52 + 248);
          sub_F22AA0((unsigned __int64 *)&v86, v51);
          return sub_A80CA0(v55, a2->m128i_i64[1], (v54 >> 2) & 1, v86.m128i_i64[0]);
        }
      }
      else
      {
        v58 = (_QWORD *)sub_F22F70(&v84);
        if ( !v58 )
        {
          v62 = sub_F22BD0(v84.m128i_i64, 0);
          if ( !v62 )
          {
            v68 = sub_F22F10(v84.m128i_i64);
            v69 = sub_F227A0((__int64)v68);
            v70 = *(_DWORD *)v68;
            v71 = v69;
            v72 = sub_F22790((__int64)v68);
            sub_F22160((__int64)&v86, (__int64)v68);
            return sub_A80A10(*(_QWORD *)(*(_QWORD *)a1 + 248LL), (__int64)&v86, v72, (v70 >> 3) & 0x3FFF, v71);
          }
          v66 = sub_1DD8310(a1, a4, v62, v63, v64, v65, a7, a8);
          if ( v66 )
          {
            v67 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
            sub_F22AA0((unsigned __int64 *)&v86, v66);
            return sub_A80CA0(v67, a2->m128i_i64[1], 0, v86.m128i_i64[0]);
          }
          return 0;
        }
        v59 = a2->m128i_i64[1];
        v60 = a5;
        v61 = 0;
        if ( v59 )
          v60 = 0;
        else
          v61 = a6;
        if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL)
          || v59 != (*v58 & 0xFFFFFFFFFFFFFFF8LL)
          || (v60 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          return sub_1DB88E0(
                   (__int64 **)a1,
                   a2,
                   a4,
                   v58[1],
                   a4,
                   v60,
                   *(double *)a7.m128_u64,
                   *(double *)a8.m128_u64,
                   v61,
                   a9);
        }
      }
      return v84.m128i_i64[0];
    }
    if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
    {
      sub_F22160((__int64)&v84, (__int64)v34);
      v35 = *(__int64 **)a1;
      v36 = _mm_load_si128(&v84);
      v87 = v85;
      v86 = v36;
      LODWORD(v35) = *((_DWORD *)v35 + 3158) - 1;
      v86 = _mm_loadu_si128((const __m128i *)(v36.m128i_i64[1] + 24LL * (unsigned int)v35));
      v87 = *(_QWORD *)(v36.m128i_i64[1] + 24LL * (unsigned int)v35 + 16);
      if ( sub_F1D570((__int64)&v86) )
      {
        sub_F1DF30((__int64)&v79, v86.m128i_i64, v37, v38);
        v86 = _mm_loadu_si128(&v79);
        v87 = v80;
      }
      sub_F22A90(&v86, v86.m128i_i64[1]);
      v39 = v86.m128i_i64[0];
      v40 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
      v41 = sub_F227A0((__int64)v34);
      v42 = *(__int64 **)a1;
      v43 = *(_DWORD *)v34;
      v44 = *((_DWORD *)v42 + 3158);
      if ( v44 )
        v44 = v84.m128i_i32[1] + 1 - v44;
      v45 = sub_F22790((__int64)v34);
      return sub_A81190(v40, v39, v45, (v43 >> 3) & 0x3FFF, v44, v41);
    }
    return v81;
  }
  if ( (unsigned int)v16 < (unsigned int)v15
    || (v18 = *(unsigned __int16 *)(v13 + 66),
        LOWORD(v18) = (unsigned __int16)v18 >> 4,
        v19 = *(_QWORD *)v14 + 24LL * (v17 - 1 - (unsigned int)v16),
        *(_QWORD *)(v19 + 16) <= (unsigned __int64)(unsigned __int16)v18)
    || (v20 = (const __m128i *)(*(_QWORD *)(v19 + 8) + 24LL * (unsigned __int16)v18),
        (v21 = v20->m128i_i32[0] & 0x7FFFFFFF) == 0) )
  {
    v23 = *(_BYTE *)(a1 + 58) == 0;
    *(_BYTE *)(a1 + 57) = 1;
    if ( !v23 )
      return 0;
    return v81;
  }
  v22 = _mm_loadu_si128(v20);
  v23 = *(_BYTE *)(v14 + 116) == 1;
  v82 = v22;
  v24 = v20[1].m128i_i64[0];
  v83 = v24;
  if ( v23 )
  {
    if ( v21 == 9 )
    {
      if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
      {
        sub_1DB7720(&v84, *(_QWORD *)a1, v16, v18, v15, v24, v22, v82.m128i_i64[0]);
        v56 = _mm_load_si128(&v84);
        v57 = v85;
      }
      else
      {
        v86 = _mm_loadu_si128((const __m128i *)v82.m128i_i64[1]);
        v87 = *(_QWORD *)(v82.m128i_i64[1] + 16);
        if ( sub_F1D570((__int64)&v86) )
        {
          sub_F1DF30((__int64)&v79, v86.m128i_i64, v73, v74);
          v86 = _mm_loadu_si128(&v79);
          v87 = v80;
        }
        v57 = v87;
        v84 = _mm_load_si128(&v86);
        v56 = v84;
        v85 = v87;
      }
    }
    else
    {
      v85 = v24;
      v56 = v22;
      v57 = v24;
      v84 = v22;
    }
    v82 = v56;
    v83 = v57;
    sub_F22A90(&v86, v56.m128i_i64[1]);
    return v86.m128i_i64[0];
  }
  else
  {
    v25 = 0;
    v26 = (unsigned int)(*(_DWORD *)(v14 + 8) + v15 - 1 - v16);
    v27 = (__int64 *)(*(_QWORD *)v14 + 24 * v26);
    v28 = *v27 >> 2;
    v29 = *v27 & 0xFFFFFFFFFFFFFFF8LL;
    v30 = v28 & 1;
    if ( (*(_BYTE *)(v13 + 80) & 2) != 0 )
    {
      v31 = *(__int64 **)a1;
      v32 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
      if ( !v32 )
        return sub_A80A10(v31[31], (__int64)&v82, v29, (unsigned __int16)v18, v30);
      v77 = v13;
      v25 = v82.m128i_i32[1] + 1 - v32;
      sub_1DB7720(&v79, (__int64)v31, (__int64)v31, v18, v26, v28, v22, v82.m128i_i64[0]);
      v82 = _mm_loadu_si128(&v79);
      v83 = v80;
      v13 = v77;
    }
    v78 = v13;
    sub_F22A90(&v86, v82.m128i_i64[1]);
    return sub_A81190(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v86.m128i_i64[0], v29, *(_WORD *)(v78 + 66) >> 4, v25, v30);
  }
}
