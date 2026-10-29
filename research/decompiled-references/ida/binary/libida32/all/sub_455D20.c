__int64 __fastcall sub_455D20(__m128i *a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // r14
  char v18; // [rsp+1Bh] [rbp-B5h]
  int v20; // [rsp+1Ch] [rbp-B4h]
  __int64 v21; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-A0h] BYREF
  __m128i v23; // [rsp+40h] [rbp-90h]
  int v24[18]; // [rsp+50h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v8 = *(__int64 **)(switch_dbctx(*(int *)(a2 + 4LL * (int)a3 + 16)) + 1480);
  if ( !sub_3C4190(v8, a1, a4, a5, a6) )
    return 0;
  if ( (unsigned __int8)is_stroff(a6, a5) )
  {
    if ( a1->m128i_i32[0] > 1 )
    {
      v18 = 0;
      v9 = 2;
      while ( 1 )
      {
        LODWORD(v21) = sub_3B90A0(v8, a1->m128i_i32[v9]);
        if ( !(unsigned __int8)sub_79B370(*v8, &v21) )
        {
          v18 = sub_47DA00(a2, (char *)a1 + 4 * v9, a3);
          if ( !v18 )
            break;
        }
        if ( a1->m128i_i32[0] <= (int)++v9 - 1 )
        {
          if ( v18 )
            sub_3C5000(v8, a4, a5, a6, a1, 1);
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
  v13 = a1->m128i_u32[0];
  v21 = 0;
  v20 = v24[0];
  if ( (unsigned __int8)get_type_by_tid(&v21, v13) )
  {
    v22 = 0;
    v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFF438), (__m128i)(unsigned __int64)sub_454B50);
    v14 = sub_3FFBA0((_DWORD)v8, &v21, v12, 4, a1->m128i_i8[4], (__int64)&v22, 0);
    if ( v23.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
    if ( v14 )
    {
      sub_3DEBB0(*v8, a4, a1->m128i_i32[0], v20, a1->m128i_u8[4], 4);
      clear_tinfo_t(&v21);
      return 1;
    }
  }
  clear_tinfo_t(&v21);
  return 0;
}

