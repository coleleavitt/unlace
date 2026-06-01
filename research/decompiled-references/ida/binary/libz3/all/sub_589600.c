__int64 __fastcall sub_589600(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // r12
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  v4 = (_QWORD *)sub_186B270(0x40u);
  *v4 = qword_1C665B0;
  v5 = (__int64)v4;
  v4[1] = a1;
  v4[2] = 0;
  if ( *a2 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(*a2 - 8LL));
    v20 = v6.m128i_i64[0];
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    v8 = (_QWORD *)*a2;
    *(_QWORD *)(v5 + 16) = v7 + 1;
    *v7 = v6.m128i_i64[0];
    if ( v8 )
    {
      v9 = 8LL * *((unsigned int *)v8 - 1);
      if ( v9 <= 8 )
      {
        if ( v9 == 8 )
          v7[1] = *v8;
      }
      else
      {
        memmove(v7 + 1, v8, v9);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)v5 = &off_1C51738;
  v11 = sub_4D6490(v10);
  *(_QWORD *)(v5 + 32) = v11;
  *(_QWORD *)(v5 + 56) = v11;
  v12 = *v3;
  *(_QWORD *)(v5 + 40) = v3;
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(v12 + 144);
  *(_QWORD *)(v5 + 48) = 0;
  if ( v13 == sub_586990 )
  {
    v14 = v3[6];
    if ( v14 )
    {
      *(_QWORD *)(v5 + 48) = v14;
      ++*(_DWORD *)(v14 + 8);
    }
  }
  else
  {
    v13((__int64)v3, (__int64 *)(v5 + 48));
    v14 = *(_QWORD *)(v5 + 48);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 864LL);
  if ( v15 == v14 )
    return v5;
  sub_588670((int)v21, *(_QWORD *)(v5 + 8), v5, v14);
  sub_5875C0(a1, "mk_empty", v21[0], v15);
  v16 = v21[0];
  if ( !v21[0] )
    return v5;
  v17 = v21[1];
  if ( (*(_DWORD *)(v21[0] + 8))-- != 1 )
    return v5;
  sub_15D7BC0(v17, v16);
  return v5;
}

