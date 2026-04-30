__int64 __fastcall sub_3CEC00(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v11; // r12d
  __int64 v13; // r14
  __int64 v14; // r13
  double v15; // xmm0_8
  const char *v16; // rsi
  __int64 v17; // rdi
  int *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // r15
  __int64 v22; // r12
  __int64 v23; // r8
  int v24; // r10d
  __int64 v25; // rdi
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  unsigned int *v28; // r12
  unsigned int *v29; // r15
  unsigned int v30; // eax
  __int64 v31; // rax
  void *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // eax
  double v36; // xmm4_8
  double v37; // xmm5_8
  unsigned __int8 v38; // al
  __m128i *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rbp
  _QWORD *v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // [rsp+0h] [rbp-1C8h]
  int *v48; // [rsp+0h] [rbp-1C8h]
  __int64 v49; // [rsp+8h] [rbp-1C0h]
  int v50; // [rsp+10h] [rbp-1B8h]
  int v51; // [rsp+14h] [rbp-1B4h]
  unsigned int v52; // [rsp+4Ch] [rbp-17Ch] BYREF
  __int64 v53; // [rsp+50h] [rbp-178h] BYREF
  __int128 v54; // [rsp+58h] [rbp-170h]
  __int64 v55; // [rsp+68h] [rbp-160h]
  __int64 v56; // [rsp+70h] [rbp-158h] BYREF
  __int64 v57; // [rsp+78h] [rbp-150h] BYREF
  __int128 v58; // [rsp+80h] [rbp-148h]
  __int64 v59; // [rsp+90h] [rbp-138h]
  __int128 v60; // [rsp+98h] [rbp-130h]
  char v61; // [rsp+A8h] [rbp-120h]
  __int64 (__fastcall **v62)(); // [rsp+B0h] [rbp-118h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-110h]
  __int128 v64; // [rsp+C0h] [rbp-108h]
  __int64 v65; // [rsp+D0h] [rbp-F8h]
  const char *v66; // [rsp+D8h] [rbp-F0h]
  int v67; // [rsp+E0h] [rbp-E8h]
  __m128i v68; // [rsp+E8h] [rbp-E0h] BYREF
  int v69; // [rsp+F8h] [rbp-D0h]
  char v70; // [rsp+100h] [rbp-C8h] BYREF
  char v71; // [rsp+148h] [rbp-80h] BYREF
  int v72; // [rsp+160h] [rbp-68h] BYREF
  void *src; // [rsp+168h] [rbp-60h] BYREF
  __int128 v74; // [rsp+170h] [rbp-58h]
  int v75; // [rsp+180h] [rbp-48h]
  unsigned __int64 v76; // [rsp+188h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 8);
  v76 = __readfsqword(0x28u);
  if ( v9 == 25 || (v11 = 0, v9 == 58) )
  {
    v13 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return 0;
    v14 = *(_QWORD *)(a1 + 208);
    v11 = 0;
    if ( *(_BYTE *)(v14 + 31) == 12 )
    {
      v15 = 0.0;
      v55 = 0;
      v16 = byte_9 + 3;
      v56 = 0;
      v57 = 0;
      v59 = 0;
      v61 = 16;
      v54 = 0;
      v58 = 0;
      v60 = 0;
      v17 = *(_QWORD *)(v14 + 8);
      v53 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v17, 12, &v53) )
      {
        v11 = 0;
LABEL_52:
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          v15 = qfree(v59, v16, v15);
        }
        cleanup_argloc(&v57);
        clear_tinfo_t(&v56);
        v41 = v53;
        if ( v53 )
        {
          v42 = v54;
          if ( (_QWORD)v54 )
          {
            v43 = 0;
            do
            {
              v44 = (_QWORD *)(v41 + 80 * v43);
              clear_tinfo_t(v44 + 8);
              v45 = v44[5];
              if ( v45 )
              {
                v44[6] = 0;
                v15 = qfree(v45, v16, v15);
              }
              v46 = v44[2];
              if ( v46 )
              {
                v44[3] = 0;
                v15 = qfree(v46, v16, v15);
              }
              ++v43;
              cleanup_argloc(v44);
              v41 = v53;
            }
            while ( v42 != v43 );
          }
          *(_QWORD *)&v54 = 0;
          qfree(v41, v16, v15);
        }
        return v11;
      }
      v51 = v61 & 0xF0;
      if ( (v61 & 0xF0) == 0xC0 )
        v51 = HIDWORD(v55);
      v65 = 0;
      v64 = -1;
      v47 = v54;
      v62 = (__int64 (__fastcall **)())&stru_86F6A0;
      v63 = 0x3FF000004LL;
      v66 = "Change calling convention";
      v67 = 3;
      v18 = (int *)&v70;
      v69 = -1;
      v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8692A8), (__m128i)(unsigned __int64)off_869290);
      do
      {
        *(_QWORD *)v18 = 0;
        v18 += 6;
        *((_OWORD *)v18 - 1) = 0;
      }
      while ( v18 != &v72 );
      v19 = HIDWORD(v63);
      v72 = 0;
      v20 = ((HIDWORD(v63) >> 19) & 0x3F) - 1;
      if ( ((HIDWORD(v63) >> 19) & 0x3F) != 0 )
      {
        if ( BYTE3(v63) != 0xFF )
        {
          if ( !under_debugger )
            interr(3449, 12, HIDWORD(v63), v20, 0.0);
          BUG();
        }
        v19 = HIDWORD(v63) & 0xFE07FFFF;
        BYTE3(v63) = ((HIDWORD(v63) >> 19) & 0x3F) - 1;
        HIDWORD(v63) &= 0xFE07FFFF;
      }
      v15 = 0.0;
      v21 = nullptr;
      v22 = 0;
      v62 = cc_chooser_t___vtable;
      v23 = qword_8D0A58;
      v74 = 0;
      v75 = v51;
      src = nullptr;
      v69 = 126;
      if ( (_UNKNOWN *)qword_8D0A58 != &unk_8D0A48 )
      {
        do
        {
          if ( v47 )
          {
            v25 = v23;
            while ( *(_BYTE *)(v25 + 120) )
            {
              v25 = std::_Rb_tree_increment(v25);
              if ( (_UNKNOWN *)v25 == &unk_8D0A48 )
                goto LABEL_25;
            }
            v23 = v25;
          }
          v24 = *(_DWORD *)(v23 + 32);
          if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v22 + 1) )
          {
            v50 = *(_DWORD *)(v23 + 32);
            v49 = v23;
            src = (void *)qvector_reserve(&src, v21, v22 + 1, 4);
            v22 = v74;
            v21 = (char *)src;
            v24 = v50;
            v23 = v49;
          }
          *(_DWORD *)&v21[4 * v22] = v24;
          v21 = (char *)src;
          v22 = v74 + 1;
          *(_QWORD *)&v74 = v74 + 1;
          v23 = std::_Rb_tree_increment(v23);
        }
        while ( (_UNKNOWN *)v23 != &unk_8D0A48 );
LABEL_25:
        v26 = 4 * v22;
        v48 = (int *)&v21[4 * v22];
        if ( v48 != (int *)v21 )
        {
          if ( v26 >> 2 )
          {
            _BitScanReverse64(&v27, v26 >> 2);
            sub_3CE9F0((__int64)v21, v48, 2LL * (int)v27, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3C4FE0);
            if ( v26 > 64 )
            {
              v28 = (unsigned int *)(v21 + 64);
              sub_3CD1B0(v21, v21 + 64, (__int64 (__fastcall *)(char *, char *))sub_3C4FE0);
              do
              {
                v29 = v28 - 1;
                v52 = *v28;
                while ( sub_3C4FE0(&v52, v29) )
                {
                  v30 = *v29--;
                  v29[2] = v30;
                }
                ++v28;
                v29[1] = v52;
              }
              while ( v48 != (int *)v28 );
              goto LABEL_36;
            }
          }
          else
          {
            sub_3CE9F0((__int64)v21, v48, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3C4FE0);
          }
          sub_3CD1B0(v21, (char *)v48, (__int64 (__fastcall *)(char *, char *))sub_3C4FE0);
        }
      }
LABEL_36:
      v16 = (const char *)&v52;
      v52 = v51;
      v31 = sub_4AED50(&v62, &v52, v19, v20);
      v32 = src;
      if ( v31 >= 0 && v31 < (unsigned __int64)v74 && (v33 = *((_DWORD *)src + v31)) != 0 )
      {
        if ( v33 == 16 )
          v33 = getinf(99);
        if ( v33 > 0xCF )
        {
          v34 = *(_QWORD *)(v13 + 1000);
          if ( (*(_BYTE *)(v34 + 112) & 1) != 0 )
            *(_BYTE *)(v34 + 59) = 1;
        }
        v35 = set_tinfo_property4(v14 + 8, 35, v33, 0, 0, 0);
        v16 = (const char *)v35;
        v38 = sub_3AC490(
                (__int64 *)a1,
                v35,
                (__int64)"Failed to change calling convention",
                (__m128)0LL,
                (__m128)(unsigned __int64)off_869290,
                a4,
                a5,
                v36,
                v37,
                a8,
                a9);
        v32 = src;
        v11 = v38;
      }
      else
      {
        v11 = 1;
      }
      v62 = cc_chooser_t___vtable;
      if ( v32 )
      {
        *(_QWORD *)&v74 = 0;
        v15 = qfree(v32, v16);
      }
      v39 = (__m128i *)&v71;
      v62 = (__int64 (__fastcall **)())&stru_86F6A0;
      do
      {
        v40 = v39->m128i_i64[0];
        if ( v39->m128i_i64[0] )
        {
          v39->m128i_i64[1] = 0;
          v15 = qfree(v40, v16, v15);
        }
        v39 = (__m128i *)((char *)v39 - 24);
      }
      while ( &v68 != v39 );
      goto LABEL_52;
    }
  }
  return v11;
}
