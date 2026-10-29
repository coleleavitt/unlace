__int64 __fastcall sub_1C367D0(__m128 *a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rbp
  unsigned int v25; // eax
  char v26; // r12
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // [rsp-10h] [rbp-48h]
  __int64 v30; // [rsp-8h] [rbp-40h]
  void *v31; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+8h] [rbp-30h]
  char v33; // [rsp+Ch] [rbp-2Ch]

  result = a5;
  v6 = (__int64 *)(a5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (a5 & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v7 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFELL);
    if ( (unsigned __int8)sub_1E534E0(a1, v6, 0) )
      return 1;
    v11 = a1[2].m128_u32[2];
    if ( !(_DWORD)v11 )
      BUG();
    v12 = *(_QWORD *)(a1[2].m128_u64[0] + 8 * v11 - 8);
    v13 = *(unsigned int *)(v12 + 64);
    if ( (_DWORD)v13 )
    {
      v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 56) + 8 * v13 - 8) & 0xFFFFFFFFFFFFFFF8LL);
      v15 = (unsigned int)*v14;
      LOWORD(v15) = (unsigned __int16)*v14 >> 10;
      v16 = v14[((*v14 & 0x200) != 0) + 3 + ((*v14 & 0x400) != 0)];
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
          return (__int64)v6;
        v18 = *(_DWORD *)v6 >> 14;
        if ( (v18 & 4) != 0 )
          return (__int64)v6;
        v19 = a1[14].m128_i64[1];
        if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
        {
          v32 = 1;
          v31 = nullptr;
          v33 = 0;
          v6 = (__int64 *)sub_1C0AEA0(a1, v6, v17, (__int64)&v31, 0, a2, a3);
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          return (__int64)v6;
        }
        if ( (v18 & 8) == 0 )
        {
          v28 = sub_1915F20((__int64 *)a1, (unsigned __int64)v6, 0, 1, a2, a3);
          if ( v28 == 1 )
            return 1;
          v7 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
        }
        v20 = sub_19146F0((__int64)a1, v7, v19, v15, v9, v10, a2, a3);
        if ( v20 != 1 )
        {
          v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
          v22 = sub_160A600(
                  (__int64)a1,
                  v20 & 0xFFFFFFFFFFFFFFFELL,
                  v17,
                  0x1Bu,
                  0,
                  0,
                  *(double *)a2.m128_u64,
                  *(double *)a3.m128_u64,
                  0);
          if ( v22 != 1 )
          {
            v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
            v25 = sub_C00A40(v22 & 0xFFFFFFFFFFFFFFFELL, v21, v29, v30, v23);
            return sub_19B4A30((__int64)a1, v24, v25, 0, 0, 0, a2, a3);
          }
        }
        return 1;
      }
      return 1;
    }
    v26 = *(_BYTE *)(a1[14].m128_u64[1] + 1);
    v27 = sub_C00A40((unsigned __int64)v6, (__int64)v6, v12, v8, v9);
    return sub_19B4A30((__int64)a1, (unsigned __int64)v6, v27, 0, (v26 & 0x10) != 0, 0, a2, a3);
  }
  return result;
}
