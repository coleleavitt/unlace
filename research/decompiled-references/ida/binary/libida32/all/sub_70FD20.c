__int64 __fastcall sub_70FD20(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rax
  __int128 *v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 result; // rax
  __int128 v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v16 = 0;
  v9 = (_QWORD *)operator new(0x18u);
  v9[1] = a5;
  v10 = a3;
  *v9 = a2;
  v11 = _mm_loadl_epi64((const __m128i *)&off_2B0E618);
  v9[2] = a4;
  *(_QWORD *)&v16 = v9;
  v17 = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)sub_70FEC0);
  v14 = sub_8148D0(a1, a3, &v16, &stru_40000);
  if ( v17.m128i_i64[0] )
  {
    v10 = &v16;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v17.m128i_i64[0])(&v16, &v16, 3);
  }
  result = 1;
  if ( v14 == -1 )
  {
    if ( *(_QWORD *)(a4 + 8) <= 1u )
    {
      qstrerror(0xFFFFFFFFLL, v10, v12, v13);
      sub_3573A0((char **)a4);
    }
    return 0;
  }
  return result;
}

