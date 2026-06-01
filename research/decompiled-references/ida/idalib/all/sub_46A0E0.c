__int64 __fastcall sub_46A0E0(
        __m128i *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r14
  char v18; // [rsp+17h] [rbp-F9h]
  int v20; // [rsp+18h] [rbp-F8h]
  unsigned __int64 v21; // [rsp+28h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-E0h] BYREF
  __m128i v23; // [rsp+40h] [rbp-D0h]
  _QWORD v24[24]; // [rsp+50h] [rbp-C0h] BYREF

  v24[17] = __readfsqword(0x28u);
  v8 = *(__int64 **)(switch_dbctx(*(int *)(a2 + 4LL * (int)a3 + 16)) + 1672);
  if ( !sub_3C9470(v8, a1, a4, a5, a6) )
    return 0;
  if ( (unsigned __int8)is_stroff(a6, a5) )
  {
    if ( a1->m128i_i32[0] > 1 )
    {
      v18 = 0;
      v9 = 2;
      while ( 1 )
      {
        v21 = sub_3BDD60(v8, a1->m128i_i64[v9]);
        if ( !(unsigned __int8)sub_7BE6E0(*v8, &v21) )
        {
          v18 = sub_492510(a2, (char *)a1 + 8 * v9, a3);
          if ( !v18 )
            break;
        }
        if ( a1->m128i_i32[0] <= (int)++v9 - 1 )
        {
          if ( v18 )
            sub_3CA2F0(v8, a4, a5, a6, a1, 1);
          return 1;
        }
      }
      return 0;
    }
    return 1;
  }
  if ( !(unsigned __int8)is_enum(a6, a5) )
    return 1;
  v11 = a6;
  BYTE1(v11) = BYTE1(a6) & 0xFE;
  LOBYTE(v11) = -1;
  if ( !get_immvals(v24, a4, a5, v11, 0) )
    return 0;
  v12 = v24[0];
  v13 = a1->m128i_i64[0];
  v21 = 0;
  v20 = v24[0];
  if ( (unsigned __int8)get_type_by_tid(&v21, v13) )
  {
    v22 = 0;
    v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B293F8), (__m128i)(unsigned __int64)sub_468F30);
    v14 = sub_412EA0((_DWORD)v8, &v21, v12, 8, a1->m128i_i8[8], (__int64)&v22, 0);
    if ( v23.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
    if ( v14 )
    {
      sub_3E48D0(*v8, a4, a1->m128i_i64[0], v20, a1->m128i_u8[8], 8);
      clear_tinfo_t(&v21);
      return 1;
    }
  }
  clear_tinfo_t(&v21);
  return 0;
}
