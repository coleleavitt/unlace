__int64 __fastcall sub_1DEC610(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v10; // rax
  char v11; // dl
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r13
  void *v16; // rdx
  __m128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r12
  int v28; // r8d
  unsigned int v29; // r11d
  __int64 v30; // rcx
  char v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int16 v34; // ax
  __int64 result; // rax
  __int64 v36; // rax
  __int32 v37; // r8d
  unsigned int v38; // r11d
  __int64 *v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  _QWORD *v44; // rsi
  __int64 *v45; // rax
  _QWORD *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  bool v56; // bl
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r13
  void *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  _QWORD *v70; // rax
  unsigned __int64 v71; // [rsp+8h] [rbp-190h]
  __int64 v72; // [rsp+8h] [rbp-190h]
  __int64 v73; // [rsp+8h] [rbp-190h]
  unsigned int v74; // [rsp+8h] [rbp-190h]
  unsigned int v75; // [rsp+10h] [rbp-188h]
  int v76; // [rsp+10h] [rbp-188h]
  unsigned int v77; // [rsp+10h] [rbp-188h]
  unsigned __int64 v78; // [rsp+10h] [rbp-188h]
  __int32 v79; // [rsp+1Ch] [rbp-17Ch]
  unsigned int v80; // [rsp+1Ch] [rbp-17Ch]
  unsigned int v81; // [rsp+20h] [rbp-178h]
  unsigned __int64 v82; // [rsp+20h] [rbp-178h]
  unsigned __int64 v83; // [rsp+20h] [rbp-178h]
  unsigned __int64 v84; // [rsp+28h] [rbp-170h]
  unsigned __int64 v85; // [rsp+30h] [rbp-168h]
  __int64 v86; // [rsp+30h] [rbp-168h]
  unsigned __int64 v87; // [rsp+40h] [rbp-158h]
  int v88; // [rsp+40h] [rbp-158h]
  unsigned int v89; // [rsp+48h] [rbp-150h]
  unsigned int v90; // [rsp+4Ch] [rbp-14Ch]
  char v91; // [rsp+5Fh] [rbp-139h] BYREF
  __int64 v92; // [rsp+60h] [rbp-138h] BYREF
  void *v93; // [rsp+68h] [rbp-130h] BYREF
  __int64 v94[2]; // [rsp+70h] [rbp-128h] BYREF
  __m128i v95; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v96; // [rsp+90h] [rbp-108h] BYREF
  __m128i v97; // [rsp+A0h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v99; // [rsp+C0h] [rbp-D8h]
  __m128i v100; // [rsp+D0h] [rbp-C8h] BYREF
  void *v101[2]; // [rsp+E0h] [rbp-B8h]
  _OWORD v102[5]; // [rsp+F0h] [rbp-A8h] BYREF
  char v103; // [rsp+148h] [rbp-50h]
  unsigned int v104; // [rsp+150h] [rbp-48h]
  char v105; // [rsp+154h] [rbp-44h]

  v10 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v11 = *(_BYTE *)(a2 + 24);
  v12 = *a1;
  v91 = 0;
  v92 = 0;
  v13 = sub_19B0570(
          v12,
          0,
          (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(a2 + 28),
          (v11 & 1) == 0 ? 26 : 37,
          &v92,
          a7,
          a8,
          &v91);
  if ( v13 == 1 )
    return 1;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = v92;
  v16 = *(void **)(a2 + 40);
  if ( v14 )
  {
    v14 = sub_1DD3CF0((__int64)a1, v14, v16, v92, 0);
    if ( !v14 )
      return 1;
  }
  v17 = 0;
  v97 = 0;
  *(_OWORD *)ptr = 0;
  v99 = 0;
  sub_15AB8B0((__int64)&v97, v14, (__int64)v16);
  v18 = *(_QWORD *)(a2 + 64);
  if ( !v18 )
  {
    v22 = *(_DWORD *)(a2 + 72);
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      v21 = 4;
      goto LABEL_10;
    }
    v42 = *a1;
    v44 = nullptr;
LABEL_37:
    v45 = sub_19BBC70(v42, v44, v22, 0, (__int64)&v97, v92, 0.0, a8, 0);
    if ( !v45 )
      goto LABEL_31;
    v46 = *(_QWORD **)(*a1 + 248);
    v74 = *(_DWORD *)(a2 + 72);
    v47 = sub_1E5F010(v45, 0);
    v20 = sub_A81910(v46, v47, v74);
LABEL_9:
    sub_C93FF0((__int64)&v100, (__int64)v20);
    v21 = v100.m128i_i64[0];
    v22 = v100.m128i_u32[2];
    goto LABEL_10;
  }
  v19 = (v18 >> 2) & 1;
  if ( ((v18 >> 2) & 1) == 0 && (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20 = sub_1DEC5C0((__int64)a1, v18 & 0xFFFFFFFFFFFFFFF8LL, v15, &v97, 0.0, a8);
    if ( !v20 )
    {
LABEL_31:
      result = 1;
      goto LABEL_32;
    }
    goto LABEL_9;
  }
  v22 = *(_DWORD *)(a2 + 72);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v42 = *a1;
LABEL_35:
    v43 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    v44 = nullptr;
    if ( v19 )
      v44 = (_QWORD *)v43;
    goto LABEL_37;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v42 = *a1;
    v19 = (v18 >> 2) & 1;
    goto LABEL_35;
  }
  v21 = 4;
  if ( (v18 & 4) != 0 )
    v21 = v18 & 0xFFFFFFFFFFFFFFF8LL | 4;
LABEL_10:
  v23 = *(__int64 **)(a2 + 48);
  if ( v23 )
  {
    v17 = 0;
    v24 = *(_QWORD *)(a2 + 48);
    v75 = v22;
    v71 = v21;
    v100 = 0;
    *(_OWORD *)v101 = 0;
    v102[0] = 0;
    v25 = sub_1DEC5C0((__int64)a1, v24, v15, &v100, 0.0, a8);
    v21 = v71;
    v22 = v75;
    v23 = v25;
    if ( !v25 )
    {
      result = 1;
      if ( HIDWORD(v101[1]) )
      {
        free(v101[0]);
        result = 1;
      }
      goto LABEL_32;
    }
    if ( HIDWORD(v101[1]) )
    {
      free(v101[0]);
      v22 = v75;
      v21 = v71;
    }
  }
  v26 = *(unsigned int *)(a2 + 60);
  v27 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v28 = *(_DWORD *)(a2 + 56);
  v29 = *(_DWORD *)(a2 + 28);
  v30 = v21;
  v31 = *(_BYTE *)(a2 + 24) & 1;
  v32 = v22;
  v72 = *(_QWORD *)(v27 + 8);
  if ( (*(_DWORD *)v27 & 0x10000) != 0 || v21 && (v21 & 4) != 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v33 = *a1;
    v34 = v31 == 0 ? 26 : 37;
LABEL_19:
    result = sub_19AA5D0(v33, v27, v29, v34, (__int64)&v97, (__int64)v23, v17, a8, v28, v26, v30, v32);
    goto LABEL_32;
  }
  v48 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v31 )
  {
    v78 = v72 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(v48 + 16) != 42 )
    {
      v82 = v21;
      v84 = v22;
      v80 = v26;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
        goto LABEL_41;
      v90 = v29;
      v89 = v22;
      v85 = v21;
      v88 = v28;
      v54 = sub_F63050(v48, v72 & 0xFFFFFFFFFFFFFFF0LL, v26, v21);
      v28 = v88;
      v21 = v85;
      v22 = v89;
      v29 = v90;
      if ( !v54 )
        goto LABEL_41;
      LODWORD(v26) = v80;
      v30 = v82;
      v32 = v84;
      v48 = *(_QWORD *)v78;
      if ( *(_BYTE *)(*(_QWORD *)v78 + 16LL) != 42 )
      {
        v86 = v82;
        v83 = v21;
        v55 = sub_F63050(v48, v72 & 0xFFFFFFFFFFFFFFF0LL, v80, v30);
        v29 = v90;
        v30 = v86;
        v48 = v55;
        v32 = v84;
        v22 = v89;
        v21 = v83;
        v28 = v88;
        LODWORD(v26) = v80;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 48 )
    {
      v33 = *a1;
      v34 = 37;
      goto LABEL_19;
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    v33 = *a1;
    v34 = 26;
    goto LABEL_19;
  }
LABEL_41:
  if ( !v21 || (v81 = v29, v79 = v22, v76 = v28, (v21 & 4) != 0) )
    JUMPOUT(0x2EAD90);
  v87 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  v49 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
  v50 = sub_B87700(
          *(_QWORD *)(*a1 + 248) + 17536LL,
          v49 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v49 | *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
  v95.m128i_i64[0] = v50;
  v95.m128i_i32[2] = v79;
  sub_B85890(&v96, v50);
  v38 = v81;
  v96 = v87;
  if ( v23 )
  {
    v37 = v76;
    v53 = *(_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v53 + 16) - 47 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1
        || (v36 = sub_F63050(v53, v50, v51, v52), v37 = v76, v38 = v81, !v36) )
      {
        v39 = (__int64 *)(*a1 + 8);
        v94[0] = *v23;
        v94[1] = (__int64)(v23 + 1);
        v40 = sub_F6CCB0(v94, v17);
        sub_168B9F0((__int64)&v100, v39, v40, 0xEA3u, 0);
        v41 = *v23;
        if ( v103 )
        {
          sub_AE9DF0((unsigned __int8 **)v102, *v23, 8u);
        }
        else
        {
          if ( !v105 )
          {
LABEL_30:
            sub_15F7200(&v100);
            goto LABEL_31;
          }
          v61 = sub_168B9E0(&v100);
          v62 = v101[0];
          if ( v101[0] )
            v62 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v101[0] + 32LL))(v101[0]);
          v93 = v62;
          v63 = sub_1587BC0(v61, (__int64 *)&v93, v57, v58, v59, v60);
          sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v104 + 8), v41, 8u);
        }
        v56 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
        if ( v103 )
        {
          sub_AE9DF0((unsigned __int8 **)v102, v56, 3u);
        }
        else if ( v105 )
        {
          v66 = sub_168B9E0(&v100);
          v69 = v101[0];
          if ( v101[0] )
            v69 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v101[0] + 32LL))(v101[0]);
          v93 = v69;
          v70 = sub_1587BC0(v66, (__int64 *)&v93, v64, v65, v67, v68);
          sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v104 + 8), v56, 3u);
        }
        goto LABEL_30;
      }
    }
    v77 = v38;
    sub_15AB760((__m128i **)&v97, *(_QWORD **)(*a1 + 248), *v23, (__int64)(v23 + 1), v37, v17);
    v38 = v77;
  }
  result = (__int64)sub_19CC2F0((__m128 *)*a1, (_DWORD *)v27, v72, v38, v31 & 1, &v97, 0, 0, &v95, 0, 0, nullptr);
LABEL_32:
  if ( HIDWORD(ptr[1]) )
  {
    v73 = result;
    free(ptr[0]);
    return v73;
  }
  return result;
}
