__int64 __fastcall sub_1D092C0(
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
  unsigned int v11; // ecx
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
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  int v26; // r8d
  __int64 v27; // rdx
  char v28; // r13
  unsigned int v29; // ebx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  __int16 v32; // ax
  __int64 result; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rsi
  __int64 *v36; // rax
  _QWORD *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // r9
  __int32 v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // r12
  unsigned int v50; // eax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-190h]
  unsigned int v56; // [rsp+8h] [rbp-190h]
  __int64 *v57; // [rsp+8h] [rbp-190h]
  __int64 v58; // [rsp+8h] [rbp-190h]
  unsigned __int64 v59; // [rsp+8h] [rbp-190h]
  _QWORD *v60; // [rsp+8h] [rbp-190h]
  int v61; // [rsp+10h] [rbp-188h]
  __int64 *v62; // [rsp+10h] [rbp-188h]
  unsigned __int64 v63; // [rsp+10h] [rbp-188h]
  unsigned __int64 v64; // [rsp+10h] [rbp-188h]
  __int64 *v65; // [rsp+18h] [rbp-180h]
  __int32 v66; // [rsp+18h] [rbp-180h]
  unsigned __int64 v67; // [rsp+20h] [rbp-178h]
  unsigned __int64 v68; // [rsp+20h] [rbp-178h]
  int v69; // [rsp+20h] [rbp-178h]
  int v70; // [rsp+30h] [rbp-168h]
  __int64 v71; // [rsp+30h] [rbp-168h]
  __int64 v72; // [rsp+40h] [rbp-158h]
  unsigned __int64 v73; // [rsp+48h] [rbp-150h]
  char v74; // [rsp+5Bh] [rbp-13Dh] BYREF
  _BOOL4 v75; // [rsp+5Ch] [rbp-13Ch] BYREF
  __int64 v76; // [rsp+60h] [rbp-138h] BYREF
  __int64 v77; // [rsp+68h] [rbp-130h] BYREF
  __int64 v78[2]; // [rsp+70h] [rbp-128h] BYREF
  __m128i v79; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v80; // [rsp+90h] [rbp-108h] BYREF
  __m128i v81; // [rsp+A0h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v83; // [rsp+C0h] [rbp-D8h]
  __m128i v84; // [rsp+D0h] [rbp-C8h] BYREF
  void *v85[2]; // [rsp+E0h] [rbp-B8h]
  __int128 v86; // [rsp+F0h] [rbp-A8h]

  v9 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v9 == 1 )
    return 1;
  v10 = *(_BYTE *)(a2 + 24);
  v11 = *(_DWORD *)(a2 + 28);
  v74 = 0;
  v76 = 0;
  v12 = sub_19B0570(*a1, 0, v9 & 0xFFFFFFFFFFFFFFFELL, v11, (v10 & 1) == 0 ? 26 : 37, &v76, a6, a7, &v74);
  if ( v12 == 1 )
    return 1;
  v13 = *(_QWORD *)(a2 + 32);
  v14 = v76;
  v15 = *(void **)(a2 + 40);
  if ( v13 )
  {
    v13 = sub_1CFE3D0((__int64)a1, v13, v15, v76, 0);
    if ( !v13 )
      return 1;
  }
  v16 = 0;
  v81 = 0;
  *(_OWORD *)ptr = 0;
  v83 = 0;
  sub_15AB8B0((__int64)&v81, v13, (__int64)v15);
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
        if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL) != 0
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        {
          v20 = (__int64)sub_1CFDF60((__int64 **)a1, *(_QWORD *)v19, (__m128i *)(v19 + 8), v14, 0, &v81, 0.0, a7);
          if ( !v20 )
            goto LABEL_41;
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
          v84 = 0;
          *(_OWORD *)v85 = 0;
          v86 = 0;
          if ( (*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
          {
            v59 = v21;
            v52 = sub_1CFDF60((__int64 **)a1, *(_QWORD *)v23, (__m128i *)(v23 + 8), v14, 0, &v84, 0.0, a7);
            v21 = v59;
            v23 = (__int64)v52;
            if ( !v52 )
            {
              result = 1;
              if ( HIDWORD(v85[1]) )
              {
                free(v85[0]);
                result = 1;
              }
              goto LABEL_42;
            }
            if ( HIDWORD(v85[1]) )
            {
              v64 = v59;
              v60 = v52;
              free(v85[0]);
              v21 = v64;
              v23 = (__int64)v60;
            }
          }
        }
        v24 = v12 & 0xFFFFFFFFFFFFFFFELL;
        v25 = *(unsigned int *)(a2 + 60);
        v26 = *(_DWORD *)(a2 + 56);
        v27 = v21;
        v28 = *(_BYTE *)(a2 + 24) & 1;
        v29 = *(_DWORD *)(a2 + 28);
        v30 = v22;
        v55 = *(_QWORD *)(v24 + 8);
        if ( (*(_DWORD *)v24 & 0x10000) != 0 || v21 && (v21 & 4) != 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v31 = *a1;
          v32 = v28 == 0 ? 26 : 37;
LABEL_18:
          result = sub_19AA5D0(v31, v24, v29, v32, (__int64)&v81, v23, v16, a7, v26, v25, v27, v30);
          goto LABEL_42;
        }
        v39 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v28 )
        {
          v63 = v55 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v39 + 16) != 42 )
          {
            v68 = v21;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              goto LABEL_32;
            v73 = v21;
            v70 = v26;
            v72 = v23;
            v53 = sub_F63050(v39, v25, v21, v22);
            v23 = v72;
            v26 = v70;
            v21 = v73;
            if ( !v53 )
              goto LABEL_32;
            v27 = v68;
            v30 = v22;
            v39 = *(_QWORD *)v63;
            if ( *(_BYTE *)(*(_QWORD *)v63 + 16LL) != 42 )
            {
              v71 = v68;
              v69 = v26;
              v54 = sub_F63050(v39, (unsigned int)v25, v27, v22);
              v27 = v71;
              v30 = v22;
              v39 = v54;
              v21 = v73;
              v26 = v69;
              v23 = v72;
            }
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 48 )
          {
            v31 = *a1;
            v32 = 37;
            goto LABEL_18;
          }
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
        {
          v31 = *a1;
          v32 = 26;
          goto LABEL_18;
        }
LABEL_32:
        if ( !v21 || (v61 = v26, v65 = (__int64 *)v23, (v21 & 4) != 0) )
          JUMPOUT(0x2EAB68);
        v67 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v41 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v40 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v40 | *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v79.m128i_i32[2] = v22;
        v42 = v41;
        v79.m128i_i64[0] = v41;
        sub_B85890(&v80, v41);
        v45 = v65;
        v80 = v67;
        if ( v65 )
        {
          v46 = v61;
          v47 = *(_QWORD *)(*v65 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v47 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v66 = v61, v62 = v45, v48 = sub_F63050(v47, v42, v43, v44), v45 = v62, v46 = v66, !v48) )
            {
              v57 = v45;
              v49 = (__int64 *)(*a1 + 8);
              v78[0] = *v45;
              v78[1] = (__int64)(v45 + 1);
              v50 = sub_F6CCB0(v78, v16);
              sub_168B9F0((__int64)&v84, v49, v50, 0xEA3u, 0);
              v77 = *v57;
              v51 = sub_162B6D0((__int64)&v84, &v77);
              v75 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              sub_1588370(v51, (unsigned int *)&v75);
              sub_15F7200(&v84);
              goto LABEL_41;
            }
          }
          sub_15AB760((__m128i **)&v81, *(_QWORD **)(*a1 + 248), *v45, (__int64)(v45 + 1), v46, v16);
        }
        result = (__int64)sub_19CC2F0((__m128 *)*a1, (_DWORD *)v24, v55, v29, v28 & 1, &v81, 0, 0, &v79, 0, 0, nullptr);
        goto LABEL_42;
      }
      v34 = *a1;
      v18 = (v17 >> 2) & 1;
    }
    else
    {
      v34 = *a1;
    }
    v35 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v18 )
      v35 = nullptr;
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
    v34 = *a1;
    v35 = nullptr;
  }
  v36 = sub_19BBC70(v34, v35, v22, 0, (__int64)&v81, v76, 0.0, a7, 0);
  if ( v36 )
  {
    v37 = *(_QWORD **)(*a1 + 248);
    v56 = *(_DWORD *)(a2 + 72);
    v38 = sub_1E5F010(v36, 0);
    v20 = (__int64)sub_A81910(v37, v38, v56);
LABEL_9:
    sub_C93FF0((__int64)&v84, v20);
    v21 = v84.m128i_i64[0];
    v22 = v84.m128i_u32[2];
    goto LABEL_10;
  }
LABEL_41:
  result = 1;
LABEL_42:
  if ( HIDWORD(ptr[1]) )
  {
    v58 = result;
    free(ptr[0]);
    return v58;
  }
  return result;
}
