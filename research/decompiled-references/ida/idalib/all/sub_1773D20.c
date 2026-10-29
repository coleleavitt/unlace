__int64 __fastcall sub_1773D20(__int64 *a1, __int64 a2, __m128 a3, double a4)
{
  unsigned __int8 v5; // dl
  unsigned __int16 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // ecx
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // r12
  int v20; // r13d
  int v21; // eax
  int v22; // r14d
  char v23; // cl
  unsigned int v24; // eax
  __int16 v25; // ax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // r15d
  int v30; // rax^4
  __int64 v31; // rax
  int v32; // rax^4
  __int64 v33; // [rsp+0h] [rbp-128h]
  int v34; // [rsp+0h] [rbp-128h]
  int v35; // [rsp+Ch] [rbp-11Ch]
  bool v36; // [rsp+Ch] [rbp-11Ch]
  _BYTE v37[32]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v41[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-80h]
  __int64 v43; // [rsp+B0h] [rbp-78h]
  __int64 v44; // [rsp+B8h] [rbp-70h]
  int v45; // [rsp+C0h] [rbp-68h]
  __int64 v46; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-58h]
  __int64 v48; // [rsp+E0h] [rbp-48h]

  v5 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v6 = *(unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)v5 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) != 1 || v5 != 11 )
      goto LABEL_4;
    v25 = *v6 & 0x1FF;
    if ( v25 == 69 )
    {
      v7 = sub_1773260(a1, (__int64)v6, 1u, 0, a3);
    }
    else
    {
      if ( v25 != 24 )
      {
LABEL_4:
        v7 = sub_175B800(a1, v6);
        goto LABEL_5;
      }
      v7 = sub_1773700(a1, (__int64 *)v6, 1u);
    }
LABEL_5:
    v8 = v7;
    if ( v7 == 1 )
      return 1;
    v33 = 0;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v33 = sub_175C980(
              a1,
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
              0,
              *(double *)a3.m128_u64);
      if ( v33 == 1 )
        return 1;
    }
    sub_15F3080((__int64)v37, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v9 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v10 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    }
    else
    {
      v10 = 0;
      v9 = 0;
    }
    v35 = v9;
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    *(_DWORD *)(*a1 + 224) = (unsigned int)ptr ^ v10 & (v35 ^ (unsigned int)ptr);
    v11 = *a1;
    *(_DWORD *)(v11 + 1952) = v35;
    *(_DWORD *)(v11 + 1956) = v10;
    v12 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v12 & 0x1FF) == 0x18 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *a1;
      v39 = (__int64)v41;
      v40 = 0x800000000LL;
      v43 = v15;
      v44 = v13;
      v41[4] = 0;
      v45 = v14;
      ptr = nullptr;
      v42 = 0;
      sub_B85890(&v46, v13);
      v47 = 0;
      v48 = 0x101010000LL;
      sub_1A395A0(&ptr);
      if ( (unsigned __int8)sub_174BAF0(a1, (__int16 *)v12, (*(_DWORD *)v12 >> 20) & 1, (__int64)&ptr) )
      {
        v16 = 1;
      }
      else
      {
        v36 = (*(_DWORD *)v12 & 0x100000) != 0;
        v24 = sub_EEB7E0(v12, v12, 0.0);
        v16 = sub_17417A0(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v24,
                v36,
                (__int64)&v39,
                v8 & 0xFFFFFFFFFFFFFFFELL,
                v33 & 0xFFFFFFFFFFFFFFFELL);
      }
      sub_169D230((__int64)&ptr);
    }
    else
    {
      ptr = &v40;
      v39 = 0x100000000LL;
      if ( (*(_WORD *)v12 & 0x1FF) == 0x4F )
        v12 = sub_BFA3B0(v12);
      v26 = *(_QWORD *)(v12 + 16);
      v27 = sub_17473B0((__int64)a1, v26);
      if ( v27 )
      {
        if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 35 > 3 )
        {
          v26 = v27 | 3;
          sub_1743080((__int64)&ptr, v27 | 3);
        }
        v28 = sub_EEB7E0(v12, v26, *(double *)a3.m128_u64);
        v16 = sub_17417A0(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v28,
                0,
                (__int64)&ptr,
                v8 & 0xFFFFFFFFFFFFFFFELL,
                v33 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        v16 = 1;
      }
      if ( ptr != &v40 )
        free(ptr);
    }
    sub_15F30C0((__int64)v37);
    return v16;
  }
  v17 = sub_175B800(a1, v6);
  if ( v17 == 1 )
    return 1;
  v19 = *a1;
  v20 = v17 & 0xFFFFFFFE;
  v21 = sub_EEC140(v17 & 0xFFFFFFFFFFFFFFFELL);
  v22 = sub_15F0EF0(v19, v21, 0, (__m128i)a3, a4);
  v23 = *(_BYTE *)(a2 + 2) >> 3;
  ptr = &v40;
  v39 = 0x800000000LL;
  if ( (unsigned __int8)sub_175C6E0(
                          a1,
                          (unsigned __int16 **)(a2 + 8 * ((v23 & 1) + 1LL) + 40),
                          *(_DWORD *)(a2 + 16) - 1,
                          1,
                          (__int64)&ptr,
                          nullptr) )
  {
    v16 = 1;
  }
  else
  {
    v29 = v39;
    v34 = (int)ptr;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v32 = sub_C94560(a2) >> 32;
      v31 = sub_1930830(*a1, 0, v20, v22, v34, v29, v32);
    }
    else
    {
      v30 = sub_C94560(a2) >> 32;
      v31 = sub_19303F0(*a1, 0, v20, v22, v34, v29, v30, 0);
    }
    v16 = v31;
  }
  if ( ptr != &v40 )
    free(ptr);
  return v16;
}
