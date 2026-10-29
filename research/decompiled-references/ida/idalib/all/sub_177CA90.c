__int64 __fastcall sub_177CA90(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128 v9; // xmm1
  int v10; // eax
  __int64 v11; // r14
  unsigned int *v13; // rax
  int v14; // esi
  __int128 v15; // xmm4
  int v16; // edx
  __int64 v17; // rdi
  int v18; // ebx
  __int16 v19; // ax
  __m128 v20; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  __m128i v23; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  __int128 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+70h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-48h]
  __int128 v29; // [rsp+90h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v4 = sub_176EE90(a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
    v6 = v5;
    if ( !v4 )
      return 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 32);
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v24 = v7;
  if ( v8 )
  {
    sub_176AF20(&v21, a1, &v23, a3);
    v8 = v21.m128i_i64[0];
    v23 = _mm_loadu_si128(&v21);
    v24 = v22;
    if ( !v21.m128i_i64[0] )
      return 1;
  }
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 16) != v4
    || *(_QWORD *)(a2 + 24) != v6
    || (v11 = a2, v8 != *(_QWORD *)(a2 + 32)) )
  {
    v20.m128_u64[0] = v6;
    v27 = 0;
    *(_OWORD *)ptr = 0;
    v9 = _mm_loadh_ps((const double *)v20.m128_u64);
    v29 = 0;
    v20 = v9;
    sub_15AB8B0((__int64)&v27, v4, v6);
    v10 = sub_19A47C0(*a1, 0, &v27, &v23);
    if ( v10 == 1 )
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    else
    {
      if ( v10 > 1 )
      {
        if ( v10 == 2 )
        {
          v13 = sub_177C940(a1, *(unsigned int **)(a2 + 56), 0.0);
          if ( v13 == (unsigned int *)((char *)&dword_0 + 1) )
          {
LABEL_17:
            v11 = 1;
            if ( !HIDWORD(ptr[1]) )
              return v11;
            goto LABEL_18;
          }
          v14 = *(_DWORD *)(a2 + 8);
          v15 = (__int128)_mm_load_si128(&v23);
          v16 = *(unsigned __int8 *)(a2 + 12);
          v17 = *a1;
          v26 = v24;
          v25 = v15;
          v11 = sub_1C37830(v17, v14, v16, v20.m128_i32[0], v20.m128_i32[2], (unsigned int)v13 & 0xFFFFFFFE, v15, v24);
LABEL_12:
          if ( !HIDWORD(ptr[1]) )
            return v11;
LABEL_18:
          free(ptr[0]);
          return v11;
        }
        v11 = 1;
        if ( v10 == 3 )
          goto LABEL_12;
LABEL_16:
        v11 = (__int64)sub_177C940(a1, *(unsigned int **)(a2 + 56), 0.0);
        if ( v11 == 1 )
          goto LABEL_17;
        goto LABEL_12;
      }
      if ( v10 || *(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    v18 = *(_DWORD *)(a2 + 8);
    v11 = sub_EEE9A0(8, *(_QWORD **)(*a1 + 248), 8u);
    v19 = *(_WORD *)v11 & 0xFE00;
    LOBYTE(v19) = -18;
    *(_WORD *)v11 = v19;
    if ( unk_2CD7484 )
      sub_EE9B50(238);
    *(_BYTE *)(v11 + 1) &= ~2u;
    *(_DWORD *)(v11 + 4) = v18;
    goto LABEL_12;
  }
  return v11;
}
