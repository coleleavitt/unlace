unsigned __int64 __fastcall sub_486500(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // r13
  unsigned __int64 *v9; // rbp
  _QWORD *v10; // rax
  __m128i v11; // xmm0
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)a1;
  v14 = __readfsqword(0x28u);
  v5 = *(__int64 (**)(void))(v3 + 32);
  if ( (char *)v5 == (char *)sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a1 + 16);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v8 = switch_dbctx(*(int *)(a1 + 8));
    v9 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
    v12 = 0;
    v10 = (_QWORD *)operator new(0x18u);
    *v10 = a2;
    v11 = _mm_loadl_epi64((const __m128i *)&off_2B2C3F8);
    v10[1] = a1;
    v10[2] = v8;
    *(_QWORD *)&v12 = v10;
    v13 = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)sub_4910D0);
    sub_486110(a1, v9, (__int64)&v12);
    if ( v13.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v13.m128i_i64[0])(&v12, &v12, 3);
  }
  return v14 - __readfsqword(0x28u);
}
