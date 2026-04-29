__int64 *__fastcall sub_196930(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // rax
  __m128i si128; // xmm1
  __m128i *v14; // rax
  __int64 v15; // rsi
  bool v16; // zf
  const char *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r15
  char tinfo_property; // al
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 *v24; // rax
  __int64 *v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rdi
  __m128i v29; // xmm0
  _QWORD *v30; // rsi
  __int64 *v31; // rax
  int v32; // eax
  __int64 *v33; // r14
  __int64 *v34; // rdi
  const char *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 *v39; // rax
  unsigned __int64 v40; // r15
  __int64 v41; // rsi
  __int64 *v42; // rsi
  int v43; // eax
  __int64 v44; // r15
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // rax
  int v48; // edx
  __int64 *v49; // rcx
  __int64 *v50; // r14
  char v51; // al
  int v52; // edx
  __int64 *v53; // rax
  __int64 *v54; // r14
  __int64 v55; // r13
  __int64 v56; // rsi
  __m128i v57; // xmm0
  int tinfo_size; // eax
  __int64 v59; // rdx
  __int64 *v60; // rax
  unsigned int v61; // esi
  __int64 v62; // rcx
  __int64 v63; // r14
  __int64 *v64; // r14
  _QWORD *v65; // rax
  __int64 v66; // r15
  __int64 v67; // [rsp-8h] [rbp-168h]
  int v68; // [rsp+0h] [rbp-160h]
  int v69; // [rsp+8h] [rbp-158h]
  __int64 v70; // [rsp+8h] [rbp-158h]
  __m128i v71; // [rsp+10h] [rbp-150h] BYREF
  __int64 v72; // [rsp+20h] [rbp-140h]
  unsigned int v73; // [rsp+28h] [rbp-138h]
  int v74; // [rsp+2Ch] [rbp-134h]
  __int64 v75; // [rsp+30h] [rbp-130h]
  unsigned __int8 *v76; // [rsp+38h] [rbp-128h]
  __m128i *v77; // [rsp+40h] [rbp-120h]
  __int64 *v78; // [rsp+48h] [rbp-118h]
  int v79; // [rsp+5Ch] [rbp-104h] BYREF
  _QWORD v80[4]; // [rsp+60h] [rbp-100h] BYREF
  _BYTE v81[84]; // [rsp+80h] [rbp-E0h] BYREF
  int v82; // [rsp+D4h] [rbp-8Ch]
  __int64 v83; // [rsp+D8h] [rbp-88h]
  char v84[56]; // [rsp+E8h] [rbp-78h] BYREF
  char v85; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 v86; // [rsp+128h] [rbp-38h]

  v74 = a4;
  v12 = *(_QWORD *)(a1 + 480);
  v72 = a2;
  v73 = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v86 = __readfsqword(0x28u);
  v75 = v12;
  v14 = (__m128i *)v81;
  v77 = (__m128i *)&v85;
  do
  {
    v14->m128i_i32[1] = -1;
    v14 += 5;
    v14[-5].m128i_i16[0] = 0;
    v14[-5].m128i_i16[1] = 0;
    v14[-5].m128i_i64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128i_i32[2] = 0;
    v14[-1].m128i_i64[0] = 0;
    v14[-1].m128i_i32[2] = 0;
  }
  while ( v77 != v14 );
  v15 = *(_QWORD *)(a1 + 64);
  v78 = a3;
  sub_1919A0((__int64)v81, v15, a3, v74, a10);
  v16 = *(_QWORD *)(a9 + 8) == 0;
  v81[80] = 11;
  v17 = s1;
  if ( !v16 )
    v17 = *(const char **)a9;
  v83 = qstrdup(v17);
  copy_tinfo_t(v84, v75 + 232);
  v18 = *a8;
  v19 = *(_QWORD *)(a1 + 64);
  v82 = *(_DWORD *)(*(_QWORD *)(v75 + 112) + 84LL);
  tinfo_property = get_tinfo_property(v18, 2);
  v21 = sub_3308F0(
          v19,
          a5,
          (unsigned int)"va_arg",
          (_DWORD)a8,
          2,
          (unsigned int)v81,
          (tinfo_property & 0x3F) != 1,
          v67,
          v68,
          v69,
          v71.m128i_i32[0],
          v71.m128i_i32[2]);
  v22 = *(_QWORD *)(v21 + 72);
  v23 = v21;
  v76 = (unsigned __int8 *)v80;
  v24 = v78;
  *(_DWORD *)(v22 + 280) |= 4u;
  *(_DWORD *)(v22 + 284) = 23;
  if ( *((_BYTE *)v24 + 8) == 5 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v75 + 248), 0);
    if ( *((_BYTE *)v78 + 8) != 5 )
      sub_190F20(0.0);
    v59 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1440LL) + *v78;
    v80[1] = tinfo_size;
    v80[0] = v59;
    v76 = (unsigned __int8 *)v80;
    sub_311E30(v22 + 152, v80);
  }
  memset(v80, 0, 24);
  v80[0] = qvector_reserve(v76, 0, 1, 16);
  *(__m128i *)(v80[0] + 16LL * v80[1]) = _mm_load_si128((const __m128i *)&xmmword_407240);
  v25 = (__int64 *)v80[0];
  memset(v80, 0, 24);
  v26 = (__m128i)_mm_loadh_ps((const double *)&v80[2]);
  v27 = *(_QWORD *)(v22 + 216);
  v78 = v25;
  if ( v27 )
  {
    *(_QWORD *)(v22 + 224) = 0;
    v71 = v26;
    qfree(v27);
    v28 = v80[0];
    v29 = _mm_load_si128(&v71);
    *(_QWORD *)(v22 + 216) = v78;
    *(__m128i *)(v22 + 224) = v29;
    if ( v28 )
    {
      v80[1] = 0;
      qfree(v28);
    }
  }
  else
  {
    *(_QWORD *)(v22 + 216) = v25;
    *(__m128i *)(v22 + 224) = v26;
  }
  if ( (get_tinfo_property(*a8, 2) & 0xF) != 9 && !sub_118880(*(_DWORD *)(v23 + 68)) )
    *(_BYTE *)(v23 + 65) |= 2u;
  if ( (get_tinfo_property(*a8, 2) & 0x3F) == 1 )
  {
    v30 = (_QWORD *)v23;
    v31 = sub_9EF60(a1, (_QWORD *)v23, v72);
LABEL_14:
    v78 = v31;
    goto LABEL_15;
  }
  v39 = (__int64 *)j__qalloc_or_throw(80);
  v78 = v39;
  v40 = (unsigned __int64)(v39 + 4);
  v71.m128i_i64[0] = (__int64)(v39 + 8);
  v41 = *(_QWORD *)(v23 + 24);
  v39[4] = 0xFFFFFFFF00000000LL;
  v39[5] = 0;
  v39[6] = 0xFFFFFFFF00000000LL;
  v39[7] = 0;
  v39[8] = 0xFFFFFFFF00000000LL;
  v39[9] = 0;
  sub_32B920(v39, v41);
  v42 = v78;
  *((_BYTE *)v78 + 32) = 4;
  v42[5] = v23;
  v43 = *(_DWORD *)(v23 + 68);
  *((_DWORD *)v42 + 9) = v43;
  *((_DWORD *)v42 + 17) = v43;
  if ( (*(_BYTE *)(v23 + 65) & 2) != 0 )
  {
    *((_BYTE *)v42 + 33) |= 2u;
    *((_BYTE *)v42 + 65) |= 2u;
  }
  if ( a7 >= 0 )
  {
    v44 = *(_QWORD *)(a1 + 64);
    if ( v74 == -1 )
    {
      v64 = v78;
      *((_BYTE *)v78 + 64) = 5;
      v65 = (_QWORD *)j__qalloc_or_throw(16);
      *v65 = v44;
      v65[1] = a7;
      v64[9] = (__int64)v65;
      goto LABEL_29;
    }
    v80[0] = 0;
    v80[1] = 0;
    cleanup_argloc(v76);
    LODWORD(v80[0]) = 1;
    v80[1] = a7;
    v74 = sub_1EBE40(v44 + 432, v76, 1, 0xFFFFFFFFLL);
    cleanup_argloc(v76);
    if ( v74 == -1 )
    {
      if ( !under_debugger )
        sub_37E160(51595);
    }
    else
    {
      v70 = *(_QWORD *)(v44 + 432) + 104LL * v74;
      v45 = sub_1BF2F0(
              v70,
              *(_QWORD *)(v44 + 1496),
              a7,
              *(unsigned int *)(v23 + 68),
              *(unsigned int *)(v70 + 88),
              &v79,
              v76);
      if ( !LODWORD(v80[0]) )
      {
        if ( *(_DWORD *)(v23 + 68) != v45 )
        {
          sub_1EFD30(v44, *(_QWORD *)(v23 + 24), v70);
          *(_DWORD *)(v70 + 24) |= 0x400u;
        }
        v46 = v79;
        *((_BYTE *)v78 + 64) = 9;
        v47 = j__qalloc_or_throw(24);
        v48 = v74;
        v49 = v78;
        *(_QWORD *)v47 = v44;
        *(_QWORD *)(v47 + 8) = v46;
        *(_DWORD *)(v47 + 16) = v48;
        v49[9] = v47;
        goto LABEL_29;
      }
      if ( !under_debugger )
        sub_37E160(52450);
    }
LABEL_51:
    BUG();
  }
  if ( v73 == -1 )
  {
    if ( !under_debugger )
      sub_37E160(51385);
    goto LABEL_51;
  }
  v60 = v78;
  v61 = v73;
  v62 = v75;
  *((_BYTE *)v78 + 64) = 1;
  *((_DWORD *)v60 + 18) = v61;
  v63 = *(_QWORD *)(v62 + 112);
  if ( (unsigned __int8)sub_118AD0(v63, v61) )
  {
    sub_1231B0(v40, v63, v78[3], 1);
    *((_DWORD *)v78 + 17) = 1;
  }
  v73 = -1;
LABEL_29:
  v50 = v78;
  *(_DWORD *)v78 = 4;
  v51 = get_tinfo_property(*a8, 2);
  v52 = *((_DWORD *)v50 + 1);
  if ( (v51 & 0xF) == 9 )
  {
    *(_DWORD *)v50 = 67;
    v52 |= 0x10u;
  }
  v53 = v78;
  *((_DWORD *)v78 + 1) = v52 | 0x60000;
  v30 = v53;
  v78 = sub_9EF60(a1, v53, v72);
  v54 = v78;
  if ( v73 != -1 )
  {
    v55 = j__qalloc_or_throw(80);
    v56 = v54[3];
    *(_QWORD *)(v55 + 40) = 0;
    *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v55 + 56) = 0;
    *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v55 + 72) = 0;
    sub_32B920(v55, v56);
    *(_DWORD *)v55 = 4;
    sub_120F80(v55 + 32, (unsigned __int8 *)v71.m128i_i64[0]);
    v57 = _mm_cvtsi32_si128(*(_DWORD *)(v55 + 36));
    LODWORD(v80[0]) = 1;
    *(_QWORD *)((char *)v80 + 4) = _mm_unpacklo_epi32(v57, _mm_cvtsi32_si128(v73)).m128i_u64[0];
    sub_120F80(v55 + 64, v76);
    sub_118BA0((__int64)v76);
    if ( *(_BYTE *)(v55 + 64) == 1 )
    {
      v66 = *(_QWORD *)(v75 + 112);
      if ( (unsigned __int8)sub_118AD0(v66, *(_DWORD *)(v55 + 72)) )
      {
        sub_1231B0(v55 + 32, v66, *(_QWORD *)(v55 + 24), 1);
        *(_DWORD *)(v55 + 68) = 1;
      }
    }
    v30 = (_QWORD *)v55;
    v31 = sub_9EF60(a1, (_QWORD *)v55, (__int64)v78);
    goto LABEL_14;
  }
LABEL_15:
  v32 = *(_DWORD *)(a1 + 24);
  v33 = v78;
  BYTE1(v32) &= ~2u;
  v34 = v78;
  LOBYTE(v32) = v32 | 0x80;
  *(_DWORD *)(a1 + 24) = v32;
  v35 = (const char *)sub_1B1800(v34, v30);
  sub_9E320(a1, (__int64)"added va_arg: %s", v35);
  v36 = (__int64)v77;
  do
  {
    v36 -= 80;
    cleanup_argloc(v36 + 56);
    v37 = *(_QWORD *)(v36 + 32);
    if ( v37 )
    {
      *(_QWORD *)(v36 + 40) = 0;
      qfree(v37);
    }
    clear_tinfo_t(v36 + 24);
    sub_118BA0(v36);
  }
  while ( (_BYTE *)v36 != v81 );
  return v33;
}
