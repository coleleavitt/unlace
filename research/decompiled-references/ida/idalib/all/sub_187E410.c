__int64 __fastcall sub_187E410(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        int a9,
        __int64 a10,
        __int64 *a11,
        char a12)
{
  unsigned int v12; // eax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // r14
  char v21; // r15
  __m128i *v22; // rdx
  unsigned __int64 v23; // r8
  char v24; // dl
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v45; // rsi
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edi
  unsigned __int64 v50; // rsi
  __int64 v51; // r9
  __int64 v52; // rax
  bool v53; // zf
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rsi
  __m128i *v60; // rbp
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  char v67; // dl
  __int64 *v68; // rax
  __int64 v69; // rcx
  int v70; // esi
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  int v73; // r11d
  unsigned __int64 v74; // r15
  int v75; // edi
  int v76; // edi
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rbp
  __int64 v80; // r15
  __int64 *v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  int v84; // esi
  unsigned int v85; // [rsp+0h] [rbp-1D8h]
  char v87; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v88; // [rsp+8h] [rbp-1D0h]
  int v89; // [rsp+14h] [rbp-1C4h]
  int v90; // [rsp+18h] [rbp-1C0h]
  unsigned int v91; // [rsp+18h] [rbp-1C0h]
  unsigned int v92; // [rsp+18h] [rbp-1C0h]
  __int64 v93; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v94; // [rsp+28h] [rbp-1B0h]
  unsigned int v95; // [rsp+2Ch] [rbp-1ACh] BYREF
  char v96; // [rsp+3Fh] [rbp-199h] BYREF
  unsigned int *v97[4]; // [rsp+40h] [rbp-198h] BYREF
  __int64 v98[18]; // [rsp+60h] [rbp-178h] BYREF
  __m128 v99; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v100; // [rsp+100h] [rbp-D8h]
  _BYTE v101[88]; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v102; // [rsp+160h] [rbp-78h]
  __int64 v103; // [rsp+168h] [rbp-70h]
  unsigned int v104; // [rsp+170h] [rbp-68h]
  __int64 v105; // [rsp+178h] [rbp-60h] BYREF
  __int128 v106; // [rsp+180h] [rbp-58h]
  __int64 v107; // [rsp+190h] [rbp-48h]

  v12 = a3;
  v16 = *a2;
  if ( !a3 )
    v12 = a4;
  v95 = a3;
  v93 = a6;
  v89 = v12;
  if ( a6 )
  {
    v96 = a3 != 0;
    v97[0] = &v95;
    v97[1] = (unsigned int *)a1;
    v99.m128_u64[1] = (unsigned __int64)v101;
    v102 = a1;
    v97[2] = (unsigned int *)&v96;
    v85 = a5;
    v103 = a6;
    v104 = a5;
    v100 = 0x800000000LL;
    v99.m128_u64[0] = 0;
    memset(&v101[64], 0, 24);
    sub_B85890(&v105, a6);
    a7 = 0;
    v107 = 65793;
    v106 = 0;
    sub_1A395A0(&v99);
    v17 = sub_B8EAA0(*(_QWORD *)(a1 + 544));
    sub_1A48440(a1, &v99, v17, 0);
    v18 = a5;
    if ( v99.m128_i32[0] != 2 || (v23 = *(_QWORD *)v99.m128_u64[1] & 0xFFFFFFFFFFFFFFF8LL, (v20 = v23) == 0) )
    {
      v19 = *(_QWORD *)(v93 + 16);
      if ( *(_DWORD *)v19 == 3
        && *(_WORD *)(v19 + 16) == 29811
        && *(_BYTE *)(v19 + 18) == 100
        && (v82 = sub_B8EAA0(*(_QWORD *)(a1 + 544)), v18 = a5, (*(_BYTE *)(v82 + 8) & 0x7F) == 0) )
      {
        if ( v96 )
        {
          sub_186A7D0(v97);
          v18 = a5;
        }
        v92 = v18;
        v21 = 1;
        v83 = sub_183D350(a1);
        v18 = v92;
        v20 = v83;
        v87 = v96 ^ 1;
      }
      else
      {
        v20 = 0;
        v21 = 0;
        v87 = v96 ^ 1;
      }
      goto LABEL_7;
    }
    if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x18 )
    {
      v24 = v96;
      if ( v96 )
      {
        v25 = *(_QWORD *)(v93 + 16);
        if ( *(_DWORD *)v25 == 3 && *(_WORD *)(v25 + 16) == 29811 && *(_BYTE *)(v25 + 18) == 100 )
        {
          v71 = *(_QWORD *)(a1 + 544);
          v94 = a5;
          v88 = v23;
          v72 = sub_B8EAA0(v71);
          v18 = v94;
          if ( (*(_BYTE *)(v72 + 8) & 0x7F) == 0 )
          {
            v21 = 0;
            sub_186A7D0(v97);
            v87 = 0;
            v18 = v94;
LABEL_7:
            v90 = v18;
            sub_169D230((__int64)&v99);
            v98[0] = sub_BA4BE0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), v96, v89, v90, v93, v20, a12);
            v22 = (__m128i *)v98[0];
            goto LABEL_15;
          }
          v24 = v96;
          v23 = v88;
        }
      }
      if ( ((*(_BYTE *)(v23 + 57) & 0x20) != 0) == v24 )
      {
        v87 = 0;
        v21 = 0;
      }
      else
      {
        v70 = a4;
        v91 = v18;
        v21 = 0;
        sub_184AF00(a1, v70, v18, &v96, v23);
        v87 = 0;
        v18 = v91;
      }
      goto LABEL_7;
    }
    sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), v85, 0x1328u, 0);
    sub_169D880((__int64)v98, &v93);
    sub_15F7200(v98);
    v26 = *(_DWORD *)(v20 + 24);
    v20 = 0;
    sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), v26, 0x71u, 0);
    v21 = 0;
    sub_15F7200(v98);
    sub_169D230((__int64)&v99);
    v98[0] = sub_BA4BE0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), v96, v89, v85, v93, 0, a12);
    sub_B88650(v98[0], 1);
    v22 = (__m128i *)v98[0];
    v87 = 0;
  }
  else
  {
    v65 = *(_QWORD *)(a1 + 544);
    v96 = a3 != 0;
    v85 = a9;
    v66 = sub_B8EAA0(v65);
    if ( (*(_BYTE *)(v66 + 8) & 0x7F) != 0 || v66 == 40 )
      v20 = *(_QWORD *)(*(_QWORD *)(v66 + 40) + 104LL);
    else
      v20 = *(_QWORD *)(v66 + 56);
    v67 = v96;
    if ( v20 && ((*(_BYTE *)(v20 + 57) & 0x20) != 0) != v96 )
    {
      sub_184AF00(a1, a4, a4, &v96, v20);
      v67 = v96;
    }
    v21 = 0;
    v98[0] = sub_BA4BE0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), v67, v89, a9, v93, v20, a12);
    v22 = (__m128i *)v98[0];
    v87 = 0;
  }
LABEL_15:
  v99.m128_i16[0] = 1;
  sub_1836B60((__int64 *)a1, v16, v22, a10, &v99, a7, a8);
  sub_16660F0(a1, v16, v98[0]);
  v27 = v98[0];
  sub_167AF90(a1, v98[0], v28, v29, v30, v31, (__m128i)a7, *(double *)a8.m128i_i64);
  if ( (*(_BYTE *)(v98[0] + 29) & 1) == 0 )
    goto LABEL_20;
  v36 = sub_B8C3D0(v98[0], v27, v32, v33, v34, v35);
  v32 = *v36;
  v37 = *v36 + 8LL * *((unsigned int *)v36 + 2);
  if ( v32 >= v37 )
  {
    if ( v32 == v37 )
      goto LABEL_20;
    if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 396 )
      goto LABEL_29;
    v68 = (__int64 *)(v37 + 8);
    while ( (__int64 *)v32 != v68 )
    {
      v69 = *v68++;
      if ( *(_WORD *)(v69 + 36) == 396 )
        goto LABEL_29;
    }
  }
  else
  {
    v38 = v32;
    while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 396 )
    {
      v38 += 8LL;
      if ( v37 == v38 )
        goto LABEL_20;
    }
    if ( v37 != v38 )
    {
LABEL_29:
      v45 = *(_QWORD *)v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 396 )
      {
        v46 = (__int64 *)(v32 + 8);
        do
          v45 = *v46++;
        while ( *(_WORD *)(v45 + 36) != 396 );
      }
      sub_1668D50(a1, v45, v85);
    }
  }
LABEL_20:
  if ( v21 )
    *(_QWORD *)(a1 + 4168) = v98[0];
  if ( v87 )
  {
    v47 = *(unsigned int *)(a1 + 10088);
    v48 = a1 + 10072;
    if ( (_DWORD)v47 )
    {
      v34 = v98[0];
      v32 = *(_QWORD *)(a1 + 10072);
      v49 = (v47 - 1) & ((LODWORD(v98[0]) >> 9) ^ (LODWORD(v98[0]) >> 4));
      v50 = v32 + 16LL * v49;
      v51 = *(_QWORD *)v50;
      if ( v98[0] == *(_QWORD *)v50 )
      {
LABEL_35:
        sub_18479A0(&v99, (_QWORD *)v50, (_QWORD *)(16 * v47 + v32), v48, 1);
        v52 = *(unsigned int *)(v99.m128_u64[0] + 8);
        goto LABEL_36;
      }
      v73 = 1;
      v74 = 0;
      if ( v51 != -4096 )
      {
        while ( 1 )
        {
          if ( !v74 && v51 == -8192 )
            v74 = v50;
          v49 = (v47 - 1) & (v73 + v49);
          v50 = v32 + 16LL * v49;
          v51 = *(_QWORD *)v50;
          if ( v98[0] == *(_QWORD *)v50 )
            goto LABEL_35;
          if ( v51 == -4096 )
          {
            if ( v74 )
              v50 = v74;
            break;
          }
          ++v73;
        }
      }
      v75 = *(_DWORD *)(a1 + 10080);
      v35 = (unsigned int)(3 * v47);
      v99.m128_u64[0] = v50;
      v76 = v75 + 1;
      if ( 4 * v76 < (unsigned int)v35 )
      {
        v35 = (unsigned int)(v47 - *(_DWORD *)(a1 + 10084) - v76);
        if ( (unsigned int)v35 > (unsigned int)v47 >> 3 )
        {
LABEL_65:
          v53 = *(_QWORD *)v50 == -4096;
          *(_DWORD *)(a1 + 10080) = v76;
          if ( !v53 )
            --*(_DWORD *)(a1 + 10084);
          *(_DWORD *)(v50 + 8) = 0;
          v77 = *(unsigned int *)(a1 + 10088);
          *(_QWORD *)v50 = v34;
          sub_18479A0(&v99, (_QWORD *)v50, (_QWORD *)(16 * v77 + v32), v48, 1);
          v78 = *(unsigned int *)(a1 + 10104);
          v79 = v99.m128_u64[0];
          v80 = v98[0];
          if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 10108) )
          {
            sub_2237220(a1 + 10096, a1 + 10112, v78 + 1, 16);
            v78 = *(unsigned int *)(a1 + 10104);
          }
          v81 = (__int64 *)(*(_QWORD *)(a1 + 10096) + 16 * v78);
          *v81 = v80;
          v81[1] = 0;
          v52 = *(unsigned int *)(a1 + 10104);
          *(_DWORD *)(a1 + 10104) = v52 + 1;
          *(_DWORD *)(v79 + 8) = v52;
LABEL_36:
          v53 = v93 == 0;
          *(_BYTE *)(*(_QWORD *)(a1 + 10096) + 16 * v52 + 8) = 0;
          if ( !v53 )
            goto LABEL_24;
          goto LABEL_37;
        }
        v84 = v47;
LABEL_79:
        sub_187E210((__int64 *)(a1 + 10072), v84, v32, v48, v34, v35);
        sub_1841050((__int64 *)(a1 + 10072), v98, &v99);
        v34 = v98[0];
        v32 = *(_QWORD *)(a1 + 10072);
        v50 = v99.m128_u64[0];
        v76 = *(_DWORD *)(a1 + 10080) + 1;
        v48 = a1 + 10072;
        goto LABEL_65;
      }
    }
    else
    {
      v99.m128_u64[0] = 0;
    }
    v84 = 2 * v47;
    goto LABEL_79;
  }
  if ( v93 )
  {
LABEL_24:
    sub_17B7670(a1, v98[0], v16, 1, v34, v35);
    goto LABEL_25;
  }
LABEL_37:
  v54 = sub_B8EAA0(*(_QWORD *)(a1 + 544));
  v59 = v98[0];
  v60 = (__m128i *)v54;
  if ( (*(_BYTE *)(v54 + 8) & 0x7F) != 0 || v54 == 40 )
  {
    *(_QWORD *)(*(_QWORD *)(v54 + 40) + 104LL) = v98[0];
  }
  else
  {
    sub_B79170(v54 - 40, v98[0]);
    v59 = v98[0];
  }
  sub_B94AD0(*(__m128i **)(a1 + 544), v59, v55, v56, v57, v58);
  if ( !v20 )
  {
    v61 = sub_B99910(*(_QWORD **)(a1 + 248), (__int64)v60, a9, 0, 0, 0, 0, v98[0], (__int64)v60);
    *a11 = v61;
    *(_BYTE *)(v61 + 29) |= 2u;
    sub_B94AD0(v60, *a11, v62, (__int64)a11, v63, v64);
  }
LABEL_25:
  sub_17A5800((__int64 *)a1, v98[0], v39, v40, v41, v42);
  v43 = v98[0];
  if ( v98[0] )
    v43 = v98[0] + 48;
  sub_17A2E00(a1, (__int64)a2, v43);
  return v98[0];
}
