__int64 __fastcall sub_174BAF0(_QWORD *a1, __int16 *a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int16 v6; // ax
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // r13
  unsigned int v14; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // al
  unsigned __int8 v21; // al
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rbx
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
  unsigned __int64 *v40; // rcx
  __int64 v41; // r14
  unsigned __int64 *v42; // rbx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbp
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rax
  bool v52; // bp
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r13
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbp
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rdx
  __int32 v82; // [rsp+8h] [rbp-150h]
  unsigned __int64 v83; // [rsp+8h] [rbp-150h]
  unsigned __int64 v84; // [rsp+8h] [rbp-150h]
  __m128i v85; // [rsp+10h] [rbp-148h] BYREF
  __int64 v86; // [rsp+20h] [rbp-138h]
  _QWORD *v87; // [rsp+28h] [rbp-130h]
  _QWORD *v88; // [rsp+30h] [rbp-128h]
  __int64 *v89; // [rsp+38h] [rbp-120h]
  __m128 *v90; // [rsp+40h] [rbp-118h]
  unsigned __int8 v91; // [rsp+4Bh] [rbp-10Dh]
  int v92; // [rsp+4Ch] [rbp-10Ch]
  __int64 v93; // [rsp+58h] [rbp-100h] BYREF
  __int64 v94; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v95; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v96; // [rsp+70h] [rbp-E8h] BYREF
  __m128 v97; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v98[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v100[11]; // [rsp+B0h] [rbp-A8h] BYREF
  char v101; // [rsp+108h] [rbp-50h]
  unsigned int v102; // [rsp+110h] [rbp-48h]
  char v103; // [rsp+114h] [rbp-44h]

  v4 = a4;
  v5 = a2 + 40;
  v6 = *a2;
  v92 = a3;
  v7 = (v6 & 0x1FF) == 24;
  v8 = *((unsigned int *)a2 + 1);
  v87 = a1;
  if ( v7 )
    v5 = a2 + 32;
  v89 = (__int64 *)a2;
  v91 = 1;
  v88 = &v5[v8];
  if ( v88 != v5 )
  {
    v86 = a4 + 24;
    v85.m128i_i64[0] = a4 + 8;
    v90 = &v97;
    while ( 1 )
    {
      v10 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = sub_17473B0((__int64)v87, v10);
      if ( v11 )
      {
        v97.m128_u64[0] = v11;
        v38 = *(_BYTE *)(v11 + 28) & 0x7F;
        if ( v38 != 55 )
        {
          v40 = (unsigned __int64 *)v90;
          v91 = 0;
          v41 = (__int64)&v90->m128_i64[1];
          goto LABEL_47;
        }
        v39 = *(unsigned int *)(v11 + 56);
        v40 = (unsigned __int64 *)(v11 + 64);
        v41 = v11 + 64 + 8 * v39;
        v91 &= v39 == 0;
        if ( v11 + 64 != v41 )
        {
          v38 = *(_BYTE *)(*(_QWORD *)(v11 + 64) + 28LL) & 0x7F;
LABEL_47:
          v42 = v40;
          v43 = *v40;
          if ( v38 == 81 )
          {
LABEL_48:
            v44 = *(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v44 )
            {
              v45 = *(unsigned int *)(a4 + 16);
              do
              {
                v46 = *(unsigned int *)(a4 + 20);
                v47 = v44 | (*(_BYTE *)(v44 + 29) >> 5) & 3;
                v98[0] = v47;
                if ( v45 + 1 > v46 )
                {
                  v83 = v47;
                  sub_2237220(v85.m128i_i64[0], v86, v45 + 1, 8);
                  v45 = *(unsigned int *)(a4 + 16);
                  v47 = v83;
                }
                *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v45) = v47;
                v48 = *(_DWORD *)(a4 + 16);
                *(_DWORD *)a4 = 2;
                v45 = (unsigned int)(v48 + 1);
                *(_DWORD *)(a4 + 16) = v45;
                v44 = *(_QWORD *)(v44 + 72);
              }
              while ( v44 && (*(_BYTE *)(v44 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_54;
          }
          while ( 1 )
          {
            v49 = *(unsigned int *)(a4 + 16);
            v50 = *(unsigned int *)(a4 + 20);
            v51 = (*(_BYTE *)(v43 + 29) >> 5) & 3 | v43;
            v98[0] = v51;
            if ( v49 + 1 > v50 )
            {
              v84 = v51;
              sub_2237220(v85.m128i_i64[0], v86, v49 + 1, 8);
              v49 = *(unsigned int *)(a4 + 16);
              v51 = v84;
            }
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v49) = v51;
            *(_DWORD *)a4 = 2;
            ++*(_DWORD *)(a4 + 16);
LABEL_54:
            if ( ++v42 == (unsigned __int64 *)v41 )
              break;
            v43 = *v42;
            if ( (*(_BYTE *)(*v42 + 28) & 0x7F) == 0x51 )
              goto LABEL_48;
          }
        }
      }
      else if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 53 > 1 )
      {
        v12 = *(void **)(a4 + 88);
        v13 = a4;
        *(_DWORD *)a4 = 0;
        *(_DWORD *)(a4 + 16) = 0;
        if ( v12 )
          sub_1A39780(v12);
        *(_BYTE *)(a4 + 166) = 0;
        v14 = 1;
        *(_OWORD *)(v13 + 88) = 0;
        return v14;
      }
      if ( v88 == ++v5 )
      {
        v4 = a4;
        break;
      }
    }
  }
  v14 = v91;
  LOBYTE(v14) = (v92 ^ 1) & v91;
  if ( (_BYTE)v14 )
  {
    sub_168B9F0((__int64)v98, (__int64 *)(*v87 + 8LL), *((_DWORD *)v89 + 6), 0x1527u, 0);
    v52 = (*(_WORD *)v89 & 0x1FF) == 23;
    if ( v101 )
    {
      sub_AE9DF0(v100, v52, 2u);
    }
    else
    {
      if ( !v103 )
      {
LABEL_62:
        sub_15F7200(v98);
        return v14;
      }
      v58 = sub_168B9E0(v98);
      v59 = v99;
      if ( v99 )
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
      v97.m128_u64[0] = v59;
      v60 = sub_1587BC0(v58, (__int64 *)&v97, v54, v55, v56, v57);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v102 + 8), v52, 2u);
    }
    v53 = v89[2];
    if ( v101 )
    {
      sub_AE9DF0(v100, v89[2], 9u);
    }
    else if ( v103 )
    {
      v63 = sub_168B9E0(v98);
      v66 = v99;
      if ( v99 )
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
      v97.m128_u64[0] = v66;
      v67 = sub_1587BC0(v63, (__int64 *)&v97, v61, v62, v64, v65);
      sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v102 + 8), v53, 9u);
    }
    goto LABEL_62;
  }
  sub_1A43500(v4);
  if ( (*v89 & 0x80000) != 0 )
  {
    v16 = *((unsigned int *)v89 + 1);
    v17 = (__int64)&v89[v16 + 8];
    v18 = (__int64)&v89[v16 + 10];
    v19 = v17;
    if ( (*(_WORD *)v89 & 0x1FF) != 0x18 )
      v19 = v18;
    if ( *(_DWORD *)(v19 + 8) && *(_DWORD *)(v4 + 16) )
    {
      v20 = *(_BYTE *)((**(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28);
      v86 = **(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v21 = v20 & 0x7F;
      if ( ((v21 + 52) & 0x7Fu) <= 1 || (unsigned int)v21 - 53 <= 1 )
        v86 = sub_B72ED0(v86);
      sub_1CB3F20(*v87, v4, 1, 1);
      v82 = *(_DWORD *)(v4 + 16);
      if ( !v82 )
      {
        v22 = *(_DWORD *)(v4 + 128);
        v23 = (__int64 *)(*v87 + 8LL);
        v85.m128i_i64[0] = *v87;
        sub_168B9F0((__int64)v98, v23, v22, 0x1406u, 0);
        v93 = *(_QWORD *)(v4 + 120);
        v24 = sub_15894B0((__int64)v98, &v93);
        v85 = _mm_loadu_si128((const __m128i *)(v89 + 5));
        v96 = v85;
        v25 = sub_E90530(v96.m128i_i64) >> 32;
        if ( v96.m128i_i64[0] )
        {
          v97 = (__m128)_mm_load_si128(&v96);
          v26 = *(_QWORD *)(v96.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v26 )
          {
            v85.m128i_i64[0] = v97.m128_i64[1];
            v27 = 0;
            v97 = _mm_loadh_ps((const double *)v85.m128i_i64);
            while ( (*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v27 = 1;
              v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v27 )
              v97.m128_u64[0] = v26;
          }
          v28 = sub_E90530((__int64 *)&v97);
        }
        else
        {
          v28 = 0;
        }
        v95 = __PAIR64__(v25, v28);
        v29 = sub_1587DB0(v24, (__int64 *)&v95);
        v30 = *v89;
        if ( (*v89 & 0x80000) != 0 )
        {
          v31 = *((unsigned int *)v89 + 1);
          v85.m128i_i16[0] = *(_WORD *)v89;
          v32 = (__int64)&v89[v31 + 8];
          v33 = (__int64)&v89[v31 + 10];
          if ( (v85.m128i_i16[0] & 0x1FF) != 0x18 )
            v32 = v33;
          LOBYTE(v14) = *(_DWORD *)(v32 + 8) != 0;
        }
        if ( *(_BYTE *)(v29 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v29 + 32), (unsigned __int8)v14, 2u);
          v30 = *v89;
        }
        else if ( *(_BYTE *)(v29 + 132) )
        {
          v70 = sub_168B9E0((_QWORD *)v29);
          v73 = *(_QWORD *)(v29 + 16);
          if ( v73 )
            v73 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v73 + 32LL))(*(_QWORD *)(v29 + 16));
          v97.m128_u64[0] = v73;
          v74 = sub_1587BC0(v70, (__int64 *)&v97, v68, v69, v71, v72);
          sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * *(unsigned int *)(v29 + 128) + 8), (unsigned __int8)v14, 2u);
          v30 = *v89;
        }
        if ( (v30 & 0x80000) != 0 )
        {
          v34 = *((unsigned int *)v89 + 1);
          v35 = (__int64)&v89[v34 + 8];
          v36 = (__int64)&v89[v34 + 10];
          v37 = v35;
          if ( (*(_WORD *)v89 & 0x1FF) != 0x18 )
            v37 = v36;
          v82 = *(_DWORD *)(v37 + 8);
        }
        if ( *(_BYTE *)(v29 + 120) )
        {
          v97.m128_i8[8] = 1;
          v97.m128_i32[0] = v82;
          v97.m128_i32[1] = v82;
          sub_AEC610((__int64 *)(v29 + 32), (__int64 *)&v97);
        }
        else if ( *(_BYTE *)(v29 + 132) )
        {
          v77 = sub_168B9E0((_QWORD *)v29);
          v80 = *(_QWORD *)(v29 + 16);
          if ( v80 )
            v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v80 + 32LL))(*(_QWORD *)(v29 + 16));
          v94 = v80;
          v81 = *sub_1587BC0(v77, &v94, v75, v76, v78, v79) + 32LL * *(unsigned int *)(v29 + 128);
          v97.m128_i8[8] = 1;
          v97.m128_i32[0] = v82;
          v97.m128_i32[1] = v82;
          sub_AEC610((__int64 *)(v81 + 8), (__int64 *)&v97);
        }
        v14 = 1;
        sub_15F7200(v98);
        sub_168B9F0((__int64)v98, (__int64 *)(*v87 + 8LL), *(_DWORD *)(v86 + 24), 0x18FAu, 0);
        v97.m128_u64[0] = *(_QWORD *)(v4 + 120);
        sub_15894B0((__int64)v98, (__int64 *)&v97);
        sub_15F7200(v98);
      }
    }
  }
  return v14;
}
