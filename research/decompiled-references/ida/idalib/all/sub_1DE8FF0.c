__int64 __fastcall sub_1DE8FF0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rdx
  _WORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  unsigned int v16; // ecx
  int v17; // r14d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int64 *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  void *v32; // rdi
  unsigned __int16 *v33; // rax
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  int v37; // eax
  unsigned int v38; // r14d
  char v39; // cl
  unsigned int v40; // eax
  unsigned __int64 v41; // rax
  __int16 v42; // ax
  __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  unsigned int v46; // eax
  unsigned __int64 v47; // r15
  int v48; // rax^4
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned int v53; // rax^4
  __int64 v54; // [rsp-10h] [rbp-138h]
  unsigned __int16 *v55; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v56; // [rsp+0h] [rbp-128h]
  unsigned int v57; // [rsp+8h] [rbp-120h]
  bool v58; // [rsp+8h] [rbp-120h]
  __int64 v59; // [rsp+8h] [rbp-120h]
  _BYTE v60[32]; // [rsp+20h] [rbp-108h] BYREF
  void *v61; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v63; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v64[64]; // [rsp+58h] [rbp-D0h] BYREF
  void *v65[2]; // [rsp+98h] [rbp-90h]
  __int64 v66; // [rsp+A8h] [rbp-80h]
  _QWORD *v67; // [rsp+B0h] [rbp-78h]
  __int64 v68; // [rsp+B8h] [rbp-70h]
  int v69; // [rsp+C0h] [rbp-68h]
  __int64 v70; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-58h]
  __int64 v72; // [rsp+E0h] [rbp-48h]

  v9 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v10 = *(_WORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)(unsigned __int8)v9 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) == 1 && (_BYTE)v9 == 11 )
    {
      v42 = *v10 & 0x1FF;
      if ( v42 == 69 )
      {
        v11 = sub_1DE85A0(a1, (__int64)v10, 1u, nullptr, a3, a4);
        goto LABEL_5;
      }
      if ( v42 == 24 )
      {
        v11 = sub_1DE8A40(a1, (unsigned __int64)v10, 1u, *(double *)a3.m128_u64, a4);
        goto LABEL_5;
      }
    }
    v11 = (__int64)sub_1DC71F0(a1, (unsigned __int64)v10, v9, a6, a7, a8, a3, a4);
LABEL_5:
    v15 = v11;
    if ( v11 == 1 )
      return 1;
    v55 = nullptr;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v55 = sub_1DDC230(
              a1,
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
              0,
              a3,
              a4,
              v12,
              v13,
              v14);
      if ( v55 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        return 1;
    }
    sub_15F3080((__int64)v60, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v16 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v17 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    }
    else
    {
      v17 = 0;
      v16 = 0;
    }
    v57 = v16;
    sub_BF6C80((unsigned int *)&v61, *(_QWORD *)(*a1 + 232));
    v20 = v57;
    *(_DWORD *)(*a1 + 224) = (unsigned int)v61 ^ v17 & (v57 ^ (unsigned int)v61);
    v21 = *a1;
    *(_DWORD *)(v21 + 1952) = v57;
    *(_DWORD *)(v21 + 1956) = v17;
    v22 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v22 & 0x1FF) != 0x18 )
    {
      v61 = &v63;
      ptr = (void *)0x100000000LL;
      if ( (*(_WORD *)v22 & 0x1FF) == 0x4F )
        v22 = sub_BFA3B0(v22);
      v43 = *(_QWORD *)(v22 + 16);
      v44 = *(unsigned int *)(v43 + 24);
      v45 = sub_1DD8310((__int64)a1, v44, v43, v20, v18, v19, a3, a4);
      if ( v45 )
      {
        if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 35 > 3 )
        {
          v50 = (unsigned int)ptr;
          v44 = HIDWORD(ptr);
          v51 = v45 | 3;
          v52 = (unsigned int)ptr + 1LL;
          if ( v52 > HIDWORD(ptr) )
          {
            v44 = (__int64)&v63;
            v59 = v51;
            sub_2237220(&v61, &v63, v52, 8);
            v50 = (unsigned int)ptr;
            v51 = v59;
          }
          *((_QWORD *)v61 + v50) = v51;
          LODWORD(ptr) = (_DWORD)ptr + 1;
        }
        v46 = sub_EEB7E0(v22, v44, *(double *)a3.m128_u64);
        v31 = sub_1DB9100(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v46,
                0,
                (__int64)&v61,
                a3,
                a4,
                v15 & 0xFFFFFFFFFFFFFFFELL,
                (__m128 *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFELL));
      }
      else
      {
        v31 = 1;
      }
      v32 = v61;
      if ( v61 == &v63 )
        goto LABEL_20;
LABEL_19:
      free(v32);
LABEL_20:
      sub_15F30C0((__int64)v60);
      return v31;
    }
    v23 = *(_QWORD *)(v22 + 16);
    v24 = *(_DWORD *)(v22 + 24);
    v25 = (_QWORD *)*a1;
    ptr = v64;
    v63 = 0x800000000LL;
    v67 = v25;
    v68 = v23;
    *(_OWORD *)v65 = 0;
    v69 = v24;
    v61 = nullptr;
    v66 = 0;
    sub_B85890(&v70, v23);
    v71 = 0;
    v72 = 0x101010000LL;
    sub_1A395A0((__int64)&v61);
    if ( (unsigned __int8)sub_1DD8F30(a1, v22, (*(_DWORD *)v22 >> 20) & 1, (__int64)&v61, v26, v27, (__m128)0LL, a4) )
    {
      v31 = 1;
    }
    else
    {
      v58 = (*(_DWORD *)v22 & 0x100000) != 0;
      v40 = sub_EEB7E0(v22, v22, 0.0);
      v41 = sub_1DB9100(
              a1,
              (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
              *(_DWORD *)(a2 + 20),
              v40,
              v58,
              (__int64)&ptr,
              (__m128)0LL,
              a4,
              v15 & 0xFFFFFFFFFFFFFFFELL,
              (__m128 *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFELL));
      v29 = v54;
      v31 = v41;
    }
    if ( BYTE3(v72) )
    {
      if ( (_DWORD)v61 == 5 )
      {
        if ( !BYTE4(v72) )
          goto LABEL_16;
        goto LABEL_44;
      }
      if ( !v65[1] || (*(_BYTE *)(v67[29] + 46LL) & 0x20) == 0 )
      {
LABEL_16:
        if ( v65[0] )
          sub_1A39780((char *)v65[0]);
        v32 = ptr;
        if ( ptr == v64 )
          goto LABEL_20;
        goto LABEL_19;
      }
      sub_1663B80(v67, (__int64)&v61);
    }
    if ( !BYTE4(v72) || (_DWORD)v61 != 5 )
      goto LABEL_16;
LABEL_44:
    sub_1A445B0((__int64)v67, (__int64)&v61, v28, v29, v30);
    goto LABEL_16;
  }
  v33 = sub_1DC71F0(a1, (unsigned __int64)v10, v9, a6, a7, a8, a3, a4);
  if ( v33 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v35 = *a1;
  v36 = (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFELL;
  v37 = sub_EEC140((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFELL);
  v38 = sub_15F0EF0(v35, v37, 0, (__m128i)a3, *(double *)a4.m128_u64);
  v39 = *(_BYTE *)(a2 + 2) >> 3;
  v61 = &v63;
  ptr = (void *)0x800000000LL;
  if ( (unsigned __int8)sub_1DDBD00(
                          a1,
                          (unsigned __int64 *)(a2 + 8 * ((v39 & 1) + 1LL) + 40),
                          (unsigned int)(*(_DWORD *)(a2 + 16) - 1),
                          1u,
                          (__int64)&v61,
                          nullptr,
                          a3,
                          a4) )
  {
    v31 = 1;
  }
  else
  {
    v47 = (unsigned int)ptr;
    v56 = (unsigned __int64 *)v61;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v53 = sub_C94560(a2) >> 32;
      v49 = sub_1930830((__int64 *)*a1, 0, v36, v38, v56, v47, a3, a4, v53);
    }
    else
    {
      v48 = sub_C94560(a2) >> 32;
      v49 = sub_19303F0(*a1, 0, v36, v38, v56, v47, a3, a4, v48, 0);
    }
    v31 = v49;
  }
  if ( v61 != &v63 )
    free(v61);
  return v31;
}
