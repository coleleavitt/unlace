__m128i *__fastcall sub_205B730(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // r8d
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // r10d
  _QWORD *v15; // r11
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __m128i v20; // xmm0
  _QWORD *v22; // r13
  __m128i si128; // xmm1
  __int64 v24; // [rsp+8h] [rbp-40h]
  __m128 v25[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (_QWORD *)a3;
  v9 = *(unsigned int *)(a2 + 16);
  if ( !(_DWORD)v9 )
  {
    v25[0].m128_u64[0] = 0;
LABEL_23:
    v24 = a4;
    sub_205B4C0(a2, 2 * v9, a3, a4, a5, a6);
LABEL_24:
    sub_2053FC0((__int64 *)a2, v24, v25);
    v10 = *(_QWORD *)a2;
    v9 = *(unsigned int *)(a2 + 16);
    v12 = (_QWORD *)v25[0].m128_u64[0];
    LODWORD(a3) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_12;
  }
  v10 = *(_QWORD *)a2;
  v11 = (v9 - 1) & *(_DWORD *)a4;
  v12 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v11);
  v13 = *v12;
  if ( *v12 != -4096 )
  {
    v14 = 1;
    v15 = nullptr;
    while ( 1 )
    {
      if ( v13 == -8192 )
      {
        if ( !v15 )
          v15 = v12;
      }
      else if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(v13 + 8) && *(_QWORD *)(a4 + 24) == 4 )
      {
        v22 = *(_QWORD **)(a4 + 16);
        if ( *(_QWORD *)(v13 - 128) == *v22
          && v22[1] == *(_QWORD *)(v13 - 96)
          && v22[2] == *(_QWORD *)(v13 - 64)
          && v22[3] == *(_QWORD *)(v13 - 32) )
        {
          sub_2059BE0(v25, v12, (_QWORD *)(v10 + 8 * v9), a2, 1);
          si128 = _mm_load_si128((const __m128i *)v25);
          a1[1].m128i_i8[0] = 0;
          *a1 = si128;
          return a1;
        }
      }
      v11 = (v9 - 1) & (v14 + v11);
      v12 = (_QWORD *)(v10 + 8LL * v11);
      v13 = *v12;
      if ( *v12 == -4096 )
        break;
      ++v14;
    }
    if ( v15 )
      v12 = v15;
  }
  v16 = *(_DWORD *)(a2 + 8);
  a5 = (unsigned int)(3 * v9);
  v25[0].m128_u64[0] = (unsigned __int64)v12;
  a3 = (unsigned int)(v16 + 1);
  a6 = (unsigned int)(4 * a3);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_23;
  v17 = (unsigned int)(v9 - *(_DWORD *)(a2 + 12) - a3);
  v18 = (unsigned int)v9 >> 3;
  if ( (unsigned int)v17 <= (unsigned int)v18 )
  {
    v24 = a4;
    sub_205B4C0(a2, v9, a3, a4, v17, v18);
    goto LABEL_24;
  }
LABEL_12:
  v19 = *v12 == -4096;
  *(_DWORD *)(a2 + 8) = a3;
  if ( !v19 )
    --*(_DWORD *)(a2 + 12);
  *v12 = *v6;
  sub_2059BE0(v25, v12, (_QWORD *)(v10 + 8 * v9), a2, 1);
  v20 = _mm_load_si128((const __m128i *)v25);
  a1[1].m128i_i8[0] = 1;
  *a1 = v20;
  return a1;
}
