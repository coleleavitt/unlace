__int64 __fastcall sub_1E2C2E0(
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
  __int64 v52; // r13
  bool v53; // bl
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  unsigned __int64 v63; // [rsp+8h] [rbp-190h]
  unsigned int v64; // [rsp+8h] [rbp-190h]
  _QWORD *v65; // [rsp+8h] [rbp-190h]
  __int64 v66; // [rsp+8h] [rbp-190h]
  __int64 *v67; // [rsp+8h] [rbp-190h]
  __int64 v68; // [rsp+8h] [rbp-190h]
  unsigned __int64 v69; // [rsp+10h] [rbp-188h]
  int v70; // [rsp+10h] [rbp-188h]
  __int64 *v71; // [rsp+10h] [rbp-188h]
  unsigned __int64 v72; // [rsp+10h] [rbp-188h]
  __int64 *v73; // [rsp+18h] [rbp-180h]
  __int32 v74; // [rsp+18h] [rbp-180h]
  unsigned __int64 v75; // [rsp+20h] [rbp-178h]
  unsigned __int64 v76; // [rsp+20h] [rbp-178h]
  int v77; // [rsp+20h] [rbp-178h]
  int v78; // [rsp+30h] [rbp-168h]
  __int64 v79; // [rsp+30h] [rbp-168h]
  __int64 v80; // [rsp+40h] [rbp-158h]
  unsigned __int64 v81; // [rsp+48h] [rbp-150h]
  char v82; // [rsp+57h] [rbp-141h] BYREF
  __int64 v83; // [rsp+58h] [rbp-140h] BYREF
  __int64 v84; // [rsp+60h] [rbp-138h] BYREF
  __int64 v85; // [rsp+68h] [rbp-130h] BYREF
  __int64 v86[2]; // [rsp+70h] [rbp-128h] BYREF
  __m128i v87; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v88; // [rsp+90h] [rbp-108h] BYREF
  __m128i v89; // [rsp+A0h] [rbp-F8h] BYREF
  void *v90[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v91; // [rsp+C0h] [rbp-D8h]
  __m128i v92; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-B8h]
  __int128 v94; // [rsp+F0h] [rbp-A8h]

  v9 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = *(_BYTE *)(a2 + 24);
  v11 = *a1;
  v82 = 0;
  v83 = 0;
  v12 = sub_19B0570(
          v11,
          0,
          v9 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(a2 + 28),
          (v10 & 1) == 0 ? 26 : 37,
          &v83,
          a6,
          a7,
          &v82);
  if ( v12 == 1 )
    return 1;
  v13 = *(_QWORD *)(a2 + 32);
  v14 = v83;
  v15 = *(void **)(a2 + 40);
  if ( v13 )
  {
    v13 = sub_1E237D0((__int64)a1, v13, v15, v83, 0);
    if ( !v13 )
      return 1;
  }
  v16 = 0;
  v89 = 0;
  *(_OWORD *)v90 = 0;
  v91 = 0;
  sub_15AB8B0((__int64)&v89, v13, (__int64)v15);
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
        if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_9;
        v20 = (__int64)sub_1E23350((__int64 **)a1, *(_QWORD *)v19, (const __m128i *)(v19 + 8), v14, 0, &v89, 0.0, a7);
        if ( v20 )
          goto LABEL_9;
        goto LABEL_47;
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
          v92 = 0;
          *(_OWORD *)ptr = 0;
          v94 = 0;
          if ( (*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v63 = v21;
            v24 = sub_1E23350((__int64 **)a1, *(_QWORD *)v23, (const __m128i *)(v23 + 8), v14, 0, &v92, 0.0, a7);
            v21 = v63;
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
              v69 = v63;
              v65 = v24;
              free(ptr[0]);
              v21 = v69;
              v23 = (__int64)v65;
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
        v66 = *(_QWORD *)(v31 + 8);
        if ( (*(_DWORD *)v31 & 0x10000) != 0 || v21 && (v21 & 4) != 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v38 = *a1;
          v39 = v35 == 0 ? 26 : 37;
LABEL_33:
          result = sub_19AA5D0(v38, v31, v36, v39, (__int64)&v89, v23, v16, a7, v33, v32, v34, v37);
          goto LABEL_48;
        }
        v40 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v35 )
        {
          v72 = v66 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v40 + 16) != 42 )
          {
            v76 = v21;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              goto LABEL_36;
            v81 = v21;
            v78 = v33;
            v80 = v23;
            v54 = sub_F63050(v40, v32, v21, v22);
            v23 = v80;
            v33 = v78;
            v21 = v81;
            if ( !v54 )
              goto LABEL_36;
            v34 = v76;
            v37 = v22;
            v40 = *(_QWORD *)v72;
            if ( *(_BYTE *)(*(_QWORD *)v72 + 16LL) != 42 )
            {
              v79 = v76;
              v77 = v33;
              v55 = sub_F63050(v40, (unsigned int)v32, v34, v22);
              v34 = v79;
              v37 = v22;
              v40 = v55;
              v21 = v81;
              v33 = v77;
              v23 = v80;
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
        if ( !v21 || (v70 = v33, v73 = (__int64 *)v23, (v21 & 4) != 0) )
          JUMPOUT(0x2EAE30);
        v75 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v42 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v41 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v41 | *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v87.m128i_i32[2] = v22;
        v43 = v42;
        v87.m128i_i64[0] = v42;
        sub_B85890(&v88, v42);
        v46 = v73;
        v88 = v75;
        if ( v73 )
        {
          v47 = v70;
          v48 = *(_QWORD *)(*v73 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v48 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v74 = v70, v71 = v46, v49 = sub_F63050(v48, v43, v44, v45), v46 = v71, v47 = v74, !v49) )
            {
              v67 = v46;
              v50 = (__int64 *)(*a1 + 8);
              v86[0] = *v46;
              v86[1] = (__int64)(v46 + 1);
              v51 = sub_F6CCB0(v86, v16);
              sub_168B9F0((__int64)&v92, v50, v51, 0xEA3u, 0);
              v84 = *v67;
              v52 = sub_162B6D0((__int64)&v92, &v84);
              v53 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              if ( *(_BYTE *)(v52 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v52 + 32), v53, 3u);
              }
              else if ( *(_BYTE *)(v52 + 132) )
              {
                v58 = sub_168B9E0((_QWORD *)v52);
                v61 = *(_QWORD *)(v52 + 16);
                if ( v61 )
                  v61 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v61 + 32LL))(*(_QWORD *)(v52 + 16));
                v85 = v61;
                v62 = sub_1587BC0(v58, &v85, v56, v57, v59, v60);
                sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * *(unsigned int *)(v52 + 128) + 8), v53, 3u);
              }
              sub_15F7200(&v92);
              goto LABEL_47;
            }
          }
          sub_15AB760((__m128i **)&v89, *(_QWORD **)(*a1 + 248), *v46, (__int64)(v46 + 1), v47, v16);
        }
        result = (__int64)sub_19CC2F0((__m128 *)*a1, (_DWORD *)v31, v66, v36, v35 & 1, &v89, 0, 0, &v87, 0, 0, nullptr);
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
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v21 = 4;
      if ( (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_10;
    }
    v26 = *a1;
    v27 = nullptr;
  }
  v28 = sub_19BBC70(v26, v27, v22, 0, (__int64)&v89, v83, 0.0, a7, 0);
  if ( v28 )
  {
    v29 = *(_QWORD **)(*a1 + 248);
    v64 = *(_DWORD *)(a2 + 72);
    v30 = sub_1E5F010(v28, 0);
    v20 = (__int64)sub_A81910(v29, v30, v64);
LABEL_9:
    sub_C93FF0((__int64)&v92, v20);
    v21 = v92.m128i_i64[0];
    v22 = v92.m128i_u32[2];
    goto LABEL_10;
  }
LABEL_47:
  result = 1;
LABEL_48:
  if ( HIDWORD(v90[1]) )
  {
    v68 = result;
    free(v90[0]);
    return v68;
  }
  return result;
}
