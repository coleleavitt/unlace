__int64 __fastcall sub_1960BA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int8 v5; // dl
  int *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  int v12; // ecx
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  int v24; // eax
  unsigned int v25; // r14d
  char v26; // cl
  unsigned int v27; // eax
  __int16 v28; // ax
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r15
  int v33; // rax^4
  __int64 v34; // rax
  unsigned int v35; // rax^4
  __int64 v36; // [rsp+0h] [rbp-128h]
  unsigned __int64 *v37; // [rsp+0h] [rbp-128h]
  int v38; // [rsp+Ch] [rbp-11Ch]
  bool v39; // [rsp+Ch] [rbp-11Ch]
  _BYTE v40[32]; // [rsp+20h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v44[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-80h]
  __int64 v46; // [rsp+B0h] [rbp-78h]
  __int64 v47; // [rsp+B8h] [rbp-70h]
  int v48; // [rsp+C0h] [rbp-68h]
  __int64 v49; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-58h]
  __int64 v51; // [rsp+E0h] [rbp-48h]

  v5 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  v6 = *(int **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned int)v5 - 42 > 1 )
  {
    if ( *(_DWORD *)(a2 + 16) != 1 || v5 != 11 )
      goto LABEL_4;
    v28 = *(_WORD *)v6 & 0x1FF;
    if ( v28 == 69 )
    {
      v7 = sub_194CB40(a1, v6, 1u, nullptr, a3, a4);
    }
    else
    {
      if ( v28 != 24 )
      {
LABEL_4:
        v7 = sub_1944E10(a1, (unsigned __int16 *)v6, a3, a4);
        goto LABEL_5;
      }
      v7 = sub_194CDB0(a1, (__int64)v6, 1u, *(double *)a3.m128_u64, a4);
    }
LABEL_5:
    v11 = v7;
    if ( v7 == 1 )
      return 1;
    v36 = 0;
    if ( *(_DWORD *)(a2 + 16) == 2 )
    {
      v36 = sub_195EBE0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40), 0, a3, a4, v8, v9, v10);
      if ( v36 == 1 )
        return 1;
    }
    sub_15F3080((__int64)v40, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v12 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v13 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    }
    else
    {
      v13 = 0;
      v12 = 0;
    }
    v38 = v12;
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    *(_DWORD *)(*a1 + 224) = (unsigned int)ptr ^ v13 & (v38 ^ (unsigned int)ptr);
    v14 = *a1;
    *(_DWORD *)(v14 + 1952) = v38;
    *(_DWORD *)(v14 + 1956) = v13;
    v15 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v15 & 0x1FF) == 0x18 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      v17 = *(_DWORD *)(v15 + 24);
      v18 = *a1;
      v42 = (__int64)v44;
      v43 = 0x800000000LL;
      v46 = v18;
      v47 = v16;
      v44[4] = 0;
      v48 = v17;
      ptr = nullptr;
      v45 = 0;
      sub_B85890(&v49, v16);
      v50 = 0;
      v51 = 0x101010000LL;
      sub_1A395A0(&ptr);
      if ( (unsigned __int8)sub_18D87B0(a1, v15, (*(_DWORD *)v15 & 0x100000) != 0, (__int64)&ptr) )
      {
        v19 = 1;
      }
      else
      {
        v39 = (*(_DWORD *)v15 & 0x100000) != 0;
        v27 = sub_EEB7E0(v15, v15, 0.0);
        v19 = sub_19313C0(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v27,
                v39,
                (__int64)&v42,
                (__m128)0LL,
                a4,
                v11 & 0xFFFFFFFFFFFFFFFELL,
                v36 & 0xFFFFFFFFFFFFFFFELL);
      }
      sub_169D230((__int64)&ptr);
    }
    else
    {
      ptr = &v43;
      v42 = 0x100000000LL;
      if ( (*(_WORD *)v15 & 0x1FF) == 0x4F )
        v15 = sub_BFA3B0(v15);
      v29 = *(_QWORD *)(v15 + 16);
      v30 = sub_18CBA40((__int64)a1, v29);
      if ( v30 )
      {
        if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 35 > 3 )
        {
          v29 = v30 | 3;
          sub_1743080((__int64)&ptr, v30 | 3);
        }
        v31 = sub_EEB7E0(v15, v29, *(double *)a3.m128_u64);
        v19 = sub_19313C0(
                a1,
                (*(_BYTE *)(a2 + 3) >> 1) & 0x3F,
                *(_DWORD *)(a2 + 20),
                v31,
                0,
                (__int64)&ptr,
                a3,
                a4,
                v11 & 0xFFFFFFFFFFFFFFFELL,
                v36 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        v19 = 1;
      }
      if ( ptr != &v43 )
        free(ptr);
    }
    sub_15F30C0((__int64)v40);
    return v19;
  }
  v20 = sub_1944E10(a1, (unsigned __int16 *)v6, a3, a4);
  if ( v20 == 1 )
    return 1;
  v22 = *a1;
  v23 = v20 & 0xFFFFFFFFFFFFFFFELL;
  v24 = sub_EEC140(v20 & 0xFFFFFFFFFFFFFFFELL);
  v25 = sub_15F0EF0(v22, v24, 0, (__m128i)a3, *(double *)a4.m128_u64);
  v26 = *(_BYTE *)(a2 + 2) >> 3;
  ptr = &v43;
  v42 = 0x800000000LL;
  if ( (unsigned __int8)sub_195E940(
                          a1,
                          (unsigned __int16 **)(a2 + 8 * ((v26 & 1) + 1LL) + 40),
                          *(_DWORD *)(a2 + 16) - 1,
                          1,
                          (__int64)&ptr,
                          nullptr,
                          a3,
                          a4) )
  {
    v19 = 1;
  }
  else
  {
    v32 = (unsigned int)v42;
    v37 = (unsigned __int64 *)ptr;
    if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0x2B )
    {
      v35 = sub_C94560(a2) >> 32;
      v34 = sub_1930830((__int64 *)*a1, 0, v23, v25, v37, v32, a3, a4, v35);
    }
    else
    {
      v33 = sub_C94560(a2) >> 32;
      v34 = sub_19303F0(*a1, 0, v23, v25, v37, v32, a3, a4, v33, 0);
    }
    v19 = v34;
  }
  if ( ptr != &v43 )
    free(ptr);
  return v19;
}
