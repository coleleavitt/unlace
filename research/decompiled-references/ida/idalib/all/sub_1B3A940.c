__int64 __fastcall sub_1B3A940(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 **v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // eax
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r10d
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  bool v50; // zf
  __int64 **v52; // [rsp+0h] [rbp-1D8h]
  __int64 *v53; // [rsp+0h] [rbp-1D8h]
  __int64 *v54; // [rsp+0h] [rbp-1D8h]
  void *v56; // [rsp+10h] [rbp-1C8h]
  __int64 v57; // [rsp+18h] [rbp-1C0h]
  __int64 v58; // [rsp+28h] [rbp-1B0h] BYREF
  void *v59; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-1A0h]
  char v61; // [rsp+3Ch] [rbp-19Ch]
  __m128 v62; // [rsp+40h] [rbp-198h] BYREF
  void *v63; // [rsp+50h] [rbp-188h] BYREF
  __int64 v64; // [rsp+58h] [rbp-180h]
  _BYTE v65[64]; // [rsp+60h] [rbp-178h] BYREF
  __m128i v66; // [rsp+A0h] [rbp-138h] BYREF
  _BYTE v67[64]; // [rsp+B0h] [rbp-128h] BYREF
  void *v68[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+100h] [rbp-D8h] BYREF
  unsigned __int8 *v70; // [rsp+110h] [rbp-C8h] BYREF
  void *ptr; // [rsp+140h] [rbp-98h] BYREF
  _BYTE v72[64]; // [rsp+150h] [rbp-88h] BYREF
  void *v73; // [rsp+190h] [rbp-48h] BYREF
  unsigned int v74; // [rsp+198h] [rbp-40h]
  char v75; // [rsp+19Ch] [rbp-3Ch]

  v13 = a1[1];
  v14 = *(unsigned int *)(v13 + 344);
  if ( (_DWORD)v14 )
  {
    v15 = *(_QWORD *)(v13 + 336) + 6776 * v14 - 6776;
    if ( *(_QWORD *)(v15 + 6768) == *(_QWORD *)(v13 + 328) )
    {
      v40 = *(unsigned int *)(v15 + 8);
      v41 = *(unsigned int *)(v13 + 27504);
      if ( (unsigned int)v40 > (unsigned int)v41 )
      {
        v42 = v40 - v41;
        if ( v42 )
        {
          v43 = *(_QWORD *)v15 + 1688 * (v42 - 1);
          if ( v43 )
          {
            if ( *(_DWORD *)(v43 + 976) == 47 && a2 > 3 )
            {
              sub_168B9F0((__int64)v68, a1, a3, 0x1217u, 0);
              if ( v72[24] )
              {
                sub_AE9DF0(&v70, (__int64)"'source' or 'sink'", 1u);
              }
              else if ( v72[36] )
              {
                sub_1B132F0((__int64)v68, (__int64)"'source' or 'sink'");
              }
              sub_1AF81E0(&v66, 0x1Du);
              sub_1682AF0((__int64)v68, (__int64)&v66);
              if ( (_BYTE *)v66.m128i_i64[0] != v67 )
                operator delete((void *)v66.m128i_i64[0]);
              v20 = 0;
              sub_15F7200(v68);
              return v20;
            }
          }
        }
      }
    }
  }
  v61 = 1;
  v60 = 32;
  v63 = v65;
  v64 = 0x800000000LL;
  v66.m128i_i64[0] = (__int64)v67;
  v66.m128i_i64[1] = 0x400000000LL;
  v59 = nullptr;
  sub_1B38B60((__int64)v68, *a1, a2 == 0 || a2 - 2 <= 1, a5, a6, v13, a7, a8, a11);
  sub_1AC2FD0(&v63, (char **)v68);
  sub_1AF7EA0((__int64 **)&v66, (__int64 **)&ptr);
  if ( v74 <= 0x40 )
  {
    LODWORD(v16) = (_DWORD)v73;
    v60 = v74;
    v59 = v73;
    v61 = v75;
  }
  else
  {
    sub_22056A0(&v59, &v73);
    LODWORD(v16) = (_DWORD)v59;
    v61 = v75;
    if ( v60 > 0x40 )
      v16 = *(_QWORD *)v59;
  }
  v56 = v63;
  v57 = (unsigned int)v64;
  v17 = sub_168B6C0((__int64)a1);
  v18 = sub_EBED50(v17, a9, a10, a11, a2, a3, a4, (__int64)v56, v57, v16);
  v19 = a1[1];
  v20 = v18;
  v21 = *(unsigned int *)(v19 + 344);
  if ( !(_DWORD)v21
    || (v23 = *(_QWORD *)(v19 + 336) + 6776 * v21 - 6776, *(_QWORD *)(v23 + 6768) != *(_QWORD *)(v19 + 328))
    || (v24 = *(unsigned int *)(v23 + 8), v25 = *(unsigned int *)(v19 + 27504), (unsigned int)v24 <= (unsigned int)v25)
    || (v27 = v24 == v25, v26 = v24 - v25, v27 || v26 == 1)
    || (v28 = *(_QWORD *)v23 + 1688 * (v26 - 2)) == 0
    || !*(_BYTE *)(v28 + 1072) )
  {
    if ( v74 > 0x40 )
      goto LABEL_20;
    goto LABEL_8;
  }
  v58 = v20;
  v29 = sub_1AE6050(v19);
  v33 = *(unsigned int *)(v29 + 1048);
  v34 = v29;
  v35 = (__int64 **)(v29 + 1032);
  if ( !(_DWORD)v33 )
  {
    v62.m128_u64[0] = 0;
    goto LABEL_54;
  }
  v36 = *(_QWORD *)(v29 + 1032);
  v31 = (unsigned int)(v33 - 1);
  v37 = v31 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
  v38 = v36 + 88LL * v37;
  v39 = *(_QWORD *)v38;
  if ( v20 == *(_QWORD *)v38 )
    goto LABEL_29;
  v44 = 1;
  v32 = 0;
  if ( v39 == -4096 )
  {
LABEL_44:
    v45 = *(_DWORD *)(v34 + 1040);
    v30 = (unsigned int)(3 * v33);
    v62.m128_u64[0] = v38;
    v46 = v45 + 1;
    if ( 4 * v46 < (unsigned int)v30 )
    {
      v47 = v20;
      v48 = (unsigned int)(v33 - *(_DWORD *)(v34 + 1044) - v46);
      v49 = (unsigned int)v33 >> 3;
      if ( (unsigned int)v48 <= (unsigned int)v49 )
      {
        v54 = (__int64 *)v35;
        sub_1B016A0(v35, v33, v48, (__int64)v35, v49, (__int64)&v62);
        sub_1AF7470(v54, &v58, &v62);
        v47 = v58;
        v38 = v62.m128_u64[0];
        v46 = *(_DWORD *)(v34 + 1040) + 1;
        v35 = (__int64 **)v54;
      }
LABEL_47:
      v50 = *(_QWORD *)v38 == -4096;
      *(_DWORD *)(v34 + 1040) = v46;
      if ( !v50 )
        --*(_DWORD *)(v34 + 1044);
      *(_QWORD *)v38 = v47;
      *(_QWORD *)(v38 + 8) = v38 + 24;
      *(_QWORD *)(v38 + 16) = 0x400000000LL;
      if ( v66.m128i_i32[2] )
      {
        v52 = v35;
        sub_1AF7EA0((__int64 **)(v38 + 8), (__int64 **)&v66);
        v35 = v52;
      }
      sub_1AF93B0(
        &v62,
        (_QWORD *)v38,
        (_QWORD *)(*(_QWORD *)(v34 + 1032) + 88LL * *(unsigned int *)(v34 + 1048)),
        (__int64)v35,
        1);
      if ( v74 <= 0x40 )
        goto LABEL_8;
      goto LABEL_20;
    }
LABEL_54:
    v53 = (__int64 *)v35;
    sub_1B016A0(v35, 2 * v33, v30, (__int64)v35, v31, v32);
    sub_1AF7470(v53, &v58, &v62);
    v47 = v58;
    v38 = v62.m128_u64[0];
    v35 = (__int64 **)v53;
    v46 = *(_DWORD *)(v34 + 1040) + 1;
    goto LABEL_47;
  }
  while ( 1 )
  {
    if ( !v32 && v39 == -8192 )
      v32 = v38;
    v37 = v31 & (v44 + v37);
    v38 = v36 + 88LL * v37;
    v39 = *(_QWORD *)v38;
    if ( v20 == *(_QWORD *)v38 )
      break;
    if ( v39 == -4096 )
    {
      if ( v32 )
        v38 = v32;
      goto LABEL_44;
    }
    ++v44;
  }
LABEL_29:
  sub_1AF93B0(&v62, (_QWORD *)v38, (_QWORD *)(v36 + 88 * v33), (__int64)v35, 1);
  if ( v74 > 0x40 )
  {
LABEL_20:
    if ( v73 )
      operator delete[](v73);
  }
LABEL_8:
  if ( ptr != v72 )
    free(ptr);
  if ( v68[0] != &v69 )
    free(v68[0]);
  if ( v60 > 0x40 && v59 )
    operator delete[](v59);
  if ( (_BYTE *)v66.m128i_i64[0] != v67 )
    free((void *)v66.m128i_i64[0]);
  if ( v63 != v65 )
    free(v63);
  return v20;
}
