void __fastcall sub_1F43F90(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // r12d
  char v10; // dl
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rsi
  _DWORD *v14; // rcx
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // eax
  unsigned int v38; // r12d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 *v41; // rdi
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // di
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r15
  __int64 v55; // r13
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rsi
  _QWORD *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // r12d
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  void **v66; // r12
  _DWORD *v67; // rbp
  __int64 *v68; // r12
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int *v71; // rbp
  __int64 v72; // rax
  unsigned int *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r13
  unsigned __int64 v76; // rax
  _QWORD *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rsi
  int v85; // ecx
  unsigned int v86; // edx
  __int64 *v87; // rax
  __int64 v88; // rdx
  unsigned int *v89; // rbx
  int v90; // eax
  int v91; // esi
  __int64 v92; // rcx
  bool v93; // zf
  _QWORD *v94; // rax
  int v95; // eax
  unsigned __int64 v96; // [rsp+8h] [rbp-90h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-88h]
  __int64 v98; // [rsp+18h] [rbp-80h]
  __int64 v99; // [rsp+20h] [rbp-78h] BYREF
  unsigned int *v100; // [rsp+28h] [rbp-70h] BYREF
  void **ptr; // [rsp+30h] [rbp-68h] BYREF
  _OWORD ptr_8[6]; // [rsp+38h] [rbp-60h] BYREF

  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v7 = v6 & 7;
  v8 = v6 & 0x100;
  v9 = v6 & 0x200;
  LOBYTE(v5) = (4 * ((v6 & 0x10) != 0)) | (8 * ((v6 & 8) != 0)) | *(_BYTE *)(a2 + 29) & 0xF3;
  *(_BYTE *)(a2 + 29) = v5;
  *((_BYTE *)a1 + 88) |= (v5 & 4) != 0;
  LOBYTE(v5) = (16 * ((v6 & 0x400) != 0))
             | (2 * ((v6 & 0x80) != 0)) & 0xEF
             | (32 * (((unsigned int)v6 >> 5) & 3))
             | *(_BYTE *)(a2 + 29) & 0x8D;
  LOBYTE(v6) = *(_BYTE *)(a2 + 28) & 0x7F | ((unsigned __int8)((unsigned int)v6 >> 11) << 7);
  *(_BYTE *)(a2 + 28) = v6;
  v10 = v6 & 0x7F;
  *(_BYTE *)(a2 + 29) = v5 | 0x80;
  if ( ((v10 + 61) & 0x7Fu) <= 1 || v10 == 47 || (unsigned __int8)sub_B8BE90(a2) )
  {
    v11 = a1[2];
    v12 = *(_QWORD **)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 16);
    v14 = (_DWORD *)(v11 + 24);
    v15 = (__int64 *)(v11 + 32);
    goto LABEL_4;
  }
  v44 = a1[2];
  v45 = *(_BYTE *)(a2 + 28) & 0x7F;
  v12 = *(_QWORD **)(v44 + 8);
  v14 = (_DWORD *)(v44 + 24);
  v15 = (__int64 *)(v44 + 32);
  v13 = *(_QWORD *)(v44 + 16);
  if ( v45 == 66 || v45 == 43 )
  {
LABEL_4:
    v16 = sub_1EE13A0((__int64)v12, v13, v15, v14);
    v96 = v16;
    if ( v8 )
    {
      v16 = sub_1EE13A0(
              *(_QWORD *)(a1[2] + 8),
              *(_QWORD *)(a1[2] + 16),
              (__int64 *)(a1[2] + 32),
              (_DWORD *)(a1[2] + 24));
      if ( !v16 )
        v16 = v96;
    }
    v20 = (_QWORD *)*a1;
    v96 = v16;
    ptr = (void **)a2;
    v21 = v20[1436];
    v22 = v20[1438] - 24LL;
    ptr_8[0] = _mm_loadh_ps((const double *)&v96);
    if ( v21 == v22 )
    {
      sub_1F20990((__int64)(v20 + 1430), (const __m128i *)&ptr);
      v20 = (_QWORD *)*a1;
    }
    else
    {
      v23 = v21 + 24;
      *(__m128i *)(v23 - 24) = _mm_load_si128((const __m128i *)&ptr);
      *(_QWORD *)(v23 - 8) = *((_QWORD *)&ptr_8[0] + 1);
      v20[1436] = v23;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(v20[18] + 2264LL) + 80LL);
    v25 = *(_QWORD *)(v24 + 72);
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) == 0 )
    {
      v27 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v28 = v25 & 2;
        v29 = (__int64)v27;
        if ( !(_DWORD)v28 )
          goto LABEL_10;
        v26 = sub_6E2500(v27, v24, v28, v17, v18, v19) & 0xFFFFFFFFFFFFFFFELL;
        v25 = v26 | 1;
        *(_QWORD *)(v24 + 72) = v26 | 1;
      }
    }
    v40 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v40;
    if ( v26 && (v26 & 4) != 0 )
    {
      v29 = 0;
      if ( !v40 )
      {
LABEL_12:
        sub_B8C080(a2, v29);
        goto LABEL_13;
      }
      v41 = *(__int64 **)v40;
      v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
      if ( *(_DWORD *)(v40 + 8) != v42 )
      {
        *(_DWORD *)(v40 + 8) = v42;
        v43 = *v41;
        v96 = v40;
        (*(void (__fastcall **)(__int64 *, __int64))(v43 + 152))(v41, v24);
        v40 = v96;
      }
      v29 = *(_QWORD *)(v40 + 16);
    }
LABEL_10:
    if ( v29 )
      v29 += 40;
    goto LABEL_12;
  }
  v46 = sub_1EE13A0(*(_QWORD *)(v44 + 8), v13, v15, v14);
  v51 = sub_1EDB980(v12, v46, v47, v48, v49, v50);
  v54 = v51;
  if ( v51 )
    v54 = sub_B8D340(v51);
  if ( v8 )
  {
    v74 = a1[2];
    v75 = *(_QWORD *)(v74 + 8);
    v76 = sub_1EE13A0(v75, *(_QWORD *)(v74 + 16), (__int64 *)(v74 + 32), (_DWORD *)(v74 + 24));
    v77 = (_QWORD *)v75;
    v55 = v54;
    v82 = sub_1EDB980(v77, v76, v78, v79, v80, v81);
    if ( v82 )
    {
      v55 = sub_B8D340(v82);
      if ( !v55 )
        v55 = v54;
    }
  }
  else
  {
    v55 = v54;
  }
  v56 = *a1;
  if ( (*(_BYTE *)(v54 + 8) & 0x7Fu) - 59 <= 2 && v54 != 64 )
  {
    v57 = sub_1F42A70(v56, v54 - 64);
    if ( v57 )
      v58 = v57 + 64;
    else
      v58 = v54;
    v59 = *(_QWORD **)(*a1 + 144);
    goto LABEL_38;
  }
  v83 = *(_DWORD *)(v56 + 13008);
  v84 = *(_QWORD *)(v56 + 12992);
  if ( v83 )
  {
    v85 = v83 - 1;
    v86 = v85 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
    v87 = (__int64 *)(v84 + 16LL * v86);
    v52 = *v87;
    if ( v54 == *v87 )
    {
LABEL_70:
      v58 = v87[1];
      v59 = *(_QWORD **)(v56 + 144);
      if ( !v58 )
        v58 = v54;
      goto LABEL_38;
    }
    v95 = 1;
    if ( v52 != -4096 )
    {
      do
      {
        v52 = (unsigned int)(v95 + 1);
        v86 = v85 & (v95 + v86);
        v87 = (__int64 *)(v84 + 16LL * v86);
        v53 = *v87;
        if ( v54 == *v87 )
          goto LABEL_70;
        v95 = v52;
      }
      while ( v53 != -4096 );
    }
  }
  v59 = *(_QWORD **)(v56 + 144);
  v58 = v54;
LABEL_38:
  sub_B8FFE0(a2, v58, v55, v59, v52, v53);
LABEL_13:
  v33 = a1[2];
  *(_DWORD *)(a2 + 24) = *((_DWORD *)a1 + 12);
  if ( v9 )
  {
    v62 = 0;
    p_ptr = (void **)&ptr;
    *(_QWORD *)&ptr_8[0] = 0x400000000LL;
    v63 = *(unsigned int *)(v33 + 24);
    ptr = (void **)ptr_8 + 1;
    *(_DWORD *)(v33 + 24) = v63 + 1;
    LODWORD(v96) = *(_QWORD *)(*(_QWORD *)(v33 + 32) + 8 * v63);
    if ( (_DWORD)v96 )
    {
      do
      {
        v64 = sub_1F21F80(v33);
        if ( v64 )
        {
          v30 = LODWORD(ptr_8[0]);
          v65 = LODWORD(ptr_8[0]) + 1LL;
          if ( v65 > DWORD1(ptr_8[0]) )
          {
            v98 = v64;
            sub_2237220(p_ptr, (char *)ptr_8 + 8, v65, 8);
            v30 = LODWORD(ptr_8[0]);
            v64 = v98;
          }
          ptr[v30] = (void *)v64;
          ++LODWORD(ptr_8[0]);
        }
        ++v62;
      }
      while ( (_DWORD)v96 != v62 );
    }
    v66 = p_ptr + 2;
    sub_B8C0D0(a2, p_ptr, *(_QWORD *)(*a1 + 144), v30, v31, v32);
    if ( ptr != v66 )
      free(ptr);
    v33 = a1[2];
  }
  v34 = *(unsigned int *)(v33 + 24);
  if ( (_DWORD)v34 == *(_DWORD *)(v33 + 40)
    || (v35 = *(_QWORD *)(v33 + 16),
        v36 = *(_QWORD *)(v33 + 8),
        *(_DWORD *)(v33 + 24) = v34 + 1,
        v37 = sub_1EDFDD0(v36, v35, *(_QWORD *)(*(_QWORD *)(v33 + 32) + 8 * v34)),
        (v38 = v37) == 0) )
  {
    if ( v7 == 4 )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL | 4;
  }
  else
  {
    v39 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 == 1 )
    {
      *(_QWORD *)(a2 + 8) = v39 | 2;
      sub_B88080(a2, v37);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = v7 | v39;
      sub_B88080(a2, v37);
      if ( v7 == 4 )
        return;
    }
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 22LL) >= 0 )
    {
      v60 = sub_1EAD760(*a1, v38);
      v99 = v60;
      if ( v60 )
      {
        if ( *(_DWORD *)(v60 + 908) == 1 )
        {
          v61 = *(_QWORD *)(a2 + 8);
          if ( (v61 & 6) != 0 )
            *(_QWORD *)(a2 + 8) = v61 & 0xFFFFFFFFFFFFFFF8LL | 1;
          return;
        }
        v67 = (_DWORD *)*a1;
        v68 = (__int64 *)(*a1 + 4584);
        if ( (unsigned __int8)sub_1F20C60(v68, &v99, &v100) )
        {
          v71 = v100;
          v72 = v100[4];
          v73 = v100 + 2;
          if ( v72 + 1 > (unsigned __int64)v100[5] )
          {
            sub_2237220(v100 + 2, v100 + 6, v72 + 1, 8);
            v72 = v71[4];
          }
LABEL_63:
          *(_QWORD *)(*(_QWORD *)v73 + 8 * v72) = a2;
          ++v73[2];
          return;
        }
        v88 = (unsigned int)v67[1150];
        v89 = v100;
        v90 = v67[1148] + 1;
        v91 = 2 * v88;
        v92 = (unsigned int)(3 * v88);
        ptr = (void **)v100;
        if ( 4 * v90 < (unsigned int)v92 )
        {
          v92 = (unsigned int)(v88 - v67[1149] - v90);
          if ( (unsigned int)v92 > (unsigned int)v88 >> 3 )
          {
LABEL_75:
            v93 = *(_QWORD *)v89 == -4096;
            v67[1148] = v90;
            if ( !v93 )
              --v67[1149];
            *(_QWORD *)v89 = v99;
            v94 = v89 + 6;
            v73 = v89 + 2;
            *(_QWORD *)v73 = v94;
            *((_QWORD *)v73 + 1) = 0x200000000LL;
            v72 = 0;
            goto LABEL_63;
          }
          v91 = v88;
        }
        sub_1F36240((__int64 **)v68, v91, v88, v92, v69, v70);
        sub_1F20C60(v68, &v99, &ptr);
        v89 = (unsigned int *)ptr;
        v90 = v67[1148] + 1;
        goto LABEL_75;
      }
    }
  }
}
