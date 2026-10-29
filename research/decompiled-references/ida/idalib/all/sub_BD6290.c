__int64 __fastcall sub_BD6290(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 (*v4)(); // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __m128i v7; // rax
  __int64 *v9; // [rsp+8h] [rbp-80h] BYREF
  __m128i v10; // [rsp+10h] [rbp-78h] BYREF
  __int64 v11; // [rsp+20h] [rbp-68h]
  __m128i v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]

  v9 = a1;
  v2 = sub_BC9860(&v9, a2);
  if ( (_BYTE)v2 )
  {
    v3 = v2;
    v4 = *(__int64 (**)())(*v9 + 4336);
    if ( v4 == sub_BC6330 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v9, a2) )
    {
      sub_EE9E50(&v12, a2);
      v7.m128i_i64[0] = v12.m128i_i64[0];
      v5 = v14;
      v10 = _mm_load_si128(&v12);
      v6 = v15;
      v11 = v13;
      v7.m128i_i64[1] = v10.m128i_i64[1];
      while ( 1 )
      {
        if ( v5 == v7.m128i_i64[0] )
        {
LABEL_10:
          if ( v6 == v7.m128i_i64[1] )
            return v3;
        }
        while ( 1 )
        {
          if ( (v7.m128i_i8[8] & 3) != 0 )
            v7.m128i_i64[0] = sub_EF2B30(&v10);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v9 + 96))(v9, *(_QWORD *)v7.m128i_i64[0]) )
            return 0;
          v7.m128i_i64[1] = v10.m128i_i64[1];
          if ( (v10.m128i_i8[8] & 3) != 0 )
            break;
          v7.m128i_i64[0] = v10.m128i_i64[0] + 8;
          v10.m128i_i64[0] = v7.m128i_i64[0];
          if ( v5 == v7.m128i_i64[0] )
            goto LABEL_10;
        }
        if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v10);
        else
          sub_EF2750(&v10, 1);
        v7 = v10;
      }
    }
  }
  return 0;
}
