unsigned __int64 __fastcall sub_471CE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int *v10; // r14
  _QWORD *v11; // rax
  __m128i v12; // xmm0
  __int128 v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)a1;
  v15 = __readfsqword(0x28u);
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
    v13 = 0;
    v10 = (unsigned int *)(v9 + 8 * a3);
    v11 = (_QWORD *)operator new(0x18u);
    *v11 = a2;
    v12 = _mm_loadl_epi64((const __m128i *)&off_2B02438);
    v11[1] = a1;
    v11[2] = v8;
    *(_QWORD *)&v13 = v11;
    v14 = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)sub_47C690);
    sub_471910(a1, v10, (__int64)&v13);
    if ( v14.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
  }
  return v15 - __readfsqword(0x28u);
}

