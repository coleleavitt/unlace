__int64 __fastcall sub_B1D430(int *a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, unsigned int *a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  unsigned int *v10; // r12
  unsigned int *v11; // rbx
  unsigned int *v12; // r15
  unsigned int v13; // edx
  int v14; // eax
  int v15; // r9d
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r13d
  unsigned int *v22; // rbx
  unsigned int v23; // eax
  int v24; // r12d
  int v25; // eax
  unsigned int v26; // eax
  unsigned int *v27; // r15
  int v28; // eax
  int v29; // edx
  unsigned int v30; // [rsp+18h] [rbp-70h]
  unsigned int v31; // [rsp+18h] [rbp-70h]
  int v32; // [rsp+24h] [rbp-64h] BYREF
  unsigned int *v33; // [rsp+28h] [rbp-60h] BYREF
  unsigned int *v34; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v35; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v36; // [rsp+40h] [rbp-48h] BYREF
  unsigned int *v37[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  v7 = dword_1C7ED24;
  if ( a3 >= a4 )
    return v7;
  if ( a4 < 2 * a3 )
  {
    v10 = a5;
    v11 = nullptr;
    v30 = a4 - a3;
    v12 = &a5[a4];
    do
    {
      v13 = *v10;
      v14 = dword_1C7ED20;
      if ( *v10 != dword_1C7ED24 )
      {
        v14 = dword_1C7ED24;
        if ( v13 != dword_1C7ED20 )
          v14 = v13 ^ 1;
      }
      v32 = v14;
      v33 = v11;
      sub_B0E290(&v33, (unsigned int *)&v32);
      ++v10;
      v11 = v33;
    }
    while ( v12 != v10 );
    v7 = sub_B1D870((_DWORD)a1, a2, v30, a4, (_DWORD)v33, v15);
    if ( v11 )
      sub_186B220(v11 - 2);
    return v7;
  }
  v17 = *a1;
  if ( a3 == 1 )
  {
    if ( v17 == 3 )
      return (unsigned int)sub_B16870((__int64)a1, a2, 0, a4, a5);
    if ( v17 > 3 )
    {
      if ( (unsigned int)(v17 - 4) > 1 )
        goto LABEL_45;
    }
    else
    {
      if ( v17 == 2 )
      {
        v37[0] = nullptr;
        v20 = sub_B196D0((__int64)a1, a2, a4, a5, v37);
        goto LABEL_24;
      }
      if ( v17 < 0 )
      {
LABEL_45:
        sub_1872CE0("");
        sub_1873130(114, 292);
      }
    }
    v37[0] = nullptr;
    v20 = sub_B17FC0((__int64)a1, a2, a4, a5, v37, 0);
LABEL_24:
    v7 = v20;
    if ( v37[0] )
      sub_186B220(v37[0] - 2);
    return v7;
  }
  if ( v17 == 4 )
    return (unsigned int)sub_B1A1A0((__int64)a1, 4 * (unsigned int)a2, a3, a4, a5);
  if ( v17 <= 4 )
  {
    if ( (unsigned int)v17 <= 3 )
    {
      v34 = nullptr;
      a1[4] = 4 * a2;
      sub_B1D280((__int64)a1, a3 + 1, a4, a5, &v34, a6);
      v18 = dword_1C7ED20;
      v19 = v34[v6];
      if ( dword_1C7ED24 != v19 )
      {
        v18 = dword_1C7ED24;
        if ( v19 != dword_1C7ED20 )
          v18 = v19 ^ 1;
      }
      v7 = v18;
      if ( v34 )
        sub_186B220(v34 - 2);
      return v7;
    }
LABEL_41:
    sub_1872CE0("");
    sub_1873130(114, 312);
  }
  if ( v17 != 5 )
    goto LABEL_41;
  v21 = 0;
  v22 = nullptr;
  v31 = a3 + 1;
  _BitScanReverse(&v23, a3 + 1);
  v24 = v23 + 1;
  do
  {
    v25 = dword_1C7ED24;
    v36 = v22;
    if ( ((1 << v21) & v31) == 0 )
      v25 = dword_1C7ED20;
    LODWORD(v37[0]) = v25;
    sub_B0E290(&v36, (unsigned int *)v37);
    ++v21;
    v22 = v36;
  }
  while ( v21 != v24 );
  v35 = nullptr;
  v26 = sub_B1B990((__int64)a1, v21, a4, a5, &v35);
  v27 = v35;
  v37[0] = (unsigned int *)_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(v26),
                             _mm_cvtsi32_si128(sub_B1ACF0((__int64)a1, (__int64 *)&v35, &v36))).m128i_u64[0];
  v28 = sub_B0BAF0((__int64)a1, v37);
  v29 = dword_1C7ED24;
  v7 = dword_1C7ED20;
  if ( v28 != dword_1C7ED24 )
  {
    if ( v28 != dword_1C7ED20 )
      v29 = v28 ^ 1;
    v7 = v29;
  }
  if ( v22 )
    sub_186B220(v22 - 2);
  if ( v27 )
    sub_186B220(v27 - 2);
  return v7;
}

