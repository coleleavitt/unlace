__int64 __fastcall sub_F6D1F0(__int64 a1, const __m128i *a2)
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
  int v50; // r15d
  __int64 v51; // r12
  int v52; // ebp
  __int64 *v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE *v58; // rax
  __m128i v59; // xmm0
  char *v60; // rbx
  _BYTE *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __m128 v73; // [rsp+0h] [rbp-148h] BYREF
  __m128 v74; // [rsp+10h] [rbp-138h] BYREF
  __int64 *v75; // [rsp+28h] [rbp-120h]
  void **v76; // [rsp+30h] [rbp-118h]
  void **v77; // [rsp+38h] [rbp-110h]
  __m128i *v78; // [rsp+40h] [rbp-108h]
  __int64 v79; // [rsp+48h] [rbp-100h]
  __int64 *v80; // [rsp+50h] [rbp-F8h]
  __m128i *v81; // [rsp+58h] [rbp-F0h]
  void *v82; // [rsp+68h] [rbp-E0h] BYREF
  void *v83[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *v84; // [rsp+80h] [rbp-C8h] BYREF
  void *v85; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+98h] [rbp-B0h] BYREF
  __m128i v87; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v88; // [rsp+B0h] [rbp-98h]
  __int64 v89; // [rsp+B8h] [rbp-90h]
  void *ptr[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v92; // [rsp+D8h] [rbp-70h] BYREF

  v2 = a2;
  sub_971800((__int64)a2, "VFTable for ");
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v4 + 80);
  v6 = v5 + 8LL * *(unsigned int *)(v4 + 88);
  while ( v5 != v6 )
  {
    v7 = *(_QWORD **)(v6 - 8);
    v6 -= 8;
    sub_971800((__int64)a2, "'");
    sub_B53250(v7, a2);
    sub_971800((__int64)a2, "' in ");
  }
  sub_971800((__int64)a2, "'");
  sub_B53250(*(_QWORD **)(a1 + 16), a2);
  v8 = sub_971800((__int64)a2, "' (");
  v9 = sub_2257BD0(v8, *(unsigned int *)(a1 + 112));
  v10 = " entry";
  if ( *(_DWORD *)(a1 + 112) != 1 )
    v10 = " entries";
  v11 = sub_971800(v9, v10);
  v12 = ").\n";
  sub_971800(v11, ").\n");
  v16 = *(_DWORD *)(a1 + 112);
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    v18 = 0;
    v75 = (__int64 *)&v85;
    v73.m128_u64[0] = (unsigned __int64)"%4d | ";
    v78 = (__m128i *)v83;
    v74.m128_u64[0] = (unsigned __int64)&v87;
    v73 = _mm_loadh_ps((const double *)v73.m128_u64);
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&v73);
      LODWORD(v91) = v18;
      *(__m128i *)ptr = si128;
      sub_2258820(v2, ptr);
      v20 = (__int64 *)(*(_QWORD *)(a1 + 104) + 8 * v18);
      v21 = *v20;
      v22 = *v20 & 7;
      switch ( (_DWORD)v22 )
      {
        case 4:
          sub_BE1550(v75, 7u, v21 & 0xFFFFFFFFFFFFFFF8LL, 0);
          sub_22581D0(v2, v85, v86);
          if ( (*(_BYTE *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 82) & 8) != 0 )
            sub_971800((__int64)v2, " [pure]");
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(v21 & 0xFFFFFFFFFFFFFFF8LL)
                         + 82)
              & 0x40) != 0 )
            sub_971800((__int64)v2, " [deleted]");
          v83[0] = (void *)v18;
          v12 = (char *)(a1 + 688);
          sub_F59F80((__int64)ptr, (__int64 *)(a1 + 688), v78->m128i_i64);
          if ( !sub_F58710((__int64)ptr) )
          {
            v12 = (char *)v2;
            sub_F58160((__int64)ptr, (__int64)v2, 0);
          }
          if ( v85 != (void *)v74.m128_u64[0] )
            operator delete(v85);
          break;
        case 6:
          sub_B53250((_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL), v2);
          sub_971800((__int64)v2, "() [scalar deleting]");
          if ( (*(_BYTE *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 82) & 8) != 0 )
            sub_971800((__int64)v2, " [pure]");
          v12 = (char *)(a1 + 688);
          v85 = (void *)v18;
          sub_F59F80((__int64)ptr, (__int64 *)(a1 + 688), v75);
          if ( !sub_F58710((__int64)ptr) )
          {
            v12 = (char *)v2;
            sub_F58160((__int64)ptr, (__int64)v2, 0);
          }
          break;
        case 3:
          sub_B53250((_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL), v2);
          v12 = " RTTI";
          sub_971800((__int64)v2, " RTTI");
          break;
        default:
          v76 = (void **)sub_A3ED80(*(_QWORD *)(a1 + 8));
          v77 = (void **)v76[4];
          v85 = (void *)v74.m128_u64[0];
          sub_F56990(v75, "Unexpected vftable component type %0 for component number %1", (__int64)"");
          HIDWORD(ptr[0]) = 0;
          HIBYTE(v23) = BYTE1(ptr[0]) & 0xFE;
          LOBYTE(v23) = -20;
          LOWORD(ptr[0]) = v23;
          ptr[1] = &v92;
          if ( v85 == (void *)v74.m128_u64[0] )
          {
            v92 = _mm_load_si128(&v87);
          }
          else
          {
            ptr[1] = v85;
            v92.m128i_i64[0] = v87.m128i_i64[0];
          }
          v91 = v86;
          v24 = sub_FB1C40(v77, ptr);
          if ( ptr[1] != &v92 )
          {
            LODWORD(v77) = v24;
            operator delete(ptr[1]);
            v24 = (unsigned int)v77;
          }
          sub_FA3370(ptr, v76, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL), v24);
          sub_AC60B0((unsigned __int8 **)ptr, v18, 3u);
          v12 = (char *)(*v20 & 7);
          sub_AC60B0((unsigned __int8 **)ptr, (__int64)v12, 2u);
          sub_AC6300((__int64)ptr);
          break;
      }
      v25 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v25 >= v2[1].m128i_i64[1] )
      {
        v12 = byte_9 + 1;
        sub_2257CD0(v2, 10);
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
    sub_2257CD0(v2, 10);
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
  v77 = &v85;
  v87.m128i_i64[1] = (__int64)&v86;
  v88 = &v86;
  v31 = *(unsigned int *)(a1 + 728);
  v79 = a1 + 712;
  LODWORD(v86) = 0;
  v81 = (__m128i *)ptr;
  v87.m128i_i64[0] = 0;
  v89 = 0;
  sub_F5B6B0((__m128 *)ptr, v30, &v30[10 * v31], a1 + 712, 0);
  v32 = (__int64 *)ptr[0];
  v33 = (__int64 *)ptr[1];
  v73.m128_u64[0] = sub_F5B720(a1 + 712);
  if ( (__int64 *)v73.m128_u64[0] == v32 )
    goto LABEL_53;
  v34 = v81;
  v74.m128_u64[0] = (unsigned __int64)v2;
  v35 = v33;
  v36 = v32;
  do
  {
    while ( 1 )
    {
      v37 = *v36;
      sub_BE1550(v83, 7u, *v36, 0);
      ptr[0] = &v91;
      sub_F56710(v34, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
      v92.m128i_i64[1] = v37;
      sub_F63050(v77, v34);
      if ( ptr[0] != &v91 )
        operator delete(ptr[0]);
      if ( v83[0] != &v84 )
        operator delete(v83[0]);
      if ( v36 + 10 != v35 )
        break;
LABEL_91:
      v36 = v35;
      if ( (__int64 *)v73.m128_u64[0] == v35 )
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
  while ( (__int64 *)v73.m128_u64[0] != v36 );
LABEL_52:
  v2 = (const __m128i *)v74.m128_u64[0];
LABEL_53:
  v76 = (void **)v87.m128i_i64[1];
  if ( (void **)v87.m128i_i64[1] != v77 + 1 )
  {
    v80 = (__int64 *)&v82;
    v73.m128_u64[0] = (unsigned __int64)v83;
    v78 = v81 + 1;
    while ( 1 )
    {
      v82 = v76[8];
      v41 = sub_F60130(v79, v80);
      ptr[1] = (void *)0x100000000LL;
      v42 = *((_DWORD *)v41 + 2);
      ptr[0] = v78;
      v43 = v78;
      v44 = v78;
      if ( v42 )
      {
        sub_F5AEF0(v81->m128i_i64, v41);
        v44 = (__m128i *)ptr[0];
        v43 = (__m128i *)((char *)ptr[0] + 56 * LODWORD(ptr[1]));
      }
      sub_F5C8A0((__int64 *)v73.m128_u64[0], v44, (__int64)v43);
      if ( v84 )
        sub_F6CC90(v44, v43, (const __m128i *)v84, (__int64)v83[1]);
      else
        sub_F6D150(v44, (__int64)v43);
      operator delete(v84, (const std::nothrow_t *)&std::nothrow);
      v45 = sub_971800((__int64)v2, "Thunks for '");
      v46 = sub_22581D0(v45, v76[4], v76[5]);
      v47 = sub_971800(v46, "' (");
      sub_2257BD0(v47, LODWORD(ptr[1]));
      v48 = " entries";
      if ( LODWORD(ptr[1]) == 1 )
        v48 = " entry";
      v49 = sub_971800((__int64)v2, v48);
      sub_971800(v49, ").\n");
      v50 = (int)ptr[1];
      if ( LODWORD(ptr[1]) )
        break;
LABEL_83:
      v61 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v61 >= v2[1].m128i_i64[1] )
      {
        sub_2257CD0(v2, 10);
      }
      else
      {
        v2[2].m128i_i64[0] = (__int64)(v61 + 1);
        *v61 = 10;
      }
      if ( ptr[0] != v78 )
        free(ptr[0]);
      v76 = (void **)std::_Rb_tree_increment();
      if ( v76 == v77 + 1 )
        goto LABEL_88;
    }
    v51 = 0;
    v52 = 0;
    v74.m128_u64[0] = (unsigned __int64)"%4d | ";
    v74 = _mm_loadh_ps((const double *)v74.m128_u64);
    while ( 2 )
    {
      v59 = _mm_load_si128((const __m128i *)&v74);
      LODWORD(v84) = v52;
      v60 = (char *)ptr[0] + v51;
      *(__m128i *)v83 = v59;
      sub_2258820(v2, v73.m128_u64[0]);
      if ( *((_QWORD *)v60 + 3) || !sub_F58120((_QWORD *)v60 + 4) || *((_QWORD *)v60 + 5) )
      {
        v53 = (__int64 *)sub_971800((__int64)v2, "[return adjustment (to type '");
        v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 5) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v54 + 16) - 25 > 1 )
        {
          v75 = v53;
          v54 = sub_F3F310(v54);
          v53 = v75;
        }
        v55 = sub_F52FB0(
                (unsigned __int64)v53,
                *(_QWORD *)&byte_8[*(_QWORD *)(v54 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v54 + 24) & 0xFFFFFFFFFFFFFFF0LL]
               | (unsigned __int8)*(_QWORD *)(v54 + 24))
              & 7);
        sub_971800(v55, "'): ");
        if ( *((_DWORD *)v60 + 8) )
        {
          v64 = sub_971800((__int64)v2, "vbptr at offset ");
          v65 = sub_2257BD0(v64, *((unsigned int *)v60 + 8));
          sub_971800(v65, ", ");
        }
        if ( *((_DWORD *)v60 + 9) )
        {
          v62 = sub_971800((__int64)v2, "vbase #");
          v63 = sub_2257BD0(v62, *((unsigned int *)v60 + 9));
          sub_971800(v63, ", ");
        }
        v56 = sub_2257BF0(v2, *((_QWORD *)v60 + 3));
        sub_971800(v56, " non-virtual]");
        if ( *(_QWORD *)v60 || !sub_F58130(v60 + 8) )
        {
          sub_971800((__int64)v2, "\n       ");
          goto LABEL_72;
        }
      }
      else if ( *(_QWORD *)v60 || !sub_F58130(v60 + 8) )
      {
LABEL_72:
        sub_971800((__int64)v2, "[this adjustment: ");
        if ( !sub_F58130(v60 + 8) )
        {
          v66 = sub_971800((__int64)v2, "vtordisp at ");
          v67 = sub_2257BF0(v66, *((int *)v60 + 2));
          sub_971800(v67, ", ");
          if ( *((_DWORD *)v60 + 3) )
          {
            v68 = sub_971800((__int64)v2, "vbptr at ");
            v69 = sub_2257BF0(v68, *((int *)v60 + 3));
            sub_971800(v69, " to the left,");
            v70 = sub_971800((__int64)v2, "\n       ");
            v71 = sub_971800(v70, " vboffset at ");
            v72 = sub_2257BF0(v71, *((int *)v60 + 4));
            sub_971800(v72, " in the vbtable, ");
          }
        }
        v57 = sub_2257BF0(v2, *(_QWORD *)v60);
        sub_971800(v57, " non-virtual]");
      }
      v58 = (_BYTE *)v2[2].m128i_i64[0];
      if ( (unsigned __int64)v58 >= v2[1].m128i_i64[1] )
      {
        ++v52;
        v51 += 56;
        sub_2257CD0(v2, 10);
        if ( v52 == v50 )
          goto LABEL_83;
      }
      else
      {
        ++v52;
        v51 += 56;
        v2[2].m128i_i64[0] = (__int64)(v58 + 1);
        *v58 = 10;
        if ( v52 == v50 )
          goto LABEL_83;
      }
      continue;
    }
  }
LABEL_88:
  v12 = (char *)v87.m128i_i64[0];
  sub_F5AE80((__int64)v77, v87.m128i_i64[0]);
LABEL_21:
  result = v2[1].m128i_i64[0];
  if ( v2[2].m128i_i64[0] != result )
    return sub_2257CB0(v2, v12, v28, v13, v14, v15, v73.m128_u64[0], v73.m128_u64[1], v74.m128_u64[0]);
  return result;
}

