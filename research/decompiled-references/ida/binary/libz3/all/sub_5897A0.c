__int64 __fastcall sub_5897A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64 *); // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 64LL))(*(_QWORD *)(a1 + 48));
  v6 = (_QWORD *)sub_186B270(0x40u);
  *v6 = qword_1C665B0;
  v7 = (__int64)v6;
  v6[1] = a1;
  v6[2] = 0;
  if ( *a3 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(*a3 - 8LL));
    v22 = v8.m128i_i64[0];
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = (_QWORD *)*a3;
    *(_QWORD *)(v7 + 16) = v9 + 1;
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)v7 = &off_1C51738;
  v13 = sub_4D6490(v12);
  *(_QWORD *)(v7 + 32) = v13;
  *(_QWORD *)(v7 + 56) = v13;
  v14 = *v5;
  *(_QWORD *)(v7 + 40) = v5;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 144);
  *(_QWORD *)(v7 + 48) = 0;
  if ( v15 == sub_586990 )
  {
    v16 = v5[6];
    if ( v16 )
    {
      *(_QWORD *)(v7 + 48) = v16;
      ++*(_DWORD *)(v16 + 8);
    }
  }
  else
  {
    v15((__int64)v5, (__int64 *)(v7 + 48));
    v16 = *(_QWORD *)(v7 + 48);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 856LL);
  if ( v17 == v16 )
    return v7;
  sub_588670((int)v23, *(_QWORD *)(v7 + 8), v7, v16);
  sub_5875C0(a1, "mk_full", v23[0], v17);
  v18 = v23[0];
  if ( !v23[0] )
    return v7;
  v19 = v23[1];
  if ( (*(_DWORD *)(v23[0] + 8))-- != 1 )
    return v7;
  sub_15D7BC0(v19, v18);
  return v7;
}

