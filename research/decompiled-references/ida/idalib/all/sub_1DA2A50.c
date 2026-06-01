__int64 __fastcall sub_1DA2A50(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 v8; // rdx
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  int v15; // ecx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rsi
  int v20; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  int v31; // eax
  unsigned int v32; // r14d
  char v33; // cl
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  __int16 v36; // ax
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r15
  int v41; // rax^4
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned int v46; // rax^4
  __int64 v47; // [rsp-10h] [rbp-138h]
  __int64 v48; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v49; // [rsp+0h] [rbp-128h]
  int v50; // [rsp+8h] [rbp-120h]
  bool v51; // [rsp+8h] [rbp-120h]
  __int64 v52; // [rsp+8h] [rbp-120h]
  _BYTE v53[32]; // [rsp+20h] [rbp-108h] BYREF
  void *v54; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v57[64]; // [rsp+58h] [rbp-D0h] BYREF
  void *v58[2]; // [rsp+98h] [rbp-90h]
  __int64 v59; // [rsp+A8h] [rbp-80h]
  _QWORD *v60; // [rsp+B0h] [rbp-78h]
  __int64 v61; // [rsp+B8h] [rbp-70h]
  int v62; // [rsp+C0h] [rbp-68h]
  __int64 v63; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-58h]
  __int64 v65; // [rsp+E0h] [rbp-48h]

  v8 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v9 = *(unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)(unsigned __int8)v8 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) == 1 && (_BYTE)v8 == 11 )
    {
      v36 = *v9 & 0x1FF;
      if ( v36 == 69 )
      {
        v10 = sub_1DA2000(a1, (__int64)v9, 1u, nullptr, a3, a4);
        goto LABEL_5;
      }
      if ( v36 == 24 )
      {
        v10 = sub_1DA24A0(a1, (__int64)v9, 1u, *(double *)a3.m128_u64, a4);
        goto LABEL_5;
      }
    }
    v10 = sub_1D8B300(a1, v9, a3, a4, v8, a6, a7);
LABEL_5:
    v14 = v10;
    if ( v10 == 1 )
      return 1;
    v48 = 0;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v48 = sub_1D8BB90(
              a1,
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
              0,
              a3,
              a4,
              v11,
              v12,
              v13);
      if ( v48 == 1 )
        return 1;
    }
    sub_15F3080((__int64)v53, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v15 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v16 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    }
    else
    {
      v16 = 0;
      v15 = 0;
    }
    v50 = v15;
    sub_BF6C80((unsigned int *)&v54, *(_QWORD *)(*a1 + 232));
    *(_DWORD *)(*a1 + 224) = (unsigned int)v54 ^ v16 & (v50 ^ (unsigned int)v54);
    v17 = *a1;
    *(_DWORD *)(v17 + 1952) = v50;
    *(_DWORD *)(v17 + 1956) = v16;
    v18 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v18 & 0x1FF) != 0x18 )
    {
      v54 = &v56;
      ptr = (void *)0x100000000LL;
      if ( (*(_WORD *)v18 & 0x1FF) == 0x4F )
        v18 = sub_BFA3B0(v18);
      v37 = *(_QWORD *)(v18 + 16);
      v38 = sub_1D86580((__int64)a1, v37);
      if ( v38 )
      {
        if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 35 > 3 )
        {
          v43 = (unsigned int)ptr;
          v37 = HIDWORD(ptr);
          v44 = v38 | 3;
          v45 = (unsigned int)ptr + 1LL;
          if ( v45 > HIDWORD(ptr) )
          {
            v37 = (__int64)&v56;
            v52 = v44;
            sub_2237220(&v54, &v56, v45, 8);
            v43 = (unsigned int)ptr;
            v44 = v52;
          }
          *((_QWORD *)v54 + v43) = v44;
          LODWORD(ptr) = (_DWORD)ptr + 1;
        }
        v39 = sub_EEB7E0(v18, v37, *(double *)a3.m128_u64);
        v25 = sub_1D82DD0(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v39,
                0,
                (__int64)&v54,
                a3,
                a4,
                v14 & 0xFFFFFFFFFFFFFFFELL,
                (__m128 *)(v48 & 0xFFFFFFFFFFFFFFFELL));
      }
      else
      {
        v25 = 1;
      }
      v26 = v54;
      if ( v54 == &v56 )
        goto LABEL_20;
LABEL_19:
      free(v26);
LABEL_20:
      sub_15F30C0((__int64)v53);
      return v25;
    }
    v19 = *(_QWORD *)(v18 + 16);
    v20 = *(_DWORD *)(v18 + 24);
    v21 = (_QWORD *)*a1;
    ptr = v57;
    v56 = 0x800000000LL;
    v60 = v21;
    v61 = v19;
    *(_OWORD *)v58 = 0;
    v62 = v20;
    v54 = nullptr;
    v59 = 0;
    sub_B85890(&v63, v19);
    v64 = 0;
    v65 = 0x101010000LL;
    sub_1A395A0((__int64)&v54);
    if ( (unsigned __int8)sub_1D88D50(a1, (__int64 *)v18, (*(_DWORD *)v18 >> 20) & 1, (__int64)&v54) )
    {
      v25 = 1;
    }
    else
    {
      v51 = (*(_DWORD *)v18 & 0x100000) != 0;
      v34 = sub_EEB7E0(v18, v18, 0.0);
      v35 = sub_1D82DD0(
              a1,
              (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
              *(_DWORD *)(a2 + 20),
              v34,
              v51,
              (__int64)&ptr,
              (__m128)0LL,
              a4,
              v14 & 0xFFFFFFFFFFFFFFFELL,
              (__m128 *)(v48 & 0xFFFFFFFFFFFFFFFELL));
      v23 = v47;
      v25 = v35;
    }
    if ( BYTE3(v65) )
    {
      if ( (_DWORD)v54 == 5 )
      {
        if ( !BYTE4(v65) )
          goto LABEL_16;
        goto LABEL_44;
      }
      if ( !v58[1] || (*(_BYTE *)(v60[29] + 46LL) & 0x20) == 0 )
      {
LABEL_16:
        if ( v58[0] )
          sub_1A39780((char *)v58[0]);
        v26 = ptr;
        if ( ptr == v57 )
          goto LABEL_20;
        goto LABEL_19;
      }
      sub_1663B80(v60, (__int64)&v54);
    }
    if ( !BYTE4(v65) || (_DWORD)v54 != 5 )
      goto LABEL_16;
LABEL_44:
    sub_1A445B0((__int64)v60, (__int64)&v54, v22, v23, v24);
    goto LABEL_16;
  }
  v27 = sub_1D8B300(a1, v9, a3, a4, v8, a6, a7);
  if ( v27 == 1 )
    return 1;
  v29 = *a1;
  v30 = v27 & 0xFFFFFFFFFFFFFFFELL;
  v31 = sub_EEC140(v27 & 0xFFFFFFFFFFFFFFFELL);
  v32 = sub_15F0EF0(v29, v31, 0, (__m128i)a3, *(double *)a4.m128_u64);
  v33 = *(_BYTE *)(a2 + 2) >> 3;
  v54 = &v56;
  ptr = (void *)0x800000000LL;
  if ( (unsigned __int8)sub_1D8B8F0(
                          a1,
                          (unsigned __int16 **)(a2 + 8 * ((v33 & 1) + 1LL) + 40),
                          (unsigned int)(*(_DWORD *)(a2 + 16) - 1),
                          1u,
                          (__int64)&v54,
                          nullptr,
                          a3,
                          a4) )
  {
    v25 = 1;
  }
  else
  {
    v40 = (unsigned int)ptr;
    v49 = (unsigned __int64 *)v54;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v46 = sub_C94560(a2) >> 32;
      v42 = sub_1930830((__int64 *)*a1, 0, v30, v32, v49, v40, a3, a4, v46);
    }
    else
    {
      v41 = sub_C94560(a2) >> 32;
      v42 = sub_19303F0(*a1, 0, v30, v32, v49, v40, a3, a4, v41, 0);
    }
    v25 = v42;
  }
  if ( v54 != &v56 )
    free(v54);
  return v25;
}
