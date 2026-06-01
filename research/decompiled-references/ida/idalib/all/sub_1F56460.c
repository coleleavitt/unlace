unsigned __int64 __fastcall sub_1F56460(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // esi
  unsigned int v21; // ecx
  __int64 v22; // rdi
  __int64 *v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r15
  int v27; // r15d
  __int64 v28; // rax
  _QWORD *v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 result; // rax
  __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r14
  int v40; // r13d
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rsi
  _QWORD *v50; // rax
  __int64 (__fastcall *v51)(__int64); // rax
  __int64 v52; // r15
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 *v64; // rdi
  int v65; // eax
  __int64 v66; // rax
  bool v67; // zf
  _DWORD *v68; // r15
  __int64 v69; // rcx
  __int64 v70; // r9
  unsigned __int64 v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // r12
  int v74; // r11d
  __int64 *v75; // r10
  int v76; // edi
  __int64 *v77; // rax
  unsigned __int64 v78; // rdx
  unsigned int v79; // esi
  unsigned int v80; // edi
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // r13
  __int64 v84; // [rsp+8h] [rbp-70h] BYREF
  __m128 v85; // [rsp+10h] [rbp-68h] BYREF
  __m128i v86[5]; // [rsp+20h] [rbp-58h] BYREF

  sub_1F4A860((__int64)v86, a1, a2);
  v4 = sub_1F19370(a1[2]);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 128) = (unsigned __int64)v4 | 4;
  }
  else
  {
    v45 = a1[2];
    v46 = *(unsigned int *)(v45 + 24);
    if ( (unsigned int)v46 < *(_DWORD *)(v45 + 40)
      && (v48 = *(_QWORD **)(v45 + 8),
          v49 = *(_QWORD *)(v45 + 16),
          *(_DWORD *)(v45 + 24) = v46 + 1,
          (v50 = (_QWORD *)(sub_1F15160(v48, v49, *(_QWORD *)(*(_QWORD *)(v45 + 32) + 8 * v46)) & 0xFFFFFFFFFFFFFFF0LL)) != nullptr) )
    {
      v47 = *v50 & 0xFFFFFFFFFFFFFFFBLL;
    }
    else
    {
      v47 = 0;
    }
    *(_QWORD *)(a2 + 128) = v47;
  }
  v5 = a1[2];
  v6 = 0;
  v7 = *(unsigned int *)(v5 + 24);
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 40) )
  {
    v43 = *(_QWORD **)(v5 + 8);
    v44 = *(_QWORD *)(v5 + 16);
    *(_DWORD *)(v5 + 24) = v7 + 1;
    v6 = sub_1F15160(v43, v44, *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v7));
  }
  *(_QWORD *)(a2 + 136) = v6;
  v8 = a1[2];
  v9 = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9);
  LOWORD(v9) = ((unsigned __int8)v10 << 7) | *(_WORD *)(a2 + 74) & 0x807F;
  *(_WORD *)(a2 + 74) = v9;
  *(_BYTE *)(a2 + 75) = ((BYTE1(v10) & 1) << 7) | BYTE1(v9) & 0x7F;
  *(_BYTE *)(a2 + 76) = (BYTE2(v10) << 7) | (BYTE1(v10) >> 1);
  *(_BYTE *)(a2 + 77) = ((v10 & 0x20000) != 0) | *(_BYTE *)(a2 + 77) & 0xFC | (2 * ((v10 & 0x40000) != 0)) | 4;
  v11 = a1[2];
  v12 = *(unsigned int *)(v11 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_DWORD *)(a2 + 152) = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12);
  if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
    goto LABEL_15;
  v13 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) == 0 )
    goto LABEL_15;
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v14 == sub_B708E0 )
    v15 = sub_B70A60(a2);
  else
    v15 = v14(a2);
  v20 = *(_DWORD *)(v13 + 13032);
  v85.m128_u64[0] = v15;
  if ( !v20 )
  {
    v86[0].m128i_i64[0] = 0;
    goto LABEL_49;
  }
  v19 = v20 - 1;
  v18 = *(_QWORD *)(v13 + 13016);
  v21 = v19 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
  v16 = (__int64 *)(v18 + 16LL * v21);
  v22 = *v16;
  if ( v15 == *v16 )
    goto LABEL_11;
  v74 = 1;
  v75 = nullptr;
  if ( v22 == -4096 )
  {
LABEL_63:
    v76 = *(_DWORD *)(v13 + 13024);
    v86[0].m128i_i64[0] = (__int64)v16;
    v17 = (unsigned int)(v76 + 1);
    v18 = (unsigned int)(4 * v17);
    if ( (unsigned int)v18 < 3 * v20 )
    {
      v18 = v20 >> 3;
      if ( v20 - *(_DWORD *)(v13 + 13028) - (unsigned int)v17 > (unsigned int)v18 )
        goto LABEL_51;
      goto LABEL_50;
    }
LABEL_49:
    v20 *= 2;
LABEL_50:
    sub_1F36570(v13 + 13016, v20, (__int64)v16, v17, v18, v19);
    sub_1F20D20((__int64 *)(v13 + 13016), (__int64 *)&v85, v86);
    v15 = v85.m128_u64[0];
    v16 = (__int64 *)v86[0].m128i_i64[0];
    LODWORD(v17) = *(_DWORD *)(v13 + 13024) + 1;
LABEL_51:
    v67 = *v16 == -4096;
    *(_DWORD *)(v13 + 13024) = v17;
    if ( !v67 )
      --*(_DWORD *)(v13 + 13028);
    *v16 = v15;
    v16[1] = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( v22 == -8192 && !v75 )
      v75 = v16;
    v21 = v19 & (v74 + v21);
    LODWORD(v84) = v74 + 1;
    v16 = (__int64 *)(v18 + 16LL * v21);
    v22 = *v16;
    if ( v15 == *v16 )
      break;
    if ( v22 == -4096 )
    {
      if ( v75 )
        v16 = v75;
      goto LABEL_63;
    }
    v74 = v84;
  }
LABEL_11:
  v23 = v16 + 1;
  v24 = v16[1];
  if ( v24 )
    goto LABEL_12;
  v51 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v51 == sub_B708E0 )
    v52 = sub_B70A60(a2);
  else
    v52 = v51(a2);
  v53 = v52;
  v54 = 0;
  if ( v52 )
  {
    while ( 1 )
    {
      if ( *(char *)(v53 + 29) >= 0 && (*(_BYTE *)(v53 + 74) & 1) != 0 )
      {
        *v23 = v53;
        v24 = v53;
        goto LABEL_12;
      }
      v55 = *(_QWORD *)(v53 + 96);
      if ( (v55 & 3) != 0 )
        break;
      v53 = v55 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v55 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        goto LABEL_30;
      v53 = 0;
LABEL_31:
      if ( v53 == v54 || !v53 )
        goto LABEL_33;
    }
    v56 = *(_QWORD *)(v53 + 104);
    v57 = *(_QWORD *)(v56 + 96);
    v58 = v57 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v57 & 1) == 0 )
    {
      v59 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v57 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v60 = v57 & 2;
        v61 = v59;
        if ( !(_DWORD)v60 )
        {
LABEL_38:
          v54 = v53;
          v53 = (unsigned __int64)v61;
LABEL_30:
          if ( v52 == v53 )
            goto LABEL_33;
          goto LABEL_31;
        }
        v84 = *(_QWORD *)(v53 + 104);
        v62 = sub_6E2500(v59, v84, v60, v56, v18, v19);
        v56 = v84;
        v58 = v62 & 0xFFFFFFFFFFFFFFFELL;
        v57 = v58 | 1;
        *(_QWORD *)(v84 + 96) = v58 | 1;
      }
    }
    v63 = v57 & 0xFFFFFFFFFFFFFFF8LL;
    v61 = (_QWORD *)v63;
    if ( v58 )
    {
      if ( (v58 & 4) != 0 )
      {
        v61 = nullptr;
        if ( v63 )
        {
          v64 = *(__int64 **)v63;
          v65 = *(_DWORD *)(*(_QWORD *)v63 + 12LL);
          if ( *(_DWORD *)(v63 + 8) != v65 )
          {
            *(_DWORD *)(v63 + 8) = v65;
            v66 = *v64;
            v84 = v63;
            (*(void (__fastcall **)(__int64 *, __int64))(v66 + 152))(v64, v56);
            v63 = v84;
          }
          v61 = *(_QWORD **)(v63 + 16);
        }
      }
    }
    goto LABEL_38;
  }
LABEL_33:
  v24 = *v23;
  if ( !*v23 )
  {
    *v23 = a2;
    goto LABEL_15;
  }
LABEL_12:
  v25 = *a1 + 12992;
  v84 = v24 + 64;
  v85 = _mm_loadh_ps((const double *)&v84);
  sub_1F3B1C0(v86, v25, (__int64 *)&v85, &v85.m128_u64[1], v18, v19);
  *(_BYTE *)(a2 + 74) = *(_BYTE *)(a2 + 74) & 0xBE | 0x40;
  sub_1EFE8D0(*a1, *v23, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a2) + 2320) + 21LL) & 8) != 0 && (sub_B8D940(a2) || sub_B8DB40(a2)) )
    goto LABEL_15;
  v26 = *v23;
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(*v23) + 2320) + 21LL) & 8) != 0 )
  {
    if ( sub_B8D940(v26) || sub_B8DB40(v26) )
      goto LABEL_15;
    v26 = *v23;
  }
  v27 = sub_B78840(v26);
  if ( v27 != (unsigned int)sub_B78840(a2) )
  {
    v68 = (_DWORD *)*a1;
    v84 = *a1 + 12304;
    if ( (unsigned __int8)sub_1F20DE0(v84, v23, &v85) )
    {
      v71 = v85.m128_u64[0];
      v72 = *(unsigned int *)(v85.m128_u64[0] + 16);
      v73 = (_QWORD *)(v85.m128_u64[0] + 8);
      if ( v72 + 1 > (unsigned __int64)*(unsigned int *)(v85.m128_u64[0] + 20) )
      {
        sub_2237220(v85.m128_u64[0] + 8, v85.m128_u64[0] + 24, v72 + 1, 8);
        v72 = *(unsigned int *)(v71 + 16);
      }
LABEL_57:
      *(_QWORD *)(*v73 + 8 * v72) = a2;
      ++*((_DWORD *)v73 + 2);
      goto LABEL_15;
    }
    v77 = (__int64 *)v85.m128_u64[0];
    v86[0].m128i_i64[0] = v85.m128_u64[0];
    v78 = (unsigned int)((v68[3076] >> 1) + 1);
    if ( (v68[3076] & 1) != 0 )
    {
      v80 = 6;
      v79 = 2;
    }
    else
    {
      v79 = v68[3080];
      v80 = 3 * v79;
    }
    v81 = (unsigned int)(4 * v78);
    if ( (unsigned int)v81 >= v80 )
    {
      v79 *= 2;
    }
    else
    {
      v81 = v79 - ((_DWORD)v78 + v68[3077]);
      if ( (unsigned int)v81 > v79 >> 3 )
      {
LABEL_74:
        v68[3076] = v68[3076] & 1 | (2 * v78);
        if ( *v77 != -4096 )
          --v68[3077];
        v82 = *v23;
        v73 = v77 + 1;
        v77[2] = 0x200000000LL;
        *v77 = v82;
        v77[1] = (__int64)(v77 + 3);
        v72 = 0;
        goto LABEL_57;
      }
    }
    v83 = v84;
    sub_1F3C7D0(v84, v79, v78, v69, v81, v70);
    sub_1F20DE0(v83, v23, v86);
    v77 = (__int64 *)v86[0].m128i_i64[0];
    LODWORD(v78) = (v68[3076] >> 1) + 1;
    goto LABEL_74;
  }
LABEL_15:
  v28 = a1[2];
  v29 = *(_QWORD **)(v28 + 8);
  v30 = sub_1EE13A0((__int64)v29, *(_QWORD *)(v28 + 16), (__int64 *)(v28 + 32), (_DWORD *)(v28 + 24));
  result = sub_1EDB980(v29, v30, v31, v32, v33, v34);
  v36 = result;
  if ( result )
  {
    v37 = a1[2];
    v38 = *(unsigned int *)(v37 + 24);
    *(_DWORD *)(v37 + 24) = v38 + 1;
    v39 = *(_QWORD *)(*(_QWORD *)(v37 + 32) + 8 * v38);
    v40 = sub_1EE7490(v37);
    result = sub_B7DA50(a2, *(_QWORD **)(*a1 + 144), v36, v39, v41, v42);
    *(_DWORD *)(*(_QWORD *)(a2 + 144) + 8LL) = v40;
  }
  return result;
}
