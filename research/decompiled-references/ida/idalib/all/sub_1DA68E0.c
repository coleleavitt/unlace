__int64 __fastcall sub_1DA68E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r13
  void *v15; // rdx
  __m128 v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned int v22; // r15d
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 result; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rsi
  __int64 *v28; // rax
  _QWORD *v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  int v33; // r8d
  __int64 v34; // rdx
  char v35; // r13
  unsigned int v36; // ebx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  __int16 v39; // ax
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // r9
  __int32 v47; // r8d
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  bool v55; // bl
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r13
  void *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbp
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rax
  _QWORD *v69; // rax
  unsigned __int64 v70; // [rsp+8h] [rbp-190h]
  unsigned int v71; // [rsp+8h] [rbp-190h]
  _QWORD *v72; // [rsp+8h] [rbp-190h]
  __int64 v73; // [rsp+8h] [rbp-190h]
  __int64 *v74; // [rsp+8h] [rbp-190h]
  __int64 v75; // [rsp+8h] [rbp-190h]
  unsigned __int64 v76; // [rsp+10h] [rbp-188h]
  int v77; // [rsp+10h] [rbp-188h]
  __int64 *v78; // [rsp+10h] [rbp-188h]
  unsigned __int64 v79; // [rsp+10h] [rbp-188h]
  __int64 *v80; // [rsp+18h] [rbp-180h]
  __int32 v81; // [rsp+18h] [rbp-180h]
  unsigned __int64 v82; // [rsp+20h] [rbp-178h]
  unsigned __int64 v83; // [rsp+20h] [rbp-178h]
  int v84; // [rsp+20h] [rbp-178h]
  int v85; // [rsp+30h] [rbp-168h]
  __int64 v86; // [rsp+30h] [rbp-168h]
  __int64 v87; // [rsp+40h] [rbp-158h]
  unsigned __int64 v88; // [rsp+48h] [rbp-150h]
  char v89; // [rsp+5Fh] [rbp-139h] BYREF
  __int64 v90; // [rsp+60h] [rbp-138h] BYREF
  void *v91; // [rsp+68h] [rbp-130h] BYREF
  __int64 v92[2]; // [rsp+70h] [rbp-128h] BYREF
  __m128i v93; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v94; // [rsp+90h] [rbp-108h] BYREF
  __m128i v95; // [rsp+A0h] [rbp-F8h] BYREF
  void *v96[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v97; // [rsp+C0h] [rbp-D8h]
  __m128i v98; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-B8h]
  _OWORD v100[5]; // [rsp+F0h] [rbp-A8h] BYREF
  char v101; // [rsp+148h] [rbp-50h]
  unsigned int v102; // [rsp+150h] [rbp-48h]
  char v103; // [rsp+154h] [rbp-44h]

  v9 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = *(_BYTE *)(a2 + 24);
  v11 = *a1;
  v89 = 0;
  v90 = 0;
  v12 = sub_19B0570(
          v11,
          0,
          v9 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(a2 + 28),
          (v10 & 1) == 0 ? 26 : 37,
          &v90,
          a6,
          a7,
          &v89);
  if ( v12 == 1 )
    return 1;
  v13 = *(_QWORD *)(a2 + 32);
  v14 = v90;
  v15 = *(void **)(a2 + 40);
  if ( v13 )
  {
    v13 = sub_1D9F590((__int64)a1, v13, v15, v90, 0);
    if ( !v13 )
      return 1;
  }
  v16 = 0;
  v95 = 0;
  *(_OWORD *)v96 = 0;
  v97 = 0;
  sub_15AB8B0((__int64)&v95, v13, (__int64)v15);
  v17 = *(_QWORD *)(a2 + 64);
  if ( v17 )
  {
    v18 = (v17 >> 2) & 1;
    if ( ((v17 >> 2) & 1) == 0 )
    {
      v19 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v20 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v20 = (__int64)sub_1D9F110((__int64 **)a1, *(_QWORD *)v19, (const __m128i *)(v19 + 8), v14, 0, &v95, 0.0, a7);
          if ( !v20 )
            goto LABEL_47;
        }
        goto LABEL_9;
      }
    }
    v22 = *(_DWORD *)(a2 + 72);
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        v21 = 4;
        if ( (v17 & 4) != 0 )
          v21 = v17 & 0xFFFFFFFFFFFFFFF8LL | 4;
LABEL_10:
        v23 = *(_QWORD *)(a2 + 48);
        if ( v23 )
        {
          v16 = 0;
          v98 = 0;
          *(_OWORD *)ptr = 0;
          v100[0] = 0;
          if ( (*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v70 = v21;
            v24 = sub_1D9F110((__int64 **)a1, *(_QWORD *)v23, (const __m128i *)(v23 + 8), v14, 0, &v98, 0.0, a7);
            v21 = v70;
            v23 = (__int64)v24;
            if ( !v24 )
            {
              result = 1;
              if ( HIDWORD(ptr[1]) )
              {
                free(ptr[0]);
                result = 1;
              }
              goto LABEL_48;
            }
            if ( HIDWORD(ptr[1]) )
            {
              v76 = v70;
              v72 = v24;
              free(ptr[0]);
              v21 = v76;
              v23 = (__int64)v72;
            }
          }
        }
        v31 = v12 & 0xFFFFFFFFFFFFFFFELL;
        v32 = *(unsigned int *)(a2 + 60);
        v33 = *(_DWORD *)(a2 + 56);
        v34 = v21;
        v35 = *(_BYTE *)(a2 + 24) & 1;
        v36 = *(_DWORD *)(a2 + 28);
        v37 = v22;
        v73 = *(_QWORD *)(v31 + 8);
        if ( (*(_DWORD *)v31 & 0x10000) != 0 || v21 && (v21 & 4) != 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v38 = *a1;
          v39 = v35 == 0 ? 26 : 37;
LABEL_33:
          result = sub_19AA5D0(v38, v31, v36, v39, (__int64)&v95, v23, v16, a7, v33, v32, v34, v37);
          goto LABEL_48;
        }
        v40 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v35 )
        {
          v79 = v73 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v40 + 16) != 42 )
          {
            v83 = v21;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              goto LABEL_36;
            v88 = v21;
            v85 = v33;
            v87 = v23;
            v53 = sub_F63050(v40, v32, v21, v22);
            v23 = v87;
            v33 = v85;
            v21 = v88;
            if ( !v53 )
              goto LABEL_36;
            v34 = v83;
            v37 = v22;
            v40 = *(_QWORD *)v79;
            if ( *(_BYTE *)(*(_QWORD *)v79 + 16LL) != 42 )
            {
              v86 = v83;
              v84 = v33;
              v54 = sub_F63050(v40, (unsigned int)v32, v34, v22);
              v34 = v86;
              v37 = v22;
              v40 = v54;
              v21 = v88;
              v33 = v84;
              v23 = v87;
            }
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 48 )
          {
            v38 = *a1;
            v39 = 37;
            goto LABEL_33;
          }
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
        {
          v38 = *a1;
          v39 = 26;
          goto LABEL_33;
        }
LABEL_36:
        if ( !v21 || (v77 = v33, v80 = (__int64 *)v23, (v21 & 4) != 0) )
          JUMPOUT(0x2EACAE);
        v82 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v42 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v41 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v41 | *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v93.m128i_i32[2] = v22;
        v43 = v42;
        v93.m128i_i64[0] = v42;
        sub_B85890(&v94, v42);
        v46 = v80;
        v94 = v82;
        if ( v80 )
        {
          v47 = v77;
          v48 = *(_QWORD *)(*v80 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v48 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v81 = v77, v78 = v46, v49 = sub_F63050(v48, v43, v44, v45), v46 = v78, v47 = v81, !v49) )
            {
              v74 = v46;
              v50 = (__int64 *)(*a1 + 8);
              v92[0] = *v46;
              v92[1] = (__int64)(v46 + 1);
              v51 = sub_F6CCB0(v92, v16);
              sub_168B9F0((__int64)&v98, v50, v51, 0xEA3u, 0);
              v52 = *v74;
              if ( v101 )
              {
                sub_AE9DF0((unsigned __int8 **)v100, *v74, 8u);
              }
              else
              {
                if ( !v103 )
                {
LABEL_46:
                  sub_15F7200(&v98);
                  goto LABEL_47;
                }
                v60 = sub_168B9E0(&v98);
                v61 = ptr[0];
                if ( ptr[0] )
                  v61 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 32LL))(ptr[0]);
                v91 = v61;
                v62 = sub_1587BC0(v60, (__int64 *)&v91, v56, v57, v58, v59);
                sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v102 + 8), v52, 8u);
              }
              v55 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              if ( v101 )
              {
                sub_AE9DF0((unsigned __int8 **)v100, v55, 3u);
              }
              else if ( v103 )
              {
                v65 = sub_168B9E0(&v98);
                v68 = ptr[0];
                if ( ptr[0] )
                  v68 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 32LL))(ptr[0]);
                v91 = v68;
                v69 = sub_1587BC0(v65, (__int64 *)&v91, v63, v64, v66, v67);
                sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v102 + 8), v55, 3u);
              }
              goto LABEL_46;
            }
          }
          sub_15AB760((__m128i **)&v95, *(_QWORD **)(*a1 + 248), *v46, (__int64)(v46 + 1), v47, v16);
        }
        result = (__int64)sub_19CC2F0((__m128 *)*a1, (_DWORD *)v31, v73, v36, v35 & 1, &v95, 0, 0, &v93, 0, 0, nullptr);
        goto LABEL_48;
      }
      v26 = *a1;
      v18 = (v17 >> 2) & 1;
    }
    else
    {
      v26 = *a1;
    }
    v27 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v18 )
      v27 = nullptr;
  }
  else
  {
    v22 = *(_DWORD *)(a2 + 72);
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      v21 = 4;
      goto LABEL_10;
    }
    v26 = *a1;
    v27 = nullptr;
  }
  v28 = sub_19BBC70(v26, v27, v22, 0, (__int64)&v95, v90, 0.0, a7, 0);
  if ( v28 )
  {
    v29 = *(_QWORD **)(*a1 + 248);
    v71 = *(_DWORD *)(a2 + 72);
    v30 = sub_1E5F010(v28, 0);
    v20 = (__int64)sub_A81910(v29, v30, v71);
LABEL_9:
    sub_C93FF0((__int64)&v98, v20);
    v21 = v98.m128i_i64[0];
    v22 = v98.m128i_u32[2];
    goto LABEL_10;
  }
LABEL_47:
  result = 1;
LABEL_48:
  if ( HIDWORD(v96[1]) )
  {
    v75 = result;
    free(v96[0]);
    return v75;
  }
  return result;
}
