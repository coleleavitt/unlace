__int64 __fastcall sub_19914F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int8 v5; // dl
  unsigned __int16 *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  int v15; // ecx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  int v25; // eax
  unsigned int v26; // r14d
  char v27; // cl
  __int16 v28; // ax
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned __int64 v33; // r15
  int v34; // rax^4
  __int64 v35; // rax
  unsigned int v36; // rax^4
  int v37; // [rsp+0h] [rbp-128h]
  bool v38; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v39; // [rsp+0h] [rbp-128h]
  __int64 v40; // [rsp+8h] [rbp-120h]
  _BYTE v41[32]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v45[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-80h]
  __int64 v47; // [rsp+B0h] [rbp-78h]
  __int64 v48; // [rsp+B8h] [rbp-70h]
  int v49; // [rsp+C0h] [rbp-68h]
  __int64 v50; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-58h]
  __int64 v52; // [rsp+E0h] [rbp-48h]

  v5 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v6 = *(unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)v5 - 42 <= 1 )
  {
    v22 = sub_190CCA0(a1, v6, *(double *)a3.m128_u64, a4);
    if ( v22 == 1 )
      return 1;
    v23 = *a1;
    v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v25 = sub_EEC140(v22 & 0xFFFFFFFFFFFFFFFELL);
    v26 = sub_15F0EF0(v23, v25, 0, (__m128i)a3, *(double *)a4.m128_u64);
    v27 = *(_BYTE *)(a2 + 2) >> 3;
    ptr = &v44;
    v43 = 0x800000000LL;
    if ( (unsigned __int8)sub_197B2A0(
                            a1,
                            (unsigned __int16 **)(a2 + 8 * ((v27 & 1) + 1LL) + 40),
                            *(_DWORD *)(a2 + 16) - 1,
                            1,
                            (__int64)&ptr,
                            nullptr,
                            *(double *)a3.m128_u64,
                            a4) )
    {
      v13 = 1;
    }
    else
    {
      v33 = (unsigned int)v43;
      v39 = (unsigned __int64 *)ptr;
      if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
      {
        v36 = sub_C94560(a2) >> 32;
        v35 = sub_1930830((__int64 *)*a1, 0, v24, v26, v39, v33, a3, a4, v36);
      }
      else
      {
        v34 = sub_C94560(a2) >> 32;
        v35 = sub_19303F0(*a1, 0, v24, v26, v39, v33, a3, a4, v34, 0);
      }
      v13 = v35;
    }
    if ( ptr != &v44 )
      free(ptr);
    return v13;
  }
  if ( *(_DWORD *)(a2 + 16) == 1 && v5 == 11 )
  {
    v28 = *v6 & 0x1FF;
    if ( v28 == 69 )
    {
      v7 = sub_1990C90(a1, (__int64)v6, 1u, nullptr, a3, a4);
      goto LABEL_5;
    }
    if ( v28 == 24 )
    {
      v7 = sub_1990F40(a1, (__int64)v6, 1u, *(double *)a3.m128_u64, a4);
      goto LABEL_5;
    }
  }
  v7 = sub_190CCA0(a1, v6, *(double *)a3.m128_u64, a4);
LABEL_5:
  v11 = v7;
  if ( v7 == 1 )
    return 1;
  if ( *(_DWORD *)(a2 + 16) == 2 && (v12 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40)) != 0 )
  {
    v40 = sub_197B880((__int64)a1, v12, 0, v8, v9, v10, a3, a4);
    if ( v40 == 1 )
      return 1;
  }
  else
  {
    v40 = 0;
  }
  sub_15F3080((__int64)v41, *a1);
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
  v37 = v15;
  sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
  *(_DWORD *)(*a1 + 224) = (unsigned int)ptr ^ v16 & (v37 ^ (unsigned int)ptr);
  v17 = *a1;
  *(_DWORD *)(v17 + 1952) = v37;
  *(_DWORD *)(v17 + 1956) = v16;
  v18 = *(_QWORD *)(a2 + 32);
  if ( (*(_WORD *)v18 & 0x1FF) == 0x18 )
  {
    v19 = *(_QWORD *)(v18 + 16);
    v20 = *(_DWORD *)(v18 + 24);
    v21 = *a1;
    v43 = (__int64)v45;
    v44 = 0x800000000LL;
    v47 = v21;
    v48 = v19;
    v45[4] = 0;
    v49 = v20;
    ptr = nullptr;
    v46 = 0;
    sub_B85890(&v50, v19);
    v51 = 0;
    v52 = 0x101010000LL;
    sub_1A395A0(&ptr);
    if ( (unsigned __int8)sub_18D9390(a1, v18, (*(_DWORD *)v18 & 0x100000) != 0, (__int64)&ptr) )
    {
      v13 = 1;
    }
    else
    {
      v38 = (*(_DWORD *)v18 & 0x100000) != 0;
      v29 = sub_EEB7E0(v18, v18, 0.0);
      v13 = sub_1929470(
              a1,
              (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
              *(_DWORD *)(a2 + 20),
              v29,
              v38,
              (__int64)&v43,
              (__m128)0LL,
              a4,
              v11 & 0xFFFFFFFFFFFFFFFELL,
              v40 & 0xFFFFFFFFFFFFFFFELL);
    }
    sub_169D230((__int64)&ptr);
  }
  else
  {
    ptr = &v44;
    v43 = 0x100000000LL;
    if ( (*(_WORD *)v18 & 0x1FF) == 0x4F )
      v18 = sub_BFA3B0(v18);
    v30 = *(_QWORD *)(v18 + 16);
    v31 = sub_18CBE40((__int64)a1, v30);
    if ( v31 )
    {
      if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 35 > 3 )
      {
        v30 = v31 | 3;
        sub_1743080((__int64)&ptr, v31 | 3);
      }
      v32 = sub_EEB7E0(v18, v30, *(double *)a3.m128_u64);
      v13 = sub_1929470(
              a1,
              (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
              *(_DWORD *)(a2 + 20),
              v32,
              0,
              (__int64)&ptr,
              a3,
              a4,
              v11 & 0xFFFFFFFFFFFFFFFELL,
              v40 & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v13 = 1;
    }
    if ( ptr != &v44 )
      free(ptr);
  }
  sub_15F30C0((__int64)v41);
  return v13;
}
