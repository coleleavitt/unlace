__int64 __fastcall sub_5FA260(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rbp
  const __m128i *v5; // rcx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  char *v11; // rcx
  char v12; // dl
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 440);
  v2 = *(_QWORD *)(a1 + 448);
  v20 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = (const __m128i *)(v1 + 8 * v2 - 8);
  v6 = _mm_loadl_epi64(v5);
  v7 = _mm_unpacklo_epi64(v6, v6);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 112) = v6.m128i_i64[0];
    *(_QWORD *)(a1 + 448) = v2 - 1;
    v8 = *(_QWORD *)(v1 + 8 * (v2 - 1) - 8);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 448) = v2 - 2;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = v6.m128i_i64[0];
    v8 = v5->m128i_i64[0];
  }
  v9 = *(_QWORD *)(a1 + 176);
  v10 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 152) = v8;
  v11 = (char *)(v10 + v9 - 1);
  v12 = *v11;
  if ( !v9 )
  {
    *(_BYTE *)(a1 + 753) = v12;
    v13 = (unsigned __int8)*v11;
LABEL_5:
    *(_DWORD *)(a1 + 216) = v13;
    v14 = (unsigned __int8)*v11;
    goto LABEL_6;
  }
  v17 = v9 - 2;
  *(_QWORD *)(a1 + 176) = v9 - 1;
  v11 = (char *)(v10 + v9 - 2);
  *(_BYTE *)(a1 + 753) = v12;
  v13 = (unsigned __int8)*v11;
  if ( v9 == 1 )
    goto LABEL_5;
  *(_QWORD *)(a1 + 176) = v17;
  if ( v9 != 2 )
    v17 = v9 - 3;
  *(_DWORD *)(a1 + 216) = v13;
  v14 = *(unsigned __int8 *)(v10 + v9 - 3);
  *(_QWORD *)(a1 + 176) = v17;
LABEL_6:
  *(_DWORD *)(a1 + 220) = v14;
  *(__m128i *)(a1 + 120) = v7;
  v15 = *(_QWORD *)(v4 + 40);
  if ( (v15 & 0x1800000000LL) == 0x800000000LL )
    *(_QWORD *)(v4 + 40) = v15 | 0x800000;
  if ( (*(_BYTE *)(v4 + 80) & 1) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 186LL) & 0x3F) == 0xD )
    {
      if ( (unsigned __int8)sub_5EBD90((__int64 **)(v4 + 48), *(_QWORD *)(a1 + 248)) )
        *(_QWORD *)(v4 + 40) |= 0x400000uLL;
      if ( (getinf(57) & 0xF) == 6 )
        sub_5EB5B0(v4 + 48, *(_QWORD *)(a1 + 248));
    }
LABEL_10:
    sub_5E83D0((_QWORD *)a1);
    return 0;
  }
  ptr = nullptr;
  v19 = 0;
  if ( !(unsigned int)sub_5FA1B0(a1, (__int64)&ptr, v4, (__m128i)0LL, *(double *)v7.m128i_i64) )
  {
    sub_5EBB70((_QWORD *)a1, v4, (__int64)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    goto LABEL_10;
  }
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return 0xFFFFFFFFLL;
}
