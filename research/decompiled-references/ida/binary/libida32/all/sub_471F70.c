unsigned __int64 __fastcall sub_471F70(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *a1;
  v11 = __readfsqword(0x28u);
  v5 = *(__int64 (**)(void))(v3 + 32);
  if ( (char *)v5 == (char *)sub_3D58E0 )
    v6 = (unsigned __int64 *)(a1 + 2);
  else
    v6 = (unsigned __int64 *)v5();
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
  {
    v8 = *(_QWORD *)a1[5];
    v9[0] = a2;
    v9[1] = a1;
    v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B02448), (__m128i)(unsigned __int64)sub_47C280);
    sub_471910((__int64)a1, (unsigned int *)(v8 + 8 * a3), (__int64)v9);
    if ( v10.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v10.m128i_i64[0])(v9, v9, 3);
  }
  return v11 - __readfsqword(0x28u);
}

