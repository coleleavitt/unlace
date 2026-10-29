__int64 __fastcall sub_14CA090(const __m128i *a1, _DWORD *a2, _QWORD *a3, __int64 a4, _BYTE *a5, __m128i a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r13d
  __int32 v17; // eax
  _BYTE *v18; // r15
  const __m128i *v19; // r12
  unsigned __int64 v20; // rdx
  __m128i *v21; // rax
  __m128 v22; // xmm1
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  const __m128i *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  char *v28; // rdx
  __m128i *v29; // rax
  char *v30; // rsi
  __int64 v31; // rdi
  __int8 v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rax
  signed __int64 v48; // r12
  int v51; // [rsp+18h] [rbp-C80h]
  __int64 v52; // [rsp+20h] [rbp-C78h]
  __int8 v53; // [rsp+28h] [rbp-C70h]
  _DWORD v54[2]; // [rsp+30h] [rbp-C68h] BYREF
  void *v55; // [rsp+38h] [rbp-C60h]
  int v56; // [rsp+40h] [rbp-C58h]
  void *v57; // [rsp+50h] [rbp-C48h] BYREF
  __int64 v58; // [rsp+58h] [rbp-C40h]
  _BYTE v59[96]; // [rsp+60h] [rbp-C38h] BYREF
  _DWORD v60[10]; // [rsp+C0h] [rbp-BD8h] BYREF
  void *v61; // [rsp+E8h] [rbp-BB0h]
  __int64 v62; // [rsp+F8h] [rbp-BA0h] BYREF
  __int64 v63; // [rsp+108h] [rbp-B90h] BYREF
  void *ptr; // [rsp+110h] [rbp-B88h]
  __int64 v65; // [rsp+120h] [rbp-B78h] BYREF
  void *v66; // [rsp+140h] [rbp-B58h]
  int v67; // [rsp+14Ch] [rbp-B4Ch]
  __int64 v68; // [rsp+160h] [rbp-B38h]
  __int64 v69[2]; // [rsp+1F0h] [rbp-AA8h] BYREF
  __int128 v70; // [rsp+200h] [rbp-A98h]
  __int64 v71; // [rsp+210h] [rbp-A88h]
  __int64 v72; // [rsp+218h] [rbp-A80h]
  __int64 v73; // [rsp+220h] [rbp-A78h]
  int v74; // [rsp+228h] [rbp-A70h]
  __int64 v75; // [rsp+230h] [rbp-A68h]
  __int64 v76; // [rsp+240h] [rbp-A58h]
  __int64 v77; // [rsp+248h] [rbp-A50h]
  int v78; // [rsp+250h] [rbp-A48h]
  __int64 v79; // [rsp+258h] [rbp-A40h]
  __int64 v80; // [rsp+260h] [rbp-A38h]
  int v81; // [rsp+268h] [rbp-A30h]
  __int64 *v82; // [rsp+270h] [rbp-A28h]
  __int64 v83; // [rsp+278h] [rbp-A20h]
  __int64 v84; // [rsp+280h] [rbp-A18h] BYREF
  __int16 v85; // [rsp+4C0h] [rbp-7D8h]
  __int64 v86; // [rsp+4C8h] [rbp-7D0h]
  _QWORD *v87; // [rsp+4D0h] [rbp-7C8h]
  __int64 v88; // [rsp+4D8h] [rbp-7C0h]
  _QWORD v89[5]; // [rsp+4E0h] [rbp-7B8h] BYREF
  _QWORD v90[242]; // [rsp+508h] [rbp-790h] BYREF

  *a3 = 0;
  v51 = (int)a3;
  v57 = v59;
  v58 = 0x400000000LL;
  if ( !sub_146E570((__int64)a1, 23, 23, (__int64)&v57, 1, 1) )
  {
    v37 = 1;
    sub_14808E0(a4, (__int64 *)((char *)&dword_14 + 3), v8, v9, v10, v11);
    goto LABEL_23;
  }
  v12 = a1[2].m128i_i16[0];
  if ( v12 == 24 )
  {
    v52 = 1;
    v16 = 3;
  }
  else if ( v12 == 22
         && ((v13 = a1->m128i_i64[1], v14 = *(_QWORD *)(v13 + 2944), v14 >= *(unsigned int *)(v13 + 2912))
           ? (v15 = sub_14180A0(v13, 1u))
           : (v15 = *(_QWORD *)(v13 + 2904) + 24 * v14),
             *(_WORD *)(v15 + 16) == 23) )
  {
    v52 = 1;
    v16 = 0;
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)a5 + 2040LL) = a5[8];
    v52 = sub_14BB5C0((__int64)a1, 0, 0, v69, 1, 0, a6, nullptr);
    v16 = LOBYTE(v69[0]) == 0 ? 4 : 0;
  }
  v17 = a1[1].m128i_i32[0];
  v18 = v57;
  v54[1] = 0;
  v19 = (const __m128i *)v54;
  v56 = 1;
  v54[0] = v17;
  v55 = v57;
  v20 = (unsigned int)v58 + 1LL;
  v21 = (__m128i *)((char *)v57 + 24 * (unsigned int)v58);
  if ( v20 > HIDWORD(v58) )
  {
    if ( v57 > v54 || v21 <= (__m128i *)v54 )
    {
      sub_2237220(&v57, v59, v20, 24);
      v21 = (__m128i *)((char *)v57 + 24 * (unsigned int)v58);
    }
    else
    {
      sub_2237220(&v57, v59, v20, 24);
      v19 = (const __m128i *)((char *)v57 + (char *)v54 - v18);
      v21 = (__m128i *)((char *)v57 + 24 * (unsigned int)v58);
    }
  }
  v22 = (__m128)_mm_loadu_si128(v19);
  *v21 = (__m128i)v22;
  v23 = v19[1].m128i_i64[0];
  v24 = HIDWORD(v58);
  v25 = a1 + 1;
  v21[1].m128i_i64[0] = v23;
  v26 = (unsigned int)(v58 + 1);
  v27 = v26 + 1;
  LODWORD(v58) = v58 + 1;
  if ( v26 + 1 > v24 )
  {
    if ( v57 > v25 || v25 >= (const __m128i *)((char *)v57 + 24 * v26) )
    {
      sub_2237220(&v57, v59, v27, 24);
      v28 = (char *)v57;
      v26 = (unsigned int)v58;
    }
    else
    {
      v48 = (char *)v25 - (_BYTE *)v57;
      sub_2237220(&v57, v59, v27, 24);
      v28 = (char *)v57;
      v26 = (unsigned int)v58;
      v25 = (const __m128i *)((char *)v57 + v48);
    }
  }
  else
  {
    v28 = (char *)v57;
  }
  v29 = (__m128i *)&v28[24 * v26];
  *v29 = _mm_loadu_si128(v25);
  v30 = (char *)v57;
  v29[1].m128i_i64[0] = v25[1].m128i_i64[0];
  v31 = a1->m128i_i64[1];
  LODWORD(v58) = v58 + 1;
  sub_14368B0(v31, v30, (unsigned int)v58, 1u, 0, 1u);
  sub_149F520((__int64)a1, 0);
  if ( v16 <= 2 )
  {
    v39 = nullptr;
    *a2 = 0;
    v44 = sub_14BFC10(a1, 0, a6);
    if ( v44 == 1
      || a1[2].m128i_i16[0] == 23
      && (v39 = (__int64 *)*(unsigned int *)(a4 + 48),
          v44 = sub_190C990(a1[6].m128i_i64[0], v39, a1[1].m128i_u32[0], v44 & 0xFFFFFFFFFFFFFFFELL),
          v44 == 1) )
    {
      while ( a1[2].m128i_i16[0] != 1 )
        sub_149F520((__int64)a1, 0);
      v46 = (__int64)a1;
      v37 = 1;
      sub_149F520(v46, 0);
    }
    else
    {
      sub_14808E0(a4, v39, v40, v41, v42, v43);
      v45 = (__int64)a1;
      v37 = v44;
      sub_149F520(v45, 0);
    }
    goto LABEL_23;
  }
  sub_147A4A0((__int64)v60, (__int64)&a1[31].m128i_i64[1]);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v90[2] = qword_2CD8AE0;
  v70 = 0;
  v77 = v68;
  v82 = &v84;
  v83 = 0x400000000LL;
  v69[0] = (__int64)v60;
  v69[1] = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  LOBYTE(v85) = (((v60[0] >> 12) & 0x7F) == 69) | v85 & 0xFE;
  v87 = v89;
  v89[2] = v63;
  v85 &= 0xFC01u;
  v88 = 0x200000000LL;
  v89[3] = v90;
  v89[4] = 0x200000000LL;
  v76 = 0;
  v78 = 5;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v86 = 0;
  memset(&v90[3], 0, 24);
  v32 = a1[127].m128i_i8[8];
  a1[127].m128i_i8[8] = 1;
  v53 = v32;
  v90[6] = 0;
  v90[7] = 0;
  v90[232] = 0;
  sub_148B330((__int64)a1, (__int64)v60, 0, 3u, 0, (__m128i)0LL, v22);
  sub_147E3E0((__int64)a1, (__int64)v69);
  a1[127].m128i_i8[8] = v53;
  sub_14808E0(a4, v69, v33, v34, v35, v36);
  *(_BYTE *)(*(_QWORD *)a5 + 2040LL) = a5[8];
  sub_149F520((__int64)a1, 0);
  if ( v16 == 3 )
  {
    *a2 = 3;
    if ( (v85 & 1) == 0 && ((*(_DWORD *)v69[0] >> 12) & 0x7F) != 0x45 )
    {
      v47 = sub_1E85500(a1[6].m128i_i64[0], v69);
      v37 = sub_14BE5D0((__int64)a1, v47, *(unsigned int *)(a4 + 48), *(_DWORD *)(a4 + 52), (__m128i)0LL);
      goto LABEL_17;
    }
  }
  else if ( (v85 & 1) == 0 && ((*(_DWORD *)v69[0] >> 12) & 0x7F) != 0x45 )
  {
    if ( v52 != 1 )
      v52 = sub_1931040(
              a1[6].m128i_i64[0],
              *(_QWORD *)(a1[6].m128i_i64[0] + 608),
              *(_DWORD *)(a4 + 48),
              (unsigned int)v69,
              v51,
              *(_DWORD *)(a4 + 52),
              v52 & 0xFFFFFFFFFFFFFFFELL);
    v37 = v52;
    goto LABEL_17;
  }
  v37 = 1;
LABEL_17:
  sub_147A7A0((char *)v69);
  if ( v67 )
    free(v66);
  sub_15DCED0(v63, &v63);
  if ( ptr != &v65 )
    free(ptr);
  if ( v61 != &v62 )
    free(v61);
LABEL_23:
  if ( v57 != v59 )
    free(v57);
  return v37;
}
