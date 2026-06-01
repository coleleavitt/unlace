__int64 __fastcall sub_1B1EEE0(__int64 *a1, __int64 *a2, __int64 a3, const __m128i *a4, unsigned int a5)
{
  __int64 *v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // rdi
  unsigned __int8 v14; // dl
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 *v19; // rbp
  unsigned __int64 *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  _QWORD *v23; // r13
  unsigned __int64 v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // rdi
  void *v27; // rdi
  void **v28; // r13
  void **v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  char v39; // al
  __int64 v40; // rax
  int v41; // eax
  bool v42; // al
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v54; // rcx
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  unsigned __int8 v62; // cl
  int v63; // edx
  __int64 v64; // rax
  unsigned __int64 *v65; // rbx
  unsigned __int64 *v66; // r15
  unsigned __int64 v67; // rbp
  unsigned __int64 v68; // rax
  _QWORD *v69; // r12
  _QWORD *v70; // r14
  _QWORD *v71; // rdi
  void *v72; // rdi
  void **v73; // r12
  void **v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rbp
  int v79; // eax
  int v80; // edx
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // [rsp-8h] [rbp-260h]
  _QWORD *v87; // [rsp+8h] [rbp-250h]
  unsigned int v89; // [rsp+1Ch] [rbp-23Ch]
  __int64 v90; // [rsp+20h] [rbp-238h]
  const __m128i *v92; // [rsp+30h] [rbp-228h]
  _BYTE *v93; // [rsp+48h] [rbp-210h] BYREF
  int v94[2]; // [rsp+50h] [rbp-208h] BYREF
  int v95[2]; // [rsp+58h] [rbp-200h]
  int v96[4]; // [rsp+60h] [rbp-1F8h]
  int v97[2]; // [rsp+70h] [rbp-1E8h]
  int v98[2]; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v99; // [rsp+88h] [rbp-1D0h]
  void *ptr; // [rsp+90h] [rbp-1C8h]
  int v101; // [rsp+98h] [rbp-1C0h]
  _BYTE v102[32]; // [rsp+A0h] [rbp-1B8h] BYREF
  void *v103; // [rsp+C0h] [rbp-198h]
  unsigned __int64 *v104; // [rsp+C8h] [rbp-190h]
  int v105[2]; // [rsp+E0h] [rbp-178h] BYREF
  unsigned __int64 v106; // [rsp+E8h] [rbp-170h]
  int v107[2]; // [rsp+170h] [rbp-E8h] BYREF
  int v108[2]; // [rsp+178h] [rbp-E0h]
  int v109[2]; // [rsp+180h] [rbp-D8h]
  __int64 v110; // [rsp+188h] [rbp-D0h] BYREF
  int v111[4]; // [rsp+1C8h] [rbp-90h]
  __int64 v112; // [rsp+1D8h] [rbp-80h]
  __int64 v113; // [rsp+1E0h] [rbp-78h]
  __m128i v114; // [rsp+1E8h] [rbp-70h]
  __int64 v115; // [rsp+1F8h] [rbp-60h]
  __int64 v116; // [rsp+200h] [rbp-58h]
  __int64 v117; // [rsp+208h] [rbp-50h]
  __int64 v118; // [rsp+210h] [rbp-48h]

  v7 = a1;
  v87 = (_QWORD *)sub_168B6C0((__int64)a1);
  v8 = sub_168B6E0((__int64)a1);
  v9 = _mm_loadu_si128(a4);
  LODWORD(v8) = *(_DWORD *)(v8 + 64);
  *(_QWORD *)v108 = &v110;
  *(_QWORD *)v109 = 0x800000000LL;
  v89 = v8;
  v10 = *a1;
  *(_QWORD *)v107 = 0;
  v113 = v10;
  v11 = a4[1].m128i_i64[0];
  *(_OWORD *)v111 = 0;
  v115 = v11;
  v112 = 0;
  v114 = v9;
  v116 = 0;
  v117 = 0;
  v118 = 0x101010000LL;
  sub_1A395A0((__int64)v107);
  sub_1A5D3E0(*a1, (__int64)v107, a2, a3, 0, 1, 0.0, *(double *)v9.m128i_i64, 0);
  v12 = v85;
  if ( v107[0] == 5 )
    goto LABEL_66;
  if ( v107[0] != 2 )
  {
    v16 = *a1;
    *(_OWORD *)v96 = 0;
    *(_QWORD *)v95 = 0x101010101LL;
    *(_QWORD *)v94 = &off_2BC7820;
    *(_QWORD *)v97 = v16;
    sub_1A6BD60(
      v98,
      v16,
      a4,
      0,
      (unsigned __int64)a2,
      nullptr,
      0.0,
      *(double *)v9.m128i_i64,
      (__int64)v94,
      1,
      0,
      0,
      0,
      1u);
    if ( !*(_QWORD *)v98 )
    {
      sub_168B9F0((__int64)v105, a1, a4->m128i_u32[2], v109[0] == 0 ? 5350 : 4492, 0);
      v64 = a4->m128i_i64[0];
      v47 = 1;
      v93 = (_BYTE *)v64;
      sub_15894B0((__int64)v105, (__int64 *)&v93);
      sub_15F7200(v105);
      v65 = (unsigned __int64 *)v103;
      if ( v104 != v103 )
      {
        v66 = v104;
        do
        {
          v67 = *v65;
          if ( *v65 )
          {
            v68 = v65[1];
            if ( v68 )
            {
              if ( v67 < v68 || v67 > v68 + 14848 )
              {
                v69 = *(_QWORD **)(v67 + 528);
                v70 = &v69[8 * (unsigned __int64)*(unsigned int *)(v67 + 536)];
                if ( v69 != v70 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v70 -= 8;
                      v71 = (_QWORD *)v70[3];
                      if ( v71 == v70 + 5 )
                        break;
                      operator delete(v71);
                      if ( v69 == v70 )
                        goto LABEL_96;
                    }
                  }
                  while ( v69 != v70 );
LABEL_96:
                  v70 = *(_QWORD **)(v67 + 528);
                }
                if ( v70 != (_QWORD *)(v67 + 544) )
                  free(v70);
                v72 = *(void **)(v67 + 416);
                if ( v72 != (void *)(v67 + 432) )
                  free(v72);
                v73 = (void **)(v67 + 384);
                v74 = (void **)(v67 + 64);
                do
                {
                  while ( *v73 != v73 + 2 )
                  {
                    operator delete(*v73);
                    v73 -= 4;
                    if ( v73 == v74 )
                      goto LABEL_104;
                  }
                  v73 -= 4;
                }
                while ( v74 != v73 );
LABEL_104:
                operator delete((void *)v67, 0x3A0u);
              }
              else
              {
                v75 = *(unsigned int *)(v68 + 14976);
                *(_DWORD *)(v68 + 14976) = v75 + 1;
                *(_QWORD *)(v68 + 8 * v75 + 14848) = v67;
              }
            }
          }
          v65 += 3;
        }
        while ( v66 != v65 );
        v65 = (unsigned __int64 *)v103;
      }
      if ( v65 )
        operator delete(v65);
      if ( ptr != v102 )
        free(ptr);
      goto LABEL_58;
    }
    v17 = *a1;
    sub_168B9B0((__int64)v105, *a1 + 8, v109[0] == 0 ? 5351 : 4493);
    sub_AE9DF0((unsigned __int8 **)v105, a4->m128i_i64[0], 9u);
    sub_1A60AF0(v17, (__int64)v98, (void **)v105, 1u);
    v12 = *(_QWORD *)v105;
    if ( *(_QWORD *)v105 && v106 )
      sub_1580C40(v106, *(unsigned __int64 *)v105);
    v18 = 0;
    if ( v101 )
    {
      v18 = *(_QWORD *)ptr;
      if ( *(_QWORD *)ptr )
      {
        v62 = *(_BYTE *)(v18 + 28) & 0x7F;
        v63 = v62;
        if ( ((v62 + 52) & 0x7Fu) <= 1 || (unsigned int)v62 - 53 <= 1 )
        {
          v18 = sub_B72ED0(*(_QWORD *)ptr);
          if ( !v18 )
            goto LABEL_15;
          v63 = *(_BYTE *)(v18 + 28) & 0x7F;
        }
        if ( (unsigned int)(v63 - 40) >= 7 )
          v18 = 0;
      }
    }
LABEL_15:
    v93 = (_BYTE *)v18;
    v19 = (unsigned __int64 *)v103;
    if ( v104 != v103 )
    {
      v20 = v104;
      v92 = a4;
      do
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = v19[1];
          if ( v22 )
          {
            if ( v21 < v22 || v21 > v22 + 14848 )
            {
              v23 = *(_QWORD **)(v21 + 528);
              v24 = (unsigned __int64)*(unsigned int *)(v21 + 536) << 6;
              v25 = (_QWORD *)((char *)v23 + v24);
              if ( v23 != (_QWORD *)((char *)v23 + v24) )
              {
                do
                {
                  while ( 1 )
                  {
                    v25 -= 8;
                    v26 = (_QWORD *)v25[3];
                    if ( v26 == v25 + 5 )
                      break;
                    operator delete(v26);
                    if ( v23 == v25 )
                      goto LABEL_23;
                  }
                }
                while ( v23 != v25 );
LABEL_23:
                v25 = *(_QWORD **)(v21 + 528);
              }
              if ( v25 != (_QWORD *)(v21 + 544) )
                free(v25);
              v27 = *(void **)(v21 + 416);
              if ( v27 != (void *)(v21 + 432) )
                free(v27);
              v28 = (void **)(v21 + 384);
              v29 = (void **)(v21 + 64);
              do
              {
                while ( *v28 != v28 + 2 )
                {
                  operator delete(*v28);
                  v28 -= 4;
                  if ( v28 == v29 )
                    goto LABEL_31;
                }
                v28 -= 4;
              }
              while ( v28 != v29 );
LABEL_31:
              v12 = 928;
              operator delete((void *)v21, 0x3A0u);
            }
            else
            {
              v54 = *(unsigned int *)(v22 + 14976);
              v12 = (unsigned int)(v54 + 1);
              *(_DWORD *)(v22 + 14976) = v12;
              *(_QWORD *)(v22 + 8 * v54 + 14848) = v21;
            }
          }
        }
        v19 += 3;
      }
      while ( v20 != v19 );
      v7 = a1;
      a4 = v92;
      v19 = (unsigned __int64 *)v103;
    }
    if ( v19 )
      operator delete(v19);
    if ( ptr != v102 )
      free(ptr);
    v13 = v93;
    *(_WORD *)((char *)&v118 + 3) = 0;
    if ( a5 != 101 )
      goto LABEL_39;
    goto LABEL_8;
  }
  v13 = (_BYTE *)(**(_QWORD **)v108 & 0xFFFFFFFFFFFFFFF8LL);
  v14 = v13[28] & 0x7F;
  v15 = v14;
  if ( (unsigned int)v14 - 53 <= 1 || ((v14 + 52) & 0x7Fu) <= 1 )
  {
    v13 = (_BYTE *)sub_B72ED0((__int64)v13);
    v15 = v13[28] & 0x7F;
  }
  if ( (unsigned int)(v15 - 40) > 6 )
  {
    v55 = a4->m128i_u32[2];
    v93 = nullptr;
    sub_168B9F0((__int64)v105, v7, v55, 0x118Cu, 0);
    *(_QWORD *)v98 = a4->m128i_i64[0];
    sub_15894B0((__int64)v105, (__int64 *)v98);
    sub_15F7200(v105);
    v56 = sub_16C47B0(**(_QWORD **)v108 & 0xFFFFFFFFFFFFFFF8LL);
    sub_168B9F0((__int64)v105, v7, *(_DWORD *)(v56 + 24), 0x67u, 0);
    sub_15F7200(v105);
LABEL_66:
    v47 = 1;
    goto LABEL_58;
  }
  v93 = v13;
  *(_WORD *)((char *)&v118 + 3) = 0;
  if ( a5 != 101 )
    goto LABEL_39;
LABEL_8:
  if ( sub_9B48E0((__int64)v13) )
  {
    sub_168B9F0((__int64)v105, v7, a4->m128i_u32[2], 0x1196u, 0);
    v76 = sub_20EAB70(101, v89);
    v99 = v77;
    *(_QWORD *)v98 = v76;
    v78 = sub_166BAF0((__int64)v105, (__int64)v98);
    LOBYTE(v94[0]) = sub_17A0330((__int64)v93) ^ 1;
    sub_1588420(v78, (unsigned __int8 *)v94);
    sub_15F7200(v105);
    v79 = sub_B74100((__int64)v93, (__int64)v87);
    sub_168B9F0((__int64)v105, v7, *((_DWORD *)v93 + 6), v79 == 0 ? 6283 : 5899, 0);
    goto LABEL_57;
  }
  v13 = v93;
LABEL_39:
  v30 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
  v34 = *(_QWORD *)(v30 + 16);
  v35 = v30;
  v36 = (v34 >> 2) & 1;
  if ( ((v34 >> 2) & 1) != 0 )
  {
    v38 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    v37 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
    v39 = *(_BYTE *)(v37 + 8) & 0x7F;
    if ( !v39 )
    {
LABEL_41:
      v31 = *v7;
      v40 = *(_QWORD *)(*v7 + 3032);
      if ( !v40 )
        v40 = *(_QWORD *)(v31 + 544);
      if ( (*(_BYTE *)(v40 + 8) & 0x7F) != 0 )
        goto LABEL_56;
      goto LABEL_44;
    }
  }
  else
  {
    v37 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    v38 = v37;
    v39 = *(_BYTE *)(v37 + 8) & 0x7F;
    if ( !v39 )
      goto LABEL_41;
  }
  if ( ((v39 + 70) & 0x7Fu) <= 3 && (*(_BYTE *)(v35 + 28) & 0x7F) != 0x2B )
  {
    v48 = *(_QWORD *)(*v7 + 3032);
    if ( !v48 && (v48 = *(_QWORD *)(*v7 + 544)) == 0
      || (v90 = v48, v57 = sub_B91570(v37, v38, v48, v31, v32, v33), v57 != sub_B91570(v90, v38, v90, v58, v59, v60)) )
    {
LABEL_56:
      sub_168B9F0((__int64)v105, v7, a4->m128i_u32[2], 0x1221u, 0);
      v49 = sub_20EAB70(a5, v89);
      v99 = v50;
      *(_QWORD *)v98 = v49;
      v51 = sub_166BAF0((__int64)v105, (__int64)v98);
      sub_17B9080(v51, (__int64 *)&v93);
      sub_15F7200(v105);
      v52 = sub_B74100((__int64)v93, (__int64)v87);
      sub_168B9F0((__int64)v105, v7, *((_DWORD *)v93 + 6), v52 == 0 ? 6283 : 5899, 0);
LABEL_57:
      v47 = 1;
      sub_17B9080((__int64)v105, (__int64 *)&v93);
      sub_15F7200(v105);
      goto LABEL_58;
    }
    v38 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v36 = (*(__int64 *)(v35 + 16) >> 2) & 1;
  }
LABEL_44:
  if ( v36 )
  {
    v38 = *(_QWORD *)v38;
    if ( (*(_BYTE *)(v38 + 8) & 0x7F) != 0x18 )
      goto LABEL_46;
  }
  else if ( (*(_BYTE *)(v38 + 8) & 0x7F) != 0x18 )
  {
    goto LABEL_46;
  }
  v61 = *(_QWORD *)(*v7 + 3032);
  if ( !v61 )
    v61 = *(_QWORD *)(*v7 + 544);
  if ( (*(_BYTE *)(v61 + 8) & 0x7F) != 0 && (*(_BYTE *)(v61 + 8) & 0x7F) != 0x18
    || !(unsigned __int8)sub_B91990(v61, v38, v36, v31, v32, v33) )
  {
    goto LABEL_56;
  }
LABEL_46:
  v41 = *(_BYTE *)(v35 + 28) & 0x7F;
  if ( v41 == 40 || v41 == 46 )
  {
    v42 = sub_1AE8710(v35);
    v31 = (__int64)a2;
    if ( a2 )
    {
      if ( v42 )
      {
        v43 = *v7;
        v38 = v35;
        v44 = *(_QWORD *)(*v7 + 3032);
        if ( !v44 )
          v44 = *(_QWORD *)(v43 + 544);
        if ( !sub_17A3270(v43, v35, v44, a2, 0) )
          goto LABEL_56;
      }
    }
  }
  v45 = (__int64)v93;
  if ( a5 == 101 )
  {
    v38 = 1;
    if ( sub_B8C400((__int64)v93, 1) )
    {
      v38 = v7[1];
      sub_1AFBE90((__int64)v105, v38, (__int64)v93);
      if ( !(unsigned __int8)sub_FFEF60(v105[1], v38, v80) )
      {
        v81 = a4->m128i_u32[2];
        v47 = 1;
        sub_168B9F0((__int64)v105, v7, v81, 0x1223u, 0);
        v82 = sub_20EAB70(101, v89);
        v99 = v83;
        *(_QWORD *)v98 = v82;
        v84 = sub_166BAF0((__int64)v105, (__int64)v98);
        sub_17B9080(v84, (__int64 *)&v93);
        sub_15F7200(v105);
        goto LABEL_58;
      }
    }
    v45 = (__int64)v93;
  }
  *(_QWORD *)v105 = *(_QWORD *)(v45 + 48);
  v46 = sub_C1BEF0((__int64)v105, v38, v36, v31);
  v47 = sub_C09130(v87, 0, 0, 0, (__int64)v93, 0, a4->m128i_i32[2], v46, 1, 0, 0, 0);
LABEL_58:
  sub_169D230((__int64)v107);
  return v47;
}
