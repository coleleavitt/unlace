__int64 __fastcall sub_BE1410(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 v9; // r12
  __m128i v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-80h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __m128i v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  v2 = (_QWORD *)*a1;
  v11 = a1;
  v3 = (unsigned __int8 (*)(void))v2[28];
  if ( (char *)v3 != (char *)sub_BC58F0 )
  {
    if ( !v3() )
      return 0;
    a1 = v11;
    v2 = (_QWORD *)*v11;
  }
  v4 = (__int64 (*)())v2[633];
  if ( v4 == sub_BC68E0 )
  {
LABEL_3:
    v5 = (__int64 (*)())v2[637];
    if ( v5 != sub_BC6920 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    v6 = sub_BD0630(&v11, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
    if ( !(_BYTE)v6 )
      return 0;
    sub_EE9E50(&v14, a2);
    v10.m128i_i64[0] = v14.m128i_i64[0];
    v8 = v16;
    v12 = _mm_load_si128(&v14);
    v9 = v17;
    v13 = v15;
    v10.m128i_i64[1] = v12.m128i_i64[1];
    while ( v8 == v10.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v9 == v10.m128i_i64[1] )
          return v6;
        if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_15:
          v10.m128i_i64[0] = sub_EF2B30(&v12);
LABEL_10:
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v11 + 96LL))(v11, *(_QWORD *)v10.m128i_i64[0]) )
          return 0;
        v10.m128i_i64[1] = v12.m128i_i64[1];
        if ( (v12.m128i_i8[8] & 3) != 0 )
          break;
        v10.m128i_i64[0] = v12.m128i_i64[0] + 8;
        v12.m128i_i64[0] = v10.m128i_i64[0];
        if ( v8 != v10.m128i_i64[0] )
          goto LABEL_9;
      }
      if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v12);
      else
        sub_EF2750(&v12, 1);
      v10 = v12;
    }
LABEL_9:
    if ( (v10.m128i_i8[8] & 3) != 0 )
      goto LABEL_15;
    goto LABEL_10;
  }
  if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
  {
    a1 = v11;
    v2 = (_QWORD *)*v11;
    goto LABEL_3;
  }
  return 0;
}
