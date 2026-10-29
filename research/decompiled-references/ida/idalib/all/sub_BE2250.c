__int64 __fastcall sub_BE2250(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rax
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r12
  __m128i v10; // rax
  _QWORD *v12; // [rsp+8h] [rbp-80h] BYREF
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h]
  __m128i v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v2 = (_QWORD *)*a1;
  v12 = a1;
  v3 = (unsigned __int8 (*)(void))v2[28];
  if ( (char *)v3 != (char *)sub_BC58F0 )
  {
    if ( !v3() )
      return 0;
    a1 = v12;
    v2 = (_QWORD *)*v12;
  }
  v4 = (__int64 (*)())v2[633];
  if ( v4 != sub_BC68E0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v4)(a1, a2) )
      return 0;
    a1 = v12;
    v2 = (_QWORD *)*v12;
  }
  v5 = (__int64 (*)())v2[642];
  if ( v5 != sub_BC6970 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v5)(a1, a2) )
      return 0;
    a1 = v12;
    v2 = (_QWORD *)*v12;
  }
  v6 = (__int64 (*)())v2[648];
  if ( v6 == sub_BC69D0 || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v6)(a1, a2) )
  {
    if ( (unsigned __int8)sub_BD0630(&v12, a2[3], a2[4]) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 96LL))(v12, a2[5]);
      if ( (_BYTE)v7 )
      {
        sub_EE9E50(&v15, a2);
        v10.m128i_i64[0] = v15.m128i_i64[0];
        v8 = v17;
        v13 = _mm_load_si128(&v15);
        v9 = v18;
        v14 = v16;
        v10.m128i_i64[1] = v13.m128i_i64[1];
        while ( v8 == v10.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( v9 == v10.m128i_i64[1] )
              return v7;
            if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_15:
              v10.m128i_i64[0] = sub_EF2B30(&v13);
LABEL_10:
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v12 + 96LL))(v12, *(_QWORD *)v10.m128i_i64[0]) )
              return 0;
            v10.m128i_i64[1] = v13.m128i_i64[1];
            if ( (v13.m128i_i8[8] & 3) != 0 )
              break;
            v10.m128i_i64[0] = v13.m128i_i64[0] + 8;
            v13.m128i_i64[0] = v10.m128i_i64[0];
            if ( v8 != v10.m128i_i64[0] )
              goto LABEL_9;
          }
          if ( (v13.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_EF2960(&v13);
          else
            sub_EF2750(&v13, 1);
          v10 = v13;
        }
LABEL_9:
        if ( (v10.m128i_i8[8] & 3) != 0 )
          goto LABEL_15;
        goto LABEL_10;
      }
    }
  }
  return 0;
}
