__int64 __fastcall sub_1DD8F30(
        __int64 *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r13
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbx
  __int16 v11; // ax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  char *v17; // rdi
  unsigned int v18; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  char v27; // dl
  unsigned int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // r15
  unsigned __int64 *v41; // rbp
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rax
  bool v49; // bp
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r13
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rdx
  __int32 v78; // [rsp+0h] [rbp-148h]
  unsigned __int64 v79; // [rsp+0h] [rbp-148h]
  unsigned __int64 v80; // [rsp+0h] [rbp-148h]
  __int64 v81; // [rsp+8h] [rbp-140h]
  __int64 v82; // [rsp+8h] [rbp-140h]
  __int64 v83; // [rsp+10h] [rbp-138h]
  __int64 v84; // [rsp+10h] [rbp-138h]
  __int64 v85; // [rsp+10h] [rbp-138h]
  unsigned __int64 v86; // [rsp+20h] [rbp-128h] BYREF
  _QWORD *v87; // [rsp+28h] [rbp-120h]
  __m128 *v88; // [rsp+30h] [rbp-118h]
  unsigned __int8 v89; // [rsp+3Bh] [rbp-10Dh]
  int v90; // [rsp+3Ch] [rbp-10Ch]
  __int64 v91; // [rsp+48h] [rbp-100h] BYREF
  __int64 v92; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v93; // [rsp+58h] [rbp-F0h] BYREF
  __m128i v94; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v95; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v96[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v98[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v99; // [rsp+F8h] [rbp-50h]
  unsigned int v100; // [rsp+100h] [rbp-48h]
  char v101; // [rsp+104h] [rbp-44h]

  v8 = a4;
  v9 = (_QWORD *)(a2 + 80);
  v10 = a2;
  v11 = *(_WORD *)a2;
  v90 = a3;
  v12 = (v11 & 0x1FF) == 24;
  v13 = *(unsigned int *)(a2 + 4);
  v89 = 1;
  if ( v12 )
    v9 = (_QWORD *)(a2 + 64);
  v87 = &v9[v13];
  if ( v87 != v9 )
  {
    v86 = a2;
    v14 = a4;
    v81 = a4 + 24;
    v83 = a4 + 8;
    v88 = &v95;
    while ( 1 )
    {
      v15 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = sub_1DD8310((__int64)a1, *(_DWORD *)(v86 + 24), v15, a4, a5, (__int64)a6, a7, a8);
      if ( v16 )
      {
        v95.m128_u64[0] = v16;
        v38 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( v38 != 55 )
        {
          a6 = (unsigned __int64 *)v88;
          v89 = 0;
          v40 = (__int64)&v88->m128_i64[1];
          goto LABEL_47;
        }
        v39 = *(unsigned int *)(v16 + 56);
        a6 = (unsigned __int64 *)(v16 + 64);
        v40 = v16 + 64 + 8 * v39;
        v89 &= v39 == 0;
        if ( v16 + 64 != v40 )
        {
          v38 = *(_BYTE *)(*(_QWORD *)(v16 + 64) + 28LL) & 0x7F;
LABEL_47:
          v41 = a6;
          v42 = *a6;
          if ( v38 == 81 )
          {
LABEL_48:
            v43 = *(_QWORD *)(v42 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v43 )
            {
              a4 = *(unsigned int *)(v14 + 16);
              do
              {
                v44 = *(unsigned int *)(v14 + 20);
                v45 = v43 | (*(_BYTE *)(v43 + 29) >> 5) & 3;
                v96[0] = v45;
                if ( a4 + 1 > v44 )
                {
                  v79 = v45;
                  sub_2237220(v83, v81, a4 + 1, 8);
                  a4 = *(unsigned int *)(v14 + 16);
                  v45 = v79;
                }
                *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * a4) = v45;
                v46 = *(_DWORD *)(v14 + 16);
                *(_DWORD *)v14 = 2;
                a4 = (unsigned int)(v46 + 1);
                *(_DWORD *)(v14 + 16) = a4;
                v43 = *(_QWORD *)(v43 + 72);
              }
              while ( v43 && (*(_BYTE *)(v43 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_54;
          }
          while ( 1 )
          {
            a4 = *(unsigned int *)(v14 + 16);
            v47 = *(unsigned int *)(v14 + 20);
            v48 = (*(_BYTE *)(v42 + 29) >> 5) & 3 | v42;
            v96[0] = v48;
            if ( a4 + 1 > v47 )
            {
              v80 = v48;
              sub_2237220(v83, v81, a4 + 1, 8);
              a4 = *(unsigned int *)(v14 + 16);
              v48 = v80;
            }
            *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * a4) = v48;
            *(_DWORD *)v14 = 2;
            ++*(_DWORD *)(v14 + 16);
LABEL_54:
            if ( ++v41 == (unsigned __int64 *)v40 )
              break;
            v42 = *v41;
            if ( (*(_BYTE *)(*v41 + 28) & 0x7F) == 0x51 )
              goto LABEL_48;
          }
        }
      }
      else if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 53 > 1 )
      {
        v17 = *(char **)(v14 + 88);
        *(_DWORD *)v14 = 0;
        *(_DWORD *)(v14 + 16) = 0;
        if ( v17 )
          sub_1A39780(v17);
        *(_BYTE *)(v14 + 166) = 0;
        v18 = 1;
        *(_OWORD *)(v14 + 88) = 0;
        return v18;
      }
      if ( v87 == ++v9 )
      {
        v8 = v14;
        v10 = v86;
        break;
      }
    }
  }
  v18 = v89;
  LOBYTE(v18) = (v90 ^ 1) & v89;
  if ( (_BYTE)v18 )
  {
    sub_168B9F0((__int64)v96, (__int64 *)(*a1 + 8), *(_DWORD *)(v10 + 24), 0x1527u, 0);
    v49 = (*(_WORD *)v10 & 0x1FF) == 23;
    if ( v99 )
    {
      sub_AE9DF0(v98, v49, 2u);
    }
    else
    {
      if ( !v101 )
      {
LABEL_62:
        sub_15F7200(v96);
        return v18;
      }
      v55 = sub_168B9E0(v96);
      v56 = v97;
      if ( v97 )
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v97 + 32LL))(v97);
      v95.m128_u64[0] = v56;
      v57 = sub_1587BC0(v55, (__int64 *)&v95, v51, v52, v53, v54);
      sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v100 + 8), v49, 2u);
    }
    v50 = *(_QWORD *)(v10 + 16);
    if ( v99 )
    {
      sub_AE9DF0(v98, v50, 9u);
    }
    else if ( v101 )
    {
      v60 = sub_168B9E0(v96);
      v63 = v97;
      if ( v97 )
        v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v97 + 32LL))(v97);
      v95.m128_u64[0] = v63;
      v64 = sub_1587BC0(v60, (__int64 *)&v95, v58, v59, v61, v62);
      sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * v100 + 8), v50, 9u);
    }
    goto LABEL_62;
  }
  sub_1A43500(v8);
  if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
  {
    v20 = 8LL * *(unsigned int *)(v10 + 4);
    v21 = v10 + v20 + 64;
    v22 = v10 + v20 + 80;
    v23 = v21;
    if ( (*(_WORD *)v10 & 0x1FF) != 0x18 )
      v23 = v22;
    if ( *(_DWORD *)(v23 + 8) && *(_DWORD *)(v8 + 16) )
    {
      v82 = **(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = *(_BYTE *)(v82 + 28) & 0x7F;
      if ( ((v24 + 52) & 0x7Fu) <= 1 || (unsigned int)v24 - 53 <= 1 )
        v82 = sub_B72ED0(v82);
      sub_1CB3F20(*a1, v8, 1, 1);
      v78 = *(_DWORD *)(v8 + 16);
      if ( !v78 )
      {
        sub_168B9F0((__int64)v96, (__int64 *)(*a1 + 8), *(_DWORD *)(v8 + 128), 0x1406u, 0);
        v91 = *(_QWORD *)(v8 + 120);
        v84 = sub_15894B0((__int64)v96, &v91);
        v94 = _mm_loadu_si128((const __m128i *)(v10 + 40));
        v25 = sub_E90530(v94.m128i_i64) >> 32;
        if ( v94.m128i_i64[0] )
        {
          v95 = (__m128)_mm_load_si128(&v94);
          v26 = *(_QWORD *)(v94.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v26 )
          {
            v86 = v95.m128_u64[1];
            v27 = 0;
            v95 = _mm_loadh_ps((const double *)&v86);
            while ( (*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v27 = 1;
              v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v27 )
              v95.m128_u64[0] = v26;
          }
          v28 = sub_E90530((__int64 *)&v95);
        }
        else
        {
          v28 = 0;
        }
        v93 = __PAIR64__(v25, v28);
        v29 = sub_1587DB0(v84, (__int64 *)&v93);
        v30 = *(_QWORD *)v10;
        if ( (*(_QWORD *)v10 & 0x80000) != 0 )
        {
          v31 = 8LL * *(unsigned int *)(v10 + 4);
          v32 = v10 + v31 + 64;
          v33 = v10 + v31 + 80;
          if ( (*(_WORD *)v10 & 0x1FF) != 0x18 )
            v32 = v33;
          LOBYTE(v18) = *(_DWORD *)(v32 + 8) != 0;
        }
        if ( *(_BYTE *)(v29 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v29 + 32), (unsigned __int8)v18, 2u);
          v30 = *(_QWORD *)v10;
        }
        else if ( *(_BYTE *)(v29 + 132) )
        {
          v85 = sub_168B9E0((_QWORD *)v29);
          v69 = *(_QWORD *)(v29 + 16);
          if ( v69 )
            v69 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v69 + 32LL))(*(_QWORD *)(v29 + 16));
          v95.m128_u64[0] = v69;
          v70 = sub_1587BC0(v85, (__int64 *)&v95, v65, v66, v67, v68);
          sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * *(unsigned int *)(v29 + 128) + 8), (unsigned __int8)v18, 2u);
          v30 = *(_QWORD *)v10;
        }
        if ( (v30 & 0x80000) != 0 )
        {
          v34 = 8LL * *(unsigned int *)(v10 + 4);
          v35 = v10 + v34 + 64;
          v36 = v10 + v34 + 80;
          v37 = v35;
          if ( (*(_WORD *)v10 & 0x1FF) != 0x18 )
            v37 = v36;
          v78 = *(_DWORD *)(v37 + 8);
        }
        if ( *(_BYTE *)(v29 + 120) )
        {
          v95.m128_i8[8] = 1;
          v95.m128_i32[0] = v78;
          v95.m128_i32[1] = v78;
          sub_AEC610((__int64 *)(v29 + 32), (__int64 *)&v95);
        }
        else if ( *(_BYTE *)(v29 + 132) )
        {
          v73 = sub_168B9E0((_QWORD *)v29);
          v76 = *(_QWORD *)(v29 + 16);
          if ( v76 )
            v76 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 32LL))(*(_QWORD *)(v29 + 16));
          v92 = v76;
          v77 = *sub_1587BC0(v73, &v92, v71, v72, v74, v75) + 32LL * *(unsigned int *)(v29 + 128);
          v95.m128_i8[8] = 1;
          v95.m128_i32[0] = v78;
          v95.m128_i32[1] = v78;
          sub_AEC610((__int64 *)(v77 + 8), (__int64 *)&v95);
        }
        v18 = 1;
        sub_15F7200(v96);
        sub_168B9F0((__int64)v96, (__int64 *)(*a1 + 8), *(_DWORD *)(v82 + 24), 0x18FAu, 0);
        v95.m128_u64[0] = *(_QWORD *)(v8 + 120);
        sub_15894B0((__int64)v96, (__int64 *)&v95);
        sub_15F7200(v96);
      }
    }
  }
  return v18;
}
