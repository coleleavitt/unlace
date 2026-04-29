bool __fastcall sub_82140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm1
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rdi
  __m128i v16; // xmm1
  __m128i v18; // [rsp+0h] [rbp-90h] BYREF
  __int64 v19; // [rsp+10h] [rbp-80h]
  __m128i v20; // [rsp+18h] [rbp-78h] BYREF
  char v21; // [rsp+28h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-60h] BYREF
  __int128 v23; // [rsp+38h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-48h]
  int v25; // [rsp+50h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 616) )
    return 0;
  v23 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  if ( !sub_816B0(a1, (__int64)&v22, a3, a4, a5) )
    return 0;
  v6 = *(_QWORD **)(a1 + 616);
  v21 = 0;
  v20 = 0;
  v7 = v6[1];
  v19 = 0;
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v9 = *(_QWORD *)(a4 + 16) & *(_QWORD *)(*(_QWORD *)(v7 + 32) + 16LL);
  if ( v8 != sub_80020 )
  {
    v18.m128i_i64[0] = (__int64)v6;
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v8)(v6, v9, 0);
  }
  reg_finder_calc_op_addr();
  v10 = v19;
  v11 = *(_QWORD *)a2;
  v12 = _mm_loadu_si128(&v20);
  v13 = v19;
  v19 = 0;
  v20 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v18 = v12;
    qfree(v11);
    v14 = v21;
    v15 = v19;
    *(_QWORD *)a2 = v13;
    v16 = _mm_load_si128(&v18);
    *(_BYTE *)(a2 + 24) = v14;
    *(__m128i *)(a2 + 8) = v16;
    if ( v15 )
    {
      v20.m128i_i64[0] = 0;
      qfree(v15);
      v14 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    *(_QWORD *)a2 = v10;
    v14 = v21;
    *(__m128i *)(a2 + 8) = v12;
    *(_BYTE *)(a2 + 24) = v14;
  }
  return (unsigned __int8)(v14 - 10) <= 3u;
}
