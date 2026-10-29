void __fastcall sub_E6C2A0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  void *v3; // r12
  char *v4; // rax
  size_t v5; // rax
  int v6; // r9d
  unsigned __int64 v7; // rax
  void *v8; // rax
  void *v9; // rax
  size_t v10; // rax
  char *v11; // rbp
  char *v12; // rbx
  char *v13; // rdi
  _WORD *v14; // r14
  _WORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  void **v21; // rdx
  void **v22; // rax
  void *v23; // rdi
  void *v24; // rdx
  void *v25; // rax
  void *v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int *v32; // rsi
  size_t v33; // rax
  const char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  char *v40; // rdi
  size_t v41; // rdx
  bool v42; // al
  void *v43; // rax
  void *v44; // rdi
  void **v45; // rax
  __int64 v46; // rbx
  size_t v47; // rax
  void ***v48; // [rsp+0h] [rbp-128h] BYREF
  void *v49; // [rsp+8h] [rbp-120h]
  __int64 v50; // [rsp+10h] [rbp-118h]
  _WORD *v51; // [rsp+18h] [rbp-110h]
  __int64 *v52; // [rsp+20h] [rbp-108h]
  void **v53; // [rsp+28h] [rbp-100h]
  void *v54; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+38h] [rbp-F0h]
  __int64 v56; // [rsp+48h] [rbp-E0h] BYREF
  void *v57[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-C8h]
  __m128 v59; // [rsp+70h] [rbp-B8h] BYREF
  int v60; // [rsp+80h] [rbp-A8h]
  void *v61; // [rsp+90h] [rbp-98h] BYREF
  void *s2; // [rsp+98h] [rbp-90h]
  __int64 v63; // [rsp+A0h] [rbp-88h]
  void *v64; // [rsp+B0h] [rbp-78h] BYREF
  __m128 v65; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v66[12]; // [rsp+C8h] [rbp-60h] BYREF

  v2 = a2;
  v3 = (void *)(a1 + 1048);
  v50 = a1;
  v4 = sub_BF9F50((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
  sub_E598C0((__int64)&v64, v4);
  v5 = j__strlen("castKind");
  sub_222AB70(a1 + 1048, "castKind", v5);
  sub_222CAC0(a1 + 1048, &v64);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v64);
  v6 = *(_DWORD *)(a2 + 4);
  v58 = 0;
  *(_OWORD *)v57 = 0;
  if ( !v6 )
    goto LABEL_2;
  v14 = sub_BFA620((_WORD *)a2);
  v15 = sub_BFA620((_WORD *)a2);
  v17 = *(unsigned int *)(a2 + 4);
  v51 = &v15[4 * v17];
  if ( v14 != v51 )
  {
    v54 = (void *)(a1 + 1048);
    v52 = &v56;
    v48 = (void ***)&v61;
    v53 = v57;
    v18 = v66;
    v55 = a2;
    while ( 1 )
    {
      v27 = *(_QWORD *)v14;
      v28 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v14 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v28 + 8) & 0xF) != 0 )
        v28 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v14 + 16LL));
      v29 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              &v64,
              v17,
              v18,
              v16);
      sub_E59960((void ***)&v64, (void **)"name", (void **)&byte_4);
      v30 = *(_QWORD *)(v29 + 40);
      if ( (v30 & 7) != 0 || (v31 = v30 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v33 = j__strlen(&byte_22F0C30);
        v34 = &byte_22F0C30;
      }
      else
      {
        v32 = *(unsigned int **)(v31 + 16);
        v33 = *v32;
        v34 = (const char *)(v32 + 4);
      }
      sub_E59830((__int64)v66, (__int64)v34, v33);
      v59 = 0u;
      v60 = 0;
      v56 = 0;
      sub_E62B10((__int64)&v59, 0, v35, v36, v37, v38);
      sub_E5E370((__int64 *)&v59, (__int64)&v64, v52);
      ++v59.m128_i32[2];
      sub_E59960(v48, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
      v39 = v56;
      v40 = *(char **)(v56 + 8);
      if ( s2 == (void *)-1LL )
        break;
      if ( s2 == (void *)-2LL )
      {
        v42 = v40 + 2 == nullptr;
        goto LABEL_33;
      }
      v41 = *(_QWORD *)(v56 + 16);
      if ( v63 != v41 )
        goto LABEL_40;
      if ( v41 )
      {
        v42 = memcmp(v40, s2, v41) == 0;
        goto LABEL_33;
      }
LABEL_34:
      v43 = v61;
      if ( v61 )
      {
        v44 = *(void **)v61;
        if ( *(void **)v61 != (char *)v61 + 16 )
        {
          v49 = v61;
          operator delete(v44);
          v43 = v49;
        }
        operator delete(v43, 0x20u);
      }
      v49 = v64;
      if ( v64 )
      {
        v19 = (_QWORD *)operator new(0x20u);
        v20 = v49;
        v49 = v19;
        *v19 = v19 + 2;
        sub_E586C0(v19, (_BYTE *)*v20, *v20 + v20[1]);
        v21 = *(void ***)v39;
        v22 = (void **)v49;
        *(_QWORD *)v39 = v49;
        if ( v21 )
        {
          v23 = *v21;
          if ( *v21 != v21 + 2 )
          {
            v49 = v21;
            operator delete(v23);
            v21 = (void **)v49;
          }
          operator delete(v21, 0x20u);
          v22 = *(void ***)v39;
        }
        v24 = *v22;
        v25 = v22[1];
        *(_QWORD *)(v39 + 8) = v24;
        *(_QWORD *)(v39 + 16) = v25;
      }
      else
      {
        *(__m128i *)(v39 + 8) = _mm_loadu_si128((const __m128i *)&v65);
      }
      *(_WORD *)(v39 + 24) = 0;
      sub_2229580(v39 + 24, v66);
      sub_222B2A0(v66);
      v26 = v64;
      if ( v64 )
      {
        if ( *(void **)v64 != (char *)v64 + 16 )
          operator delete(*(void **)v64);
        operator delete(v26, 0x20u);
      }
      if ( (*(_BYTE *)(v27 + 12) & 1) != 0 )
      {
        v65.m128_i8[0] = 1;
        LOWORD(v64) = 1;
        v45 = (void **)j__strlen("isVirtual");
        sub_E59960(v48, (void **)"isVirtual", v45);
        v46 = sub_222E220(&v59, v48);
        sub_222B2A0(v46);
        sub_2229580(v46, &v64);
        if ( v61 )
          sub_E58590((void **)v61);
        sub_222B2A0(&v64);
      }
      v14 += 4;
      LOWORD(v64) = 7;
      v65 = v59;
      v59 = 0u;
      LODWORD(v66[0]) = v60;
      v60 = 0;
      sub_E5E110((__int64)v53, (__int64)&v64);
      sub_222B2A0(&v64);
      sub_E5D2E0((__int64 *)&v59);
      if ( v51 == v14 )
      {
        v3 = v54;
        v2 = v55;
        goto LABEL_48;
      }
    }
    v42 = v40 + 1 == nullptr;
LABEL_33:
    if ( !v42 )
    {
LABEL_40:
      --v59.m128_i32[3];
      goto LABEL_34;
    }
    goto LABEL_34;
  }
LABEL_48:
  if ( v57[0] != v57[1] )
  {
    v48 = (void ***)v57[1];
    LOWORD(v64) = 8;
    v66[0] = v58;
    v58 = 0;
    v65 = _mm_loadh_ps((const double *)&v48);
    *(_OWORD *)v57 = 0;
    v47 = j__strlen("path");
    v61 = &v64;
    s2 = v3;
    sub_E585D0((__int64)v3, (__int64)"path", v47, (__int64)sub_E58580, &v61);
    sub_222B2A0(&v64);
  }
LABEL_2:
  v7 = sub_BFA560(v2);
  if ( v7 )
  {
    sub_E673B0((__int64)&v61, v50, v7);
    LOWORD(v64) = 7;
    v8 = v61;
    v61 = nullptr;
    v65.m128_u64[0] = (unsigned __int64)v8;
    v9 = s2;
    s2 = nullptr;
    v65.m128_u64[1] = (unsigned __int64)v9;
    LODWORD(v9) = v63;
    LODWORD(v63) = 0;
    LODWORD(v66[0]) = (_DWORD)v9;
    v10 = j__strlen("conversionFunc");
    v59.m128_u64[0] = (unsigned __int64)&v64;
    v59.m128_u64[1] = (unsigned __int64)v3;
    sub_E585D0((__int64)v3, (__int64)"conversionFunc", v10, (__int64)sub_E58580, &v59);
    sub_222B2A0(&v64);
    sub_E5D2E0((__int64 *)&v61);
  }
  v11 = (char *)v57[1];
  v12 = (char *)v57[0];
  if ( v57[1] != v57[0] )
  {
    do
    {
      v13 = v12;
      v12 += 40;
      sub_222B2A0(v13);
    }
    while ( v11 != v12 );
    v12 = (char *)v57[0];
  }
  if ( v12 )
    operator delete(v12);
}
