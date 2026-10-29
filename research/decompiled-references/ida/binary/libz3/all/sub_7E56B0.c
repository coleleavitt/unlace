__int64 __fastcall sub_7E56B0(__int64 a1, unsigned int a2, unsigned int *a3, __m128 *a4, unsigned __int8 a5)
{
  const __m128i *v9; // rdi
  __int64 v10; // rax
  int v11; // edx
  unsigned int *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // xmm0_8
  __int64 (__fastcall *v20)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // rax
  __m128 *v22; // rax
  _QWORD v23[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = *(const __m128i **)(a1 + 80);
  v10 = v9[1].m128i_i64[1];
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 352) )
    {
      sub_7A4170(v9);
      v9 = *(const __m128i **)(a1 + 80);
      if ( !a4 )
      {
        v22 = sub_7A55C0(v9, (unsigned __int64 *)(a1 + 16), a2, a3);
        v9 = *(const __m128i **)(a1 + 80);
        a4 = v22;
      }
    }
  }
  if ( a2 )
  {
    v11 = 0;
    v12 = a3;
    do
    {
      v13 = *v12;
      LOBYTE(v13) = *(_DWORD *)(*(_QWORD *)(v9[1].m128i_i64[1] + 3288) + 4 * v13) == 1;
      ++v12;
      v11 |= v13;
    }
    while ( &a3[a2] != v12 );
    v14 = v11 ^ 1;
  }
  else
  {
    v14 = 1;
  }
  sub_7F1790(&v9[10], a2, a3);
  v17 = *(__int64 **)(a1 + 24);
  v18 = *v17;
  v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)a5 + 1), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
  v23[1] = a4;
  v23[0] = v19;
  v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v18 + 16);
  if ( v20 == sub_788610 )
  {
    v24[1] = a4;
    v24[0] = v19;
    sub_11C4C20(v17, a2, a3, v24, v15, v16);
  }
  else
  {
    ((void (__fastcall *)(__int64 *, _QWORD, unsigned int *, _QWORD *))v20)(v17, a2, a3, v23);
  }
  return v14;
}

