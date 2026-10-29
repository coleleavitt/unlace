__int64 __fastcall sub_88D400(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ecx
  unsigned __int64 v11; // rdx
  int v12; // ebp
  int v13; // esi
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _DWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  const __m128i *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int32 v40; // edx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int16 v43; // dx
  char v44; // al
  _BYTE *v45; // rdi
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  const __m128i *v48; // r12
  unsigned __int64 v49; // rbx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int16 v56; // dx
  __int64 v57; // r13
  unsigned __int8 v58; // al
  __int64 v59; // rax
  char v60; // al
  _QWORD *v61; // rax
  __int64 v62; // r15
  _DWORD *v63; // rax
  __int64 v64; // rdi
  int v65; // edx
  _QWORD *v66; // rax
  __int64 v67; // r8
  __int64 v68; // rdi
  _DWORD *v69; // rax
  __int64 v70; // rdi
  int v71; // edx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdi
  _DWORD *v75; // rax
  __int64 v76; // rdi
  int v77; // edx
  __int64 v78; // rdi
  int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v84; // [rsp+8h] [rbp-110h]
  __int64 v86; // [rsp+18h] [rbp-100h]
  unsigned int v87; // [rsp+20h] [rbp-F8h]
  __int64 v88; // [rsp+20h] [rbp-F8h]
  __int64 v89; // [rsp+20h] [rbp-F8h]
  __int64 v90; // [rsp+20h] [rbp-F8h]
  __int64 v91; // [rsp+20h] [rbp-F8h]
  __int64 v92; // [rsp+28h] [rbp-F0h]
  __int64 v93; // [rsp+28h] [rbp-F0h]
  __int64 m128i_i64; // [rsp+30h] [rbp-E8h]
  __int64 v95; // [rsp+38h] [rbp-E0h]
  _BYTE v96[3]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+48h] [rbp-D0h]
  __m128i v98; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+60h] [rbp-B8h]
  __int32 v100; // [rsp+68h] [rbp-B0h]
  __int64 v101; // [rsp+70h] [rbp-A8h]
  __int64 v102; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __int64 v104; // [rsp+88h] [rbp-90h]
  _BYTE v105[64]; // [rsp+90h] [rbp-88h] BYREF
  __int16 v106; // [rsp+D0h] [rbp-48h]

  v5 = a3;
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 57 > 2 )
  {
    v8 = sub_7868A0(a3);
    v9 = 0;
    v12 = 0;
    v13 = 0;
    if ( !v8 )
      goto LABEL_19;
LABEL_3:
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 8);
      v8 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v11 <= 7 )
        break;
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 47 <= 2 )
        ++v10;
    }
    v12 = v10 + 1;
    v13 = 0;
    if ( !v9 )
      goto LABEL_19;
    goto LABEL_8;
  }
  v8 = sub_7868A0(a3);
  v9 = v5;
  if ( v8 )
    goto LABEL_3;
  v12 = 0;
LABEL_8:
  v14 = *(_QWORD *)(v9 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) == 0 )
  {
    if ( v16 > 3 && (v15 & 2) != 0 )
    {
      v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = v17[2275];
      if ( v18 )
      {
        v19 = v17[274];
        v17[284] += 24LL;
        v16 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17[275] >= v16 + 24 && v19 )
        {
          v17[274] = v16 + 24;
        }
        else
        {
          v84 = v18;
          v82 = sub_820510((__int64)(v17 + 274), 24, 3);
          v18 = v84;
          v16 = v82;
        }
        *(_QWORD *)v16 = v18;
        v15 = v16 | 5;
        *(_DWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v14 + 96) = v16 | 5;
        LOBYTE(v16) = v16 & 0xFA | 4;
LABEL_16:
        if ( (v16 & 4) != 0 )
        {
          v20 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v20 )
          {
            v78 = *(_QWORD *)v20;
            v79 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
            if ( v20[2] != v79 )
            {
              v20[2] = v79;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 144LL))(v78, v14);
            }
          }
        }
        goto LABEL_18;
      }
      *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
    }
LABEL_18:
    v13 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 16LL);
    goto LABEL_19;
  }
  if ( v16 )
    goto LABEL_16;
  v13 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 16LL);
LABEL_19:
  v98.m128i_i8[4] &= ~1u;
  v98.m128i_i32[0] = 0;
  sub_69F640((__int64)&v98.m128i_i64[1], v13, v12);
  v98.m128i_i32[0] = 10;
  sub_6A01B0(a5, (__int64)&v98);
  if ( v98.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v98);
  if ( *(char *)(v5 + 28) < 0 )
    return 0;
  v21 = v5;
  v86 = sub_AB4240(*(_QWORD *)(a1 + 16), v5);
  if ( !v9 )
    goto LABEL_45;
  v22 = *(_QWORD *)(v9 + 104);
  v23 = *(_QWORD *)(v22 + 96);
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v23 & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_25;
  }
  else
  {
    if ( v24 <= 3 || (v23 & 2) == 0 )
      goto LABEL_25;
    v61 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    v62 = v61[2275];
    if ( !v62 )
    {
      *(_QWORD *)(v22 + 96) = v22 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_25;
    }
    v21 = v61[274];
    v61[284] += 24LL;
    v24 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v61[275] >= v24 + 24 && v21 )
    {
      v61[274] = v24 + 24;
    }
    else
    {
      v21 = 24;
      v24 = sub_820510((__int64)(v61 + 274), 24, 3);
    }
    *(_QWORD *)v24 = v62;
    v23 = v24 | 5;
    *(_DWORD *)(v24 + 8) = 0;
    *(_QWORD *)(v24 + 16) = v22;
    *(_QWORD *)(v22 + 96) = v24 | 5;
    LOBYTE(v24) = v24 & 0xFA | 4;
  }
  if ( (v24 & 4) != 0 )
  {
    v63 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v63 )
    {
      v64 = *(_QWORD *)v63;
      v65 = *(_DWORD *)(*(_QWORD *)v63 + 12LL);
      if ( v63[2] != v65 )
      {
        v63[2] = v65;
        v21 = v22;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 144LL))(v64, v22);
      }
    }
  }
LABEL_25:
  v25 = *(_QWORD *)(v9 + 128);
  if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
    v26 = sub_7A2E20(v25);
  else
    v26 = *(_QWORD *)(v25 + 24);
  v27 = *(_QWORD *)(v9 + 104);
  v28 = *(_QWORD *)(v27 + 96);
  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v28 & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_29;
  }
  else
  {
    if ( v29 <= 3 || (v28 & 2) == 0 )
      goto LABEL_29;
    v72 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    v73 = v72[2275];
    if ( !v73 )
    {
      *(_QWORD *)(v27 + 96) = v27 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_29;
    }
    v74 = v72[274];
    v72[284] += 24LL;
    v29 = (v74 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v29 + 24;
    if ( v72[275] >= v29 + 24 && v74 )
    {
      v72[274] = v21;
    }
    else
    {
      v21 = 24;
      v91 = v73;
      v81 = sub_820510((__int64)(v72 + 274), 24, 3);
      v73 = v91;
      v29 = v81;
    }
    *(_QWORD *)v29 = v73;
    v28 = v29 | 5;
    *(_DWORD *)(v29 + 8) = 0;
    *(_QWORD *)(v29 + 16) = v27;
    *(_QWORD *)(v27 + 96) = v29 | 5;
    LOBYTE(v29) = v29 & 0xFA | 4;
  }
  if ( (v29 & 4) != 0 )
  {
    v75 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v75 )
    {
      v76 = *(_QWORD *)v75;
      v77 = *(_DWORD *)(*(_QWORD *)v75 + 12LL);
      if ( v75[2] != v77 )
      {
        v75[2] = v77;
        v21 = v27;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 144LL))(v76, v27);
      }
    }
  }
LABEL_29:
  v30 = *(_QWORD *)(v9 + 128);
  if ( (*(_BYTE *)(v30 + 24) & 1) != 0 )
    v31 = sub_7A2E20(v30);
  else
    v31 = *(_QWORD *)(v30 + 24);
  v32 = *(_QWORD *)(v9 + 104);
  v33 = *(_QWORD *)(v32 + 96);
  v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v33 & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_33;
  }
  else
  {
    if ( v34 <= 3 || (v33 & 2) == 0 )
      goto LABEL_33;
    v66 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
    v67 = v66[2275];
    if ( !v67 )
    {
      *(_QWORD *)(v32 + 96) = v32 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_33;
    }
    v68 = v66[274];
    v66[284] += 24LL;
    v34 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v34 + 24;
    if ( v66[275] >= v34 + 24 && v68 )
    {
      v66[274] = v21;
    }
    else
    {
      v21 = 24;
      v93 = v67;
      v90 = v31;
      v80 = sub_820510((__int64)(v66 + 274), 24, 3);
      v67 = v93;
      v31 = v90;
      v34 = v80;
    }
    *(_QWORD *)v34 = v67;
    v33 = v34 | 5;
    *(_DWORD *)(v34 + 8) = 0;
    *(_QWORD *)(v34 + 16) = v32;
    *(_QWORD *)(v32 + 96) = v34 | 5;
    LOBYTE(v34) = v34 & 0xFA | 4;
  }
  if ( (v34 & 4) != 0 )
  {
    v69 = (_DWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v69 )
    {
      v70 = *(_QWORD *)v69;
      v71 = *(_DWORD *)(*(_QWORD *)v69 + 12LL);
      if ( v69[2] != v71 )
      {
        v69[2] = v71;
        v21 = v32;
        v89 = v31;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 144LL))(v70, v32);
        v31 = v89;
      }
    }
  }
LABEL_33:
  v92 = v31 + 24LL * *(unsigned int *)(*(_QWORD *)(v9 + 128) + 16LL);
  if ( v92 != v26 )
  {
    v87 = 0;
    m128i_i64 = (__int64)a4[3].m128i_i64;
    v95 = v5;
    v35 = a4;
    while ( 1 )
    {
      v36 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v37 = *(_QWORD *)(v36 + 8);
      if ( (v37 & 7) != 0 || (v37 & 8) != 0 )
        v36 = sub_B0CF30(**(_QWORD **)(v26 + 16), v21);
      v38 = sub_B0E910(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL));
      v39 = _mm_loadu_si128(v35);
      v40 = v35[3].m128i_i32[2];
      ptr = v105;
      v41 = v38;
      v42 = v35[1].m128i_i64[0];
      v98 = v39;
      v99 = v42;
      v100 = v35[1].m128i_i32[2];
      v101 = v35[2].m128i_i64[0];
      v102 = v35[2].m128i_i64[1];
      v104 = 0x800000000LL;
      if ( v40 )
        sub_820650((__int64)&ptr, m128i_i64);
      v43 = v35[8].m128i_i16[0];
      LOBYTE(v43) = v43 & 3;
      v106 = v43 | v106 & 0xFC;
      if ( !(unsigned __int8)sub_829EC0(a1, a2, (__int64)&v98, v9, v41, v86) )
        goto LABEL_55;
      v21 = a2;
      v44 = sub_88D400(a1, a2, v41, &v98, *(_QWORD *)(a5 + 8) + 56LL * v87);
      v45 = ptr;
      if ( !v44 )
        goto LABEL_56;
      if ( ptr == v105 )
      {
        v26 += 24;
        ++v87;
        if ( v26 == v92 )
        {
LABEL_44:
          a4 = v35;
          v5 = v95;
          break;
        }
      }
      else
      {
        free(ptr);
        v26 += 24;
        ++v87;
        if ( v92 == v26 )
          goto LABEL_44;
      }
    }
  }
LABEL_45:
  v46 = sub_7868A0(v5);
  if ( !v46 )
    return 1;
  v47 = a5;
  v48 = a4;
  v49 = v46;
  v50 = v47;
LABEL_47:
  if ( (*(_BYTE *)(v49 + 68) & 1) != 0 && (v51 = *(_QWORD *)(v49 + 40), v51 <= 7) && !(_DWORD)v51
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 42 <= 1 )
  {
LABEL_53:
    while ( 1 )
    {
      v52 = *(_QWORD *)(v49 + 8);
      v49 = v52 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v52 <= 7 )
        return 1;
      if ( (*(_BYTE *)(v49 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_47;
    }
  }
  v54 = v48[1].m128i_i64[0];
  v55 = _mm_loadu_si128(v48);
  v104 = 0x800000000LL;
  ptr = v105;
  v99 = v54;
  LODWORD(v54) = v48[1].m128i_i32[2];
  v98 = v55;
  v100 = v54;
  v101 = v48[2].m128i_i64[0];
  v102 = v48[2].m128i_i64[1];
  if ( v48[3].m128i_i32[2] )
    sub_820650((__int64)&ptr, (__int64)v48[3].m128i_i64);
  v56 = v48[8].m128i_i16[0];
  LOBYTE(v56) = v56 & 3;
  v106 = v56 | v106 & 0xFC;
  if ( (unsigned __int8)sub_825EA0(a1, a2, (__int64)&v98, v49, v86) )
  {
    v57 = *(_QWORD *)(v49 + 48);
    *(_WORD *)v96 = *(_WORD *)v96 & 0xFE00 | 0x37;
    if ( byte_4AD234C )
      sub_AC4570(55);
    v97 = v57;
    *(_WORD *)&v96[1] &= 0xF801u;
    v58 = sub_76B710((__int64)v96);
    v96[1] = (v58 << 6) | v96[1] & 0x3F;
    v96[2] = v96[2] & 0xF8 | (v58 >> 2) & 7;
    v59 = v49;
    if ( *(char *)(v49 + 29) < 0 )
      v59 = sub_77A0C0(v49);
    if ( *(_DWORD *)(v59 + 68) <= 0xFu )
    {
      v88 = v59;
      sub_78B660(v59);
      v59 = v88;
    }
    v60 = sub_88A010(
            *(_QWORD *)(v50 + 8) + 56LL * (unsigned int)((*(_DWORD *)(v59 + 68) >> 4) + *(_DWORD *)(v50 + 16) - 1),
            a1,
            &v98,
            (unsigned __int64)v96,
            0);
    v45 = ptr;
    if ( v60 )
    {
      if ( ptr != v105 )
        free(ptr);
      goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_55:
  v45 = ptr;
LABEL_56:
  if ( v45 != v105 )
    free(v45);
  return 0;
}

