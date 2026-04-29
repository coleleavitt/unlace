__int64 __fastcall sub_F0D20(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // r12d
  unsigned __int64 v7; // rax
  __int64 v9; // rsi
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // rbp
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  char tinfo_property; // al
  __int64 v22; // rbp
  __m128i *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edx
  char v29; // al
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r14
  int **v34; // r12
  int *v35; // rbp
  int v36; // eax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rbp
  __int64 *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rbp
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  unsigned __int64 v50; // r12
  void *v51; // r14
  __int64 v52; // rdi
  __m128i v53; // xmm0
  int v54; // eax
  int flags; // eax
  signed int v56; // r15d
  int *v57; // rax
  int v58; // edx
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rsi
  int v63; // ebp
  _QWORD *v64; // rbp
  int v65; // r12d
  __int64 v66; // rax
  __int64 v67; // rsi
  int v68; // esi
  unsigned int v69; // ebp
  __int64 v70; // r12
  char v71; // bp
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __m128i v78; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+10h] [rbp-1D8h]
  __int64 v80; // [rsp+18h] [rbp-1D0h] BYREF
  unsigned __int64 *v81; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v82; // [rsp+28h] [rbp-1C0h]
  __m128i v83; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v84; // [rsp+40h] [rbp-1A8h]
  __int64 v85; // [rsp+48h] [rbp-1A0h]
  __int128 v86; // [rsp+50h] [rbp-198h]
  __int64 v87; // [rsp+60h] [rbp-188h]
  __int128 v88; // [rsp+68h] [rbp-180h]
  __int64 v89; // [rsp+78h] [rbp-170h]
  __int64 v90; // [rsp+80h] [rbp-168h]
  _BYTE v91[8]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v92; // [rsp+90h] [rbp-158h]
  __int64 v93; // [rsp+98h] [rbp-150h]
  __int64 v94; // [rsp+A8h] [rbp-140h]
  __int64 v95; // [rsp+B0h] [rbp-138h]
  __int64 v96; // [rsp+E0h] [rbp-108h]
  __int64 v97; // [rsp+E8h] [rbp-100h]
  __int64 v98; // [rsp+F8h] [rbp-F0h]
  __int64 v99; // [rsp+100h] [rbp-E8h]
  __int64 v100; // [rsp+110h] [rbp-D8h]
  __int64 v101; // [rsp+118h] [rbp-D0h]
  __int64 v102; // [rsp+120h] [rbp-C8h]
  __int64 v103; // [rsp+128h] [rbp-C0h]
  __int64 v104; // [rsp+130h] [rbp-B8h]
  __int64 v105; // [rsp+138h] [rbp-B0h]
  __int128 v106; // [rsp+140h] [rbp-A8h]
  int v107; // [rsp+150h] [rbp-98h]
  __int16 v108; // [rsp+154h] [rbp-94h]
  __m128i si128; // [rsp+158h] [rbp-90h] BYREF
  __int128 v110; // [rsp+168h] [rbp-80h]
  __m128i v111; // [rsp+178h] [rbp-70h]
  __int64 v112; // [rsp+188h] [rbp-60h]
  int v113; // [rsp+190h] [rbp-58h]
  int v114; // [rsp+194h] [rbp-54h]
  int v115; // [rsp+198h] [rbp-50h]
  __int16 v116; // [rsp+19Ch] [rbp-4Ch]
  char v117; // [rsp+19Eh] [rbp-4Ah]
  unsigned __int64 v118; // [rsp+1A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v118 = __readfsqword(0x28u);
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
  v9 = *(_QWORD *)(a1 + 480);
  v80 = 0;
  v85 = 0;
  v10 = (__m128i)v7;
  v11 = *(_QWORD *)(v7 + 1496);
  v87 = 0;
  v83 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v10);
  v84 = v11;
  v89 = 0;
  v90 = 0;
  v86 = 0;
  v88 = 0;
  sub_CD670((__int64)v91, v9, 0);
  v100 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v107 = -1;
  v108 = 0;
  v112 = 0;
  v113 = 0;
  v114 = a2;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v106 = 0;
  v110 = -1;
  v111 = 0;
  v12 = sub_D3920(v83.m128i_i64[0], *(_QWORD *)(v83.m128i_i64[0] + 56));
  v13 = *(_QWORD *)(a1 + 480);
  v111 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  sub_339EC0(v13, 16, a1, (unsigned int)&si128, (unsigned int)&v80, v14, v78.m128i_i8[0]);
  if ( !v80 )
  {
    if ( (get_tinfo_property(si128.m128i_i64[0], 2) & 0xF) == 0xC )
    {
      HIDWORD(v112) = get_tinfo_property(si128.m128i_i64[0], 23);
    }
    else
    {
      sub_E5C40(&v83, *(_QWORD *)(a1 + 56), 0);
      if ( !si128.m128i_i8[0] )
        goto LABEL_56;
      if ( (a2 & 2) == 0 )
      {
        v77 = get_tinfo_property(si128.m128i_i64[0], 20) & 0xFFFFFFF0;
        if ( v77 == 64 || v77 == 208 )
          goto LABEL_73;
      }
    }
    v54 = *(_DWORD *)(a1 + 24);
    BYTE1(v54) &= ~2u;
    LOBYTE(v54) = v54 | 0x80;
    *(_DWORD *)(a1 + 24) = v54;
    v80 = sub_EC0C0((__int64)&v83);
    if ( v80 )
      goto LABEL_6;
LABEL_56:
    v5 = 2 * (unsigned __int8)v116;
    goto LABEL_26;
  }
LABEL_6:
  sub_119360(*(_QWORD *)(a1 + 56) + 64LL);
  v15 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v15 + 68) = sub_32BE40(
                            v80,
                            *(_QWORD *)(a1 + 64),
                            v16,
                            v17,
                            v18,
                            v19,
                            v78.m128i_i32[0],
                            v78.m128i_i32[2],
                            v79,
                            v80,
                            (_DWORD)v81,
                            v82,
                            v83.m128i_i32[0],
                            v83.m128i_i64[1],
                            v84,
                            v85,
                            v86,
                            DWORD2(v86),
                            v87);
  v20 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v20 + 72) = v80;
  *(_BYTE *)(v20 + 64) = 8;
  if ( (unsigned __int8)sub_118D10(*(_QWORD *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v46 = v80;
    sub_60E90((__int64 *)(v80 + 240), (__int64 *)(v80 + 96));
    v50 = *(_QWORD *)(v46 + 120);
    v51 = nullptr;
    if ( v50 )
    {
      v51 = (void *)qalloc_or_throw(16 * v50);
      memcpy(v51, *(const void **)(v46 + 112), 16 * v50);
    }
    v52 = *(_QWORD *)(v46 + 256);
    v53 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
    if ( v52 )
    {
      *(_QWORD *)(v46 + 264) = 0;
      v78 = v53;
      qfree(v52);
      v53 = _mm_load_si128(&v78);
    }
    *(_QWORD *)(v46 + 256) = v51;
    *(__m128i *)(v46 + 264) = v53;
    sub_FB2A0(
      a1,
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 56),
      v47,
      v48,
      v49,
      v78.m128i_i32[0],
      v78.m128i_i32[2],
      v79,
      v80,
      (_DWORD)v81,
      v82,
      v83.m128i_i32[0],
      v83.m128i_i8[8],
      v84,
      v85,
      v86);
  }
  if ( *(int *)(*(_QWORD *)(a1 + 56) + 68LL) <= 0 )
    goto LABEL_25;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v80 + 72), 2);
  v22 = v80;
  if ( (tinfo_property & 0x2F) == 0xD )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 65LL) |= 2u;
    v23 = *(__m128i **)(a1 + 64);
    v81 = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) + 24LL);
    v24 = sub_C4570(v23 + 87, v81, &v81);
    copy_tinfo_t(v24 + 32, v22 + 72);
    v25 = *((_QWORD *)&v110 + 1);
    if ( *((_QWORD *)&v110 + 1) == -1
      || ((flags = get_flags_ex(*((_QWORD *)&v110 + 1), 4), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
      && !(unsigned __int8)is_spec_ea(v25) )
    {
      v26 = si128.m128i_i64[1];
    }
    else
    {
      v26 = *((_QWORD *)&v110 + 1);
    }
    v27 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v27 + 40) == v26 )
      *(_DWORD *)(*(_QWORD *)(v27 + 944) + 68LL) |= 1u;
    LOBYTE(v28) = 2;
  }
  else
  {
    v28 = *(_DWORD *)(v80 + 80);
    if ( v28 == 2 )
    {
      v59 = *(_QWORD *)(v80 + 88);
      v60 = *(_DWORD **)v59;
      v61 = *(_QWORD *)v59 + 24LL * *(_QWORD *)(v59 + 8);
      if ( v60 == (_DWORD *)v61 )
      {
LABEL_71:
        LOBYTE(v28) = 3;
      }
      else
      {
        while ( *v60 != 1 )
        {
          v60 += 6;
          if ( (_DWORD *)v61 == v60 )
            goto LABEL_71;
        }
      }
    }
    else
    {
      LOBYTE(v28) = (v28 != 1) | 2;
    }
  }
  v29 = sub_EEAF0(a1, *(_QWORD *)(a1 + 56), v28);
  v30 = *(_QWORD *)(a1 + 56);
  if ( !v29 )
  {
    sub_119360(v30 + 64);
LABEL_73:
    v5 = 0;
    goto LABEL_26;
  }
  v31 = *(_DWORD *)(v30 + 4);
  if ( (v31 & 0x8000) != 0 )
  {
    BYTE1(v31) &= ~0x80u;
    *(_DWORD *)(v30 + 4) = v31;
    v32 = *(_QWORD *)(a1 + 376);
    if ( !(_DWORD)v32 )
    {
      v62 = *(_QWORD *)(a1 + 368);
      v63 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v32 + 1) )
      {
        v76 = qvector_reserve(a1 + 368, v62, v32 + 1, 4);
        *(_QWORD *)(a1 + 368) = v76;
        v32 = *(_QWORD *)(a1 + 376);
        v62 = v76;
      }
      *(_DWORD *)(v62 + 4 * v32) = v63;
      v64 = *(_QWORD **)(a1 + 8);
      ++*(_QWORD *)(a1 + 376);
      v65 = *(_DWORD *)(a1 + 72);
      v66 = v64[44];
      v67 = v64[43];
      if ( v64[45] < (unsigned __int64)(v66 + 1) )
      {
        v75 = qvector_reserve(v64 + 43, v67, v66 + 1, 4);
        v64[43] = v75;
        v67 = v75;
        v66 = v64[44];
      }
      *(_DWORD *)(v67 + 4 * v66) = v65;
      ++v64[44];
    }
    v30 = *(_QWORD *)(a1 + 56);
  }
  if ( *(_BYTE *)(v30 + 64) != 15 )
    goto LABEL_25;
  v33 = *(_QWORD *)(a1 + 64);
  v34 = *(int ***)(*(_QWORD *)(v30 + 72) + 8LL);
  v35 = *v34;
  v36 = **v34;
  if ( v36 == 1 )
  {
    if ( v34[1] == (int *)&byte_1 )
      goto LABEL_25;
  }
  else if ( (unsigned int)(v36 - 3) <= 1 )
  {
    v56 = *(_DWORD *)(v30 + 68);
    if ( v56 <= (int)(2
                    * (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v33 + 1504) + 32LL))(
                        *(_QWORD *)(v33 + 1504),
                        *((unsigned __int16 *)v35 + 4))) )
    {
      v57 = v34[1];
      if ( v57 == (int *)&byte_1 )
        goto LABEL_25;
      if ( v57 == (int *)&unk_2 && (unsigned int)(v35[6] - 3) <= 1 )
      {
        v58 = *((unsigned __int16 *)v35 + 9);
        if ( *((unsigned __int16 *)v35 + 20) == v58 + *((unsigned __int16 *)v35 + 8)
          && *((unsigned __int16 *)v35 + 16) == v58 + *((unsigned __int16 *)v35 + 4) )
        {
          goto LABEL_25;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 376) == 1 )
  {
    v68 = *(_DWORD *)(a1 + 72);
    v69 = *(_DWORD *)(v33 + 64);
    if ( v68 )
    {
      v70 = *(_QWORD *)(v33 + 784);
      v81 = nullptr;
      v82 = 0;
      sub_60750((__int64 *)&v81, v68);
      v71 = sub_6C1F0(v70, (__int64 *)&v81, 0, v69 - 1);
      qfree(v81);
      if ( v71 )
        goto LABEL_24;
      v69 = *(_DWORD *)(v33 + 64);
    }
    v72 = **(unsigned int **)(a1 + 368);
    if ( (unsigned int)v72 >= v69 )
      sub_ED4C0();
    v73 = sub_10E680(*(_QWORD *)(*(_QWORD *)(v33 + 528) + 8 * v72), 1);
    if ( !v73 )
    {
      if ( !under_debugger )
        sub_37EEE0(52857);
      BUG();
    }
    v74 = *(_DWORD *)(v73 + 76);
    if ( v74 == 1 || v74 == 6 )
      goto LABEL_25;
  }
LABEL_24:
  sub_1C8040(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56) + 64LL, 1);
LABEL_25:
  *(_DWORD *)(a1 + 24) |= 0x800u;
  sub_9EAE0(a1, (__int64)"build_callinfo");
  sub_339EC0(*(_QWORD *)(a1 + 480), 17, a1, v37, v38, v39, v78.m128i_i8[0]);
  v5 = 1;
LABEL_26:
  clear_tinfo_t(&si128);
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  qfree(v103);
  qfree(v101);
  if ( v98 )
  {
    v99 = 0;
    qfree(v98);
  }
  if ( v96 )
  {
    v97 = 0;
    qfree(v96);
  }
  if ( v94 )
  {
    v95 = 0;
    qfree(v94);
  }
  if ( v92 )
  {
    v93 = 0;
    qfree(v92);
  }
  qfree(v89);
  v40 = v87;
  if ( v87 )
  {
    v41 = v88;
    if ( (_QWORD)v88 )
    {
      v42 = 0;
      do
      {
        v43 = (__int64 *)(v40 + 48 * v42);
        v44 = v43[3];
        if ( v44 )
        {
          v43[4] = 0;
          qfree(v44);
        }
        v45 = *v43;
        if ( *v43 )
        {
          v43[1] = 0;
          qfree(v45);
        }
        ++v42;
        v40 = v87;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v88 = 0;
    qfree(v40);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  return v5;
}
