__int64 __fastcall sub_F90F30(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r14
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rbx
  __m128i si128; // xmm1
  __int64 *v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  __int16 v23; // ax
  unsigned int v24; // eax
  _BYTE *v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // rdx
  __int64 result; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // r12
  __int64 *v33; // r13
  __m128i *v34; // rbp
  __int64 *v35; // r14
  __int64 *v36; // r13
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // rax
  int v42; // esi
  __m128i *v43; // rbp
  __m128i *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  const char *v48; // rsi
  __int64 v49; // rax
  const char *v50; // rsi
  int v51; // r15d
  __int64 v52; // r12
  int v53; // ebp
  __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _BYTE *v60; // rax
  __m128i v61; // xmm0
  char *v62; // rbx
  _BYTE *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __m128 v75; // [rsp+0h] [rbp-148h] BYREF
  __m128 v76; // [rsp+10h] [rbp-138h] BYREF
  __int64 *v77; // [rsp+28h] [rbp-120h]
  void **v78; // [rsp+30h] [rbp-118h]
  void **v79; // [rsp+38h] [rbp-110h]
  __m128i *v80; // [rsp+40h] [rbp-108h]
  __int64 v81; // [rsp+48h] [rbp-100h]
  __int64 *v82; // [rsp+50h] [rbp-F8h]
  __m128i *v83; // [rsp+58h] [rbp-F0h]
  void *v84; // [rsp+68h] [rbp-E0h] BYREF
  void *v85[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *v86; // [rsp+80h] [rbp-C8h] BYREF
  void *v87; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+98h] [rbp-B0h] BYREF
  __m128i v89; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v90; // [rsp+B0h] [rbp-98h]
  __int64 v91; // [rsp+B8h] [rbp-90h]
  void *ptr[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v94; // [rsp+D8h] [rbp-70h] BYREF

  v2 = a2;
  sub_995540((__int64)a2, "VFTable for ");
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v4 + 80);
  v6 = v5 + 8LL * *(unsigned int *)(v4 + 88);
  while ( v5 != v6 )
  {
    v7 = *(_QWORD **)(v6 - 8);
    v6 -= 8;
    sub_995540((__int64)a2, "'");
    sub_B76F90(v7, a2);
    sub_995540((__int64)a2, "' in ");
  }
  sub_995540((__int64)a2, "'");
  sub_B76F90(*(_QWORD **)(a1 + 16), a2);
  v8 = sub_995540((__int64)a2, "' (");
  v9 = sub_227B910(v8, *(unsigned int *)(a1 + 112));
  v10 = " entry";
  if ( *(_DWORD *)(a1 + 112) != 1 )
    v10 = " entries";
  v11 = sub_995540(v9, v10);
  v12 = ").\n";
  sub_995540(v11, ").\n");
  v16 = *(_DWORD *)(a1 + 112);
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    v18 = 0;
    v77 = (__int64 *)&v87;
    v75.m128_u64[0] = (unsigned __int64)"%4d | ";
    v80 = (__m128i *)v85;
    v76.m128_u64[0] = (unsigned __int64)&v89;
    v75 = _mm_loadh_ps((const double *)v75.m128_u64);
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&v75);
      LODWORD(v93) = v18;
      *(__m128i *)ptr = si128;
      sub_227C560(v2, ptr);
      v20 = (__int64 *)(*(_QWORD *)(a1 + 104) + 8 * v18);
      v21 = *v20;
      v22 = *v20 & 7;
      switch ( (_DWORD)v22 )
      {
        case 4:
          sub_C05290(v77, 7u, v21 & 0xFFFFFFFFFFFFFFF8LL, 0);
          sub_227BF10(v2, v87, v88);
          if ( (*(_BYTE *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 82) & 8) != 0 )
            sub_995540((__int64)v2, " [pure]");
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(v21 & 0xFFFFFFFFFFFFFFF8LL)
                         + 82)
              & 0x40) != 0 )
            sub_995540((__int64)v2, " [deleted]");
          v85[0] = (void *)v18;
          v12 = (char *)(a1 + 688);
          sub_F7DCC0((__int64)ptr, (__int64 *)(a1 + 688), v80->m128i_i64);
          if ( !sub_F7C450((__int64)ptr) )
          {
            v12 = (char *)v2;
            sub_F7BEA0((__int64)ptr, (__int64)v2, 0);
          }
          if ( v87 != (void *)v76.m128_u64[0] )
            operator delete(v87);
          break;
        case 6:
          sub_B76F90((_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL), v2);
          sub_995540((__int64)v2, "() [scalar deleting]");
          if ( (*(_BYTE *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 82) & 8) != 0 )
            sub_995540((__int64)v2, " [pure]");
          v12 = (char *)(a1 + 688);
          v87 = (void *)v18;
          sub_F7DCC0((__int64)ptr, (__int64 *)(a1 + 688), v77);
          if ( !sub_F7C450((__int64)ptr) )
          {
            v12 = (char *)v2;
            sub_F7BEA0((__int64)ptr, (__int64)v2, 0);
          }
          break;
        case 3:
          sub_B76F90((_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL), v2);
          v12 = " RTTI";
          sub_995540((__int64)v2, " RTTI");
          break;
        default:
          v78 = (void **)sub_A62AC0(*(_QWORD *)(a1 + 8));
          v79 = (void **)v78[4];
          v87 = (void *)v76.m128_u64[0];
          sub_F7A6D0(v77, "Unexpected vftable component type %0 for component number %1", (__int64)"");
          HIDWORD(ptr[0]) = 0;
          HIBYTE(v23) = BYTE1(ptr[0]) & 0xFE;
          LOBYTE(v23) = -20;
          LOWORD(ptr[0]) = v23;
          ptr[1] = &v94;
          if ( v87 == (void *)v76.m128_u64[0] )
          {
            v94 = _mm_load_si128(&v89);
          }
          else
          {
            ptr[1] = v87;
            v94.m128i_i64[0] = v89.m128i_i64[0];
          }
          v93 = v88;
          v24 = sub_FD5980(v79, ptr);
          if ( ptr[1] != &v94 )
          {
            LODWORD(v79) = v24;
            operator delete(ptr[1]);
            v24 = (unsigned int)v79;
          }
          sub_FC70B0(ptr, v78, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL), v24);
          sub_AE9DF0((unsigned __int8 **)ptr, v18, 3u);
          v12 = (char *)(*v20 & 7);
          sub_AE9DF0((unsigned __int8 **)ptr, (__int64)v12, 2u);
          sub_AEA040((__int64)ptr);
          break;
      }
      v25 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v25 >= v2[1].m128i_i64[1] )
      {
        v12 = byte_9 + 1;
        sub_227BA10(v2, 10);
        v26 = v18 + 1;
        if ( v17 == v18 )
          break;
      }
      else
      {
        v2[2].m128i_i64[0] = (__int64)(v25 + 1);
        *v25 = 10;
        v26 = v18 + 1;
        if ( v17 == v18 )
          break;
      }
      v18 = v26;
    }
  }
  v27 = (_BYTE *)v2[2].m128i_i64[0];
  if ( (unsigned __int64)v27 >= v2[1].m128i_i64[1] )
  {
    v12 = byte_9 + 1;
    sub_227BA10(v2, 10);
    if ( !*(_DWORD *)(a1 + 720) )
      goto LABEL_21;
  }
  else
  {
    v28 = v27 + 1;
    v2[2].m128i_i64[0] = (__int64)(v27 + 1);
    *v27 = 10;
    if ( !*(_DWORD *)(a1 + 720) )
      goto LABEL_21;
  }
  v30 = *(_QWORD **)(a1 + 712);
  v79 = &v87;
  v89.m128i_i64[1] = (__int64)&v88;
  v90 = &v88;
  v31 = *(unsigned int *)(a1 + 728);
  v81 = a1 + 712;
  LODWORD(v88) = 0;
  v83 = (__m128i *)ptr;
  v89.m128i_i64[0] = 0;
  v91 = 0;
  sub_F7F3F0((__m128 *)ptr, v30, &v30[10 * v31], a1 + 712, 0);
  v32 = (__int64 *)ptr[0];
  v33 = (__int64 *)ptr[1];
  v75.m128_u64[0] = sub_F7F460(a1 + 712);
  if ( (__int64 *)v75.m128_u64[0] == v32 )
    goto LABEL_53;
  v34 = v83;
  v76.m128_u64[0] = (unsigned __int64)v2;
  v35 = v33;
  v36 = v32;
  do
  {
    while ( 1 )
    {
      v37 = *v36;
      sub_C05290(v85, 7u, *v36, 0);
      ptr[0] = &v93;
      sub_F7A450(v34, (_BYTE *)v85[0], (__int64)v85[0] + (unsigned __int64)v85[1]);
      v94.m128i_i64[1] = v37;
      sub_F86D90(v79, v34);
      if ( ptr[0] != &v93 )
        operator delete(ptr[0]);
      if ( v85[0] != &v86 )
        operator delete(v85[0]);
      if ( v36 + 10 != v35 )
        break;
LABEL_91:
      v36 = v35;
      if ( (__int64 *)v75.m128_u64[0] == v35 )
        goto LABEL_52;
    }
    v38 = v36[10];
    if ( v38 == -4096 || v38 == -8192 )
    {
      v39 = v36 + 20;
      while ( 1 )
      {
        v36 = v39;
        if ( v39 == v35 )
          goto LABEL_91;
        v40 = *v39;
        v39 += 10;
        if ( v40 != -8192 && v40 != -4096 )
          goto LABEL_51;
      }
    }
    v36 += 10;
LABEL_51:
    ;
  }
  while ( (__int64 *)v75.m128_u64[0] != v36 );
LABEL_52:
  v2 = (const __m128i *)v76.m128_u64[0];
LABEL_53:
  v78 = (void **)v89.m128i_i64[1];
  if ( (void **)v89.m128i_i64[1] != v79 + 1 )
  {
    v82 = (__int64 *)&v84;
    v75.m128_u64[0] = (unsigned __int64)v85;
    v80 = v83 + 1;
    while ( 1 )
    {
      v84 = v78[8];
      v41 = sub_F83E70(v81, v82);
      ptr[1] = (void *)0x100000000LL;
      v42 = *((_DWORD *)v41 + 2);
      ptr[0] = v80;
      v43 = v80;
      v44 = v80;
      if ( v42 )
      {
        sub_F7EC30(v83->m128i_i64, v41);
        v44 = (__m128i *)ptr[0];
        v43 = (__m128i *)((char *)ptr[0] + 56 * LODWORD(ptr[1]));
      }
      sub_F805E0((__int64 *)v75.m128_u64[0], v44, (__int64)v43);
      if ( v86 )
        sub_F909D0(v44, v43, (const __m128i *)v86, (__int64)v85[1]);
      else
        sub_F90E90(v44, (__int64)v43);
      operator delete(v86, (const std::nothrow_t *)&std::nothrow);
      v45 = sub_995540((__int64)v2, "Thunks for '");
      v46 = sub_227BF10(v45, v78[4], v78[5]);
      v47 = sub_995540(v46, "' (");
      sub_227B910(v47, LODWORD(ptr[1]));
      v48 = " entries";
      if ( LODWORD(ptr[1]) == 1 )
        v48 = " entry";
      v49 = sub_995540((__int64)v2, v48);
      v50 = ").\n";
      sub_995540(v49, ").\n");
      v51 = (int)ptr[1];
      if ( LODWORD(ptr[1]) )
        break;
LABEL_83:
      v63 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v63 >= v2[1].m128i_i64[1] )
      {
        v50 = byte_9 + 1;
        sub_227BA10(v2, 10);
      }
      else
      {
        v2[2].m128i_i64[0] = (__int64)(v63 + 1);
        *v63 = 10;
      }
      if ( ptr[0] != v80 )
        free(ptr[0]);
      v78 = (void **)std::_Rb_tree_increment(v78, v50);
      if ( v78 == v79 + 1 )
        goto LABEL_88;
    }
    v52 = 0;
    v53 = 0;
    v76.m128_u64[0] = (unsigned __int64)"%4d | ";
    v76 = _mm_loadh_ps((const double *)v76.m128_u64);
    while ( 2 )
    {
      v61 = _mm_load_si128((const __m128i *)&v76);
      LODWORD(v86) = v53;
      v50 = (const char *)v75.m128_u64[0];
      v62 = (char *)ptr[0] + v52;
      *(__m128i *)v85 = v61;
      sub_227C560(v2, v75.m128_u64[0]);
      if ( *((_QWORD *)v62 + 3) || !sub_F7BE60((_QWORD *)v62 + 4) || *((_QWORD *)v62 + 5) )
      {
        v54 = (__int64 *)sub_995540((__int64)v2, "[return adjustment (to type '");
        v55 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v62 + 5) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
        v56 = (unsigned int)*(unsigned __int8 *)(v55 + 16) - 25;
        if ( (unsigned int)v56 > 1 )
        {
          v77 = v54;
          v55 = sub_F63050(v55, "[return adjustment (to type '", v56, v54);
          v54 = v77;
        }
        v57 = sub_F76CF0(
                (unsigned __int64)v54,
                *(_QWORD *)&byte_8[*(_QWORD *)(v55 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v55 + 24) & 0xFFFFFFFFFFFFFFF0LL]
               | (unsigned __int8)*(_QWORD *)(v55 + 24))
              & 7);
        sub_995540(v57, "'): ");
        if ( *((_DWORD *)v62 + 8) )
        {
          v66 = sub_995540((__int64)v2, "vbptr at offset ");
          v67 = sub_227B910(v66, *((unsigned int *)v62 + 8));
          sub_995540(v67, ", ");
        }
        if ( *((_DWORD *)v62 + 9) )
        {
          v64 = sub_995540((__int64)v2, "vbase #");
          v65 = sub_227B910(v64, *((unsigned int *)v62 + 9));
          sub_995540(v65, ", ");
        }
        v58 = sub_227B930(v2, *((_QWORD *)v62 + 3));
        v50 = " non-virtual]";
        sub_995540(v58, " non-virtual]");
        if ( *(_QWORD *)v62 || !sub_F7BE70(v62 + 8) )
        {
          sub_995540((__int64)v2, "\n       ");
          goto LABEL_72;
        }
      }
      else if ( *(_QWORD *)v62 || !sub_F7BE70(v62 + 8) )
      {
LABEL_72:
        sub_995540((__int64)v2, "[this adjustment: ");
        if ( !sub_F7BE70(v62 + 8) )
        {
          v68 = sub_995540((__int64)v2, "vtordisp at ");
          v69 = sub_227B930(v68, *((int *)v62 + 2));
          sub_995540(v69, ", ");
          if ( *((_DWORD *)v62 + 3) )
          {
            v70 = sub_995540((__int64)v2, "vbptr at ");
            v71 = sub_227B930(v70, *((int *)v62 + 3));
            sub_995540(v71, " to the left,");
            v72 = sub_995540((__int64)v2, "\n       ");
            v73 = sub_995540(v72, " vboffset at ");
            v74 = sub_227B930(v73, *((int *)v62 + 4));
            sub_995540(v74, " in the vbtable, ");
          }
        }
        v59 = sub_227B930(v2, *(_QWORD *)v62);
        v50 = " non-virtual]";
        sub_995540(v59, " non-virtual]");
      }
      v60 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v60 >= v2[1].m128i_i64[1] )
      {
        v50 = byte_9 + 1;
        ++v53;
        v52 += 56;
        sub_227BA10(v2, 10);
        if ( v53 == v51 )
          goto LABEL_83;
      }
      else
      {
        ++v53;
        v52 += 56;
        v2[2].m128i_i64[0] = (__int64)(v60 + 1);
        *v60 = 10;
        if ( v53 == v51 )
          goto LABEL_83;
      }
      continue;
    }
  }
LABEL_88:
  v12 = (char *)v89.m128i_i64[0];
  sub_F7EBC0((__int64)v79, v89.m128i_i64[0]);
LABEL_21:
  result = v2[1].m128i_i64[0];
  if ( v2[2].m128i_i64[0] != result )
    return sub_227B9F0(v2, v12, v28, v13, v14, v15, v75.m128_u64[0], v75.m128_u64[1], v76.m128_u64[0]);
  return result;
}
