__int64 __fastcall sub_1BBDD20(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
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
  __int64 *v50; // r12
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-190h]
  unsigned int v56; // [rsp+8h] [rbp-190h]
  _QWORD *v57; // [rsp+8h] [rbp-190h]
  __int64 v58; // [rsp+8h] [rbp-190h]
  __int64 *v59; // [rsp+8h] [rbp-190h]
  __int64 v60; // [rsp+8h] [rbp-190h]
  unsigned __int64 v61; // [rsp+10h] [rbp-188h]
  int v62; // [rsp+10h] [rbp-188h]
  __int64 *v63; // [rsp+10h] [rbp-188h]
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
  void *v82[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v83; // [rsp+C0h] [rbp-D8h]
  __int128 v84; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-B8h]
  __int128 v86; // [rsp+F0h] [rbp-A8h]

  v9 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
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
    v13 = sub_1BB75E0(a1, v13, v15, v76, 0);
    if ( !v13 )
      return 1;
  }
  v16 = 0;
  v81 = 0;
  *(_OWORD *)v82 = 0;
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
        if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v20 = (__int64)sub_1BB7170(a1, *(_QWORD *)v19, (__m128i *)(v19 + 8), v14, 0, (__int64)&v81, 0.0, a7);
          if ( !v20 )
            goto LABEL_45;
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
          *(_OWORD *)ptr = 0;
          v86 = 0;
          if ( (*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v55 = v21;
            v24 = sub_1BB7170(a1, *(_QWORD *)v23, (__m128i *)(v23 + 8), v14, 0, (__int64)&v84, 0.0, a7);
            v21 = v55;
            v23 = (__int64)v24;
            if ( !v24 )
            {
              result = 1;
              if ( HIDWORD(ptr[1]) )
              {
                free(ptr[0]);
                result = 1;
              }
              goto LABEL_46;
            }
            if ( HIDWORD(ptr[1]) )
            {
              v61 = v55;
              v57 = v24;
              free(ptr[0]);
              v21 = v61;
              v23 = (__int64)v57;
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
        v58 = *(_QWORD *)(v31 + 8);
        if ( (*(_DWORD *)v31 & 0x10000) != 0 || v21 && (v21 & 4) != 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v38 = *a1;
          v39 = v35 == 0 ? 26 : 37;
LABEL_33:
          result = sub_19AA5D0(v38, v31, v36, v39, (__int64)&v81, v23, v16, a7, v33, v32, v34, v37);
          goto LABEL_46;
        }
        v40 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v35 )
        {
          v64 = v58 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v40 + 16) != 42 )
          {
            v68 = v21;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              goto LABEL_36;
            v73 = v21;
            v70 = v33;
            v72 = v23;
            v53 = sub_F63050(v40, v32, v21, v22);
            v23 = v72;
            v33 = v70;
            v21 = v73;
            if ( !v53 )
              goto LABEL_36;
            v34 = v68;
            v37 = v22;
            v40 = *(_QWORD *)v64;
            if ( *(_BYTE *)(*(_QWORD *)v64 + 16LL) != 42 )
            {
              v71 = v68;
              v69 = v33;
              v54 = sub_F63050(v40, (unsigned int)v32, v34, v22);
              v34 = v71;
              v37 = v22;
              v40 = v54;
              v21 = v73;
              v33 = v69;
              v23 = v72;
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
        if ( !v21 || (v62 = v33, v65 = (__int64 *)v23, (v21 & 4) != 0) )
          BUG();
        v67 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v42 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v41 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v41 | *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v79.m128i_i32[2] = v22;
        v43 = v42;
        v79.m128i_i64[0] = v42;
        sub_B85890(&v80, v42);
        v46 = v65;
        v80 = v67;
        if ( v65 )
        {
          v47 = v62;
          v48 = *(_QWORD *)(*v65 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v48 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v66 = v62, v63 = v46, v49 = sub_F63050(v48, v43, v44, v45), v46 = v63, v47 = v66, !v49) )
            {
              v59 = v46;
              v50 = (__int64 *)(*a1 + 8);
              v78[0] = *v46;
              v78[1] = (__int64)(v46 + 1);
              v51 = sub_F6CCB0(v78, v16);
              sub_168B9F0((__int64)&v84, v50, v51, 0xEA3u, 0);
              v77 = *v59;
              v52 = sub_162B6D0((__int64)&v84, &v77);
              v75 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              sub_1588370(v52, (unsigned int *)&v75);
              sub_15F7200(&v84);
              goto LABEL_45;
            }
          }
          sub_15AB760((__m128i **)&v81, *(_QWORD **)(*a1 + 248), *v46, (__int64)(v46 + 1), v47, v16);
        }
        result = (__int64)sub_19CC2F0((__m128 *)*a1, (_DWORD *)v31, v58, v36, v35 & 1, &v81, 0, 0, &v79, 0, 0, nullptr);
        goto LABEL_46;
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
  v28 = sub_19BBC70(v26, v27, v22, 0, (__int64)&v81, v76, 0.0, a7, 0);
  if ( v28 )
  {
    v29 = *(_QWORD **)(*a1 + 248);
    v56 = *(_DWORD *)(a2 + 72);
    v30 = sub_1E5F010(v28, 0);
    v20 = (__int64)sub_A81910(v29, v30, v56);
LABEL_9:
    sub_C93FF0((__int64)&v84, v20);
    v21 = v84;
    v22 = DWORD2(v84);
    goto LABEL_10;
  }
LABEL_45:
  result = 1;
LABEL_46:
  if ( HIDWORD(v82[1]) )
  {
    v60 = result;
    free(v82[0]);
    return v60;
  }
  return result;
}
