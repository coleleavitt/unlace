__int64 __fastcall sub_BE2B40(__int64 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rdi
  __int64 (*v3)(); // rax
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // r12
  __m128i v8; // rax
  __int64 *v9; // [rsp+8h] [rbp-80h] BYREF
  __m128i v10; // [rsp+10h] [rbp-78h] BYREF
  __int64 v11; // [rsp+20h] [rbp-68h]
  __m128i v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]

  v9 = a1;
  if ( !(unsigned __int8)sub_BC9860(&v9, a2) )
    return 0;
  v2 = (unsigned __int8 *)v9;
  v3 = *(__int64 (**)())(*v9 + 4456);
  if ( v3 == sub_BC6420 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v3)(v9, a2) )
    return 0;
  v2 = (unsigned __int8 *)v9;
LABEL_3:
  v4 = v2[10];
  if ( (_BYTE)v4 )
  {
    sub_EE9E50(&v12, a2);
    v8.m128i_i64[0] = v12.m128i_i64[0];
    v6 = v14;
    v10 = _mm_load_si128(&v12);
    v7 = v15;
    v11 = v13;
    v8.m128i_i64[1] = v10.m128i_i64[1];
    while ( v6 == v8.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v8.m128i_i64[1] == v7 )
          return v4;
        if ( (v8.m128i_i8[8] & 3) != 0 )
LABEL_14:
          v8.m128i_i64[0] = sub_EF2B30(&v10);
LABEL_9:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v9 + 96))(v9, *(_QWORD *)v8.m128i_i64[0]) )
          return 0;
        v8.m128i_i64[1] = v10.m128i_i64[1];
        if ( (v10.m128i_i8[8] & 3) != 0 )
          break;
        v8.m128i_i64[0] = v10.m128i_i64[0] + 8;
        v10.m128i_i64[0] = v8.m128i_i64[0];
        if ( v6 != v8.m128i_i64[0] )
          goto LABEL_8;
      }
      if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v10);
      else
        sub_EF2750(&v10, 1);
      v8 = v10;
    }
LABEL_8:
    if ( (v8.m128i_i8[8] & 3) != 0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  return (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)v2 + 96LL))(v2, *(_QWORD *)(a2 + 24));
}
