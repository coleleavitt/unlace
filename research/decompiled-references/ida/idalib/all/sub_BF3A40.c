__int64 __fastcall sub_BF3A40(__int64 *a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 v6; // r12
  __m128i v7; // rax
  __int64 *v8; // [rsp+8h] [rbp-80h] BYREF
  __m128i v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  __m128i v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]

  v8 = a1;
  if ( (unsigned __int8)sub_BC9CB0(&v8, a2) )
  {
    v2 = *(__int64 (**)())(*v8 + 5312);
    if ( v2 == sub_BC6AD0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v2)(v8, a2) )
    {
      v3 = sub_BEDE30(&v8, a2);
      if ( (_BYTE)v3 )
      {
        sub_EE9E50(&v11, a2);
        v7.m128i_i64[0] = v11.m128i_i64[0];
        v5 = v13;
        v9 = _mm_load_si128(&v11);
        v6 = v14;
        v10 = v12;
        v7.m128i_i64[1] = v9.m128i_i64[1];
        while ( v5 == v7.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( v6 == v7.m128i_i64[1] )
              return v3;
            if ( (v7.m128i_i8[8] & 3) != 0 )
LABEL_14:
              v7.m128i_i64[0] = sub_EF2B30(&v9);
LABEL_9:
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v8 + 96))(v8, *(_QWORD *)v7.m128i_i64[0]) )
              return 0;
            v7.m128i_i64[1] = v9.m128i_i64[1];
            if ( (v9.m128i_i8[8] & 3) != 0 )
              break;
            v7.m128i_i64[0] = v9.m128i_i64[0] + 8;
            v9.m128i_i64[0] = v7.m128i_i64[0];
            if ( v5 != v7.m128i_i64[0] )
              goto LABEL_8;
          }
          if ( (v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_EF2960(&v9);
          else
            sub_EF2750(&v9, 1);
          v7 = v9;
        }
LABEL_8:
        if ( (v7.m128i_i8[8] & 3) != 0 )
          goto LABEL_14;
        goto LABEL_9;
      }
    }
  }
  return 0;
}
