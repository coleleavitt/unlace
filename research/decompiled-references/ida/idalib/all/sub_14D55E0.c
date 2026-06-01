_QWORD *__fastcall sub_14D55E0(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  char v6; // bl
  _QWORD *result; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  __int8 v12; // al
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  int *v19; // rbp
  int *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r8d
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rax
  char *v30; // rbx
  signed __int64 v31; // r10
  __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rsi
  char *v35; // rbp
  __int64 v36; // rax
  signed __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r11
  unsigned int v40; // r9d
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  char *v46; // rbp
  size_t v47; // rdx
  char *v48; // rdi
  char *v49; // r11
  size_t v50; // r9
  unsigned __int64 v51; // rdx
  __int64 (__fastcall *v52)(_QWORD *); // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  const __m128i *v55; // rbp
  __int64 *v56; // rdi
  int *m128i_i32; // rsi
  __int64 i; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  char *dest; // [rsp+0h] [rbp-1A8h]
  unsigned int destb; // [rsp+0h] [rbp-1A8h]
  _QWORD *destc; // [rsp+0h] [rbp-1A8h]
  char *destd; // [rsp+0h] [rbp-1A8h]
  void *deste; // [rsp+0h] [rbp-1A8h]
  int *desta; // [rsp+0h] [rbp-1A8h]
  unsigned int destg; // [rsp+0h] [rbp-1A8h]
  _QWORD *destf; // [rsp+0h] [rbp-1A8h]
  int v69; // [rsp+Ch] [rbp-19Ch]
  char *v70; // [rsp+10h] [rbp-198h]
  __int64 v71; // [rsp+10h] [rbp-198h]
  signed __int64 v72; // [rsp+18h] [rbp-190h]
  __int64 v73; // [rsp+18h] [rbp-190h]
  __int64 v74; // [rsp+18h] [rbp-190h]
  int v75; // [rsp+18h] [rbp-190h]
  signed __int64 v76; // [rsp+18h] [rbp-190h]
  size_t na; // [rsp+20h] [rbp-188h]
  size_t nb; // [rsp+20h] [rbp-188h]
  size_t n; // [rsp+20h] [rbp-188h]
  size_t nc; // [rsp+20h] [rbp-188h]
  unsigned __int64 v81; // [rsp+28h] [rbp-180h]
  __int64 v82; // [rsp+28h] [rbp-180h]
  __int64 v83; // [rsp+28h] [rbp-180h]
  signed __int64 v84; // [rsp+38h] [rbp-170h]
  signed __int64 v85; // [rsp+38h] [rbp-170h]
  char *v86; // [rsp+40h] [rbp-168h]
  size_t v87; // [rsp+48h] [rbp-160h]
  __m128i *v88; // [rsp+50h] [rbp-158h] BYREF
  __int8 v89; // [rsp+58h] [rbp-150h]
  const __m128i *v90; // [rsp+60h] [rbp-148h]
  int v91; // [rsp+68h] [rbp-140h]
  __int16 v92; // [rsp+6Ch] [rbp-13Ch]
  __int64 (__fastcall *v93)(__int64); // [rsp+70h] [rbp-138h]
  __int64 v94; // [rsp+78h] [rbp-130h]
  __int64 v95; // [rsp+80h] [rbp-128h]
  __int64 v96; // [rsp+90h] [rbp-118h] BYREF
  __int128 src; // [rsp+98h] [rbp-110h]
  void *v98[2]; // [rsp+A8h] [rbp-100h] BYREF
  __int8 *v99; // [rsp+B8h] [rbp-F0h] BYREF
  void *v100; // [rsp+C0h] [rbp-E8h]
  __int64 v101; // [rsp+C8h] [rbp-E0h]
  _BYTE v102[16]; // [rsp+D0h] [rbp-D8h] BYREF
  int v103; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+E4h] [rbp-C4h]
  __int64 v105; // [rsp+F0h] [rbp-B8h]
  void *ptr; // [rsp+F8h] [rbp-B0h]
  __int64 v107; // [rsp+100h] [rbp-A8h]
  _BYTE v108[16]; // [rsp+108h] [rbp-A0h] BYREF
  char v109; // [rsp+118h] [rbp-90h]
  unsigned __int64 v110; // [rsp+120h] [rbp-88h]

  v6 = 1;
  result = &v99;
LABEL_2:
  if ( a1[2].m128i_i16[0] == 20 )
  {
    do
    {
      v8 = a1->m128i_i64[1];
      v9 = *(_QWORD *)(v8 + 2944);
      if ( v9 >= *(unsigned int *)(v8 + 2912) )
        v10 = sub_14180A0(v8, 1u);
      else
        v10 = *(_QWORD *)(v8 + 2904) + 24 * v9;
      if ( *(_WORD *)(v10 + 16) == 20 )
      {
        result = (_QWORD *)sub_147CB40((__int64)a1);
        if ( (_BYTE)result )
          goto LABEL_2;
      }
      v11 = a1[2].m128i_i16[0] == 20;
      v90 = a1;
      v88 = (__m128i *)&a1[122];
      v12 = a1[122].m128i_i8[0];
      v91 = 1376276;
      v89 = v12;
      a1[122].m128i_i8[0] = 1;
      v92 = 63;
      v93 = sub_14789E0;
      v94 = 0;
      v95 = 0;
      if ( v11 )
      {
        if ( (unsigned int)a1[5].m128i_u16[5] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
          sub_1568800(&v88);
        else
          LODWORD(v95) = sub_14789E0((__int64)a1);
      }
      if ( v6 )
      {
        v13 = 0;
        if ( a1[2].m128i_i16[0] == 21 )
          goto LABEL_13;
        v14 = sub_14BFC10(a1, 0, a3);
        if ( v14 == 1 )
          goto LABEL_52;
      }
      else
      {
        v14 = sub_14C4CD0(a1, a3);
        if ( v14 == 1 )
        {
LABEL_52:
          LOWORD(v103) = 21;
          sub_15680D0(a1, &v103, 1, 1);
LABEL_53:
          result = v88->m128i_i64;
          v88->m128i_i8[0] = v89;
          return result;
        }
      }
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
LABEL_13:
      v15 = v90[2].m128i_i16[0];
      if ( HIWORD(v91) == v15 )
      {
        v52 = (__int64 (__fastcall *)(_QWORD *))v93;
        v53 = (__int64 *)((char *)v90->m128i_i64 + v94);
        if ( ((unsigned __int8)v93 & 1) != 0 )
          v52 = *(__int64 (__fastcall **)(_QWORD *))((char *)v93 + *v53 - 1);
        goto LABEL_72;
      }
      if ( v15 == 63 )
      {
        v16 = v90->m128i_i64[1];
        v17 = *(_QWORD *)(v16 + 2944);
        if ( v17 >= *(unsigned int *)(v16 + 2912) )
        {
          v54 = sub_14180A0(v16, 1u);
          if ( *(_WORD *)(v54 + 16) == HIWORD(v91) )
          {
LABEL_79:
            v55 = v90;
            v56 = (__int64 *)v90->m128i_i64[1];
            m128i_i32 = v90[1].m128i_i32;
            v90[2].m128i_i32[2] = v90[1].m128i_i32[0];
            sub_14634E0(v56, m128i_i32);
            LODWORD(v55) = v55[2].m128i_i32[2];
            sub_1564820(&v103, v90, (unsigned int)v55, 1917);
            sub_AE9DF0((unsigned __int8 **)&v103, HIWORD(v91), 4u);
            *(_QWORD *)((char *)&src + 4) = 0;
            BYTE12(src) = 0;
            v98[0] = &v99;
            v98[1] = nullptr;
            LOBYTE(v99) = 0;
            LOBYTE(v101) = 0;
            LODWORD(v96) = (_DWORD)v55;
            HIDWORD(v96) = (_DWORD)v55;
            LOBYTE(src) = 1;
            if ( (_DWORD)v55 )
            {
              sub_14C6E00((__int64 *)&v103, (unsigned __int64)&v96);
              if ( v98[0] != &v99 )
                operator delete(v98[0]);
            }
            sub_AEA040((__int64)&v103);
            v52 = (__int64 (__fastcall *)(_QWORD *))v93;
            v53 = (__int64 *)((char *)v90->m128i_i64 + v94);
            if ( ((unsigned __int8)v93 & 1) != 0 )
              v52 = *(__int64 (__fastcall **)(_QWORD *))((char *)v93 + *v53 - 1);
LABEL_72:
            HIDWORD(v95) = v52(v53);
            goto LABEL_18;
          }
        }
        else if ( *(_WORD *)(*(_QWORD *)(v16 + 2904) + 24 * v17 + 16) == HIWORD(v91) )
        {
          goto LABEL_79;
        }
      }
      sub_15688B0(&v88);
LABEL_18:
      v96 = 0;
      *(_QWORD *)&src = v98;
      v99 = &a1[31].m128i_i8[8];
      v100 = v102;
      v18 = a1[2].m128i_i16[0];
      *((_QWORD *)&src + 1) = 0x200000000LL;
      v101 = 0x200000000LL;
      if ( (unsigned __int16)(v18 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_14AB020((__int64)a1, (unsigned int *)&v96, a3, a4);
      v19 = &v103;
      v110 = v13;
      v20 = *(int **)(a2 + 128);
      v109 &= 0x80u;
      v69 = HIDWORD(v95);
      ptr = v108;
      v107 = 0x200000000LL;
      v105 = 0;
      v104 = v95;
      v21 = *(unsigned int *)(a2 + 136);
      v103 = 2;
      v22 = v21 + 1;
      v23 = (unsigned __int64)&v20[36 * v21];
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 140) )
      {
        v59 = a2 + 128;
        desta = v20;
        if ( v20 > &v103 || v23 <= (unsigned __int64)&v103 )
        {
          sub_1497B50(v59, v22);
          v19 = &v103;
          v23 = *(_QWORD *)(a2 + 128) + 144LL * *(unsigned int *)(a2 + 136);
        }
        else
        {
          sub_1497B50(v59, v22);
          v60 = *(_QWORD *)(a2 + 128);
          v19 = (int *)(v60 + (char *)&v103 - (char *)desta);
          v23 = v60 + 144LL * *(unsigned int *)(a2 + 136);
        }
      }
      *(_DWORD *)v23 = *v19;
      *(_DWORD *)(v23 + 4) = v19[1];
      *(_DWORD *)(v23 + 8) = v19[2];
      v24 = *((_QWORD *)v19 + 2);
      *(_QWORD *)(v23 + 32) = 0x200000000LL;
      *(_QWORD *)(v23 + 16) = v24;
      v25 = v19[8];
      v26 = (void *)(v23 + 40);
      *(_QWORD *)(v23 + 24) = v23 + 40;
      if ( v25 && (int *)(v23 + 24) != v19 + 6 )
      {
        v47 = 8LL * v25;
        if ( v25 <= 2uLL
          || (destg = v25,
              sub_2237220(v23 + 24, v23 + 40, v25, 8),
              v26 = *(void **)(v23 + 24),
              v25 = destg,
              (v47 = 8LL * (unsigned int)v19[8]) != 0) )
        {
          destb = v25;
          memcpy(v26, *((const void **)v19 + 3), v47);
          v25 = destb;
        }
        *(_DWORD *)(v23 + 32) = v25;
      }
      a4 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 14));
      *(__m128 *)(v23 + 56) = a4;
      *(__m128i *)(v23 + 72) = _mm_loadu_si128((const __m128i *)(v19 + 18));
      *(__m128i *)(v23 + 88) = _mm_loadu_si128((const __m128i *)(v19 + 22));
      *(__m128i *)(v23 + 104) = _mm_loadu_si128((const __m128i *)(v19 + 26));
      *(__m128i *)(v23 + 120) = _mm_loadu_si128((const __m128i *)(v19 + 30));
      *(_QWORD *)(v23 + 136) = *((_QWORD *)v19 + 17);
      v27 = *(_QWORD *)(a2 + 128);
      v28 = DWORD2(src);
      v29 = (unsigned int)(*(_DWORD *)(a2 + 136) + 1);
      v30 = (char *)src;
      *(_DWORD *)(a2 + 136) = v29;
      v31 = 8 * v28;
      v32 = v27 + 144 * v29 - 144;
      v33 = v31 >> 3;
      v34 = *(unsigned int *)(v32 + 32);
      v35 = *(char **)(v32 + 24);
      v70 = &v30[v31];
      v36 = v32 + 24;
      v37 = 8 * v34;
      dest = &v35[8 * v34];
      v38 = v34 + (v31 >> 3);
      if ( 8 * v34 )
      {
        if ( v38 > *(unsigned int *)(v32 + 36) )
        {
          destc = (_QWORD *)v32;
          v81 = v31 >> 3;
          nb = v31;
          v73 = v32 + 24;
          sub_2237220(v36, v32 + 40, v38, 8);
          v32 = (__int64)destc;
          LODWORD(v33) = v81;
          v31 = nb;
          v34 = *((unsigned int *)destc + 8);
          v35 = (char *)destc[3];
          v37 = 8 * v34;
          v39 = (8 * v34) >> 3;
          dest = &v35[8 * v34];
          v36 = v73;
          if ( v39 < v81 )
          {
LABEL_25:
            v40 = v34 + v33;
            *(_DWORD *)(v32 + 32) = v40;
            if ( v35 != dest )
            {
              na = v39;
              v72 = v37;
              memcpy(&v35[8 * v40 - v37], v35, v37);
              v39 = na;
              v37 = v72;
            }
            if ( v39 )
            {
              if ( (v35 >= v30 + 16 || v30 >= v35 + 16) && v39 - 1 > 3 )
              {
                v41 = 0;
                v42 = 0;
                v43 = ((v39 - 2) >> 1) + 1;
                do
                {
                  a3 = _mm_loadu_si128((const __m128i *)&v30[v41]);
                  ++v42;
                  *(__m128i *)&v35[v41] = a3;
                  v41 += 16;
                }
                while ( v42 < v43 );
                v44 = 2 * v43;
                v45 = 16 * v43;
                v46 = &v35[v45];
                if ( v39 != v44 )
                  *(_QWORD *)v46 = *(_QWORD *)&v30[v45];
              }
              else
              {
                for ( i = 0; i != v39; ++i )
                  *(_QWORD *)&v35[8 * i] = *(_QWORD *)&v30[8 * i];
              }
              v30 += v37;
            }
            if ( v70 != v30 )
              memcpy(dest, v30, v70 - v30);
            goto LABEL_37;
          }
        }
        else
        {
          v39 = v37 >> 3;
          if ( v37 >> 3 < v33 )
            goto LABEL_25;
        }
        v48 = dest;
        n = v37 - v31;
        v49 = &v35[v37 - v31];
        v50 = v31;
        v74 = v31 >> 3;
        v51 = (v31 >> 3) + v34;
        if ( v51 > *(unsigned int *)(v32 + 36) )
        {
          v87 = v31;
          v86 = &v35[v37 - v31];
          v85 = v31;
          v83 = v32;
          sub_2237220(v36, v32 + 40, v51, 8);
          v32 = v83;
          v50 = v87;
          v49 = v86;
          v31 = v85;
          v34 = *(unsigned int *)(v83 + 32);
          v48 = (char *)(*(_QWORD *)(v83 + 24) + 8 * v34);
        }
        if ( v49 != dest )
        {
          v84 = v31;
          v82 = v32;
          destd = v49;
          memmove(v48, v49, v50);
          v32 = v82;
          v31 = v84;
          v49 = destd;
          LODWORD(v34) = *(_DWORD *)(v82 + 32);
        }
        *(_DWORD *)(v32 + 32) = v74 + v34;
        if ( v49 != v35 )
        {
          deste = (void *)v31;
          memmove(&v35[v31], v35, n);
          v31 = (signed __int64)deste;
        }
        if ( v30 != v70 )
          memmove(v35, v30, v31);
      }
      else
      {
        if ( v38 > *(unsigned int *)(v32 + 36) )
        {
          destf = (_QWORD *)v32;
          nc = v31 >> 3;
          v76 = v31;
          sub_2237220(v36, v32 + 40, v38, 8);
          v32 = (__int64)destf;
          LODWORD(v33) = nc;
          v31 = v76;
          v34 = *((unsigned int *)destf + 8);
          dest = (char *)(destf[3] + 8 * v34);
        }
        if ( v30 != v70 )
        {
          v75 = v33;
          v71 = v32;
          memcpy(dest, v30, v31);
          v32 = v71;
          LODWORD(v33) = v75;
          LODWORD(v34) = *(_DWORD *)(v71 + 32);
        }
        *(_DWORD *)(v32 + 32) = v34 + v33;
      }
LABEL_37:
      sub_15D8C50(a2 + 768, &v99);
      LODWORD(v101) = 0;
      if ( v69 )
        *(_DWORD *)(a2 + 92) = v69;
      if ( ptr != v108 )
        free(ptr);
      if ( !HIDWORD(v95) )
      {
        sub_15DCED0(v99, &v99);
        if ( v100 != v102 )
          free(v100);
        if ( (void **)src != v98 )
          free((void *)src);
        goto LABEL_53;
      }
      sub_15DCED0(v99, &v99);
      if ( v100 != v102 )
        free(v100);
      if ( (void **)src != v98 )
        free((void *)src);
      result = v88->m128i_i64;
      v6 = 0;
      v11 = a1[2].m128i_i16[0] == 20;
      v88->m128i_i8[0] = v89;
    }
    while ( v11 );
  }
  return result;
}
