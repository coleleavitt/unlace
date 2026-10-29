__int64 __fastcall sub_22C3D90(__int64 a1, __int64 *a2, const double *a3)
{
  unsigned int v5; // edx
  __int64 *v6; // rsi
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+18h] [rbp-40h] BYREF
  __m128 v19[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_22C0A70((__int64 *)a1, a2, &v18) )
  {
    sub_22C21F0(v19, v18, (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
    return *(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(v19[0].m128_u64[0] + 8);
  }
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v18;
  v7 = *(_DWORD *)(a1 + 8) + 1;
  v19[0].m128_u64[0] = (unsigned __int64)v18;
  if ( 4 * v7 >= 3 * v5 )
  {
    sub_22C3C10(a1, 2 * v5);
LABEL_11:
    sub_22C0A70((__int64 *)a1, a2, v19);
    v6 = (__int64 *)v19[0].m128_u64[0];
    v7 = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_4;
  }
  if ( v5 - *(_DWORD *)(a1 + 12) - v7 <= v5 >> 3 )
  {
    sub_22C3C10(a1, v5);
    goto LABEL_11;
  }
LABEL_4:
  v8 = *v6 == -4096;
  *(_DWORD *)(a1 + 8) = v7;
  if ( !v8 )
    --*(_DWORD *)(a1 + 12);
  v9 = *a2;
  *((_DWORD *)v6 + 2) = 0;
  v10 = *(unsigned int *)(a1 + 16);
  *v6 = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 16 * v10);
  v18 = v6;
  sub_22C21F0(v19, v6, v11, a1, 1);
  *(_DWORD *)(v19[0].m128_u64[0] + 8) = *(_DWORD *)(a1 + 32);
  v12 = *(unsigned int *)(a1 + 32);
  v13 = *(unsigned int *)(a1 + 36);
  v14 = (__m128i)_mm_loadh_ps(a3);
  if ( v12 >= v13 )
  {
    if ( v13 < v12 + 1 )
    {
      v17 = v14;
      sub_2237220(a1 + 24, (const void *)(a1 + 40), v12 + 1, 16);
      v12 = *(unsigned int *)(a1 + 32);
      v14 = _mm_load_si128(&v17);
    }
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 16 * v12) = v14;
    v15 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v15;
  }
  else
  {
    v15 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 16 * v12) = v14;
    *(_DWORD *)(a1 + 32) = v15;
  }
  return *(_QWORD *)(a1 + 24) + 16 * v15 - 16;
}
