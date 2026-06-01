__int64 __fastcall sub_994E90(_QWORD *a1, unsigned __int64 a2, __int32 *a3, unsigned __int64 a4)
{
  __int64 v7; // rdx
  __m128 *v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edx
  int v11; // edx
  int v12; // esi
  __int32 v13; // edx
  unsigned int v14; // edx
  __int32 v15; // edx
  __m128 **v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __m128 *v20; // [rsp+18h] [rbp-20h] BYREF

  v7 = a1[8];
  if ( v7 == a1[7] )
  {
    v18 = a1[3];
    v19 = a4;
    v8 = (__m128 *)sub_994A50((__int64 *)(v18 & 0xFFFFFFFFFFFFFFFELL), 56, 3u);
    a4 = v19;
  }
  else
  {
    v8 = *(__m128 **)(v7 - 8);
    a1[8] = v7 - 8;
  }
  v20 = v8;
  if ( a2 )
  {
    v9 = 0;
    v10 = *(_DWORD *)(a2 + 40) & 0xFFFFFFF;
    if ( !a4 )
      goto LABEL_6;
  }
  else
  {
    v10 = 0;
    if ( !a4 )
    {
      v11 = 1;
      goto LABEL_8;
    }
  }
  v9 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF;
LABEL_6:
  if ( v9 >= v10 )
    v11 = (v9 + 1) & 0xFFFFFFF;
  else
    v11 = (v10 + 1) & 0xFFFFFFF;
LABEL_8:
  v12 = v11;
  v13 = v8[2].m128_i32[2];
  v19 = a2;
  v8[1].m128_u64[0] = a4;
  v14 = v12 & 0xFFFFFFF | v13 & 0xF0000000;
  v8[1].m128_u64[1] = 0;
  v8[2].m128_i32[2] = v14;
  *v8 = _mm_loadh_ps((const double *)&v19);
  v8[2].m128_u64[0] = 0;
  v8[2].m128_i8[11] = HIBYTE(v14) & 0x8F | 0x10;
  v15 = *a3;
  v8[3].m128_u64[0] = 0;
  v8[2].m128_i32[3] = v15;
  if ( a2 )
    ++*(_DWORD *)(a2 + 52);
  if ( a4 )
    ++*(_DWORD *)(a4 + 52);
  v16 = (__m128 **)a1[5];
  if ( v16 == (__m128 **)a1[6] )
  {
    sub_9925E0((__int64)(a1 + 4), v16, (__int64 *)&v20);
    return (__int64)v20;
  }
  else
  {
    *v16 = v8;
    result = (__int64)v20;
    a1[5] = v16 + 1;
  }
  return result;
}

