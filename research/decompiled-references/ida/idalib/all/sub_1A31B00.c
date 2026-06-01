__int64 __fastcall sub_1A31B00(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  void **v28; // rsi
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  void **v36; // rax
  int v37; // eax
  int v38; // r14d
  unsigned __int64 *v39; // rbx
  unsigned __int64 *v40; // rdi
  __m128 *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 **v51; // [rsp+0h] [rbp-298h]
  unsigned __int64 v52; // [rsp+0h] [rbp-298h]
  __int64 v53; // [rsp+8h] [rbp-290h]
  unsigned __int8 v54; // [rsp+1Fh] [rbp-279h]
  unsigned __int64 v55; // [rsp+28h] [rbp-270h] BYREF
  unsigned __int64 v56; // [rsp+30h] [rbp-268h] BYREF
  __int64 v57; // [rsp+38h] [rbp-260h] BYREF
  void *v58; // [rsp+40h] [rbp-258h] BYREF
  signed __int64 v59; // [rsp+48h] [rbp-250h]
  __int64 v60; // [rsp+50h] [rbp-248h] BYREF
  _QWORD *v61[18]; // [rsp+60h] [rbp-238h] BYREF
  __m128 v62; // [rsp+F0h] [rbp-1A8h] BYREF
  unsigned __int64 *v63; // [rsp+100h] [rbp-198h]
  __int64 v64; // [rsp+108h] [rbp-190h]
  __int64 v65; // [rsp+110h] [rbp-188h]
  __int64 v66; // [rsp+118h] [rbp-180h] BYREF
  unsigned int v67; // [rsp+120h] [rbp-178h]
  void *v68[2]; // [rsp+198h] [rbp-100h] BYREF
  int v69; // [rsp+1A8h] [rbp-F0h]
  char v70; // [rsp+1ACh] [rbp-ECh]
  _QWORD v71[5]; // [rsp+1B0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+1D8h] [rbp-C0h]
  __int64 v73; // [rsp+1E0h] [rbp-B8h]
  _DWORD v74[26]; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+250h] [rbp-48h]
  __int16 v76; // [rsp+258h] [rbp-40h]
  char v77; // [rsp+25Ah] [rbp-3Eh]

  if ( !a2 )
    goto LABEL_3;
  if ( (*(_BYTE *)(a2 + 80) & 0x7Fu) - 35 > 3 )
    goto LABEL_3;
  if ( !sub_C1DDA0(a2) )
    goto LABEL_3;
  v54 = sub_B981D0((_QWORD *)a2, a2);
  if ( !v54 )
    goto LABEL_3;
  v3 = sub_B72690(a2 + 72);
  if ( v3 )
    v3 -= 64LL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    goto LABEL_3;
  v9 = *(_QWORD *)(v3 + 128);
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 10) & 0x20) != 0
      && (*(_BYTE *)(v9 + 104) & 0x18) == 0
      && (*(_DWORD *)(v9 + 104) & 0xFFFE0) == 0 )
    {
      goto LABEL_3;
    }
  }
  v10 = **(_QWORD **)(a2 + 120);
  v11 = *(_QWORD *)(v10 + 48);
  v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1 )
    goto LABEL_67;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    goto LABEL_18;
  v13 = sub_F63050(v13, a2, v12, v7);
  if ( v13 )
  {
LABEL_67:
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 32);
      if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1 )
          break;
        v15 = sub_F63050(v13, a2, v12, v7);
        v14 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
          goto LABEL_17;
      }
    }
LABEL_17:
    v11 = v14;
    v13 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_18:
  v16 = *(_QWORD *)(v13 + 8) & 7LL | (*(__int64 *)(v13 + 8) >> 3) & 1;
  if ( v16 )
    v17 = sub_F64F00(v11, a2, v16, v7, v8) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = sub_F6B0C0(v17, a1[31], v16, v7, v8);
  v19 = a1[31];
  v55 = v18;
  v56 = sub_A7A9D0(v19, v3, v20, v21, v22, v23);
  if ( v56 == v55 )
  {
LABEL_3:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  v58 = (void *)a2;
  v53 = a1[31];
  v51 = (__int64 **)(v53 + 22864);
  v24 = sub_1A2F4D0((__int64 *)(v53 + 22864), (__int64 *)&v58, v61);
  v25 = v53 + 22864;
  v26 = v53;
  if ( v24 )
  {
    sub_1A2F860(&v62, v61[0], (_QWORD *)(*(_QWORD *)(v53 + 22864) + 56LL * *(unsigned int *)(v53 + 22880)), v25, 1);
    LOBYTE(v3) = *(_DWORD *)(v62.m128_u64[0] + 16) == 0;
    return (unsigned int)v3;
  }
  v27 = *(unsigned int *)(v53 + 22880);
  v28 = (void **)v61[0];
  v29 = *(_DWORD *)(v53 + 22872) + 1;
  v30 = (unsigned int)(3 * v27);
  v62.m128_u64[0] = (unsigned __int64)v61[0];
  if ( 4 * v29 >= (unsigned int)v30 )
  {
    sub_1A31490(v51, 2 * v27, v27, v25, v53, v30);
  }
  else
  {
    v31 = (unsigned int)v27 >> 3;
    if ( (int)v27 - *(_DWORD *)(v53 + 22876) - v29 > (unsigned int)v31 )
      goto LABEL_24;
    sub_1A31490(v51, v27, v27, v25, v53, v31);
  }
  sub_1A2F4D0((__int64 *)v51, (__int64 *)&v58, &v62);
  v26 = v53;
  v25 = v53 + 22864;
  v28 = (void **)v62.m128_u64[0];
  v29 = *(_DWORD *)(v53 + 22872) + 1;
LABEL_24:
  v32 = (char *)*v28 + 4096 == nullptr;
  *(_DWORD *)(v26 + 22872) = v29;
  if ( !v32 )
    --*(_DWORD *)(v26 + 22876);
  *v28 = v58;
  v28[1] = v28 + 3;
  v28[2] = (void *)0x400000000LL;
  v33 = *(unsigned int *)(v26 + 22880);
  v61[0] = v28;
  sub_1A2F860(&v62, v28, (_QWORD *)(*(_QWORD *)(v26 + 22864) + 56 * v33), v25, 1);
  v35 = v62.m128_u64[0];
  v64 = 0;
  v62.m128_u64[0] = 0;
  v65 = 1;
  v52 = v35;
  v63 = &v62.m128_u64[1];
  v62.m128_u64[1] = (unsigned __int64)&v62.m128_u64[1];
  v36 = (void **)&v66;
  do
  {
    *v36 = nullptr;
    v36 += 2;
  }
  while ( v36 != v68 );
  v70 = 1;
  v68[0] = v71;
  ptr = v74;
  v68[1] = &byte_4;
  v69 = 0;
  v71[4] = 0;
  v73 = 0x400000000LL;
  v74[24] = 0;
  v75 = 0;
  v76 = 257;
  v77 = 0;
  LODWORD(v3) = sub_183BEE0((__int64)a1, *(unsigned int *)(v3 + 24), v55, v56, (__int64)&v62, v34);
  if ( (_BYTE)v3 )
  {
    LOBYTE(v37) = sub_B65DB0((__int64)&v62, *(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL));
    v38 = v37;
    if ( (_BYTE)v37 )
    {
      sub_1841240((__int64)&v58, (__int64)a1, (__int64 *)&v62);
      sub_168B9F0((__int64)v61, a1 + 1, a3, 0xEC1u, 0);
      v42 = sub_1605D30((__int64)v61, (__int64 *)&v56);
      v43 = v42;
      if ( *(_BYTE *)(v42 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v42 + 32), v58, v59);
      }
      else if ( *(_BYTE *)(v42 + 132) )
      {
        v46 = sub_168B9E0((_QWORD *)v42);
        v49 = *(_QWORD *)(v43 + 16);
        if ( v49 )
          v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v49 + 32LL))(*(_QWORD *)(v43 + 16));
        v57 = v49;
        v50 = sub_1587BC0(v46, &v57, v44, v45, v47, v48);
        sub_AEC220((unsigned __int8 **)(*v50 + 32LL * *(unsigned int *)(v43 + 128) + 8), v58, v59);
      }
      sub_15F7200(v61);
      if ( v58 != &v60 )
        operator delete(v58);
      LODWORD(v3) = v38;
    }
    else if ( !(unsigned int)sub_16643B0(a1, a3, v56, v55, v62.m128_u64[1] + 16, 3778, 0, 0) )
    {
      LODWORD(v3) = 0;
      sub_183BF30((__int64)a1, (__int64)&v62, v52 + 8);
    }
  }
  else
  {
    sub_168B9F0((__int64)v61, a1 + 1, *(_DWORD *)(v10 + 24), 0xFC7u, 0);
    sub_1605D30((__int64)v61, (__int64 *)&v55);
    sub_15F7200(v61);
    LODWORD(v3) = v54;
  }
  if ( ptr != v74 )
    free(ptr);
  if ( !v70 )
    free(v68[0]);
  if ( (v65 & 1) == 0 )
    operator delete(v66, 16LL * v67, 8);
  v39 = (unsigned __int64 *)v62.m128_u64[1];
  if ( (unsigned __int16 *)v62.m128_u64[1] != &v62.m128_u16[4] )
  {
    while ( 1 )
    {
      v40 = (unsigned __int64 *)v39[2];
      v41 = (__m128 *)*v39;
      if ( v40 == v39 + 4 )
      {
        operator delete(v39);
        if ( v41 == (__m128 *)&v62.m128_u16[4] )
          return (unsigned int)v3;
      }
      else
      {
        free(v40);
        operator delete(v39);
        if ( v41 == (__m128 *)&v62.m128_u16[4] )
          return (unsigned int)v3;
      }
      v39 = (unsigned __int64 *)v41;
    }
  }
  return (unsigned int)v3;
}
