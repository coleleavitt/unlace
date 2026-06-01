char __fastcall sub_210B0C0(__int64 a1, void *a2, size_t a3, unsigned int a4, int a5, unsigned int a6)
{
  char result; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbp
  int v13; // eax
  int v14; // esi
  __int64 v15; // rcx
  __m128i v16; // xmm0
  int v17; // eax
  __int64 *v18; // r13
  char v19; // al
  __int64 v20; // rdx
  __m128i *v21; // rcx
  int v22; // eax
  int v23; // esi
  __int64 v24; // r8
  bool v25; // zf
  unsigned int v26; // [rsp+Ch] [rbp-9Ch]
  unsigned int v27; // [rsp+Ch] [rbp-9Ch]
  __m128i v28; // [rsp+10h] [rbp-98h] BYREF
  __int64 v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+28h] [rbp-80h] BYREF
  __int64 v31[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  __m128i v33; // [rsp+58h] [rbp-50h] BYREF
  int v34; // [rsp+68h] [rbp-40h]

  v28.m128i_i64[0] = (__int64)a2;
  v28.m128i_i64[1] = a3;
  if ( a5 == -1 )
  {
    v27 = a6;
    v18 = (__int64 *)(a1 + 2408);
    v19 = sub_10E92B0((__int64 *)(a1 + 2408), &v28, v31);
    a6 = v27;
    if ( v19 )
      goto LABEL_3;
    v20 = *(unsigned int *)(a1 + 2424);
    v21 = (__m128i *)v31[0];
    v22 = *(_DWORD *)(a1 + 2416) + 1;
    v23 = 2 * v20;
    v24 = (unsigned int)(4 * v22);
    v32 = v31[0];
    if ( (unsigned int)v24 < 3 * (int)v20 )
    {
      if ( (int)v20 - *(_DWORD *)(a1 + 2420) - v22 > (unsigned int)v20 >> 3 )
      {
LABEL_15:
        v25 = v21->m128i_i64[0] == -1;
        *(_DWORD *)(a1 + 2416) = v22;
        if ( !v25 )
          --*(_DWORD *)(a1 + 2420);
        *v21 = _mm_load_si128(&v28);
        goto LABEL_3;
      }
      v23 = v20;
    }
    sub_10FCC90((__int64)v18, v23, v20, v31[0], v24, v27);
    sub_10E92B0(v18, &v28, &v32);
    v21 = (__m128i *)v32;
    a6 = v27;
    v22 = *(_DWORD *)(a1 + 2416) + 1;
    goto LABEL_15;
  }
  if ( (a4 & 0x10) == 0 )
  {
    v26 = a6;
    result = sub_2100550(a1, a2, a3);
    if ( !result )
      return result;
    a6 = v26;
  }
LABEL_3:
  v32 = __PAIR64__(a4, a6);
  v33 = v28;
  v34 = a5;
  result = sub_2106050((__int64 *)(a1 + 2384), (__int64)&v32, &v29);
  if ( result )
    return result;
  v11 = *(unsigned int *)(a1 + 2400);
  v12 = v29;
  v13 = *(_DWORD *)(a1 + 2392) + 1;
  v14 = 2 * v11;
  v15 = (unsigned int)(3 * v11);
  v30 = v29;
  if ( 4 * v13 >= (unsigned int)v15 )
    goto LABEL_19;
  v15 = (unsigned int)(v11 - *(_DWORD *)(a1 + 2396) - v13);
  if ( (unsigned int)v15 <= (unsigned int)v11 >> 3 )
  {
    v14 = v11;
LABEL_19:
    sub_210AEE0(a1 + 2384, v14, v11, v15, v9, v10);
    sub_2106050((__int64 *)(a1 + 2384), (__int64)&v32, &v30);
    v12 = v30;
    v13 = *(_DWORD *)(a1 + 2392) + 1;
  }
  *(_DWORD *)(a1 + 2392) = v13;
  v31[0] = -1;
  v31[1] = -1;
  v31[2] = 0;
  if ( !sub_21001D0(v12, (__int64)v31) )
    --*(_DWORD *)(a1 + 2396);
  v16 = _mm_loadu_si128(&v33);
  *(_DWORD *)(v12 + 4) = HIDWORD(v32);
  v17 = v32;
  *(__m128i *)(v12 + 8) = v16;
  *(_DWORD *)v12 = v17;
  result = v34;
  *(_DWORD *)(v12 + 24) = v34;
  return result;
}
