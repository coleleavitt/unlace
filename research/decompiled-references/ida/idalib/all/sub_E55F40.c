void __fastcall sub_E55F40(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  void *v12; // rdi
  const void *v13; // rsi
  size_t v14; // r12
  __int64 v15; // [rsp+8h] [rbp-140h] BYREF
  __m128 v16; // [rsp+10h] [rbp-138h] BYREF
  __int16 v17; // [rsp+20h] [rbp-128h]
  char v18; // [rsp+22h] [rbp-126h]
  __int64 v19; // [rsp+28h] [rbp-120h]
  __int128 v20; // [rsp+30h] [rbp-118h]
  void **v21; // [rsp+40h] [rbp-108h] BYREF
  void *v22; // [rsp+48h] [rbp-100h] BYREF
  __int64 v23; // [rsp+50h] [rbp-F8h]
  _BYTE v24[64]; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+98h] [rbp-B0h]
  __int64 v26; // [rsp+A0h] [rbp-A8h]
  _BYTE v27[64]; // [rsp+A8h] [rbp-A0h] BYREF
  void ***v28; // [rsp+E8h] [rbp-60h]
  __int64 *v29; // [rsp+F0h] [rbp-58h]
  __int64 v30; // [rsp+F8h] [rbp-50h]
  __int64 v31; // [rsp+100h] [rbp-48h]
  unsigned int v32; // [rsp+108h] [rbp-40h]
  __int64 v33; // [rsp+110h] [rbp-38h]
  __int64 v34; // [rsp+118h] [rbp-30h]
  unsigned int v35; // [rsp+120h] [rbp-28h]

  v15 = a3;
  v22 = v24;
  v23 = 0x400000000LL;
  v26 = 0x400000000LL;
  v5 = _mm_loadh_ps((const double *)&v15);
  v17 = 0;
  v28 = &v21;
  ptr = v27;
  v6 = *(_QWORD *)(a3 + 32);
  v21 = &v22;
  v7 = *(_QWORD *)(a3 + 24);
  v16 = v5;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( (unsigned __int64)(v7 - v6) > 6 )
  {
    *(_DWORD *)v6 = 1952735071;
    *(_WORD *)(v6 + 4) = 29295;
    *(_BYTE *)(v6 + 6) = 95;
    *(_QWORD *)(a3 + 32) += 7LL;
  }
  else
  {
    sub_227BF10(a3, "__dtor_", 7);
  }
  if ( (unsigned __int8)sub_E6F1E0(a1, a2) )
  {
    sub_E52200((__int64)&v16, a2, 0, (__m128)0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( (v9 & 7) == 0 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 )
      {
        v11 = v16.m128_u64[1];
        v12 = *(void **)(v16.m128_u64[1] + 32);
        v13 = (const void *)(*(_QWORD *)(v10 + 16) + 16LL);
        v14 = **(unsigned int **)(v10 + 16);
        if ( *(_QWORD *)(v16.m128_u64[1] + 24) - (_QWORD)v12 >= v14 )
        {
          if ( **(_DWORD **)(v10 + 16) )
          {
            memcpy(v12, v13, v14);
            *(_QWORD *)(v11 + 32) += v14;
          }
        }
        else
        {
          sub_227BF10(v16.m128_u64[1], v13, v14);
        }
      }
    }
  }
  operator delete(v33, 24LL * v35, 8);
  operator delete(v30, 16LL * v32, 8);
  v8 = v29;
  if ( v29 )
  {
    sub_E3ABF0(
      v29,
      (char *)(*v29 + 16LL * *((unsigned int *)v29 + 2)),
      (char *)v22,
      (char *)v22 + 16 * (unsigned int)v23);
    sub_E3ABF0(
      v29 + 10,
      (char *)(v29[10] + 16LL * *((unsigned int *)v29 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v26);
    v8 = v29;
  }
  *v28 = (void **)v8;
  if ( ptr != v27 )
    free(ptr);
  if ( v22 != v24 )
    free(v22);
}
