__int64 __fastcall sub_FCDD0(__int64 a1, int a2)
{
  __int64 v2; // r12
  int v4; // eax
  unsigned int v5; // r12d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __m128i *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 *v28; // rdi
  int v29; // eax
  __int64 v30; // r15
  int **v31; // r14
  int *v32; // rbp
  int v33; // eax
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rbp
  unsigned __int64 v42; // r14
  void *v43; // r12
  __m128i v44; // xmm0
  int v45; // eax
  int flags; // eax
  __int32 v47; // eax
  __int64 v48; // rsi
  int v49; // eax
  int *v50; // rax
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  int v55; // ebp
  _QWORD *v56; // rbp
  int v57; // r14d
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 **v60; // rsi
  unsigned int v61; // ebp
  __int64 v62; // r12
  char v63; // al
  char v64; // bp
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __m128i v71; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v72; // [rsp+10h] [rbp-1D8h]
  __int64 v73; // [rsp+18h] [rbp-1D0h] BYREF
  unsigned __int64 *v74; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v75; // [rsp+28h] [rbp-1C0h]
  __m128i v76; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v77; // [rsp+40h] [rbp-1A8h]
  __int64 v78; // [rsp+48h] [rbp-1A0h]
  __int128 v79; // [rsp+50h] [rbp-198h]
  __int64 v80; // [rsp+60h] [rbp-188h]
  __int128 v81; // [rsp+68h] [rbp-180h]
  __int64 v82; // [rsp+78h] [rbp-170h]
  __int64 v83; // [rsp+80h] [rbp-168h]
  __int64 v84; // [rsp+88h] [rbp-160h]
  __int64 v85; // [rsp+90h] [rbp-158h]
  __int128 v86; // [rsp+98h] [rbp-150h]
  __int64 v87; // [rsp+A8h] [rbp-140h]
  __int128 v88; // [rsp+B0h] [rbp-138h]
  __int128 v89; // [rsp+C0h] [rbp-128h]
  __int64 v90; // [rsp+D0h] [rbp-118h]
  __int64 v91; // [rsp+D8h] [rbp-110h]
  __int64 v92; // [rsp+E0h] [rbp-108h]
  __int128 v93; // [rsp+E8h] [rbp-100h]
  __int64 v94; // [rsp+F8h] [rbp-F0h]
  __int128 v95; // [rsp+100h] [rbp-E8h]
  __int64 v96; // [rsp+110h] [rbp-D8h]
  __int64 v97; // [rsp+118h] [rbp-D0h]
  __int64 v98; // [rsp+120h] [rbp-C8h]
  __int64 v99; // [rsp+128h] [rbp-C0h]
  __int64 v100; // [rsp+130h] [rbp-B8h]
  __int64 v101; // [rsp+138h] [rbp-B0h]
  __int128 v102; // [rsp+140h] [rbp-A8h]
  int v103; // [rsp+150h] [rbp-98h]
  __int16 v104; // [rsp+154h] [rbp-94h]
  __m128i si128; // [rsp+158h] [rbp-90h] BYREF
  __int128 v106; // [rsp+168h] [rbp-80h]
  __m128i v107; // [rsp+178h] [rbp-70h]
  __int64 v108; // [rsp+188h] [rbp-60h]
  int v109; // [rsp+190h] [rbp-58h]
  int v110; // [rsp+194h] [rbp-54h]
  int v111; // [rsp+198h] [rbp-50h]
  __int16 v112; // [rsp+19Ch] [rbp-4Ch]
  char v113; // [rsp+19Eh] [rbp-4Ah]
  unsigned __int64 v114; // [rsp+1A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v114 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 32) == 11 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    v5 = 0;
    if ( (v4 & 0x800) == 0 )
    {
      BYTE1(v4) |= 8u;
      v5 = 1;
      *(_DWORD *)(a1 + 24) = v4;
    }
    return v5;
  }
  v7 = *(_QWORD *)(a1 + 64);
  v89 = 0;
  v8 = *(_QWORD *)(v7 + 1496);
  v73 = 0;
  v78 = 0;
  v77 = v8;
  v9 = *(_QWORD *)(a1 + 480);
  v76 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v7);
  v80 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v87 = 0;
  v90 = 0;
  v91 = v9;
  v92 = 0;
  v94 = 0;
  v96 = a1;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v103 = -1;
  v79 = 0;
  v81 = 0;
  v86 = 0;
  v88 = 0;
  v93 = 0;
  v95 = 0;
  v102 = 0;
  v104 = 0;
  v110 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425BA0);
  v108 = 0;
  v109 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v106 = -1;
  v107 = 0;
  v10 = sub_1CD070(v7, *(_QWORD *)(v2 + 24));
  v12 = *(_DWORD *)(v2 + 4);
  if ( (v12 & 0x20) != 0 )
    v10 += *(int *)(*(_QWORD *)(v7 + 1504) + 80LL);
  if ( (v12 & 0x40) != 0 )
    v10 += *(int *)(*(_QWORD *)(a1 + 64) + 116LL);
  v13 = *(_QWORD *)(a1 + 480);
  v107 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  sub_33ACA0(v13, 16, a1, (unsigned int)&si128, (unsigned int)&v73, v11);
  if ( !v73 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      HIDWORD(v108) = get_tinfo_property();
    }
    else
    {
      sub_F55C0(&v76, *(_QWORD *)(a1 + 56), 0);
      if ( !si128.m128i_i8[0] )
        goto LABEL_60;
      if ( (a2 & 2) == 0 )
      {
        v70 = get_tinfo_property() & 0xFFFFFFF0;
        if ( v70 == 64 || v70 == 208 )
          goto LABEL_77;
      }
    }
    v45 = *(_DWORD *)(a1 + 24);
    BYTE1(v45) &= ~2u;
    LOBYTE(v45) = v45 | 0x80;
    *(_DWORD *)(a1 + 24) = v45;
    v73 = sub_F0440((__int64)&v76);
    if ( v73 )
      goto LABEL_10;
LABEL_60:
    v5 = 2 * (unsigned __int8)v112;
    goto LABEL_30;
  }
LABEL_10:
  sub_11A960(*(_QWORD *)(a1 + 56) + 64LL);
  v14 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v14 + 68) = sub_32CE30(
                            v73,
                            *(_QWORD *)(a1 + 64),
                            v15,
                            v16,
                            v17,
                            v18,
                            v71.m128i_i32[0],
                            v71.m128i_i32[2],
                            v72,
                            v73,
                            (_DWORD)v74,
                            v75,
                            v76.m128i_i32[0],
                            v76.m128i_i32[2],
                            v77,
                            v78,
                            v79,
                            DWORD2(v79),
                            v80);
  v19 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v19 + 72) = v73;
  *(_BYTE *)(v19 + 64) = 8;
  if ( (unsigned __int8)sub_11A310(*(_QWORD *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v41 = v73;
    sub_63FD0((__int64 *)(v73 + 240), (__int64 *)(v73 + 96));
    v42 = *(_QWORD *)(v41 + 120);
    v43 = 0;
    if ( v42 )
    {
      v43 = (void *)qalloc_or_throw();
      memcpy(v43, *(const void **)(v41 + 112), 16 * v42);
    }
    v44 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
    if ( *(_QWORD *)(v41 + 256) )
    {
      *(_QWORD *)(v41 + 264) = 0;
      v71 = v44;
      qfree();
      v44 = _mm_load_si128(&v71);
    }
    *(_QWORD *)(v41 + 256) = v43;
    *(__m128i *)(v41 + 264) = v44;
    sub_E66D0(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56));
  }
  if ( *(int *)(*(_QWORD *)(a1 + 56) + 68LL) <= 0 )
    goto LABEL_29;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 65LL) |= 2u;
    v20 = *(__m128i **)(a1 + 64);
    v74 = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) + 24LL);
    sub_C70D0(v20 + 87, v74, &v74);
    copy_tinfo_t();
    if ( *((_QWORD *)&v106 + 1) == -1
      || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
      && !(unsigned __int8)is_spec_ea() )
    {
      v21 = si128.m128i_i64[1];
    }
    else
    {
      v21 = *((_QWORD *)&v106 + 1);
    }
    v22 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v22 + 40) == v21 )
      *(_DWORD *)(*(_QWORD *)(v22 + 944) + 68LL) |= 1u;
    LOBYTE(v23) = 2;
  }
  else
  {
    v23 = *(_DWORD *)(v73 + 80);
    if ( v23 == 2 )
    {
      v51 = *(_QWORD *)(v73 + 88);
      v52 = *(_DWORD **)v51;
      v53 = *(_QWORD *)v51 + 24LL * *(_QWORD *)(v51 + 8);
      if ( v52 == (_DWORD *)v53 )
      {
LABEL_75:
        LOBYTE(v23) = 3;
      }
      else
      {
        while ( *v52 != 1 )
        {
          v52 += 6;
          if ( (_DWORD *)v53 == v52 )
            goto LABEL_75;
        }
      }
    }
    else
    {
      LOBYTE(v23) = (v23 != 1) | 2;
    }
  }
  v24 = sub_E31E0(a1, *(_QWORD *)(a1 + 56), v23);
  v28 = *(unsigned __int64 **)(a1 + 56);
  if ( !v24 )
  {
    sub_11A960(v28 + 8);
LABEL_77:
    v5 = 0;
    goto LABEL_30;
  }
  v29 = *((_DWORD *)v28 + 1);
  if ( (v29 & 0x8000) != 0 )
  {
    BYTE1(v29) &= ~0x80u;
    *((_DWORD *)v28 + 1) = v29;
    v25 = *(_QWORD *)(a1 + 376);
    if ( !(_DWORD)v25 )
    {
      v54 = *(_QWORD *)(a1 + 368);
      v55 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v25 + 1) )
      {
        v69 = qvector_reserve();
        *(_QWORD *)(a1 + 368) = v69;
        v25 = *(_QWORD *)(a1 + 376);
        v54 = v69;
      }
      *(_DWORD *)(v54 + 4 * v25) = v55;
      v56 = *(_QWORD **)(a1 + 8);
      ++*(_QWORD *)(a1 + 376);
      v57 = *(_DWORD *)(a1 + 72);
      v58 = v56[44];
      v59 = v56[43];
      v25 = v58 + 1;
      if ( v56[45] < (unsigned __int64)(v58 + 1) )
      {
        v68 = qvector_reserve();
        v56[43] = v68;
        v59 = v68;
        v58 = v56[44];
      }
      *(_DWORD *)(v59 + 4 * v58) = v57;
      ++v56[44];
    }
    v28 = *(unsigned __int64 **)(a1 + 56);
  }
  if ( *((_BYTE *)v28 + 64) != 15 )
    goto LABEL_29;
  v30 = *(_QWORD *)(a1 + 64);
  v31 = *(int ***)(v28[9] + 8);
  v32 = *v31;
  v33 = **v31;
  if ( v33 == 1 )
  {
    if ( v31[1] == (int *)&byte_1 )
      goto LABEL_29;
  }
  else if ( (unsigned int)(v33 - 3) <= 1 )
  {
    v47 = *((_DWORD *)v28 + 17);
    v28 = *(unsigned __int64 **)(v30 + 1504);
    v48 = *((unsigned __int16 *)v32 + 4);
    v71.m128i_i32[0] = v47;
    v49 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64))(*v28 + 32))(v28, v48);
    if ( v71.m128i_i32[0] <= 2 * v49 )
    {
      v50 = v31[1];
      if ( v50 == (int *)&byte_1 )
        goto LABEL_29;
      if ( v50 == (int *)&unk_2 && (unsigned int)(v32[6] - 3) <= 1 )
      {
        v25 = *((unsigned __int16 *)v32 + 9);
        v26 = *((unsigned __int16 *)v32 + 20);
        if ( (_DWORD)v26 == (_DWORD)v25 + *((unsigned __int16 *)v32 + 8) )
        {
          v26 = *((unsigned __int16 *)v32 + 16);
          if ( (_DWORD)v26 == (_DWORD)v25 + *((unsigned __int16 *)v32 + 4) )
            goto LABEL_29;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 376) == 1 )
  {
    v60 = (unsigned __int64 **)*(unsigned int *)(a1 + 72);
    v61 = *(_DWORD *)(v30 + 64);
    if ( (_DWORD)v60 )
    {
      v62 = *(_QWORD *)(v30 + 784);
      v74 = 0;
      v75 = 0;
      sub_63890((__int64 *)&v74, (int)v60);
      v60 = &v74;
      v63 = sub_6F170(v62, (__int64 *)&v74, 0, v61 - 1);
      v28 = v74;
      v64 = v63;
      qfree();
      if ( v64 )
        goto LABEL_28;
      v61 = *(_DWORD *)(v30 + 64);
    }
    v65 = **(unsigned int **)(a1 + 368);
    if ( (unsigned int)v65 >= v61 )
      sub_CE6C0(v28, v60, v25, v26, v27);
    v66 = sub_110EC0(*(_QWORD *)(*(_QWORD *)(v30 + 528) + 8 * v65), 1);
    if ( !v66 )
    {
      if ( !under_debugger )
        sub_37EA20(52857);
      BUG();
    }
    v67 = *(_DWORD *)(v66 + 76);
    if ( v67 == 6 || v67 == 1 )
      goto LABEL_29;
  }
LABEL_28:
  sub_1C8F90(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56) + 64LL, 1);
LABEL_29:
  *(_DWORD *)(a1 + 24) |= 0x800u;
  sub_A17A0(a1, (__int64)"build_callinfo");
  sub_33ACA0(*(_QWORD *)(a1 + 480), 17, a1, v34, v35, v36);
  v5 = 1;
LABEL_30:
  clear_tinfo_t();
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree();
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree();
  }
  qfree();
  v37 = v80;
  if ( v80 )
  {
    v38 = v81;
    if ( (_QWORD)v81 )
    {
      v39 = 0;
      do
      {
        v40 = (_QWORD *)(v37 + 48 * v39);
        if ( v40[3] )
        {
          v40[4] = 0;
          qfree();
        }
        if ( *v40 )
        {
          v40[1] = 0;
          qfree();
        }
        ++v39;
        v37 = v80;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  return v5;
}
