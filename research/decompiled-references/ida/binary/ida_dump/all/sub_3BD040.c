__int64 __fastcall sub_3BD040(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rbp
  int v11; // eax
  _DWORD *v12; // rdx
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v13[1] = __readfsqword(0x28u);
  v6 = sub_389BF0(v5, v4);
  if ( !v6 )
    return 6;
  v7 = *(_DWORD *)(a1 + 24);
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_13;
    if ( v4 != *(_QWORD *)(v6 + 8) )
      return 6;
  }
  v9 = *a2;
  v10 = sub_389BF0(*(_QWORD *)(a1 + 16), *a2);
  if ( !v10 )
    return 7;
  v11 = *(_DWORD *)(a1 + 24);
  if ( !v11 )
    goto LABEL_11;
  if ( v11 != 1 )
LABEL_13:
    sub_3BA9D0(a3);
  if ( v9 != *(_QWORD *)(v10 + 8) )
    return 7;
LABEL_11:
  sub_38B490(v10, 0);
  v13[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(v10 + 44)), 225).m128i_u64[0];
  v12 = sub_38F260((_QWORD *)v10, v13);
  result = 3;
  if ( !v12 )
    return 7;
  return result;
}
