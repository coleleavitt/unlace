__int64 __fastcall sub_1A2A70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  __int64 v13; // rcx
  _QWORD *v14; // r15
  int v15; // r13d
  void *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  void *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r14
  unsigned int v23; // r9d
  __int64 v24; // rcx
  int *v25; // r13
  int v26; // eax
  int v27; // r14d
  int v28; // eax
  int v29; // r13d
  int v30; // eax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rcx
  size_t v34; // rsi
  char *v35; // r12
  size_t v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned int v50; // ebx
  bool v52; // zf
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  __m128i si128; // xmm1
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbp
  __int64 v60; // rbx
  __int64 v61; // r12
  int v62; // esi
  int v63; // esi
  __int64 v64; // rsi
  __int64 v65; // rsi
  __m128i v66; // xmm0
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v70; // rax
  unsigned __int64 tinfo_size; // rax
  __int64 v72; // rsi
  __int64 v73; // [rsp+8h] [rbp-1B0h]
  __int64 v74; // [rsp+8h] [rbp-1B0h]
  size_t n[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v76; // [rsp+20h] [rbp-198h]
  unsigned int v77; // [rsp+28h] [rbp-190h]
  int v78; // [rsp+2Ch] [rbp-18Ch]
  __int64 v79; // [rsp+30h] [rbp-188h]
  __int64 v80; // [rsp+38h] [rbp-180h]
  _QWORD *v81; // [rsp+40h] [rbp-178h]
  char *v82; // [rsp+48h] [rbp-170h]
  __int64 v83; // [rsp+50h] [rbp-168h] BYREF
  __int128 v84; // [rsp+58h] [rbp-160h]
  __int64 v85[16]; // [rsp+70h] [rbp-148h] BYREF
  __m128i *v86; // [rsp+F0h] [rbp-C8h] BYREF
  int v87; // [rsp+F8h] [rbp-C0h]
  __m128i v88; // [rsp+100h] [rbp-B8h]
  __int64 v89; // [rsp+110h] [rbp-A8h]
  int v90; // [rsp+118h] [rbp-A0h]
  char *v91; // [rsp+120h] [rbp-98h]
  __int64 v92; // [rsp+128h] [rbp-90h]
  int v93; // [rsp+130h] [rbp-88h]
  __m128i v94; // [rsp+138h] [rbp-80h]
  __int64 v95; // [rsp+148h] [rbp-70h]
  void *v96; // [rsp+150h] [rbp-68h]
  __int128 v97; // [rsp+158h] [rbp-60h]
  __int64 v98; // [rsp+168h] [rbp-50h]
  unsigned __int64 v99; // [rsp+178h] [rbp-40h]

  v6 = (__int64)a1;
  v7 = a1[2];
  v99 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 280);
  sub_139B90(v8, (__int64)a2, a3, a4, a5, a6);
  sub_1A0DE0((__int64)v85, v8, a2, v9, v10, v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
  if ( *(_BYTE *)(v8 + 320) )
  {
    v13 = a1[28];
    v14 = a1 + 18;
    if ( v13 == -1 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(a1[1] + 112LL) + 80LL);
      v13 = (int)((v15 + sub_F2D80(v8) - 1) & -v15);
    }
  }
  else
  {
    v13 = a1[44];
    v14 = a1 + 34;
  }
  v16 = sub_1A1040(v85, a1[2] + 96LL, 0xFFFFFFFF, v13, *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL), *(char *)(v12 + 12));
  v17 = *((_DWORD *)v14 + 10);
  v73 = (__int64)v16;
  v18 = *(char *)(v12 + 12);
  if ( v17 == -1 )
  {
    v19 = -1;
  }
  else
  {
    v19 = v14[4];
    if ( v19 != -1 )
      v19 += (int)(v17 * v18);
  }
  v20 = sub_1A1040(v85, a1[2] + 96LL, v17, v19, *(_DWORD *)(a1[2] + 24LL) - v17, v18);
  v21 = *((_DWORD *)v14 + 16);
  v22 = (__int64)v20;
  v23 = *(char *)(v12 + 13);
  if ( v21 == -1 )
  {
    v24 = -1;
  }
  else
  {
    v24 = v14[7];
    if ( v24 != -1 )
      v24 += (int)(v21 * v23);
  }
  v25 = (int *)sub_1A1040(v85, a1[2] + 120LL, v21, v24, *(_DWORD *)(a1[2] + 48LL) - v21, v23);
  if ( v22 )
  {
    sub_19CFB0((__int64)a1, v22, (__int64)v25);
    sub_1A00C0(v85, 1);
    if ( *(_DWORD *)(v22 + 48) == -1 )
      v26 = sub_1A1110(v22, v8, *(int *)(v22 + 52));
    else
      v26 = sub_1A1170(v22, v8);
    v27 = v26;
  }
  else
  {
    sub_19CFB0((__int64)a1, 0, (__int64)v25);
    sub_1A00C0(v85, 1);
    v27 = 0;
  }
  if ( v25 )
  {
    if ( v25[12] == -1 )
      v28 = sub_1A1110((__int64)v25, v8, v25[13]);
    else
      v28 = sub_1A1170((__int64)v25, v8);
    v29 = v28;
  }
  else
  {
    v29 = 0;
  }
  if ( v73 )
  {
    v30 = *(_DWORD *)(v73 + 48) == -1 ? sub_1A1110(v73, v8, *(int *)(v73 + 52)) : sub_1A1170(v73, v8);
    v77 = v30 * *(char *)(v12 + 12);
    if ( v30 )
    {
      v31 = a1[2];
      v32 = *(_QWORD *)(v31 + 24);
      if ( v32 - v27 > (int)(*(_QWORD *)(v31 + 48) - v29) )
      {
        tinfo_size = get_tinfo_size();
        v72 = a1[2];
        if ( !(v77 % tinfo_size) )
        {
          v29 = *(_DWORD *)(v72 + 48);
LABEL_24:
          if ( !a1[16] )
            goto LABEL_25;
LABEL_48:
          v35 = (char *)&unk_4DBD60;
          goto LABEL_31;
        }
        v32 = *(_DWORD *)(v72 + 24);
      }
      v27 = v32;
      goto LABEL_24;
    }
  }
  if ( v27 <= *((_DWORD *)v14 + 10) && v29 <= *((_DWORD *)v14 + 16) )
  {
    v50 = 0;
    goto LABEL_43;
  }
  v52 = a1[16] == 0;
  v77 = 0;
  if ( !v52 )
    goto LABEL_48;
LABEL_25:
  if ( !*(_BYTE *)(v8 + 320) )
  {
    if ( !under_debugger )
      sub_383060(51389);
LABEL_73:
    BUG();
  }
  sub_19C2D0((__int64)a1, v12);
  if ( v14[10] == -1 )
    v14[10] = *(_QWORD *)(v8 + 144);
  v33 = a1[16];
  if ( a1[17] < (unsigned __int64)(v33 + 1) )
  {
    n[0] = a1[17];
    v53 = qvector_reserve((__int64)(a1 + 15), 0, v33 + 1, 128);
    v35 = (char *)&unk_4DBD60;
    v54 = a1[16];
    v55 = a1[17];
    a1[17] = n[0];
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
    v76 = v55;
    v57 = a1[15];
    v58 = v54 - 1;
    if ( v58 >= 0 )
    {
      v79 = v53;
      v78 = v29;
      v80 = v8;
      v59 = v53;
      v81 = a1;
      v60 = v57;
      v82 = (char *)&unk_4DBD60;
      v61 = v58;
      do
      {
        *(_QWORD *)v59 = *(_QWORD *)v60;
        v62 = *(_DWORD *)(v60 + 8);
        *(__m128i *)(v59 + 16) = si128;
        *(_DWORD *)(v59 + 8) = v62;
        *(_QWORD *)(v59 + 32) = *(_QWORD *)(v60 + 32);
        v63 = *(_DWORD *)(v60 + 40);
        *(_QWORD *)(v59 + 48) = off_4DBD70;
        *(_DWORD *)(v59 + 40) = v63;
        *(_QWORD *)(v59 + 56) = *(_QWORD *)(v60 + 56);
        *(_DWORD *)(v59 + 64) = *(_DWORD *)(v60 + 64);
        v64 = *(_QWORD *)(v60 + 88);
        *(__m128i *)(v59 + 72) = _mm_loadu_si128((const __m128i *)(v60 + 72));
        *(_QWORD *)(v59 + 88) = v64;
        v65 = *(_QWORD *)(v60 + 96);
        v66 = _mm_loadu_si128((const __m128i *)(v60 + 104));
        *(_QWORD *)(v60 + 96) = 0;
        *(_QWORD *)(v59 + 96) = v65;
        *(__m128i *)(v59 + 104) = v66;
        v67 = *(_QWORD *)(v60 + 120);
        *(_QWORD *)(v60 + 112) = 0;
        *(_QWORD *)(v59 + 120) = v67;
        v68 = *(_QWORD *)(v60 + 96);
        if ( v68 )
        {
          *(_QWORD *)(v60 + 104) = 0;
          *(__m128i *)n = si128;
          qfree(v68);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v60 += 128;
        v59 += 128;
      }
      while ( v61-- != 0 );
      v6 = (__int64)v81;
      v29 = v78;
      v53 = v79;
      v8 = v80;
      v35 = v82;
      v57 = v81[15];
    }
    n[0] = v53;
    qfree(v57);
    v34 = n[0];
    v70 = v76;
    v33 = *(_QWORD *)(v6 + 128);
    *(_QWORD *)(v6 + 120) = n[0];
    *(_QWORD *)(v6 + 136) = v70;
  }
  else
  {
    v34 = a1[15];
    v35 = (char *)&unk_4DBD60;
  }
  v36 = v34 + (v33 << 7);
  *(_DWORD *)(v36 + 8) = 0;
  *(_QWORD *)v36 = 0;
  *(_QWORD *)(v36 + 32) = -1;
  *(_DWORD *)(v36 + 40) = -1;
  *(_OWORD *)(v36 + 72) = -1;
  *(_QWORD *)(v36 + 48) = v35 + 16;
  *(_QWORD *)(v36 + 56) = -1;
  *(_DWORD *)(v36 + 64) = -1;
  *(_QWORD *)(v36 + 88) = -1;
  *(_QWORD *)(v36 + 96) = 0;
  *(_QWORD *)(v36 + 120) = 0;
  *(__m128i *)(v36 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)off_4DBD90,
                             (__m128i)(unsigned __int64)(v35 + 16));
  *(_OWORD *)(v36 + 104) = 0;
  ++*(_QWORD *)(v6 + 128);
  *(_DWORD *)(v36 + 8) |= 0x20u;
  n[0] = v36;
  v37 = get_tinfo_size();
  v38 = sub_138140((_QWORD *)v8, v37, 0);
  *(_QWORD *)(n[0] + 72) = v38;
  if ( v38 == -1 )
  {
    if ( !under_debugger )
      sub_383060(52217);
    goto LABEL_73;
  }
LABEL_31:
  v39 = *(_QWORD *)(v6 + 120);
  v40 = *(_QWORD *)(v39 + 32);
  v86 = *(__m128i **)v39;
  v41 = *(_DWORD *)(v39 + 8);
  v89 = v40;
  v42 = *(unsigned int *)(v39 + 40);
  v91 = v35 + 16;
  v43 = *(_QWORD *)(v39 + 56);
  v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)(v35 + 16));
  v44 = _mm_loadu_si128((const __m128i *)(v39 + 72));
  v92 = v43;
  LODWORD(v43) = *(_DWORD *)(v39 + 64);
  v94 = v44;
  v93 = v43;
  v45 = *(_QWORD *)(v39 + 88);
  v97 = 0;
  v46 = *(_QWORD *)(v39 + 104);
  v87 = v41;
  v90 = v42;
  v95 = v45;
  v96 = nullptr;
  if ( v46 )
  {
    v74 = v39;
    n[0] = 8 * v46;
    v96 = (void *)qalloc_or_throw(8 * v46, v42, 8 * v46, v39);
    *((_QWORD *)&v97 + 1) = v46;
    v42 = *(_QWORD *)(v74 + 96);
    memcpy(v96, (const void *)v42, n[0]);
    *(_QWORD *)&v97 = v46;
    v39 = v74;
    LOBYTE(v41) = v87;
  }
  v47 = *(_QWORD *)(v39 + 120);
  v98 = v47;
  if ( (v41 & 2) != 0 )
  {
    if ( !under_debugger )
      sub_383060(51390);
    goto LABEL_73;
  }
  v90 = v27;
  v93 = v29;
  v87 = v41 & 0x20 | 8;
  v94.m128i_i64[1] = v14[10] + v77;
  v86 = sub_D21A0(v8, v42, v47, v39);
  v98 = 0;
  v83 = 0;
  v84 = 0;
  v83 = qvector_reserve((__int64)&v83, 0, 1, 8);
  *(_QWORD *)(v83 + 8 * v84) = &v86;
  *(_QWORD *)&v84 = v84 + 1;
  sub_1A2060(v6, &v83);
  sub_19B550((__int64)&v86, *(_QWORD *)(v98 + 24), v98, (int)"va_end", 26);
  v48 = *(_QWORD *)(v6 + 400);
  *(_DWORD *)(v6 + 312) = v27;
  *(_DWORD *)(v6 + 336) = v29;
  if ( v48 )
  {
    *(_QWORD *)(v6 + 408) = 0;
    qfree(v48);
    *(_QWORD *)(v6 + 400) = 0;
    *(_QWORD *)(v6 + 416) = 0;
  }
  v49 = *(_QWORD *)(v6 + 424);
  if ( v49 )
  {
    *(_QWORD *)(v6 + 432) = 0;
    qfree(v49);
    *(_QWORD *)(v6 + 424) = 0;
    *(_QWORD *)(v6 + 440) = 0;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree((__int64)v96);
  }
  v50 = 1;
LABEL_43:
  sub_19FFD0((__int64)v85);
  return v50;
}
