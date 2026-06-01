void __fastcall sub_1498040(const __m128i *a1, __int64 a2, char *a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int16 v10; // r12
  __int64 *v11; // rdi
  __int64 v12; // rax
  char v13; // al
  void (__fastcall *v14)(_QWORD *, __int64); // rax
  _QWORD *v15; // rbx
  int v16; // edx
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  __int64 v19; // r9
  __int32 v20; // r14d
  __int64 v21; // r9
  int v22; // ecx
  char v23; // r8
  char v24; // dl
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rdi
  void *v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int32 v32; // edx
  unsigned __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  char v36; // r12
  const __m128i *v37; // r12
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // rdi
  char *v42; // rax
  void (__fastcall *v43)(_QWORD *, __int64); // rax
  _QWORD *v44; // rbx
  __int64 *v45; // rdi
  __int32 v46; // r12d
  __int64 v47; // r9
  __int64 v48; // rsi
  int v49; // eax
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  unsigned __int32 v56; // r15d
  __int64 v57; // r9
  int v58; // eax
  char v59; // al
  __int64 v60; // rdi
  __int64 v61; // rsi
  int v62; // eax
  _DWORD *v63; // rax
  __int64 *v64; // rdi
  __int64 v65; // [rsp+8h] [rbp-2A0h]
  char *v66; // [rsp+10h] [rbp-298h] BYREF
  __int64 v67; // [rsp+18h] [rbp-290h]
  __int128 v68; // [rsp+20h] [rbp-288h] BYREF
  void *v69[2]; // [rsp+30h] [rbp-278h]
  __m128i v70; // [rsp+40h] [rbp-268h] BYREF
  const __m128i *v71; // [rsp+50h] [rbp-258h] BYREF
  __m128 v72; // [rsp+58h] [rbp-250h]
  __m128i v73; // [rsp+68h] [rbp-240h]
  __int64 v74; // [rsp+78h] [rbp-230h]
  __m128i v75; // [rsp+80h] [rbp-228h]
  int v76; // [rsp+90h] [rbp-218h]
  unsigned __int64 v77; // [rsp+98h] [rbp-210h]
  __int32 v78; // [rsp+A0h] [rbp-208h]
  __int16 v79; // [rsp+A4h] [rbp-204h]
  char v80; // [rsp+A6h] [rbp-202h]
  unsigned __int8 *v81; // [rsp+B0h] [rbp-1F8h] BYREF
  char **v82; // [rsp+B8h] [rbp-1F0h]
  const __m128i *v83; // [rsp+C0h] [rbp-1E8h]
  void *ptr; // [rsp+C8h] [rbp-1E0h]
  __int64 v85; // [rsp+D0h] [rbp-1D8h]
  _BYTE v86[16]; // [rsp+D8h] [rbp-1D0h] BYREF
  char v87; // [rsp+E8h] [rbp-1C0h]
  __int32 v88; // [rsp+ECh] [rbp-1BCh]
  unsigned __int64 v89; // [rsp+F0h] [rbp-1B8h]
  __int64 v90[3]; // [rsp+F8h] [rbp-1B0h] BYREF
  __m128i v91; // [rsp+110h] [rbp-198h]
  int v92[8]; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v93[128]; // [rsp+160h] [rbp-148h] BYREF
  unsigned int v94; // [rsp+1E0h] [rbp-C8h]
  int v95; // [rsp+1E4h] [rbp-C4h]
  unsigned __int32 v96; // [rsp+21Ch] [rbp-8Ch]
  unsigned int v97; // [rsp+220h] [rbp-88h]
  unsigned int v98; // [rsp+224h] [rbp-84h]
  __int64 v99; // [rsp+228h] [rbp-80h]
  int v100; // [rsp+254h] [rbp-54h]

  v8 = a1[6].m128i_i64[1];
  v66 = a3;
  v67 = a4;
  if ( *(_BYTE *)(v8 + 4) )
    *(_BYTE *)(a2 + 720) |= 0x20u;
  v9 = a1->m128i_i64[1];
  v10 = a1[2].m128i_i16[0];
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 1LL) & 8) != 0 )
  {
    if ( v10 != 72 && v10 != 163 )
    {
      if ( v10 != 5 )
        goto LABEL_7;
      v51 = *(_QWORD *)(v9 + 2944);
      if ( *(unsigned int *)(v9 + 2912) <= v51 )
      {
        v52 = sub_14180A0(v9, 1u);
        v9 = a1->m128i_i64[1];
      }
      else
      {
        v52 = *(_QWORD *)(v9 + 2904) + 24 * v51;
      }
      if ( *(_WORD *)(v52 + 16) != 72 )
      {
        v53 = *(_QWORD *)(v9 + 2944);
        if ( *(unsigned int *)(v9 + 2912) <= v53 )
          v54 = sub_14180A0(v9, 1u);
        else
          v54 = *(_QWORD *)(v9 + 2904) + 24 * v53;
        if ( *(_WORD *)(v54 + 16) == 47 )
        {
LABEL_41:
          v9 = a1->m128i_i64[1];
          goto LABEL_42;
        }
        v10 = a1[2].m128i_i16[0];
LABEL_7:
        if ( v10 != 416 )
          goto LABEL_8;
        goto LABEL_41;
      }
    }
LABEL_42:
    v29 = a1[5].m128i_i64[0];
    a6 = (__m128)_mm_loadu_si128(a1 + 3);
    v71 = a1;
    v30 = _mm_loadu_si128(a1 + 4);
    v31 = _mm_loadu_si128(a1 + 1);
    v74 = v29;
    LODWORD(v29) = a1[2].m128i_i32[0];
    v32 = a1[5].m128i_i32[2];
    v72 = a6;
    v76 = v29;
    v33 = a1[169].m128i_u32[2];
    v78 = v32;
    v77 = v33;
    LOWORD(v33) = a1[5].m128i_i16[6];
    v73 = v30;
    v79 = v33;
    v75 = v31;
    sub_1418D30(v9, 1);
    v34 = *(_DWORD *)(a2 + 96);
    a5 = 0;
    v35 = *(_QWORD *)(a2 + 832);
    v80 = 1;
    v68 = 0;
    v70.m128i_i64[0] = v35;
    *(_OWORD *)v69 = 0;
    v36 = v34 == 0 || v34 == 7;
    v70.m128i_i64[1] = *(_QWORD *)(a2 + 840);
    if ( !(unsigned __int8)sub_14D0170((_DWORD)a1, (unsigned int)&v68, 0, 0, 0, 0, 0, 0, 0, 0, v36)
      && *((_QWORD *)&v68 + 1)
      && v36
      && a1[2].m128i_i16[0] != 31 )
    {
      sub_147B460((__int64)&v71);
      v68 = 0u;
      LODWORD(v69[1]) = 0;
      sub_14D0170((_DWORD)a1, (unsigned int)&v68, 0, 0, 1, 0, 0, 0, 0, 0, 0);
      if ( !(_DWORD)v68 )
      {
LABEL_116:
        if ( !*((_QWORD *)&v68 + 1) )
          goto LABEL_117;
        goto LABEL_56;
      }
    }
    else
    {
      v37 = v71;
      v38 = v77;
      v39 = v71[169].m128i_u32[2];
      if ( v77 != v39 )
      {
        if ( v77 < v39 )
        {
          v71[169].m128i_i32[2] = v77;
        }
        else
        {
          if ( v77 > v71[169].m128i_u32[3] )
          {
            sub_2237220(&v71[169], &v71[170], v77, 8);
            v39 = v37[169].m128i_u32[2];
          }
          v40 = v37[169].m128i_i64[0];
          v41 = (char *)(v40 + 8 * v39);
          v42 = (char *)(v40 + 8 * v38);
          if ( v41 != v42 )
            memset(v41, 0, 8 * ((unsigned __int64)(v42 - 8 - v41) >> 3) + 8);
          v37[169].m128i_i32[2] = v38;
          v37 = v71;
        }
      }
      sub_1417B70(v37->m128i_i64[1]);
      v80 = 0;
      if ( !(_DWORD)v68 )
      {
        if ( !*((_QWORD *)&v68 + 1) )
        {
LABEL_117:
          if ( HIDWORD(v69[1]) )
            free(v69[0]);
          v10 = a1[2].m128i_i16[0];
          goto LABEL_8;
        }
        if ( a1[2].m128i_i16[0] == 31 )
          goto LABEL_66;
LABEL_56:
        if ( ((1LL << *(_DWORD *)(a2 + 96)) & 0x404DF93) != 0 )
        {
          *(_QWORD *)(a2 + 8) = v68;
          sub_E907B0(a2 + 16, (__int64)&v68 + 8);
          *(__m128i *)(a2 + 40) = _mm_load_si128(&v70);
        }
        else
        {
          sub_15655A0(a1, &v68, 1);
        }
        v43 = (void (__fastcall *)(_QWORD *, __int64))v66;
        if ( v66 )
        {
          v44 = (__int64 *)((char *)a1->m128i_i64 + v67);
          if ( ((unsigned __int8)v66 & 1) != 0 )
            v43 = *(void (__fastcall **)(_QWORD *, __int64))&v66[*v44 - 1];
          v43(v44, a2);
        }
LABEL_62:
        if ( HIDWORD(v69[1]) )
          free(v69[0]);
        return;
      }
      if ( DWORD1(v68) )
      {
        if ( a1[2].m128i_i16[0] != 31 )
          goto LABEL_56;
        if ( !*((_QWORD *)&v68 + 1) )
        {
LABEL_67:
          v45 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v45, a1[1].m128i_i32);
          v46 = a1[2].m128i_i32[2];
          if ( v46 )
            *(_DWORD *)(a2 + 92) = v46;
          sub_147A4A0((__int64)v92, (__int64)&a1[31].m128i_i64[1]);
          sub_14906F0(a1, v92, 14, 1, 0, (__m128i)0LL, a6, v47, nullptr, 0);
          v48 = *(unsigned int *)(a2 + 88);
          v49 = v95;
          if ( !(_DWORD)v48 )
          {
            v48 = v94;
            *(_DWORD *)(a2 + 88) = v94;
          }
          if ( v49 )
            *(_DWORD *)(a2 + 92) = v49;
          v50 = a1[6].m128i_i64[0];
          v83 = a1;
          v82 = &v66;
          v81 = (unsigned __int8 *)a2;
          sub_15F0FC0(v50, v48, sub_1498DF0, &v81);
          v83 = nullptr;
          HIDWORD(v81) = v68;
          v85 = 0x200000000LL;
          LODWORD(v82) = v95;
          ptr = v86;
          v88 = v46;
          LODWORD(v81) = 5;
          v87 = (HIBYTE(v92[0]) >> 2) & 0x1F | v87 & 0xE0;
          v89 = v68;
          sub_E90750((__int64)v90, (__int64 *)&v68 + 1);
          v91 = _mm_load_si128(&v70);
          sub_1497E40(a2, (unsigned __int64)&v81, (__int64)v93, 0);
          if ( ptr != v86 )
            free(ptr);
          sub_147A5F0((__int64)v92);
          goto LABEL_62;
        }
LABEL_66:
        sub_1564BC0(a1, DWORD1(v68), 72, 4);
        goto LABEL_67;
      }
      if ( !*((_QWORD *)&v68 + 1) )
        goto LABEL_117;
      if ( a1[2].m128i_i16[0] == 31 )
        goto LABEL_66;
    }
    if ( DWORD1(v68) )
      goto LABEL_56;
    goto LABEL_116;
  }
LABEL_8:
  if ( *(char *)(*(_QWORD *)a2 + 2LL) < 0 )
  {
    v16 = *(_DWORD *)(a2 + 136);
    if ( v16 )
    {
      v17 = *(_DWORD **)(a2 + 128);
      if ( *v17 == 7 )
        goto LABEL_9;
      v18 = &v17[36 * (v16 - 1)];
      while ( v17 != v18 )
      {
        v17 += 36;
        if ( *v17 == 7 )
          goto LABEL_9;
      }
    }
    sub_147A4A0((__int64)v92, (__int64)&a1[31].m128i_i64[1]);
    sub_14906F0(a1, v92, 14, 1, 0, a5, a6, v19, nullptr, 0);
    HIDWORD(v81) = v100;
    v85 = 0x200000000LL;
    LODWORD(v82) = 0;
    v83 = nullptr;
    ptr = v86;
    LODWORD(v81) = 7;
    v87 = (HIBYTE(v92[0]) >> 2) & 0x1F | v87 & 0xE0;
    sub_1497E40(a2, (unsigned __int64)&v81, (__int64)v93, 0);
    if ( ptr != v86 )
      free(ptr);
    sub_147A5F0((__int64)v92);
  }
LABEL_9:
  v11 = (__int64 *)a1->m128i_i64[1];
  if ( v10 == 31 || v10 == 56 )
  {
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v11, a1[1].m128i_i32);
    v20 = a1[2].m128i_i32[2];
    if ( v20 )
      *(_DWORD *)(a2 + 92) = v20;
    sub_147A4A0((__int64)v92, (__int64)&a1[31].m128i_i64[1]);
    v22 = *(_DWORD *)(a2 + 96);
    if ( v22 == 13 )
    {
      v24 = 13;
    }
    else
    {
      v23 = 1;
      v24 = 14;
      if ( ((1LL << v22) & 0xF91) != 0 )
        goto LABEL_32;
    }
    v23 = 0;
LABEL_32:
    sub_14906F0(a1, v92, v24, 1, v23, a5, a6, v21, nullptr, 0);
    v25 = *(unsigned int *)(a2 + 88);
    v26 = v95;
    if ( !(_DWORD)v25 )
    {
      v25 = v94;
      *(_DWORD *)(a2 + 88) = v94;
    }
    if ( v26 )
      *(_DWORD *)(a2 + 92) = v26;
    v27 = a1[6].m128i_i64[0];
    v83 = a1;
    v82 = &v66;
    v81 = (unsigned __int8 *)a2;
    sub_15F0FC0(v27, v25, sub_1498DD0, &v81);
    LODWORD(v82) = 0;
    v83 = nullptr;
    v85 = 0x200000000LL;
    ptr = v86;
    HIDWORD(v81) = v20;
    if ( v10 == 31 )
    {
      LODWORD(v81) = 0;
      v87 = (HIBYTE(v92[0]) >> 2) & 0x1F | v87 & 0xE0;
      v88 = v96;
      v89 = __PAIR64__(v97, v98);
      v90[0] = v99;
    }
    else
    {
      LODWORD(v81) = 4;
      v87 = (HIBYTE(v92[0]) >> 2) & 0x1F | v87 & 0xE0;
    }
    sub_1497E40(a2, (unsigned __int64)&v81, (__int64)v93, 0);
    v28 = ptr;
    if ( ptr == v86 )
      goto LABEL_40;
LABEL_39:
    free(v28);
LABEL_40:
    sub_147A5F0((__int64)v92);
    return;
  }
  v12 = v11[7];
  if ( v10 == 353 )
  {
    if ( (*(_BYTE *)(v12 + 47) & 0x20) != 0 && (unsigned int)sub_FEAA90(v11[7]) > 0xC7 )
    {
      v64 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v64, a1[1].m128i_i32);
      v56 = a1[2].m128i_u32[2];
      if ( !v56 )
      {
        sub_147A4A0((__int64)v92, (__int64)&a1[31].m128i_i64[1]);
        goto LABEL_90;
      }
LABEL_105:
      *(_DWORD *)(a2 + 92) = v56;
LABEL_88:
      sub_147A4A0((__int64)v92, (__int64)&a1[31].m128i_i64[1]);
      if ( v10 == 29 )
      {
        sub_1564820(&v81, a1, v56, (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 ? 2017 : 2128);
        sub_AEA040((__int64)&v81);
      }
LABEL_90:
      sub_14906F0(a1, v92, 14, 1, 0, a5, a6, v57, nullptr, 0);
      v58 = v95;
      if ( !*(_DWORD *)(a2 + 88) )
        *(_DWORD *)(a2 + 88) = v94;
      if ( v58 )
        *(_DWORD *)(a2 + 92) = v58;
      v59 = (HIBYTE(v92[0]) >> 2) & 0x1F;
      if ( v59 )
      {
        if ( (v92[0] & 0x4000000) != 0 )
        {
          sub_1564820(&v81, a1, v96, 1711);
          sub_1478320(&v81, (__int64)"const");
          sub_AEA040((__int64)&v81);
          v59 = (HIBYTE(v92[0]) >> 2) & 0x1F;
        }
        if ( (v59 & 4) != 0 )
        {
          sub_1564820(&v81, a1, v98, 1711);
          sub_1478320(&v81, (__int64)"volatile");
          sub_AEA040((__int64)&v81);
          v59 = (HIBYTE(v92[0]) >> 2) & 0x1F;
        }
        if ( (v59 & 0x10) != 0 )
        {
          sub_1564820(&v81, a1, (unsigned int)v99, 1711);
          sub_1478320(&v81, (__int64)"_Atomic");
          sub_AEA040((__int64)&v81);
        }
      }
      v60 = a1[6].m128i_i64[0];
      v61 = *(unsigned int *)(a2 + 88);
      v82 = &v66;
      v81 = (unsigned __int8 *)a2;
      v83 = a1;
      sub_15F0FC0(v60, v61, sub_1498DB0, &v81);
      v62 = *(_DWORD *)(a2 + 136);
      if ( v62 )
      {
        v63 = (_DWORD *)(*(_QWORD *)(a2 + 128) + 144LL * (unsigned int)(v62 - 1));
        if ( *v63 == 1 )
        {
          if ( *(_DWORD *)(a2 + 56) || (v65 = *(_QWORD *)(a2 + 64)) == 0 )
          {
            sub_1564820(&v81, a1, (unsigned int)v63[1], 1700);
            sub_1478320(&v81, (__int64)"type name");
            sub_AEA040((__int64)&v81);
          }
          else
          {
            sub_1564820(&v81, a1, (unsigned int)v63[1], 1700);
            sub_1478560(&v81, v65);
            sub_AEA040((__int64)&v81);
          }
        }
      }
      ptr = v86;
      v85 = 0x200000000LL;
      LODWORD(v82) = 0;
      HIDWORD(v81) = v56;
      v83 = nullptr;
      LODWORD(v81) = 1;
      v87 = (2 * (v10 == 28)) | (((HIBYTE(v92[0]) >> 2) & 2) != 0) | v87 & 0xFC;
      sub_1497E40(a2, (unsigned __int64)&v81, (__int64)v93, 0);
      v28 = ptr;
      if ( ptr == v86 )
        goto LABEL_40;
      goto LABEL_39;
    }
  }
  else
  {
    v13 = *(_BYTE *)(v12 + 1);
    if ( (v13 & 8) != 0 )
    {
      if ( v10 == 28 || v10 == 29 && ((v13 & 0x10) != 0 || (v55 = *(_DWORD *)(a2 + 96), v55 != 19) && v55 != 13) )
      {
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v11, a1[1].m128i_i32);
        v56 = a1[2].m128i_u32[2];
        if ( !v56 )
          goto LABEL_88;
        goto LABEL_105;
      }
    }
  }
  v14 = (void (__fastcall *)(_QWORD *, __int64))v66;
  if ( v66 )
  {
    v15 = (__int64 *)((char *)a1->m128i_i64 + v67);
    if ( ((unsigned __int8)v66 & 1) != 0 )
      v14 = *(void (__fastcall **)(_QWORD *, __int64))&v66[*v15 - 1];
    v14(v15, a2);
  }
}
