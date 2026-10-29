__int64 __fastcall sub_1D286E0(
        __int64 **a1,
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
  unsigned int v15; // ecx
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  int v24; // eax
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 *v31; // r12
  unsigned __int64 v32; // r13
  int v33; // eax
  unsigned int v34; // r14d
  char v35; // cl
  unsigned int v36; // eax
  __int16 v37; // ax
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r15
  int v42; // rax^4
  __int64 v43; // rax
  unsigned int v44; // rax^4
  __int64 v45; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v46; // [rsp+0h] [rbp-128h]
  unsigned int v47; // [rsp+Ch] [rbp-11Ch]
  bool v48; // [rsp+Ch] [rbp-11Ch]
  _BYTE v49[32]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v53[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-80h]
  __int64 *v55; // [rsp+B0h] [rbp-78h]
  __int64 v56; // [rsp+B8h] [rbp-70h]
  int v57; // [rsp+C0h] [rbp-68h]
  __int64 v58; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v59; // [rsp+D0h] [rbp-58h]
  __int64 v60; // [rsp+E0h] [rbp-48h]

  v8 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v9 = *(unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)(unsigned __int8)v8 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) != 1 || (_BYTE)v8 != 11 )
      goto LABEL_4;
    v37 = *v9 & 0x1FF;
    if ( v37 == 69 )
    {
      v10 = sub_1D27C20(a1, (__int64)v9, 1u, nullptr, a3, a4);
    }
    else
    {
      if ( v37 != 24 )
      {
LABEL_4:
        v10 = sub_1D11200((__int64 *)a1, v9, a3, a4, v8, a6, a7);
        goto LABEL_5;
      }
      v10 = sub_1D280C0(a1, (__int64)v9, 1u, *(double *)a3.m128_u64, a4);
    }
LABEL_5:
    v14 = v10;
    if ( v10 == 1 )
      return 1;
    v45 = 0;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v45 = sub_1D119D0(
              (__int64 *)a1,
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
              0,
              a3,
              a4,
              v11,
              v12,
              v13);
      if ( v45 == 1 )
        return 1;
    }
    sub_15F3080((__int64)v49, (__int64)*a1);
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
    v47 = v15;
    sub_BF6C80((unsigned int *)&ptr, (*a1)[29]);
    v20 = v47;
    *((_DWORD *)*a1 + 56) = (unsigned int)ptr ^ v16 & (v47 ^ (unsigned int)ptr);
    v21 = *a1;
    *((_DWORD *)v21 + 488) = v47;
    *((_DWORD *)v21 + 489) = v16;
    v22 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v22 & 0x1FF) == 0x18 )
    {
      v23 = *(_QWORD *)(v22 + 16);
      v24 = *(_DWORD *)(v22 + 24);
      v25 = *a1;
      v51 = (__int64)v53;
      v52 = 0x800000000LL;
      v55 = v25;
      v56 = v23;
      v53[4] = 0;
      v57 = v24;
      ptr = nullptr;
      v54 = 0;
      sub_B85890(&v58, v23);
      v59 = 0;
      v60 = 0x101010000LL;
      sub_1A395A0((__int64)&ptr);
      if ( (unsigned __int8)sub_1D1B490(
                              (__int64)a1,
                              v22,
                              (*(_DWORD *)v22 >> 20) & 1,
                              (__int64)&ptr,
                              v26,
                              v27,
                              (__m128)0LL,
                              a4) )
      {
        v28 = 1;
      }
      else
      {
        v48 = (*(_DWORD *)v22 & 0x100000) != 0;
        v36 = sub_EEB7E0(v22, v22, 0.0);
        v28 = sub_1CB2590(
                (__int64 *)a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v36,
                v48,
                (__int64)&v51,
                (__m128)0LL,
                a4,
                v14 & 0xFFFFFFFFFFFFFFFELL,
                (__m128 *)(v45 & 0xFFFFFFFFFFFFFFFELL));
      }
      sub_169D230((__int64)&ptr);
    }
    else
    {
      ptr = &v52;
      v51 = 0x100000000LL;
      if ( (*(_WORD *)v22 & 0x1FF) == 0x4F )
        v22 = sub_BFA3B0(v22);
      v38 = *(_QWORD *)(v22 + 16);
      v39 = sub_1D1B120((__int64)a1, v38, a3, a4, v17, v20, v18, v19);
      if ( v39 )
      {
        if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 35 > 3 )
        {
          v38 = v39 | 3;
          sub_1743080((__int64)&ptr, v39 | 3);
        }
        v40 = sub_EEB7E0(v22, v38, *(double *)a3.m128_u64);
        v28 = sub_1CB2590(
                (__int64 *)a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v40,
                0,
                (__int64)&ptr,
                a3,
                a4,
                v14 & 0xFFFFFFFFFFFFFFFELL,
                (__m128 *)(v45 & 0xFFFFFFFFFFFFFFFELL));
      }
      else
      {
        v28 = 1;
      }
      if ( ptr != &v52 )
        free(ptr);
    }
    sub_15F30C0((__int64)v49);
    return v28;
  }
  v29 = sub_1D11200((__int64 *)a1, v9, a3, a4, v8, a6, a7);
  if ( v29 == 1 )
    return 1;
  v31 = *a1;
  v32 = v29 & 0xFFFFFFFFFFFFFFFELL;
  v33 = sub_EEC140(v29 & 0xFFFFFFFFFFFFFFFELL);
  v34 = sub_15F0EF0((__int64)v31, v33, 0, (__m128i)a3, *(double *)a4.m128_u64);
  v35 = *(_BYTE *)(a2 + 2) >> 3;
  ptr = &v52;
  v51 = 0x800000000LL;
  if ( (unsigned __int8)sub_1D11730(
                          (__int64 *)a1,
                          (unsigned __int16 **)(a2 + 8 * ((v35 & 1) + 1LL) + 40),
                          (unsigned int)(*(_DWORD *)(a2 + 16) - 1),
                          1u,
                          (__int64)&ptr,
                          nullptr,
                          a3,
                          a4) )
  {
    v28 = 1;
  }
  else
  {
    v41 = (unsigned int)v51;
    v46 = (unsigned __int64 *)ptr;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v44 = sub_C94560(a2) >> 32;
      v43 = sub_1930830(*a1, 0, v32, v34, v46, v41, a3, a4, v44);
    }
    else
    {
      v42 = sub_C94560(a2) >> 32;
      v43 = sub_19303F0((__int64)*a1, 0, v32, v34, v46, v41, a3, a4, v42, 0);
    }
    v28 = v43;
  }
  if ( ptr != &v52 )
    free(ptr);
  return v28;
}
