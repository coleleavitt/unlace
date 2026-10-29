unsigned __int64 __fastcall sub_19146F0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // r12
  size_t v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  int *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r12
  __int16 v28; // ax
  __int64 v29; // r13
  size_t v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  size_t v37; // r15
  int v38; // eax
  __int64 v39; // r15
  size_t v40; // rax
  unsigned int v41; // edx
  signed __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  char v54; // dl
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // [rsp-10h] [rbp-178h]
  __int64 v63; // [rsp-8h] [rbp-170h]
  _DWORD v64[5]; // [rsp+8h] [rbp-160h] BYREF
  char v65; // [rsp+1Ch] [rbp-14Ch]
  _DWORD v66[6]; // [rsp+20h] [rbp-148h] BYREF
  void *v67; // [rsp+38h] [rbp-130h]
  __int64 v68; // [rsp+48h] [rbp-120h] BYREF
  int v69[6]; // [rsp+60h] [rbp-108h] BYREF
  void *v70; // [rsp+78h] [rbp-F0h]
  __int64 v71; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v72[25]; // [rsp+A0h] [rbp-C8h] BYREF

  v9 = (unsigned __int64)a2;
  v10 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v23 = sub_1907C70(a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
    v9 = v23 & 0xFFFFFFFFFFFFFFFELL;
    if ( v23 == 1 )
      return 1;
  }
  if ( (*(_BYTE *)(v9 + 1) & 6) == 0 )
    return v9;
  *(_QWORD *)v64 = *(_QWORD *)(v9 + 8);
  v12 = *(_QWORD *)(*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(v13 + 16);
  if ( (unsigned int)(v14 - 25) <= 1 )
    return v9;
  if ( (unsigned __int8)(v14 - 2) > 4u )
  {
    v15 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v15 + 1) & 8) == 0 )
      goto LABEL_43;
    goto LABEL_16;
  }
  if ( (_BYTE)v14 != 3 )
    return v9;
  v15 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v15 + 1) & 8) != 0 )
  {
LABEL_16:
    if ( (_BYTE)v14 == 48
      || *(_QWORD *)v64 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL)
      || !(((v14 & 0xF7) == 34) | (((unsigned __int8)(*(_BYTE *)(v12 + 17) & 0x1F) >> 2) ^ 1) & 1) && (_BYTE)v14 != 33 )
    {
      return v9;
    }
LABEL_43:
    if ( (_BYTE)v14 == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B3 )
      return v9;
  }
  if ( (*(_BYTE *)(v15 + 47) & 0x20) == 0
    || (v16 = j__strlen("cl_khr_fp16"), sub_FF8450(a1 + 200, (__int64)"cl_khr_fp16", v16, v15))
    || (v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v20 + 16) != 13)
    || ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) != 0x1E0 )
  {
    v24 = (int *)v9;
    sub_18CABC0(a1, v9, *(double *)a7.m128_u64);
    v27 = sub_BFD550(v9);
    v28 = *(_WORD *)v27 & 0x1FF;
    if ( v28 == 35 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
      v30 = j__strlen("object_getClass");
      v31 = sub_6F3470(v29, "object_getClass", v30);
      v32 = *(_QWORD *)(a1 + 192);
      if ( sub_1A5B7C0(a1, v32, v31, 0, 0, 0) )
      {
        v36 = sub_C00A40(v9, v32, v33, v34, v35);
        sub_168B9F0((__int64)v72, (__int64 *)(a1 + 8), v36, 0x1C13u, 0);
        v37 = j__strlen("object_getClass(");
        v38 = sub_EEB7E0(*(_QWORD *)(v27 + 16), a1 + 8, *(double *)a7.m128_u64);
        sub_9EC740((__int64)v66, v38, "object_getClass(", v37, 0);
        v39 = sub_1589170((__int64)v72, v66);
        v40 = j__strlen(")");
        v41 = *(_DWORD *)(v27 + 28);
        v65 = 1;
        v42 = v40;
        LODWORD(v40) = *(_DWORD *)(v27 + 24);
        *(_QWORD *)&v64[3] = __PAIR64__(v40, v41);
        sub_18BE5B0((__int64)v69, __SPAIR64__(v40, v41), 1, ")", v42);
        v24 = v69;
        sub_1589170(v39, v69);
        if ( v70 != &v71 )
          operator delete(v70);
        if ( v67 != &v68 )
          operator delete(v67);
        sub_15F7200(v72);
      }
      else
      {
        v59 = sub_C00A40(v9, v32, v33, v34, v35);
        v24 = (int *)(a1 + 8);
        sub_168B9F0((__int64)v72, (__int64 *)(a1 + 8), v59, 0x1C13u, 0);
        sub_15F7200(v72);
      }
    }
    else if ( v28 == 34 )
    {
      v24 = (int *)v27;
      sub_18CD690((__int64 *)a1, v27, 0, 0, v25, v26, (__m128i)a7, *(double *)a8.m128_u64);
    }
    if ( v64[0] & 7 | (*(__int64 *)v64 >> 3) & 1
      || (v43 = *(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL,
          v44 = *(_QWORD *)&byte_8[*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL] & 7LL,
          (v45 = v44 | (*(__int64 *)&byte_8[*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) != 0) )
    {
      *(_QWORD *)v64 = sub_6D5440(v64);
      v43 = *(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
    {
      v60 = sub_C00A40(v9, (__int64)v24, v44, v45, v25);
      sub_1E63330(a1, v60, *(_QWORD *)v64, 1, 0);
    }
    v46 = v9;
    v47 = sub_1914520(a1, v9, v44, v45, v25, v26, a7, a8);
    if ( v47 == 1 )
      return 1;
    v50 = v47 & 0xFFFFFFFFFFFFFFFELL;
    v51 = *(_QWORD *)(v50 + 8);
    v52 = v50;
    v53 = *(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v53 & 8) != 0 )
    {
      v48 = v53 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
          & 7) == 3 )
      {
        *(_WORD *)(a1 + 4512) = 257;
        v51 = *(_QWORD *)(v52 + 8);
      }
    }
    if ( (unsigned int)sub_F65A30(v51, v46, v48, v49) == 4 )
      *(_WORD *)(a1 + 4512) = 257;
    if ( !(unsigned __int8)sub_1694D80(a1, v52) )
      return 1;
    v54 = 4;
    v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v55 + 16) == 13 )
      v54 = 9 * (((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) == 488) + 4;
    v56 = *(unsigned int *)(a1 + 1952);
    v57 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v57, v56) )
    {
      v57 = 0;
      v56 = 0;
    }
    v9 = sub_C0A3E0(*(_QWORD **)(a1 + 248), *(__int64 *)v64, v54, v52, 0, 0, (v57 << 32) | v56);
    v58 = *(_QWORD *)(*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v58 + 16) == 7
      || (v61 = *(_QWORD *)(*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v61 + 16) == 7)
      && (v58 = sub_F63050(*(_QWORD *)(*(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF0LL), v63, v61, v62)) != 0 )
    {
      v72[0] = *(_QWORD *)(v58 + 32);
      *(_QWORD *)v64 = sub_6D5440(v72);
      return sub_C0A3E0(*(_QWORD **)(a1 + 248), *(__int64 *)v64, 58, v9 & 0xFFFFFFFFFFFFFFFELL, 0, 0, 0);
    }
    return v9;
  }
  v21 = sub_C00A40(v9, (__int64)"cl_khr_fp16", v17, v18, v19);
  sub_168B9F0((__int64)v72, (__int64 *)(a1 + 8), v21, 0x124Fu, 0);
  v69[0] = 0;
  v22 = sub_1587D10((__int64)v72, v69);
  sub_1605D30(v22, (__int64 *)v64);
  sub_15F7200(v72);
  return 1;
}
