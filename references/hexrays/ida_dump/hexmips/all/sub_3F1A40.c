__int64 __fastcall sub_3F1A40(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5, double a6)
{
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, double); // r8
  int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned __int64 v15; // xmm0_8
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned __int8 v20[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v7 = BYTE1(a1[5 * (int)a2 + 8]);
  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)v7 > 0xBu )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64, double))(*a1 + 56LL);
    if ( v10 == sub_3EDDC0 )
      return 0;
    goto LABEL_23;
  }
  v9 = 2562;
  if ( _bittest64(&v9, v7) )
  {
    v14 = sub_3ED570((__int64)a1, a2, 0, a6);
    if ( v14 == -1 )
    {
      if ( !under_debugger )
        sub_37E160(0xCD2Bu, a2, a6);
      BUG();
    }
    if ( *(_BYTE *)a3 == 1 && v14 == *(_DWORD *)(a3 + 8) )
    {
      v13 = 0;
    }
    else
    {
      v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a3 + 4)), _mm_cvtsi32_si128(v14)).m128i_u64[0];
      *(_DWORD *)v20 = 1;
      *(_QWORD *)&v20[4] = v15;
      v13 = sub_1D2090((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v20);
      sub_118BA0((__int64)v20);
    }
    goto LABEL_14;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64, double))(*a1 + 56LL);
  if ( v10 != sub_3EDDC0 )
  {
LABEL_23:
    v11 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v10)(a1, a2, a4);
    goto LABEL_6;
  }
  if ( (unsigned __int8)(v7 - 6) > 1u && (unsigned __int8)(v7 - 2) > 2u )
    return 0;
  v11 = sub_3ED570((__int64)a1, a2, 1, a6);
LABEL_6:
  if ( v11 == -1 )
    return 0;
  if ( *(_BYTE *)a3 == 1 )
  {
    v12 = *(_DWORD *)(a3 + 8);
  }
  else
  {
    v17 = a1[104];
    v18 = *(_QWORD *)(v17 + 760);
    if ( !v18 )
      sub_3E5460(a6, (__int64)a1, a2);
    v12 = *(_DWORD *)(*(_QWORD *)(v17 + 752) + 4 * v18 - 4);
    *(_QWORD *)(v17 + 760) = v18 - 1;
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
    *(_DWORD *)v20 = 1;
    *(_QWORD *)&a6 = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v12)).m128i_u64[0];
    *(double *)&v20[4] = a6;
    sub_1D2090((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v20);
    sub_118BA0((__int64)v20);
  }
  if ( !(unsigned __int8)sub_3F17D0((__int64)a1, v12, v11, *(int *)(a3 + 4), 2, a6) )
  {
    sub_3E8540(a1[104], v12);
    sub_3E8540(a1[104], v11);
    return 0;
  }
  v13 = *(_QWORD *)(a1[2] + 56LL);
LABEL_14:
  if ( a5 )
    *a5 = v13;
  return 1;
}
