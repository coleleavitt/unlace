unsigned __int64 __fastcall sub_471E50(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)a1;
  v12 = __readfsqword(0x28u);
  v5 = *(__int64 (**)(void))(v3 + 32);
  if ( (char *)v5 == (char *)sub_3D58E0 )
    v6 = (unsigned __int64 *)(a1 + 16);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v8 = switch_dbctx(*(int *)(a1 + 8));
    v9 = **(_QWORD **)(a1 + 40);
    v10[1] = v8;
    v10[0] = a2;
    v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B02440), (__m128i)(unsigned __int64)sub_47C4A0);
    sub_471910(a1, (unsigned int *)(v9 + 8 * a3), (__int64)v10);
    if ( v11.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v11.m128i_i64[0])(v10, v10, 3);
  }
  return v12 - __readfsqword(0x28u);
}

