__int64 __fastcall sub_1D1980(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // r13d
  __int64 v6; // rdx
  __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  int v11; // eax
  unsigned int *v12; // r12
  __m128i v13; // xmm0
  unsigned int v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-5Ch] BYREF
  unsigned __int8 v22[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v3 = a3 + 48;
  v4 = *(_DWORD *)a3;
  v23 = __readfsqword(0x28u);
  v6 = a3 + 64;
  if ( (unsigned int)(v4 - 56) > 1 )
    v3 = v6;
  v7 = v3;
  v8 = (_QWORD *)a1[2];
  v9 = &v8[a1[3]];
  if ( v8 != v9 )
  {
    while ( *(_QWORD *)(a3 + 24) != *v8 )
    {
      if ( v9 == ++v8 )
        goto LABEL_9;
    }
    if ( v8 != v9 )
      return 0;
  }
LABEL_9:
  v11 = sub_1D17C0(*(_QWORD *)(a1[1] + 112LL), &v21, a3);
  if ( v11 == 1 )
  {
    if ( v21 != -1 && (*(_BYTE *)v7 != 1 || v21 != *(_DWORD *)(v7 + 8)) )
    {
      v12 = *(unsigned int **)(*(_QWORD *)(a2 + 64) + 1504LL);
      v13 = _mm_cvtsi32_si128(v12[21]);
      *(_DWORD *)v22 = 1;
      *(_QWORD *)&v22[4] = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v21)).m128i_u64[0];
      sub_124BC0(v7, v22);
      sub_11C7E0((__int64)v22);
      if ( v4 == 56 )
      {
        *(_DWORD *)a3 = 57;
        v14 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, v12[16]);
        v15 = _mm_cvtsi32_si128(v12[16]);
        *(_DWORD *)v22 = 1;
        *(_QWORD *)&v22[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v15).m128i_u64[0];
        sub_124BC0(a3 + 32, v22);
        sub_11C7E0((__int64)v22);
      }
      v16 = a1[3];
      v17 = *(_QWORD *)(a3 + 24);
      v18 = a1[2];
      if ( a1[4] < (unsigned __int64)(v16 + 1) )
      {
        v20 = qvector_reserve(a1 + 2, v18, v16 + 1, 8);
        a1[2] = v20;
        v18 = v20;
        v16 = a1[3];
      }
      *(_QWORD *)(v18 + 8 * v16) = v17;
      ++a1[3];
      return 1;
    }
    return 0;
  }
  if ( v11 != 2 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)a3 - 56) <= 1 )
  {
    sub_11CFE0(a3);
    v19 = *(_DWORD *)(a2 + 24);
    BYTE1(v19) &= ~2u;
    LOBYTE(v19) = v19 | 0x80;
    *(_DWORD *)(a2 + 24) = v19;
  }
  else
  {
    sub_330CB0(a2, a3);
  }
  return 1;
}
