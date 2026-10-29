unsigned __int64 __fastcall sub_486670(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)a1;
  v13 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 16);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v9 = switch_dbctx(*(int *)(a1 + 8));
    v10 = **(_QWORD **)(a1 + 40);
    v11[1] = v9;
    v11[0] = a2;
    v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2C400), (__m128i)(unsigned __int64)sub_490EC0);
    sub_486110(a1, (unsigned __int64 *)(16 * a3 + v10), (__int64)v11);
    if ( v12.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v12.m128i_i64[0])(v11, v11, 3);
  }
  return v13 - __readfsqword(0x28u);
}
