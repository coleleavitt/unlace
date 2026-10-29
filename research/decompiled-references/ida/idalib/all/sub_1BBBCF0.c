__int64 __fastcall sub_1BBBCF0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v8; // rdx
  _WORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  int v15; // ecx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  int v27; // eax
  unsigned int v28; // r14d
  char v29; // cl
  unsigned int v30; // eax
  __int16 v31; // ax
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r15
  int v36; // rax^4
  __int64 v37; // rax
  unsigned int v38; // rax^4
  __int64 v39; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v40; // [rsp+0h] [rbp-128h]
  int v41; // [rsp+Ch] [rbp-11Ch]
  bool v42; // [rsp+Ch] [rbp-11Ch]
  _BYTE v43[32]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v47[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-80h]
  __int64 v49; // [rsp+B0h] [rbp-78h]
  __int64 v50; // [rsp+B8h] [rbp-70h]
  int v51; // [rsp+C0h] [rbp-68h]
  __int64 v52; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-58h]
  __int64 v54; // [rsp+E0h] [rbp-48h]

  v8 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v9 = *(_WORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)(unsigned __int8)v8 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) != 1 || (_BYTE)v8 != 11 )
      goto LABEL_4;
    v31 = *v9 & 0x1FF;
    if ( v31 == 69 )
    {
      v10 = sub_1BBB360(a1, (__int64)v9, 1u, nullptr, a3, a4);
    }
    else
    {
      if ( v31 != 24 )
      {
LABEL_4:
        v10 = sub_1B73BE0(a1, (unsigned __int64)v9, v8, a3, a4, a6, a7);
        goto LABEL_5;
      }
      v10 = sub_1BBB800(a1, (__int64)v9, 1u, *(double *)a3.m128_u64, a4);
    }
LABEL_5:
    v14 = v10;
    if ( v10 == 1 )
      return 1;
    v39 = 0;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v39 = sub_1BA55C0(
              a1,
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
              0,
              a3,
              a4,
              v11,
              v12,
              v13);
      if ( v39 == 1 )
        return 1;
    }
    sub_15F3080((__int64)v43, *a1);
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
    v41 = v15;
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    *(_DWORD *)(*a1 + 224) = (unsigned int)ptr ^ v16 & (v41 ^ (unsigned int)ptr);
    v17 = *a1;
    *(_DWORD *)(v17 + 1952) = v41;
    *(_DWORD *)(v17 + 1956) = v16;
    v18 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v18 & 0x1FF) == 0x18 )
    {
      v19 = *(_QWORD *)(v18 + 16);
      v20 = *(_DWORD *)(v18 + 24);
      v21 = *a1;
      v45 = (__int64)v47;
      v46 = 0x800000000LL;
      v49 = v21;
      v50 = v19;
      v47[4] = 0;
      v51 = v20;
      ptr = nullptr;
      v48 = 0;
      sub_B85890(&v52, v19);
      v53 = 0;
      v54 = 0x101010000LL;
      sub_1A395A0((__int64)&ptr);
      if ( (unsigned __int8)sub_1B19E70(a1, v18, (*(_DWORD *)v18 & 0x100000) != 0, (__int64)&ptr) )
      {
        v22 = 1;
      }
      else
      {
        v42 = (*(_DWORD *)v18 & 0x100000) != 0;
        v30 = sub_EEB7E0(v18, v18, 0.0);
        v22 = sub_1AF0970(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v30,
                v42,
                (__int64)&v45,
                (__m128)0LL,
                a4,
                v14 & 0xFFFFFFFFFFFFFFFELL,
                v39 & 0xFFFFFFFFFFFFFFFELL);
      }
      sub_169D230((__int64)&ptr);
    }
    else
    {
      ptr = &v46;
      v45 = 0x100000000LL;
      if ( (*(_WORD *)v18 & 0x1FF) == 0x4F )
        v18 = sub_BFA3B0(v18);
      v32 = *(_QWORD *)(v18 + 16);
      v33 = sub_1B03C10((__int64)a1, v32);
      if ( v33 )
      {
        if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 35 > 3 )
        {
          v32 = v33 | 3;
          sub_1743080((__int64)&ptr, v33 | 3);
        }
        v34 = sub_EEB7E0(v18, v32, *(double *)a3.m128_u64);
        v22 = sub_1AF0970(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v34,
                0,
                (__int64)&ptr,
                a3,
                a4,
                v14 & 0xFFFFFFFFFFFFFFFELL,
                v39 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        v22 = 1;
      }
      if ( ptr != &v46 )
        free(ptr);
    }
    sub_15F30C0((__int64)v43);
    return v22;
  }
  v23 = sub_1B73BE0(a1, (unsigned __int64)v9, v8, a3, a4, a6, a7);
  if ( v23 == 1 )
    return 1;
  v25 = *a1;
  v26 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v27 = sub_EEC140(v23 & 0xFFFFFFFFFFFFFFFELL);
  v28 = sub_15F0EF0(v25, v27, 0, (__m128i)a3, *(double *)a4.m128_u64);
  v29 = *(_BYTE *)(a2 + 2) >> 3;
  ptr = &v46;
  v45 = 0x800000000LL;
  if ( (unsigned __int8)sub_1BA5320(
                          a1,
                          (unsigned __int64 *)(a2 + 8 * ((v29 & 1) + 1LL) + 40),
                          (unsigned int)(*(_DWORD *)(a2 + 16) - 1),
                          1,
                          (__int64)&ptr,
                          nullptr,
                          a3,
                          a4) )
  {
    v22 = 1;
  }
  else
  {
    v35 = (unsigned int)v45;
    v40 = (unsigned __int64 *)ptr;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v38 = sub_C94560(a2) >> 32;
      v37 = sub_1930830((__int64 *)*a1, 0, v26, v28, v40, v35, a3, a4, v38);
    }
    else
    {
      v36 = sub_C94560(a2) >> 32;
      v37 = sub_19303F0(*a1, 0, v26, v28, v40, v35, a3, a4, v36, 0);
    }
    v22 = v37;
  }
  if ( ptr != &v46 )
    free(ptr);
  return v22;
}
