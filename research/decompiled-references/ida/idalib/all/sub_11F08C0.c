void __fastcall sub_11F08C0(__int64 a1, int a2, unsigned int *a3, __int64 a4)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // rax
  __m128 v17; // kr00_16
  int v18; // edx
  __m128i v19; // [rsp+20h] [rbp-78h] BYREF
  char v20; // [rsp+30h] [rbp-68h]
  __m128 v21; // [rsp+40h] [rbp-58h] BYREF
  __int32 v22; // [rsp+50h] [rbp-48h]

  if ( a2 == 31 )
  {
    *(_DWORD *)(a1 + 8) = 1;
    return;
  }
  if ( a2 == 32 )
  {
    *(_QWORD *)(a1 + 8) = 0xA00000002LL;
    v6 = *(_BYTE *)(a1 + 44) == 0;
    *(_QWORD *)(a1 + 16) = 2147483663LL;
    *(_DWORD *)(a1 + 24) = 0;
    if ( v6 || !*(_BYTE *)(a4 + 64) )
    {
LABEL_12:
      if ( *(_BYTE *)(a1 + 184) )
      {
        v16.m128_u64[0] = sub_22B7B00(a1 + 128);
        v17 = v16;
        v21 = v16;
        if ( v16.m128_i32[0] )
        {
          if ( (unsigned __int8)sub_A09E20((unsigned int *)&v21, (unsigned int *)(a1 + 12)) )
            *(__m128 *)(a1 + 12) = v17;
        }
      }
      return;
    }
    v7 = *(unsigned int *)(a4 + 56);
    v8 = a4 + 40;
    v9 = *(_QWORD *)(a4 + 40);
    if ( (_DWORD)v7 )
    {
      v10 = (v7 - 1) & 0xB9A05EBE;
      v11 = (__int64 *)(v9 + 104LL * v10);
      if ( *v11 == 0xED00000171LL )
      {
LABEL_7:
        sub_11EF550(&v21, v11, (__int64 *)(v9 + 104 * v7), v8, 1);
        v12 = v21.m128_u64[0];
LABEL_8:
        v13 = (__int64 *)(*(_QWORD *)(a4 + 40) + 104LL * *(unsigned int *)(a4 + 56));
        sub_11EF550(&v21, v13, v13, v8, 1);
        if ( v21.m128_u64[0] != v12 )
        {
          if ( *(_BYTE *)(v12 + 96) )
          {
            LOBYTE(v22) = 0;
            sub_FC0010(
              &v19,
              v12 + 8,
              a3,
              (const __m128i *)(a1 + 12),
              v14,
              v15,
              (__int128)_mm_load_si128((const __m128i *)&v21),
              v22);
            if ( v20 )
              *(__m128i *)(a1 + 12) = _mm_load_si128(&v19);
          }
        }
        goto LABEL_12;
      }
      if ( *v11 != -1 )
      {
        v18 = 1;
        do
        {
          v10 = (v7 - 1) & (v18 + v10);
          v11 = (__int64 *)(v9 + 104LL * v10);
          if ( *v11 == 0xED00000171LL )
            goto LABEL_7;
          ++v18;
        }
        while ( *v11 != -1 );
      }
    }
    sub_11EF550(&v21, (__int64 *)(v9 + 104 * v7), (__int64 *)(v9 + 104 * v7), v8, 1);
    v12 = v21.m128_u64[0];
    goto LABEL_8;
  }
}
