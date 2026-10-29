__int64 __fastcall sub_B1D870(int *a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, unsigned int *a5, int a6)
{
  __int64 result; // rax
  unsigned int *v11; // r15
  unsigned int *v12; // r14
  unsigned int *v13; // r12
  unsigned int v14; // edx
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  unsigned int *v21; // r14
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int *v25; // r12
  unsigned int v26; // ebx
  unsigned int v27; // [rsp+8h] [rbp-80h]
  int v28; // [rsp+8h] [rbp-80h]
  unsigned int v29; // [rsp+8h] [rbp-80h]
  unsigned int v30; // [rsp+14h] [rbp-74h]
  int v31; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned int *v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v33; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v34; // [rsp+40h] [rbp-48h] BYREF
  unsigned int *v35[8]; // [rsp+48h] [rbp-40h] BYREF

  result = (unsigned int)dword_1C7ED20;
  if ( a4 < a3 )
    return result;
  result = (unsigned int)dword_1C7ED24;
  if ( !a3 )
    return result;
  if ( a3 == 1 )
    return sub_B160F0((__int64)a1, a4, a5);
  if ( a4 < 2 * a3 )
  {
    v30 = a4 - a3;
    if ( !a4 )
      return sub_B1D430(a1, a2, -a3, 0, nullptr, a6);
    v11 = &a5[a4];
    v12 = a5;
    v13 = nullptr;
    do
    {
      v14 = *v12;
      v15 = dword_1C7ED20;
      if ( *v12 != dword_1C7ED24 )
      {
        v15 = dword_1C7ED24;
        if ( v14 != dword_1C7ED20 )
          v15 = v14 ^ 1;
      }
      v31 = v15;
      v32 = v13;
      sub_B0E290(&v32, (unsigned int *)&v31);
      ++v12;
      v13 = v32;
    }
    while ( v11 != v12 );
    if ( !v32 )
      return sub_B1D430(a1, a2, v30, 0, nullptr, v16);
    v27 = sub_B1D430(a1, a2, v30, *(v32 - 1), v32, v16);
    sub_186B220(v13 - 2);
    return v27;
  }
  v17 = *a1;
  if ( *a1 == 4 )
    return sub_B1A1A0((__int64)a1, a2 == 0 ? 1 : 3, a3, a4, a5);
  if ( v17 <= 4 )
  {
    if ( (unsigned int)v17 <= 3 )
    {
      v35[0] = nullptr;
      a1[4] = a2 == 0 ? 1 : 3;
      sub_B1D280((__int64)a1, a3, a4, a5, v35, a6);
      result = v35[0][a3 - 1];
      if ( v35[0] )
      {
        v29 = v35[0][a3 - 1];
        sub_186B220(v35[0] - 2);
        return v29;
      }
      return result;
    }
LABEL_33:
    sub_1872CE0("");
    sub_1873130(114, 262);
  }
  if ( v17 != 5 )
    goto LABEL_33;
  _BitScanReverse((unsigned int *)&v18, a3);
  v19 = dword_1C7ED24;
  if ( (a3 & 1) == 0 )
    v19 = dword_1C7ED20;
  v20 = v18 + 1;
  v21 = nullptr;
  v22 = 0;
LABEL_21:
  v28 = v19;
  v34 = v21;
  sub_692C60(&v34);
  v21 = v34;
  v19 = v28;
  v23 = *(v34 - 1);
  while ( 1 )
  {
    v21[v23] = v19;
    ++v22;
    v23 = *(v21 - 1) + 1;
    *(v21 - 1) = v23;
    if ( v22 == v20 )
      break;
    v19 = dword_1C7ED24;
    if ( (a3 & (1 << v22)) == 0 )
      v19 = dword_1C7ED20;
    if ( *(v21 - 2) == (_DWORD)v23 )
      goto LABEL_21;
  }
  v33 = nullptr;
  v24 = sub_B1B990((__int64)a1, v22, a4, a5, &v33);
  v34 = v21;
  v25 = v33;
  v35[0] = (unsigned int *)_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(v24),
                             _mm_cvtsi32_si128(sub_B1ACF0((__int64)a1, (__int64 *)&v33, &v34))).m128i_u64[0];
  v26 = sub_B0BAF0((__int64)a1, v35);
  sub_186B220(v21 - 2);
  if ( v25 )
    sub_186B220(v25 - 2);
  return v26;
}

