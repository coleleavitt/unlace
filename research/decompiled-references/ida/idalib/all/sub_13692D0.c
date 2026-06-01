_QWORD *__fastcall sub_13692D0(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // r9
  __int64 v9; // rsi
  _QWORD *v10; // rax
  size_t v11; // r12
  size_t *v12; // rbx
  _QWORD *v13; // r13
  const void *v14; // rbp
  size_t v15; // r14
  char v16; // r15
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // rbx
  __int64 v20; // rdi
  __int64 v22; // rax
  const void *v23; // rbp
  std::_V2 *v24; // rbx
  __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // r12
  __int64 v34; // r15
  unsigned __int8 (__fastcall *v35)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (*v36)(); // rax
  _BYTE *v37; // rdx
  void *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rbp
  __int64 v43; // rax
  size_t v44; // rbx
  __int64 v45; // r13
  const void *v46; // rbp
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  _QWORD *v49; // rbp
  __m128i *v50; // r15
  __m128i *v51; // r14
  __m128i *v52; // r13
  __m128i *v53; // rbx
  __int64 *i; // rbx
  __int64 *v55; // rbp
  __int64 *v56; // rsi
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rsi
  __int64 *v60; // rdx
  void *v61; // rax
  __int64 v62; // rax
  __m128i *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  void **v68; // r15
  void **v69; // rbp
  __m128i *v70; // rdi
  size_t *v71; // [rsp+0h] [rbp-148h] BYREF
  _QWORD *v72; // [rsp+8h] [rbp-140h]
  __int64 *v73; // [rsp+10h] [rbp-138h]
  _QWORD *v74; // [rsp+18h] [rbp-130h]
  unsigned __int8 **v75; // [rsp+20h] [rbp-128h]
  __int64 v76; // [rsp+28h] [rbp-120h]
  __int64 v77; // [rsp+30h] [rbp-118h]
  __int64 *v78; // [rsp+38h] [rbp-110h]
  unsigned __int8 (__fastcall *v79)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-108h]
  __int64 v80; // [rsp+48h] [rbp-100h]
  __int64 **v81; // [rsp+50h] [rbp-F8h]
  __m128i *v82; // [rsp+58h] [rbp-F0h]
  void **v83; // [rsp+60h] [rbp-E8h]
  __m128i *v84; // [rsp+68h] [rbp-E0h]
  __int64 v85; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int8 (__fastcall *v86)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-D0h] BYREF
  void *v87[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v88; // [rsp+90h] [rbp-B8h]
  __int128 v89; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-98h]
  void *v91[2]; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v92[7]; // [rsp+D0h] [rbp-78h] BYREF

  v5 = *a2;
  v72 = a3;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(v5 + 8);
  v74 = a1;
  v76 = a4;
  v77 = a5;
  if ( v6 == sub_13642F0 )
  {
    v7 = (_QWORD *)a2[13];
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*v7 + 8LL);
    if ( v8 == v6 )
    {
      v9 = v7[13];
      v78 = &v85;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(&v85, v9, a3);
    }
    else
    {
      v78 = &v85;
      ((void (__fastcall *)(__int64 *, _QWORD *, _QWORD *))v8)(&v85, v7, a3);
    }
  }
  else
  {
    v78 = &v85;
    ((void (__fastcall *)(__int64 *, __int64 *, _QWORD *))v6)(&v85, a2, a3);
  }
  if ( v85 )
  {
    v88 = 0;
    *(_OWORD *)v87 = 0;
    v10 = *(_QWORD **)(v72[2] + 160LL);
    v11 = v10[106];
    if ( v11 )
    {
      v23 = (const void *)v10[105];
      LODWORD(v89) = 0;
      *((_QWORD *)&v89 + 1) = std::_V2::system_category((std::_V2 *)&v85);
      v24 = (std::_V2 *)operator new(0x60u);
      sub_227D450(v24);
      if ( (_DWORD)v89 )
      {
        v27 = sub_227D6D0(v24, v23);
        v28 = sub_995540(v27, "Failed to create output file for -dump-minimization-hints flag, file path: ");
        v29 = *(void **)(v28 + 32);
        v30 = v28;
        if ( v11 > *(_QWORD *)(v28 + 24) - (_QWORD)v29 )
        {
          v30 = sub_227BF10(v28, v23, v11);
        }
        else
        {
          memcpy(v29, v23, v11);
          *(_QWORD *)(v30 + 32) += v11;
        }
        v31 = sub_995540(v30, ", error: ");
        (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**((_QWORD **)&v89 + 1) + 32LL))(
          v91,
          *((_QWORD *)&v89 + 1),
          (unsigned int)v89);
        v32 = sub_227BF10(v31, v91[0], v91[1]);
        sub_995540(v32, "\n");
        if ( v91[0] != v92 )
          operator delete(v91[0]);
        (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
      else
      {
        v25 = v72[9];
        v26 = (_QWORD *)operator new(0x48u);
        *v26 = &off_2C43568;
        v26[7] = v25;
        *((_BYTE *)v26 + 8) = 0;
        v26[2] = off_2C43628;
        v26[3] = 0;
        v26[4] = 0;
        v26[5] = 0;
        *((_BYTE *)v26 + 48) = 1;
        v26[8] = v24;
        v91[0] = v26;
        sub_1369290((__int64)v87, (__int64 *)v91);
        if ( v91[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v91[0] + 8LL))(v91[0]);
      }
      v10 = *(_QWORD **)(v72[2] + 160LL);
    }
    v12 = (size_t *)v10[48];
    v71 = (size_t *)v10[49];
    if ( v12 == v71 )
      goto LABEL_30;
    LOBYTE(v73) = 1;
    v75 = (unsigned __int8 **)v91;
    do
    {
      v13 = (_QWORD *)unk_2CD8A38;
      if ( unk_2CD8A38 )
      {
        v14 = (const void *)*v12;
        v15 = v12[1];
        v16 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = v13[1];
            if ( *(_QWORD *)(v17 + 8) == v15 )
              break;
LABEL_12:
            v13 = (_QWORD *)*v13;
            if ( !v13 )
              goto LABEL_16;
          }
          if ( v15 )
          {
            if ( !memcmp(*(const void **)v17, v14, v15) )
              v16 = 1;
            goto LABEL_12;
          }
          v13 = (_QWORD *)*v13;
          v16 = 1;
          if ( !v13 )
          {
LABEL_16:
            if ( v16 )
              goto LABEL_17;
            break;
          }
        }
      }
      sub_FC70B0((__int64)v75, v72[4], 0, 729);
      sub_AEC220(v75, (_BYTE *)*v12, v12[1]);
      sub_AEA040((__int64)v75);
      LOBYTE(v73) = 0;
LABEL_17:
      v12 += 4;
    }
    while ( v71 != v12 );
    if ( !(_BYTE)v73 )
    {
      *v74 = 0;
      goto LABEL_20;
    }
LABEL_30:
    if ( v72[17] )
    {
      v22 = v85;
      v85 = 0;
      *v74 = v22;
      goto LABEL_20;
    }
    v90 = 0;
    v89 = 0;
    v33 = (_QWORD *)unk_2CD8A38;
    v81 = (__int64 **)&v89;
    v83 = v87;
    if ( unk_2CD8A38 )
    {
      v75 = (unsigned __int8 **)&v86;
      v73 = (__int64 *)v91;
      while ( 1 )
      {
        v34 = v33[1];
        (*(void (__fastcall **)(unsigned __int8 **))(v34 + 32))(v75);
        v35 = v86;
        LODWORD(v71) = 1;
        v36 = *(__int64 (**)())(*(_QWORD *)v86 + 152LL);
        if ( v36 != sub_12E86B0 )
        {
          v58 = ((__int64 (__fastcall *)(_QWORD))v36)(v86);
          LODWORD(v71) = v58;
          if ( v58 > 1 )
          {
            if ( v58 - 3 > 1 )
              goto LABEL_93;
            v35 = v86;
            v80 = v72[2];
            goto LABEL_67;
          }
          v35 = v86;
        }
        v37 = *(_BYTE **)v34;
        v38 = *(void **)(v34 + 8);
        v39 = v72[2];
        v91[0] = *(void **)v34;
        v91[1] = v38;
        v80 = v39;
        v40 = *(_QWORD *)(v39 + 160);
        v41 = *(_QWORD *)(v40 + 384);
        v82 = *(__m128i **)(v40 + 392);
        v42 = ((__int64)v82->m128i_i64 - v41) >> 7;
        v43 = ((__int64)v82->m128i_i64 - v41) >> 5;
        if ( v42 > 0 )
        {
          v79 = v35;
          v44 = (size_t)v38;
          v45 = v41 + (v42 << 7);
          v46 = v37;
          while ( 1 )
          {
            if ( v44 == *(_QWORD *)(v41 + 8) && (!v44 || !memcmp(*(const void **)v41, v46, v44)) )
            {
              v35 = v79;
              goto LABEL_65;
            }
            if ( v44 == *(_QWORD *)(v41 + 40) && (!v44 || !memcmp(*(const void **)(v41 + 32), v46, v44)) )
              break;
            if ( v44 == *(_QWORD *)(v41 + 72) && (!v44 || !memcmp(*(const void **)(v41 + 64), v46, v44)) )
            {
              v35 = v79;
              v41 += 64;
              goto LABEL_65;
            }
            if ( v44 == *(_QWORD *)(v41 + 104) && (!v44 || !memcmp(*(const void **)(v41 + 96), v46, v44)) )
            {
              v35 = v79;
              v41 += 96;
              goto LABEL_65;
            }
            v41 += 128;
            if ( v41 == v45 )
            {
              v35 = v79;
              v43 = ((__int64)v82->m128i_i64 - v41) >> 5;
              goto LABEL_108;
            }
          }
          v35 = v79;
          v41 += 32;
          goto LABEL_65;
        }
LABEL_108:
        if ( v43 == 2 )
          goto LABEL_132;
        if ( v43 != 3 )
        {
          if ( v43 != 1 )
            goto LABEL_77;
          goto LABEL_111;
        }
        if ( !sub_13644D0((__int64)v73, v41) )
          break;
LABEL_65:
        if ( v82 == (__m128i *)v41 )
          goto LABEL_77;
        LODWORD(v71) = ((_DWORD)v71 != 0) + 3;
LABEL_67:
        v47 = *(_BYTE **)v34;
        v48 = *(_QWORD *)v34 + *(_QWORD *)(v34 + 8);
        v79 = *(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v35 + 144LL);
        v49 = *(_QWORD **)(v80 + 160);
        v91[0] = v73 + 2;
        sub_13650C0(v73, v47, v48);
        v50 = (__m128i *)v49[44];
        v51 = (__m128i *)(v49 + 43);
        v52 = (__m128i *)(v49 + 43);
        if ( !v50 )
          goto LABEL_97;
        v80 = (__int64)v35;
        v53 = v50;
        do
        {
          while ( sub_9C4B50((__int64)v53[2].m128i_i64, (__int64)v73) >= 0 )
          {
            v52 = v53;
            v53 = (__m128i *)v53[1].m128i_i64[0];
            if ( !v53 )
              goto LABEL_72;
          }
          v53 = (__m128i *)v53[1].m128i_i64[1];
        }
        while ( v53 );
LABEL_72:
        v35 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD))v80;
        if ( v51 == v52 || sub_9C4B50((__int64)v73, (__int64)v52[2].m128i_i64) < 0 )
        {
LABEL_97:
          v59 = (__int64)v52;
          v52 = (__m128i *)operator new(0x58u);
          v82 = v52 + 3;
          v60 = v73 + 2;
          v52[2].m128i_i64[0] = (__int64)v52[3].m128i_i64;
          if ( v91[0] == v60 )
          {
            v52[3] = _mm_load_si128(v92);
          }
          else
          {
            v52[2].m128i_i64[0] = (__int64)v91[0];
            v52[3].m128i_i64[0] = v92[0].m128i_i64[0];
          }
          v61 = v91[1];
          v52[5].m128i_i64[0] = 0;
          v52[4] = 0;
          v52[2].m128i_i64[1] = (__int64)v61;
          v91[1] = nullptr;
          v92[0].m128i_i8[0] = 0;
          v91[0] = v73 + 2;
          v84 = v52 + 2;
          v62 = sub_1337C40(v49 + 42, v59, (__int64)v52[2].m128i_i64);
          v80 = v62;
          if ( v63 )
          {
            if ( v62 || v51 == v63 )
            {
              v65 = 1;
            }
            else
            {
              v80 = (__int64)v63;
              v64 = sub_9C4B50((__int64)v84, (__int64)v63[2].m128i_i64);
              v63 = (__m128i *)v80;
              v65 = v64 >> 31;
            }
            std::_Rb_tree_insert_and_rebalance(v65, v52, v63, v49 + 43);
            ++v49[47];
          }
          else
          {
            v68 = (void **)v52[4].m128i_i64[1];
            v69 = (void **)v52[4].m128i_i64[0];
            if ( v68 != v69 )
            {
              do
              {
                while ( *v69 != v69 + 2 )
                {
                  operator delete(*v69);
                  v69 += 4;
                  if ( v69 == v68 )
                    goto LABEL_120;
                }
                v69 += 4;
              }
              while ( v68 != v69 );
LABEL_120:
              v69 = (void **)v52[4].m128i_i64[0];
            }
            if ( v69 )
              operator delete(v69);
            v70 = (__m128i *)v52[2].m128i_i64[0];
            if ( v82 != v70 )
              operator delete(v70);
            operator delete(v52);
            v52 = (__m128i *)v80;
          }
        }
        if ( v79(v35, v72, &v52[4]) )
        {
          if ( v91[0] != v73 + 2 )
            operator delete(v91[0]);
          (*(void (__fastcall **)(__int64 *, unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD), _QWORD *, __int64, __int64))(*(_QWORD *)v86 + 8LL))(
            v73,
            v86,
            v72,
            v76,
            v77);
          if ( (_DWORD)v71 == 3 )
            sub_1369290((__int64)v83, v73);
          else
            sub_1369290((__int64)v81, v73);
          if ( v91[0] )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v91[0] + 8LL))(v91[0]);
LABEL_93:
          v35 = v86;
          goto LABEL_77;
        }
        if ( v91[0] == v73 + 2 )
          goto LABEL_93;
        operator delete(v91[0]);
        v35 = v86;
LABEL_77:
        if ( v35 )
        {
          (*(void (__fastcall **)(unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v35 + 64LL))(v35);
          v33 = (_QWORD *)*v33;
          if ( !v33 )
            goto LABEL_79;
        }
        else
        {
          v33 = (_QWORD *)*v33;
          if ( !v33 )
            goto LABEL_79;
        }
      }
      v41 += 32;
LABEL_132:
      if ( !sub_13644D0((__int64)v73, v41) )
      {
        v41 += 32;
LABEL_111:
        if ( !sub_13644D0((__int64)v73, v41) )
          goto LABEL_77;
        goto LABEL_65;
      }
      goto LABEL_65;
    }
LABEL_79:
    sub_1369290((__int64)v83, v78);
    if ( *((_QWORD *)&v89 + 1) != (_QWORD)v89 )
    {
      *(_BYTE *)(*(_QWORD *)(v72[2] + 128LL) + 3LL) &= ~1u;
      v55 = *((__int64 **)&v89 + 1);
      for ( i = (__int64 *)v89; v55 != i; ++i )
      {
        v56 = i;
        sub_1369290((__int64)v83, v56);
      }
    }
    if ( (char *)((char *)v87[1] - (char *)v87[0]) == byte_8 )
    {
      v57 = *(_QWORD *)v87[0];
      *(_QWORD *)v87[0] = 0;
      *v74 = v57;
    }
    else
    {
      v71 = (size_t *)v87[1];
      v66 = v88;
      v88 = 0;
      v92[0].m128i_i64[0] = v66;
      *(__m128 *)v91 = _mm_loadh_ps((const double *)&v71);
      *(_OWORD *)v87 = 0;
      v67 = operator new(0x38u);
      sub_1392920(v67, v91);
      sub_12DC190((__int64 **)v91);
      *v74 = v67;
    }
    sub_12DC190(v81);
LABEL_20:
    v18 = (__int64 *)v87[1];
    v19 = (__int64 *)v87[0];
    if ( v87[1] != v87[0] )
    {
      do
      {
        while ( 1 )
        {
          v20 = *v19;
          if ( !*v19 )
            break;
          ++v19;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          if ( v18 == v19 )
            goto LABEL_23;
        }
        ++v19;
      }
      while ( v18 != v19 );
LABEL_23:
      v19 = (__int64 *)v87[0];
    }
    if ( v19 )
      operator delete(v19);
    if ( v85 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 8LL))(v85);
  }
  else
  {
    *v74 = 0;
  }
  return v74;
}
