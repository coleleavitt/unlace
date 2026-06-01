__int64 __fastcall sub_17454E0(unsigned __int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  __int64 result; // rax
  int *v13; // rbx
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  const __m128i *v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = (__int64)(a2 + 294);
  *a1 = 0;
  v7 = *a3;
  if ( (*a3 & 3) != 0 )
  {
    if ( (*a3 & 3) == 1 )
    {
      v13 = (int *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = *v13;
      sub_17454E0(v26, a2, v13 + 2);
      v18 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFCLL) + 16);
      v19 = a2[294];
      a2[304] += 24LL;
      v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[295] >= v20 + 24 && v19 )
      {
        a2[294] = v20 + 24;
        result = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        result = sub_986170(v6, 24, 24, 3, v16, v17);
        v20 = result & 0xFFFFFFFFFFFFFFFCLL;
      }
      *(_DWORD *)result = v15;
      v21 = v26[0];
      *(_QWORD *)(result + 16) = v18;
      *(_QWORD *)(result + 8) = v21;
      *a1 = v20 | 1;
    }
    else
    {
      v8 = a2[294];
      a2[304] += 16LL;
      v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[295] >= v10 + 16 && v8 )
      {
        a2[294] = v10 + 16;
        v11 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v25 = sub_986170((__int64)(a2 + 294), 16, 16, 3, v9, a6);
        v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v25;
        v10 = v25 & 0xFFFFFFFFFFFFFFFBLL;
      }
      sub_17454E0(v11, a2, v9);
      result = sub_17454E0(v11 + 8, a2, (v7 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      *a1 = v10 & 0xFFFFFFFFFFFFFFFCLL | v7 & 4 | 2;
    }
  }
  else
  {
    v22 = a2[294];
    v23 = (const __m128i *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    a2[304] += 40LL;
    v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v24 + 40 && v22 )
    {
      a2[294] = v24 + 40;
      result = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170(v6, 40, 40, 3, a5, a6);
      v24 = result & 0xFFFFFFFFFFFFFFFCLL;
    }
    *(__m128i *)result = _mm_loadu_si128(v23);
    *(__m128i *)(result + 16) = _mm_loadu_si128(v23 + 1);
    *(_QWORD *)(result + 32) = v23[2].m128i_i64[0];
    *a1 = v24;
  }
  return result;
}
