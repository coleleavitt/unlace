__int64 __fastcall sub_3BD580(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  int v13; // eax
  _DWORD *v14; // rdx
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v15[1] = __readfsqword(0x28u);
  v7 = v4;
  v8 = sub_38A130(v5, v4);
  if ( !v8 )
    return 6;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_13;
    if ( v4 != *(_QWORD *)(v8 + 8) )
      return 6;
  }
  v11 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  v12 = sub_38A130(v5, *a2);
  if ( !v12 )
    return 7;
  v13 = *(_DWORD *)(a1 + 24);
  if ( !v13 )
    goto LABEL_11;
  if ( v13 != 1 )
LABEL_13:
    sub_3BAF10(a3, v5, v7);
  if ( v11 != *(_QWORD *)(v12 + 8) )
    return 7;
LABEL_11:
  sub_38B9D0(v12, 0);
  v15[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(v12 + 44)), 225).m128i_u64[0];
  v14 = sub_38F7A0((_QWORD *)v12, v15);
  result = 3;
  if ( !v14 )
    return 7;
  return result;
}
