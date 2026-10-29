__int64 __fastcall sub_F4760(__int64 a1, int a2)
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
  __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r14
  int **v30; // r12
  int *v31; // rbp
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rbp
  __int64 *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // r8d
  int v47; // r9d
  unsigned __int64 v48; // r12
  void *v49; // r14
  __int64 v50; // rdi
  __m128i v51; // xmm0
  int v52; // eax
  int flags; // eax
  signed int v54; // r15d
  int *v55; // rax
  int v56; // edx
  __int64 v57; // rcx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  int v61; // ebp
  _QWORD *v62; // rbp
  int v63; // r12d
  __int64 v64; // rax
  __int64 v65; // rsi
  int v66; // esi
  unsigned int v67; // ebp
  __int64 v68; // r12
  char v69; // bp
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // eax
  __m128i v76; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v77; // [rsp+10h] [rbp-1D8h]
  __int64 v78; // [rsp+18h] [rbp-1D0h] BYREF
  unsigned __int64 *v79; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v80; // [rsp+28h] [rbp-1C0h]
  __m128i v81; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v82; // [rsp+40h] [rbp-1A8h]
  __int64 v83; // [rsp+48h] [rbp-1A0h]
  __int128 v84; // [rsp+50h] [rbp-198h]
  __int64 v85; // [rsp+60h] [rbp-188h]
  __int128 v86; // [rsp+68h] [rbp-180h]
  __int64 v87; // [rsp+78h] [rbp-170h]
  __int64 v88; // [rsp+80h] [rbp-168h]
  _BYTE v89[8]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v90; // [rsp+90h] [rbp-158h]
  __int64 v91; // [rsp+98h] [rbp-150h]
  __int64 v92; // [rsp+A8h] [rbp-140h]
  __int64 v93; // [rsp+B0h] [rbp-138h]
  __int64 v94; // [rsp+E0h] [rbp-108h]
  __int64 v95; // [rsp+E8h] [rbp-100h]
  __int64 v96; // [rsp+F8h] [rbp-F0h]
  __int64 v97; // [rsp+100h] [rbp-E8h]
  __int64 v98; // [rsp+110h] [rbp-D8h]
  __int64 v99; // [rsp+118h] [rbp-D0h]
  __int64 v100; // [rsp+120h] [rbp-C8h]
  __int64 v101; // [rsp+128h] [rbp-C0h]
  __int64 v102; // [rsp+130h] [rbp-B8h]
  __int64 v103; // [rsp+138h] [rbp-B0h]
  __int128 v104; // [rsp+140h] [rbp-A8h]
  int v105; // [rsp+150h] [rbp-98h]
  __int16 v106; // [rsp+154h] [rbp-94h]
  __m128i si128; // [rsp+158h] [rbp-90h] BYREF
  __int128 v108; // [rsp+168h] [rbp-80h]
  __m128i v109; // [rsp+178h] [rbp-70h]
  __int64 v110; // [rsp+188h] [rbp-60h]
  int v111; // [rsp+190h] [rbp-58h]
  int v112; // [rsp+194h] [rbp-54h]
  int v113; // [rsp+198h] [rbp-50h]
  __int16 v114; // [rsp+19Ch] [rbp-4Ch]
  char v115; // [rsp+19Eh] [rbp-4Ah]
  unsigned __int64 v116; // [rsp+1A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  v116 = __readfsqword(0x28u);
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
  v78 = 0;
  v83 = 0;
  v10 = (__m128i)v7;
  v11 = *(_QWORD *)(v7 + 1496);
  v85 = 0;
  v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v10);
  v82 = v11;
  v87 = 0;
  v88 = 0;
  v84 = 0;
  v86 = 0;
  sub_D10B0((__int64)v89, v9, 0);
  v98 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v105 = -1;
  v106 = 0;
  v110 = 0;
  v111 = 0;
  v112 = a2;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v104 = 0;
  v108 = -1;
  v109 = 0;
  v12 = sub_D7360(v81.m128i_i64[0], *(_QWORD *)(v81.m128i_i64[0] + 56));
  v13 = *(_QWORD *)(a1 + 480);
  v109 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  sub_33E140(v13, 16, a1, (unsigned int)&si128, (unsigned int)&v78, v14);
  if ( !v78 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      HIDWORD(v110) = get_tinfo_property();
    }
    else
    {
      sub_E9680(&v81, *(_QWORD *)(a1 + 56), 0);
      if ( !si128.m128i_i8[0] )
        goto LABEL_56;
      if ( (a2 & 2) == 0 )
      {
        v75 = get_tinfo_property() & 0xFFFFFFF0;
        if ( v75 == 64 || v75 == 208 )
          goto LABEL_73;
      }
    }
    v52 = *(_DWORD *)(a1 + 24);
    BYTE1(v52) &= ~2u;
    LOBYTE(v52) = v52 | 0x80;
    *(_DWORD *)(a1 + 24) = v52;
    v78 = sub_EFB00((__int64)&v81);
    if ( v78 )
      goto LABEL_6;
LABEL_56:
    v5 = 2 * (unsigned __int8)v114;
    goto LABEL_26;
  }
LABEL_6:
  sub_11CDA0(*(_QWORD *)(a1 + 56) + 64LL);
  v15 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v15 + 68) = sub_330290(
                            v78,
                            *(_QWORD *)(a1 + 64),
                            v16,
                            v17,
                            v18,
                            v19,
                            v76.m128i_i32[0],
                            v76.m128i_i32[2],
                            v77,
                            v78,
                            (_DWORD)v79,
                            v80,
                            v81.m128i_i32[0],
                            v81.m128i_i64[1],
                            v82,
                            v83,
                            v84,
                            DWORD2(v84),
                            v85);
  v20 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v20 + 72) = v78;
  *(_BYTE *)(v20 + 64) = 8;
  if ( (unsigned __int8)sub_11C750(*(_QWORD *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v42 = v78;
    v43 = v78 + 96;
    sub_648D0((__int64 *)(v78 + 240), (__int64 *)(v78 + 96));
    v48 = *(_QWORD *)(v42 + 120);
    v49 = nullptr;
    if ( v48 )
    {
      v49 = (void *)qalloc_or_throw(16 * v48, v43, v44, v45);
      memcpy(v49, *(const void **)(v42 + 112), 16 * v48);
    }
    v50 = *(_QWORD *)(v42 + 256);
    v51 = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
    if ( v50 )
    {
      *(_QWORD *)(v42 + 264) = 0;
      v76 = v51;
      qfree(v50);
      v51 = _mm_load_si128(&v76);
    }
    *(_QWORD *)(v42 + 256) = v49;
    *(__m128i *)(v42 + 264) = v51;
    sub_FECE0(
      a1,
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 56),
      v45,
      v46,
      v47,
      v76.m128i_i32[0],
      v76.m128i_i32[2],
      v77,
      v78,
      (_DWORD)v79,
      v80,
      v81.m128i_i32[0],
      v81.m128i_i8[8],
      v82,
      v83,
      v84);
  }
  if ( *(int *)(*(_QWORD *)(a1 + 56) + 68LL) <= 0 )
    goto LABEL_25;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 65LL) |= 2u;
    v21 = *(__m128i **)(a1 + 64);
    v79 = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) + 24LL);
    sub_C7FB0(v21 + 87, v79, &v79);
    copy_tinfo_t();
    if ( *((_QWORD *)&v108 + 1) == -1
      || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
      && !(unsigned __int8)is_spec_ea() )
    {
      v22 = si128.m128i_i64[1];
    }
    else
    {
      v22 = *((_QWORD *)&v108 + 1);
    }
    v23 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v23 + 40) == v22 )
      *(_DWORD *)(*(_QWORD *)(v23 + 944) + 68LL) |= 1u;
    v24 = 2;
  }
  else
  {
    v24 = *(unsigned int *)(v78 + 80);
    if ( (_DWORD)v24 == 2 )
    {
      v57 = *(_QWORD *)(v78 + 88);
      v58 = *(_DWORD **)v57;
      v59 = *(_QWORD *)v57 + 24LL * *(_QWORD *)(v57 + 8);
      if ( v58 == (_DWORD *)v59 )
      {
LABEL_71:
        v24 = 3;
      }
      else
      {
        while ( *v58 != 1 )
        {
          v58 += 6;
          if ( (_DWORD *)v59 == v58 )
            goto LABEL_71;
        }
      }
    }
    else
    {
      v24 = ((_DWORD)v24 != 1) | 2u;
    }
  }
  v25 = sub_F2530(a1, *(_QWORD *)(a1 + 56), v24);
  v26 = *(_QWORD *)(a1 + 56);
  if ( !v25 )
  {
    sub_11CDA0(v26 + 64);
LABEL_73:
    v5 = 0;
    goto LABEL_26;
  }
  v27 = *(_DWORD *)(v26 + 4);
  if ( (v27 & 0x8000) != 0 )
  {
    BYTE1(v27) &= ~0x80u;
    *(_DWORD *)(v26 + 4) = v27;
    v28 = *(_QWORD *)(a1 + 376);
    if ( !(_DWORD)v28 )
    {
      v60 = *(_QWORD *)(a1 + 368);
      v61 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v28 + 1) )
      {
        v74 = qvector_reserve(a1 + 368, v60, v28 + 1, 4);
        *(_QWORD *)(a1 + 368) = v74;
        v28 = *(_QWORD *)(a1 + 376);
        v60 = v74;
      }
      *(_DWORD *)(v60 + 4 * v28) = v61;
      v62 = *(_QWORD **)(a1 + 8);
      ++*(_QWORD *)(a1 + 376);
      v63 = *(_DWORD *)(a1 + 72);
      v64 = v62[44];
      v65 = v62[43];
      if ( v62[45] < (unsigned __int64)(v64 + 1) )
      {
        v73 = qvector_reserve((__int64)(v62 + 43), v65, v64 + 1, 4);
        v62[43] = v73;
        v65 = v73;
        v64 = v62[44];
      }
      *(_DWORD *)(v65 + 4 * v64) = v63;
      ++v62[44];
    }
    v26 = *(_QWORD *)(a1 + 56);
  }
  if ( *(_BYTE *)(v26 + 64) != 15 )
    goto LABEL_25;
  v29 = *(_QWORD *)(a1 + 64);
  v30 = *(int ***)(*(_QWORD *)(v26 + 72) + 8LL);
  v31 = *v30;
  v32 = **v30;
  if ( v32 == 1 )
  {
    if ( v30[1] == (int *)&byte_1 )
      goto LABEL_25;
  }
  else if ( (unsigned int)(v32 - 3) <= 1 )
  {
    v54 = *(_DWORD *)(v26 + 68);
    if ( v54 <= (int)(2
                    * (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 1504) + 32LL))(
                        *(_QWORD *)(v29 + 1504),
                        *((unsigned __int16 *)v31 + 4))) )
    {
      v55 = v30[1];
      if ( v55 == (int *)&byte_1 )
        goto LABEL_25;
      if ( v55 == (int *)&unk_2 && (unsigned int)(v31[6] - 3) <= 1 )
      {
        v56 = *((unsigned __int16 *)v31 + 9);
        if ( *((unsigned __int16 *)v31 + 20) == v56 + *((unsigned __int16 *)v31 + 8)
          && *((unsigned __int16 *)v31 + 16) == v56 + *((unsigned __int16 *)v31 + 4) )
        {
          goto LABEL_25;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 376) == 1 )
  {
    v66 = *(_DWORD *)(a1 + 72);
    v67 = *(_DWORD *)(v29 + 64);
    if ( v66 )
    {
      v68 = *(_QWORD *)(v29 + 784);
      v79 = nullptr;
      v80 = 0;
      sub_64190((__int64 *)&v79, v66);
      v69 = sub_6FC30(v68, (__int64 *)&v79, 0, v67 - 1);
      qfree((__int64)v79);
      if ( v69 )
        goto LABEL_24;
      v67 = *(_DWORD *)(v29 + 64);
    }
    v70 = **(unsigned int **)(a1 + 368);
    if ( (unsigned int)v70 >= v67 )
      sub_F0F00();
    v71 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v29 + 528) + 8 * v70), 1);
    if ( !v71 )
    {
      if ( !under_debugger )
        sub_383060(52857);
      BUG();
    }
    v72 = *(_DWORD *)(v71 + 76);
    if ( v72 == 1 || v72 == 6 )
      goto LABEL_25;
  }
LABEL_24:
  sub_1CBA80(a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 56) + 64LL, 1);
LABEL_25:
  *(_DWORD *)(a1 + 24) |= 0x800u;
  sub_A2520(a1, (__int64)"build_callinfo");
  sub_33E140(*(_QWORD *)(a1 + 480), 17, a1, v33, v34, v35);
  v5 = 1;
LABEL_26:
  clear_tinfo_t();
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree(v103);
  }
  qfree(v101);
  qfree(v99);
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
  if ( v90 )
  {
    v91 = 0;
    qfree(v90);
  }
  qfree(v87);
  v36 = v85;
  if ( v85 )
  {
    v37 = v86;
    if ( (_QWORD)v86 )
    {
      v38 = 0;
      do
      {
        v39 = (__int64 *)(v36 + 48 * v38);
        v40 = v39[3];
        if ( v40 )
        {
          v39[4] = 0;
          qfree(v40);
        }
        v41 = *v39;
        if ( *v39 )
        {
          v39[1] = 0;
          qfree(v41);
        }
        ++v38;
        v36 = v85;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v36);
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  return v5;
}
