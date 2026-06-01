__int64 __fastcall sub_BE2CA0(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __m128i v8; // rax
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __m128i v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)a1;
  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 224LL);
  if ( (char *)v3 != (char *)sub_BC58F0 )
  {
    if ( !v3() )
      return 0;
    v2 = *(_QWORD *)a1;
  }
  v4 = *(__int64 (**)())(v2 + 5016);
  if ( v4 != sub_BC6880 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v4)(a1, a2) )
    return 0;
  if ( !a1[10] )
  {
    sub_EE9E50(&v11, a2);
    v8.m128i_i64[0] = v11.m128i_i64[0];
    v6 = v13;
    v9 = _mm_load_si128(&v11);
    v7 = v14;
    v10 = v12;
    v8.m128i_i64[1] = v9.m128i_i64[1];
    while ( 1 )
    {
      if ( v6 == v8.m128i_i64[0] )
      {
LABEL_14:
        if ( v7 == v8.m128i_i64[1] )
          return 1;
      }
      while ( 1 )
      {
        if ( (v8.m128i_i8[8] & 3) != 0 )
          v8.m128i_i64[0] = sub_EF2B30(&v9);
        result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)v8.m128i_i64[0]);
        if ( !(_BYTE)result )
          return result;
        v8.m128i_i64[1] = v9.m128i_i64[1];
        if ( (v9.m128i_i8[8] & 3) != 0 )
          break;
        v8.m128i_i64[0] = v9.m128i_i64[0] + 8;
        v9.m128i_i64[0] = v8.m128i_i64[0];
        if ( v6 == v8.m128i_i64[0] )
          goto LABEL_14;
      }
      if ( (v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v9);
      else
        sub_EF2750(&v9, 1);
      v8 = v9;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(a2 + 8)) )
    return 0;
  return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, *(_QWORD *)(a2 + 16));
}
