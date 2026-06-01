unsigned __int64 __fastcall sub_1E48F80(__int64 *a1, _QWORD *a2, __int64 a3, __m128 a4, __m128 a5, __m128i a6)
{
  __int64 v8; // rdx
  void **v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  const __m128i **v14; // rdx
  const __m128i *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r14
  void **v22; // rbp
  unsigned __int64 v24; // rdi
  unsigned int v25; // edx
  int v26; // eax
  unsigned __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rdi
  __int64 *v33; // r9
  bool v34; // al
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r13
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v52; // [rsp+0h] [rbp-3B8h]
  __int64 *v53; // [rsp+0h] [rbp-3B8h]
  bool v54; // [rsp+17h] [rbp-3A1h]
  __int64 v55; // [rsp+18h] [rbp-3A0h]
  __int64 v56; // [rsp+20h] [rbp-398h]
  _QWORD *v57; // [rsp+28h] [rbp-390h]
  bool v58; // [rsp+3Fh] [rbp-379h] BYREF
  __int64 v59; // [rsp+40h] [rbp-378h] BYREF
  __int64 v60; // [rsp+48h] [rbp-370h] BYREF
  __int128 v61; // [rsp+50h] [rbp-368h] BYREF
  __int64 v62; // [rsp+60h] [rbp-358h]
  unsigned __int8 *v63; // [rsp+70h] [rbp-348h] BYREF
  char v64; // [rsp+C8h] [rbp-2F0h]
  unsigned int v65; // [rsp+D0h] [rbp-2E8h]
  char v66; // [rsp+D4h] [rbp-2E4h]
  __int64 v67; // [rsp+E0h] [rbp-2D8h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-2D0h]
  __int64 v69; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned int v70; // [rsp+F8h] [rbp-2C0h]
  void *v71; // [rsp+130h] [rbp-288h] BYREF
  __int64 v72; // [rsp+138h] [rbp-280h]
  __int64 v73; // [rsp+140h] [rbp-278h] BYREF
  __int64 v74; // [rsp+148h] [rbp-270h]
  __int16 v75; // [rsp+150h] [rbp-268h]
  char v76; // [rsp+152h] [rbp-266h]
  __int64 v77; // [rsp+158h] [rbp-260h]
  void *v78[2]; // [rsp+170h] [rbp-248h] BYREF
  _BYTE v79[96]; // [rsp+180h] [rbp-238h] BYREF
  void *v80; // [rsp+1E0h] [rbp-1D8h]
  __int64 v81; // [rsp+1E8h] [rbp-1D0h]
  _WORD v82[49]; // [rsp+1F0h] [rbp-1C8h] BYREF
  char v83; // [rsp+252h] [rbp-166h]
  void *ptr; // [rsp+260h] [rbp-158h] BYREF
  __int64 v85; // [rsp+268h] [rbp-150h]
  _QWORD v86[41]; // [rsp+270h] [rbp-148h] BYREF

  v8 = *a1;
  v67 = *a1;
  v9 = (void **)&v69;
  v68 = 1;
  do
  {
    *v9 = (void *)-4096LL;
    v9 += 2;
  }
  while ( v9 != &v71 );
  v76 = 0;
  v71 = &v73;
  v72 = 0x100000000LL;
  v10 = *(_QWORD *)(v8 + 11280);
  *(_QWORD *)(v8 + 11280) = &v67;
  v11 = *(_QWORD *)(a3 + 144);
  v74 = v10;
  v75 = 0;
  v77 = 0;
  v12 = sub_1E48E00((__int64)a1, v11);
  if ( !v12 )
    goto LABEL_12;
  v13 = *(_QWORD *)(a3 + 120);
  v14 = (const __m128i **)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  v15 = (const __m128i *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v15 = nullptr;
      if ( v14 )
        v15 = *v14;
    }
  }
  v16 = v15->m128i_i64[0];
  v17 = *a1;
  v85 = 0x800000000LL;
  v18 = a1[4];
  ptr = v86;
  v86[32] = v16;
  if ( !(unsigned __int8)sub_1DD74F0(v17, v15 + 1, v15->m128i_u32[2], v18, (__int64)&ptr, a4, a5) )
  {
    v24 = *a1;
    v61 = 0;
    v83 = 0;
    v78[0] = v79;
    v78[1] = (void *)0x400000000LL;
    v81 = 0x400000000LL;
    v82[48] = 0;
    v80 = v82;
    v25 = *(_DWORD *)(a3 + 24);
    v62 = 0;
    if ( !(unsigned __int8)sub_1CCEE60(
                             v24,
                             (__int64)a2,
                             v25,
                             (__int64)&ptr,
                             (__int64)&v61,
                             0,
                             (__m128)0LL,
                             a5,
                             (__int64)v78,
                             1,
                             nullptr) )
    {
      v54 = sub_1CCBDE0(*a1, *(_DWORD *)(a3 + 24), (__int64)a2, v85, (__int64)v80, (__m128)0LL);
      if ( !v54 )
      {
        v59 = 0;
        v57 = sub_BC3C90(a2, (__int64)v80, (unsigned int)v81, v12, (__int64)&v59);
        v56 = *(_QWORD *)(a3 + 40);
        v55 = *a1;
        v26 = sub_B72FF0(a3);
        v27 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
          v27 = *(_QWORD *)(v27 + 32);
        v28 = (__int64 *)sub_1DD4AE0(v55, (void **)v27, a1[4], v26, v56, 0, (__m128)0LL, a5);
        v29 = (__int64)v28;
        if ( v28 )
        {
          v30 = *v28;
          v31 = *(_DWORD *)(a3 + 24);
          v32 = *a1;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 > 1 )
          {
            v12 = sub_BC1FB0(
                    *(_QWORD **)(v32 + 248),
                    a1[3],
                    *(_DWORD *)(a3 + 64),
                    v31,
                    v12,
                    (__int64)a2,
                    v30,
                    v29,
                    *(_BYTE *)(a3 + 96) & 7,
                    (const __m128i *)v80,
                    (unsigned int)v81);
            v36 = (_QWORD *)sub_B8C330(v12);
            v41 = sub_F1ED40(v36, (__int64 *)&ptr, v37, v38, v39, v40);
            v42 = *(_QWORD *)(v12 + 120);
            if ( v42 && (v42 & 4) != 0 && (v43 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
              *v43 = v41;
            else
              *(_QWORD *)(v12 + 120) = v41 & 0xFFFFFFFFFFFFFFFBLL;
            if ( !(unsigned __int8)sub_1DFDB20(*a1, a3, v12, a1[4]) )
            {
              *(_QWORD *)(*(_QWORD *)(v12 + 80) + 152LL) = a3 | *(_QWORD *)(*(_QWORD *)(v12 + 80) + 152LL) & 7LL;
              if ( v57 )
              {
                sub_168B9F0((__int64)&v61, (__int64 *)(*a1 + 8), *(_DWORD *)(a3 + 24), 0x1533u, 0);
                if ( v64 )
                {
                  sub_AE9DF0(&v63, v12, 0xAu);
                }
                else if ( v66 )
                {
                  v48 = sub_168B9E0(&v61);
                  v49 = v62;
                  if ( v62 )
                    v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
                  v60 = v49;
                  v50 = sub_1587BC0(v48, &v60, v44, v45, v46, v47);
                  sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v65 + 8), v12, 0xAu);
                }
                sub_15F7200(&v61);
                sub_168B9F0((__int64)&v61, (__int64 *)(*a1 + 8), *((_DWORD *)v57 + 6), 0x1941u, 0);
                v12 = 0;
                sub_15F7200(&v61);
              }
              else
              {
                sub_1CE21A0(*a1, v12);
                sub_BC41D0(a2, v12, 0);
                sub_1E3AB40(*a1, v12, a3, a1[4], a1[5], a1[3], 0.0, a5, a6, a1[6], 0, 0);
              }
              goto LABEL_29;
            }
          }
          else
          {
            v52 = v29;
            sub_168B9F0((__int64)&v61, (__int64 *)(v32 + 8), v31, 0x1537u, 0);
            v33 = (__int64 *)v52;
            if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
            {
              v34 = sub_1DFE740(a3);
              v33 = (__int64 *)v52;
              v54 = v34;
            }
            v53 = v33;
            v58 = v54;
            v35 = sub_1588420((__int64)&v61, (unsigned __int8 *)&v58);
            v60 = *v53;
            sub_162B6D0(v35, &v60);
            sub_15F7200(&v61);
          }
        }
      }
    }
    v12 = 0;
LABEL_29:
    if ( v80 != v82 )
      free(v80);
    if ( v78[0] != v79 )
      free(v78[0]);
    goto LABEL_10;
  }
  v12 = 0;
LABEL_10:
  if ( ptr != v86 )
    free(ptr);
LABEL_12:
  v19 = (char *)v71;
  if ( !(_BYTE)v75 )
  {
    if ( (_DWORD)v72 )
    {
      v20 = 0;
      v21 = 8LL * (unsigned int)(v72 - 1) + 8;
      do
      {
        v22 = *(void ***)&v19[v20];
        if ( v22 )
        {
          if ( *v22 != v22 + 2 )
            free(*v22);
          operator delete(v22, 0x30u);
          v19 = (char *)v71;
        }
        v20 += 8;
      }
      while ( v21 != v20 );
    }
    LOBYTE(v75) = 1;
    *(_QWORD *)(v67 + 11280) = v74;
  }
  if ( v19 != (char *)&v73 )
    free(v19);
  if ( (v68 & 1) == 0 )
    operator delete(v69, 16LL * v70, 8);
  return v12;
}
