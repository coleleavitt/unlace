__int64 __fastcall sub_1D88D50(__int64 *a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 *v6; // rbx
  __int16 v7; // ax
  bool v8; // zf
  __int64 v9; // rax
  __m128 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned int v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  char *v20; // rdi
  unsigned int v21; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int32 v27; // r12d
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rax
  char v30; // dl
  unsigned int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // dl
  __int64 v43; // rdx
  unsigned __int64 *v44; // r9
  __int64 v45; // r11
  unsigned __int64 *v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // r15
  unsigned __int64 v49; // rcx
  __m128 *v50; // r12
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // r13
  int v55; // eax
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // esi
  int v60; // eax
  __int64 v61; // r9
  bool v62; // bl
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbp
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r15
  __int64 v89; // rax
  __int64 v90; // rdx
  __m128i v91; // [rsp+0h] [rbp-168h] BYREF
  __int64 v92; // [rsp+18h] [rbp-150h]
  __int64 v93; // [rsp+20h] [rbp-148h]
  _QWORD *v94; // [rsp+28h] [rbp-140h]
  _QWORD *v95; // [rsp+30h] [rbp-138h]
  __int64 *v96; // [rsp+38h] [rbp-130h]
  __int64 *v97; // [rsp+40h] [rbp-128h]
  __m128 *v98; // [rsp+48h] [rbp-120h]
  unsigned __int8 v99; // [rsp+53h] [rbp-115h]
  int v100; // [rsp+54h] [rbp-114h]
  unsigned __int64 v101; // [rsp+58h] [rbp-110h]
  __int64 v102; // [rsp+68h] [rbp-100h] BYREF
  __int64 v103; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int64 v104; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v105; // [rsp+80h] [rbp-E8h] BYREF
  __m128 v106; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v107[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v109[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v110; // [rsp+118h] [rbp-50h]
  unsigned int v111; // [rsp+120h] [rbp-48h]
  char v112; // [rsp+124h] [rbp-44h]

  v4 = a4;
  v5 = a2 + 10;
  v6 = a1;
  v7 = *(_WORD *)a2;
  v100 = a3;
  v91.m128i_i16[0] = v7;
  v8 = (v7 & 0x1FF) == 24;
  v9 = *((unsigned int *)a2 + 1);
  v97 = a2;
  if ( v8 )
    v5 = a2 + 8;
  v94 = &v5[v9];
  if ( v94 != v5 )
  {
    v99 = 1;
    v10 = (__m128 *)v107;
    v91.m128i_i64[0] = (__int64)(a1 + 1);
    v92 = a4 + 24;
    v93 = a4 + 8;
    v98 = &v106;
    while ( 1 )
    {
      v11 = *((unsigned int *)v6 + 6);
      v12 = v6[1];
      v13 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)v11 )
      {
        v14 = (v11 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v15 = (__int64 *)(v12 + 16LL * v14);
        v16 = *v15;
        if ( v13 == *v15 )
          goto LABEL_7;
        v59 = 1;
        if ( v16 != -4096 )
          break;
      }
LABEL_67:
      sub_AEAAD0(v10, (_QWORD *)(v12 + 16 * v11), (_QWORD *)(v12 + 16 * v11), v91.m128i_i64[0], 1);
      v17 = v107[0];
LABEL_8:
      v18 = (_QWORD *)(v6[1] + 16LL * *((unsigned int *)v6 + 6));
      sub_AEAAD0(v10, v18, v18, v91.m128i_i64[0], 1);
      v19 = v13;
      if ( v107[0] != v17 )
        v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
      {
        v106.m128_u64[0] = v19;
        v42 = *(_BYTE *)(v19 + 28) & 0x7F;
        if ( v42 != 55 )
        {
          v44 = (unsigned __int64 *)v98;
          v99 = 0;
          v45 = (__int64)&v98->m128_i64[1];
          goto LABEL_52;
        }
        v43 = *(unsigned int *)(v19 + 56);
        v44 = (unsigned __int64 *)(v19 + 64);
        v45 = v19 + 64 + 8 * v43;
        v99 &= v43 == 0;
        if ( v19 + 64 != v45 )
        {
          v42 = *(_BYTE *)(*(_QWORD *)(v19 + 64) + 28LL) & 0x7F;
LABEL_52:
          v96 = v6;
          v46 = v44;
          v47 = v45;
          v48 = v4;
          v95 = v5;
          v49 = *v44;
          v50 = v10;
          if ( v42 == 81 )
          {
LABEL_53:
            v51 = *(_QWORD *)(v49 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v51 )
            {
              v52 = *(unsigned int *)(v48 + 16);
              do
              {
                v53 = *(unsigned int *)(v48 + 20);
                v50->m128_u64[0] = v51 | (*(_BYTE *)(v51 + 29) >> 5) & 3;
                v54 = v107[0];
                if ( v52 + 1 > v53 )
                {
                  sub_2237220(v93, v92, v52 + 1, 8);
                  v52 = *(unsigned int *)(v48 + 16);
                }
                *(_QWORD *)(*(_QWORD *)(v48 + 8) + 8 * v52) = v54;
                v55 = *(_DWORD *)(v48 + 16);
                *(_DWORD *)v48 = 2;
                v52 = (unsigned int)(v55 + 1);
                *(_DWORD *)(v48 + 16) = v52;
                v51 = *(_QWORD *)(v51 + 72);
              }
              while ( v51 && (*(_BYTE *)(v51 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_59;
          }
          while ( 1 )
          {
            v56 = *(unsigned int *)(v48 + 20);
            v57 = v49 | (*(_BYTE *)(v49 + 29) >> 5) & 3;
            v58 = *(unsigned int *)(v48 + 16);
            v107[0] = v57;
            if ( v58 + 1 > v56 )
            {
              v101 = v57;
              sub_2237220(v93, v92, v58 + 1, 8);
              v58 = *(unsigned int *)(v48 + 16);
              v57 = v101;
            }
            *(_QWORD *)(*(_QWORD *)(v48 + 8) + 8 * v58) = v57;
            *(_DWORD *)v48 = 2;
            ++*(_DWORD *)(v48 + 16);
LABEL_59:
            if ( ++v46 == (unsigned __int64 *)v47 )
              break;
            v49 = *v46;
            if ( (*(_BYTE *)(*v46 + 28) & 0x7F) == 0x51 )
              goto LABEL_53;
          }
          v10 = v50;
          v6 = v96;
          v5 = v95;
          v4 = v48;
        }
      }
      else if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 53 > 1 )
      {
        v20 = *(char **)(v4 + 88);
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 16) = 0;
        if ( v20 )
          sub_1A39780(v20);
        *(_BYTE *)(v4 + 166) = 0;
        v21 = 1;
        *(_OWORD *)(v4 + 88) = 0;
        return v21;
      }
      if ( v94 == ++v5 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v60 = v59 + 1;
      v14 = (v11 - 1) & (v59 + v14);
      v15 = (__int64 *)(v12 + 16LL * v14);
      v61 = *v15;
      if ( v13 == *v15 )
        break;
      v59 = v60;
      if ( v61 == -4096 )
        goto LABEL_67;
    }
LABEL_7:
    sub_AEAAD0(v10, v15, (_QWORD *)(16 * v11 + v12), v91.m128i_i64[0], 1);
    v17 = v107[0];
    goto LABEL_8;
  }
  v99 = 1;
LABEL_18:
  v21 = v99;
  LOBYTE(v21) = (v100 ^ 1) & v99;
  if ( (_BYTE)v21 )
  {
    sub_168B9F0((__int64)v107, (__int64 *)(*v6 + 8), *((_DWORD *)v97 + 6), 0x1527u, 0);
    v91.m128i_i16[0] = *(_WORD *)v97;
    v62 = (v91.m128i_i16[0] & 0x1FF) == 23;
    if ( v110 )
    {
      sub_AE9DF0(v109, v62, 2u);
    }
    else
    {
      if ( !v112 )
      {
LABEL_72:
        sub_15F7200(v107);
        return v21;
      }
      v66 = sub_168B9E0(v107);
      v69 = v108;
      if ( v108 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
      v106.m128_u64[0] = v69;
      v70 = sub_1587BC0(v66, (__int64 *)&v106, v64, v65, v67, v68);
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v111 + 8), v62, 2u);
    }
    v63 = v97[2];
    if ( v110 )
    {
      sub_AE9DF0(v109, v97[2], 9u);
    }
    else if ( v112 )
    {
      v73 = sub_168B9E0(v107);
      v76 = v108;
      if ( v108 )
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
      v106.m128_u64[0] = v76;
      v77 = sub_1587BC0(v73, (__int64 *)&v106, v71, v72, v74, v75);
      sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v111 + 8), v63, 9u);
    }
    goto LABEL_72;
  }
  sub_1A43500(v4);
  v91.m128i_i64[0] = *v97;
  if ( (v91.m128i_i32[0] & 0x80000) != 0 )
  {
    v23 = *((unsigned int *)v97 + 1);
    v91.m128i_i16[0] = *(_WORD *)v97;
    v24 = (__int64)&v97[v23 + 8];
    v25 = (__int64)&v97[v23 + 10];
    v26 = v24;
    if ( (v91.m128i_i16[0] & 0x1FF) != 0x18 )
      v26 = v25;
    if ( *(_DWORD *)(v26 + 8) && *(_DWORD *)(v4 + 16) )
    {
      v92 = **(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v91.m128i_i8[0] = *(_BYTE *)(v92 + 28);
      if ( (v91.m128i_i8[0] & 0x7Fu) - 53 <= 1 || (((v91.m128i_i8[0] & 0x7F) + 52) & 0x7Fu) <= 1 )
        v92 = sub_B72ED0(v92);
      sub_1CB3F20(*v6, v4, 1, 1);
      v27 = *(_DWORD *)(v4 + 16);
      if ( !v27 )
      {
        sub_168B9F0((__int64)v107, (__int64 *)(*v6 + 8), *(_DWORD *)(v4 + 128), 0x1406u, 0);
        v102 = *(_QWORD *)(v4 + 120);
        v93 = sub_15894B0((__int64)v107, &v102);
        v91 = _mm_loadu_si128((const __m128i *)(v97 + 5));
        v105 = v91;
        v28 = sub_E90530(v105.m128i_i64) >> 32;
        if ( v105.m128i_i64[0] )
        {
          v106 = (__m128)_mm_load_si128(&v105);
          v29 = *(_QWORD *)(v105.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v29 )
          {
            v91.m128i_i64[0] = v106.m128_i64[1];
            v30 = 0;
            v106 = _mm_loadh_ps((const double *)v91.m128i_i64);
            while ( (*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v30 = 1;
              v29 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v30 )
              v106.m128_u64[0] = v29;
          }
          v91.m128i_i64[0] = (__int64)&v106;
          v31 = sub_E90530((__int64 *)&v106);
        }
        else
        {
          v31 = 0;
          v91.m128i_i64[0] = (__int64)&v106;
        }
        v104 = __PAIR64__(v28, v31);
        v32 = sub_1587DB0(v93, (__int64 *)&v104);
        v33 = *v97;
        if ( (*v97 & 0x80000) != 0 )
        {
          v34 = *((unsigned int *)v97 + 1);
          LOWORD(v93) = *(_WORD *)v97;
          v35 = (__int64)&v97[v34 + 8];
          v36 = (__int64)&v97[v34 + 10];
          v37 = v35;
          if ( (v93 & 0x1FF) != 0x18 )
            v37 = v36;
          LOBYTE(v21) = *(_DWORD *)(v37 + 8) != 0;
        }
        if ( *(_BYTE *)(v32 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v32 + 32), (unsigned __int8)v21, 2u);
          v33 = *v97;
        }
        else if ( *(_BYTE *)(v32 + 132) )
        {
          v93 = sub_168B9E0((_QWORD *)v32);
          v82 = *(_QWORD *)(v32 + 16);
          if ( v82 )
            v82 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82 + 32LL))(*(_QWORD *)(v32 + 16));
          v106.m128_u64[0] = v82;
          v83 = sub_1587BC0(v93, (__int64 *)v91.m128i_i64[0], v78, v79, v80, v81);
          sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * *(unsigned int *)(v32 + 128) + 8), (unsigned __int8)v21, 2u);
          v33 = *v97;
        }
        if ( (v33 & 0x80000) != 0 )
        {
          v38 = *((unsigned int *)v97 + 1);
          LOWORD(v93) = *(_WORD *)v97;
          v39 = (__int64)&v97[v38 + 8];
          v40 = (__int64)&v97[v38 + 10];
          v41 = v39;
          if ( (v93 & 0x1FF) != 0x18 )
            v41 = v40;
          v27 = *(_DWORD *)(v41 + 8);
        }
        if ( *(_BYTE *)(v32 + 120) )
        {
          v106.m128_i32[0] = v27;
          v106.m128_i32[1] = v27;
          v106.m128_i8[8] = 1;
          sub_AEC610((__int64 *)(v32 + 32), (__int64 *)v91.m128i_i64[0]);
        }
        else if ( *(_BYTE *)(v32 + 132) )
        {
          v88 = sub_168B9E0((_QWORD *)v32);
          v89 = *(_QWORD *)(v32 + 16);
          if ( v89 )
            v89 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v89 + 32LL))(*(_QWORD *)(v32 + 16));
          v103 = v89;
          v90 = *sub_1587BC0(v88, &v103, v84, v85, v86, v87) + 32LL * *(unsigned int *)(v32 + 128);
          v106.m128_i32[0] = v27;
          v106.m128_i32[1] = v27;
          v106.m128_i8[8] = 1;
          sub_AEC610((__int64 *)(v90 + 8), (__int64 *)v91.m128i_i64[0]);
        }
        v21 = 1;
        sub_15F7200(v107);
        sub_168B9F0((__int64)v107, (__int64 *)(*v6 + 8), *(_DWORD *)(v92 + 24), 0x18FAu, 0);
        v106.m128_u64[0] = *(_QWORD *)(v4 + 120);
        sub_15894B0((__int64)v107, (__int64 *)v91.m128i_i64[0]);
        sub_15F7200(v107);
      }
    }
  }
  return v21;
}
