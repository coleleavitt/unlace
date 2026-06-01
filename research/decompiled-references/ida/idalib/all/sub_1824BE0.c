void __fastcall sub_1824BE0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // bp
  int v15; // r15d
  unsigned int v16; // ebx
  bool v17; // si
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  bool v20; // al
  char v21; // bp
  __int64 v22; // rbx
  char *v23; // rdi
  __int64 v24; // rsi
  const __m128i *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm1
  void *v33; // rbx
  unsigned __int32 v34; // ebp
  __m128i *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r14
  _BYTE *v60; // r15
  _QWORD *v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 *v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 *v71; // rbx
  char *v72; // rax
  __int64 v73; // rcx
  char *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rcx
  char *v77; // rcx
  char *i; // rax
  char *v79; // rsi
  __int64 v80; // [rsp+8h] [rbp-240h]
  char v81; // [rsp+17h] [rbp-231h]
  __m128i v83; // [rsp+40h] [rbp-208h] BYREF
  unsigned int v84; // [rsp+54h] [rbp-1F4h] BYREF
  __int64 v85; // [rsp+58h] [rbp-1F0h] BYREF
  __m128i v86; // [rsp+60h] [rbp-1E8h] BYREF
  _QWORD v87[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 *v88; // [rsp+80h] [rbp-1C8h]
  unsigned __int8 *v89[11]; // [rsp+90h] [rbp-1B8h] BYREF
  char v90; // [rsp+E8h] [rbp-160h]
  unsigned int v91; // [rsp+F0h] [rbp-158h]
  char v92; // [rsp+F4h] [rbp-154h]
  void *base; // [rsp+100h] [rbp-148h] BYREF
  __int64 v94; // [rsp+108h] [rbp-140h]
  _BYTE v95[312]; // [rsp+110h] [rbp-138h] BYREF

  base = v95;
  v94 = 0x1000000000LL;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v10 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v11 = *v10;
  v12 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
      goto LABEL_6;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 420 )
    {
      v12 += 8LL;
      if ( v11 == v12 )
        goto LABEL_6;
    }
    v54 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 420 )
      goto LABEL_49;
  }
  else
  {
    v13 = v11;
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 420 )
    {
      v13 += 8LL;
      if ( v12 == v13 )
        goto LABEL_6;
    }
    if ( v12 == v13 )
      goto LABEL_6;
    while ( 1 )
    {
      v54 = *(_QWORD *)v11;
      if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 420 )
        break;
LABEL_49:
      v11 += 8LL;
    }
  }
  v55 = *(_QWORD *)(v54 + 48);
  v56 = v55 + 16LL * *(unsigned int *)(v54 + 40);
  if ( v56 != v55 )
  {
    v57 = (unsigned int)v94;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v59 = *(_QWORD *)(v55 + 8);
        v60 = *(_BYTE **)v55;
        if ( v59 == 1 && *v60 == 42 )
          v14 = 1;
        if ( v57 + 1 > (unsigned __int64)HIDWORD(v94) )
          break;
        v58 = (char *)base + 16 * v57;
        v55 += 16;
        *v58 = v60;
        v58[1] = v59;
        v57 = (unsigned int)(v94 + 1);
        LODWORD(v94) = v94 + 1;
        if ( v56 == v55 )
          goto LABEL_7;
      }
      v80 = v56;
      v55 += 16;
      sub_2237220(&base, v95, v57 + 1, 16);
      v56 = v80;
      v61 = (char *)base + 16 * (unsigned int)v94;
      *v61 = v60;
      v61[1] = v59;
      v57 = (unsigned int)(v94 + 1);
      LODWORD(v94) = v94 + 1;
    }
    while ( v80 != v55 );
    goto LABEL_7;
  }
LABEL_6:
  v14 = 0;
LABEL_7:
  v15 = a3[3].m128i_u16[4];
  if ( a3[3].m128i_i16[4] )
  {
    v81 = v14;
    v16 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v84 = 0;
        v86 = 0u;
        if ( !(unsigned __int8)sub_181EB00(a1, (__int64)a3, v16, &v86, &v84, a7, a8) )
          goto LABEL_32;
        v20 = sub_FBD640(v86.m128i_i64[0], v86.m128i_u64[1]);
        if ( !v20 )
          break;
        a7 = _mm_load_si128(&v86);
        if ( v86.m128i_i64[1] == 1 )
        {
          v17 = v81;
          if ( *(_BYTE *)v86.m128i_i64[0] == 42 )
            v17 = v20;
          v81 = v17;
        }
        v18 = (unsigned int)v94;
        v19 = (unsigned int)v94 + 1LL;
        if ( v19 > HIDWORD(v94) )
        {
          v83 = a7;
          sub_2237220(&base, v95, v19, 16);
          v18 = (unsigned int)v94;
          a7 = _mm_load_si128(&v83);
        }
        ++v16;
        *((__m128i *)base + v18) = a7;
        LODWORD(v94) = v94 + 1;
        if ( v16 == v15 )
        {
LABEL_21:
          v21 = v81;
          v22 = (unsigned int)v94;
          goto LABEL_22;
        }
      }
      sub_168B9F0((__int64)v87, (__int64 *)(a1 + 8), v84, 0x19AFu, 0);
      if ( v90 )
        break;
      if ( v92 )
      {
        v40 = sub_168B9E0(v87);
        v44 = (__int64)v88;
        if ( v88 )
        {
          v45 = *v88;
          v83.m128i_i64[0] = v40;
          v44 = (*(__int64 (__fastcall **)(__int64 *))(v45 + 32))(v88);
          v40 = v83.m128i_i64[0];
        }
        v85 = v44;
        v46 = sub_1587BC0(v40, &v85, v40, v41, v42, v43);
        sub_AEC220((unsigned __int8 **)(*v46 + 32LL * v91 + 8), v86.m128i_i64[0], v86.m128i_i64[1]);
        if ( !v90 )
        {
LABEL_40:
          if ( v92 )
          {
            v47 = sub_168B9E0(v87);
            v51 = (__int64)v88;
            if ( v88 )
            {
              v52 = *v88;
              v83.m128i_i64[0] = v47;
              v51 = (*(__int64 (__fastcall **)(__int64 *))(v52 + 32))(v88);
              v47 = v83.m128i_i64[0];
            }
            v85 = v51;
            v53 = sub_1587BC0(v47, &v85, v47, v48, v49, v50);
            sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v91 + 8), (__int64)a3, 0x10u);
          }
          goto LABEL_20;
        }
        goto LABEL_36;
      }
LABEL_20:
      ++v16;
      sub_15F7200(v87);
      if ( v16 == v15 )
        goto LABEL_21;
    }
    sub_AEC220(v89, v86.m128i_i64[0], v86.m128i_i64[1]);
    if ( !v90 )
      goto LABEL_40;
LABEL_36:
    sub_AE9DF0(v89, (__int64)a3, 0x10u);
    goto LABEL_20;
  }
  v62 = (unsigned int)v94;
  v63 = (unsigned int)v94 + 1LL;
  if ( v63 > HIDWORD(v94) )
  {
    sub_2237220(&base, v95, v63, 16);
    v62 = (unsigned int)v94;
  }
  v21 = 1;
  v64 = (char *)base + 16 * v62;
  *v64 = "*";
  v64[1] = 1;
  v22 = (unsigned int)(v94 + 1);
  LODWORD(v94) = v94 + 1;
LABEL_22:
  v23 = (char *)base;
  v24 = 16 * v22;
  if ( (unsigned __int64)(16 * v22) > 0x10 )
  {
    qsort(base, v24 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v23 = (char *)base;
    v24 = 16LL * (unsigned int)v94;
  }
  v25 = (const __m128i *)&v23[v24];
  v26 = sub_1804640((__int64)v23, (__int64)&v23[v24]);
  v29 = base;
  v30 = (_BYTE *)base + 16 * (unsigned int)v94 - (_BYTE *)v25;
  v31 = v30 >> 4;
  if ( v30 > 0 )
  {
    do
    {
      v32 = _mm_loadu_si128(v25);
      v26 += 16;
      ++v25;
      *(__m128i *)(v26 - 16) = v32;
      --v31;
    }
    while ( v31 );
    v29 = base;
  }
  LODWORD(v94) = (v26 - (__int64)v29) >> 4;
  if ( (unsigned int)v94 > 1 && v21 )
  {
    sub_168B9F0((__int64)v87, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xC81u, 0);
    v29 = (void *)a3;
    sub_15DD120((__int64)v87, (__int64)a3);
    sub_15F7200(v87);
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v65 = sub_B8C3D0(a2, (__int64)v29, v31, v30, v27, v28);
    v68 = *v65;
    v69 = *v65 + 8LL * *((unsigned int *)v65 + 2);
    if ( *v65 >= v69 )
    {
      if ( v68 == v69 )
        goto LABEL_31;
      while ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 420 )
      {
        v69 += 8LL;
        if ( v68 == v69 )
          goto LABEL_31;
      }
    }
    else
    {
      v70 = (__int64 *)*v65;
      while ( 1 )
      {
        v68 = *v70;
        if ( *(_WORD *)(*v70 + 36) == 420 )
          break;
        if ( (__int64 *)v69 == ++v70 )
          goto LABEL_31;
      }
      if ( (__int64 *)v69 == v70 )
        goto LABEL_31;
    }
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v71 = sub_B8C3D0(a2, (__int64)v29, v68, v69, v66, v67);
      v72 = (char *)*v71;
      v73 = 8LL * *((unsigned int *)v71 + 2);
      v74 = (char *)(*v71 + v73);
      v75 = v73 >> 3;
      v76 = v73 >> 5;
      if ( v76 )
      {
        if ( *(_WORD *)(*(_QWORD *)v72 + 36LL) == 420 )
        {
          v79 = (char *)*v71;
        }
        else if ( *(_WORD *)(*((_QWORD *)v72 + 1) + 36LL) == 420 )
        {
          v79 = v72 + 8;
        }
        else if ( *(_WORD *)(*((_QWORD *)v72 + 2) + 36LL) == 420 )
        {
          v79 = v72 + 16;
        }
        else
        {
          v77 = &v72[32 * v76];
          if ( *(_WORD *)(*((_QWORD *)v72 + 3) + 36LL) == 420 )
          {
            v79 = v72 + 24;
          }
          else
          {
            while ( 1 )
            {
              v79 = v72 + 32;
              if ( v77 == v72 + 32 )
              {
                v75 = (v74 - v79) >> 3;
                goto LABEL_84;
              }
              if ( *(_WORD *)(*((_QWORD *)v72 + 4) + 36LL) == 420 )
                goto LABEL_96;
              if ( *(_WORD *)(*((_QWORD *)v72 + 5) + 36LL) == 420 )
                break;
              if ( *(_WORD *)(*((_QWORD *)v72 + 6) + 36LL) == 420 )
              {
                v79 = v72 + 48;
                goto LABEL_96;
              }
              if ( *(_WORD *)(*((_QWORD *)v72 + 7) + 36LL) == 420 )
              {
                v79 = v72 + 56;
                goto LABEL_96;
              }
              v72 += 32;
            }
            v79 = v72 + 40;
          }
        }
        goto LABEL_96;
      }
      v79 = (char *)*v71;
LABEL_84:
      if ( v75 != 2 )
      {
        if ( v75 != 3 )
        {
          if ( v75 != 1 )
          {
LABEL_87:
            v79 = v74;
LABEL_88:
            sub_17A9430(v71, v79, v74);
            if ( !*((_DWORD *)v71 + 2) )
              *(_BYTE *)(a2 + 29) &= ~1u;
            goto LABEL_31;
          }
LABEL_109:
          if ( *(_WORD *)(*(_QWORD *)v79 + 36LL) != 420 )
            goto LABEL_87;
LABEL_96:
          if ( v74 != v79 )
          {
            for ( i = v79 + 8; v74 != i; i += 8 )
            {
              if ( *(_WORD *)(*(_QWORD *)i + 36LL) != 420 )
              {
                *(_QWORD *)v79 = *(_QWORD *)i;
                v79 += 8;
              }
            }
          }
          goto LABEL_88;
        }
        if ( *(_WORD *)(*(_QWORD *)v79 + 36LL) == 420 )
          goto LABEL_96;
        v79 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v79 + 36LL) == 420 )
        goto LABEL_96;
      v79 += 8;
      goto LABEL_109;
    }
  }
LABEL_31:
  v33 = base;
  v34 = v94;
  v35 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
  sub_B38C00(v35, *(__int64 **)(a1 + 248), a3, (__int64)v33, v34);
  sub_B8CC60(a2, (__int64)v35, v36, v37, v38, v39);
LABEL_32:
  if ( base != v95 )
    free(base);
}
