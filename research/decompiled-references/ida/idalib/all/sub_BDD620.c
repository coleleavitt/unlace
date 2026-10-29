__int64 __fastcall sub_BDD620(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 (*v5)(); // rax
  __int64 v6; // rsi
  __int64 v8; // rbp
  __int64 v9; // r12
  __m128i v10; // rax
  __int64 *v11; // [rsp+8h] [rbp-80h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __m128i v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  v11 = a1;
  v3 = sub_BC9860(&v11, a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = *(__int64 (**)())(*v11 + 4272);
    if ( v5 == sub_BC62B0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v11, a2) )
    {
      v6 = *(_QWORD *)(a2 + 16);
      if ( v6 && (v6 & 4) != 0 && (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return (*(unsigned int (__fastcall **)(__int64 *))(*v11 + 952))(v11);
      sub_EE9E50(&v14, a2);
      v10.m128i_i64[0] = v14.m128i_i64[0];
      v8 = v16;
      v12 = _mm_load_si128(&v14);
      v9 = v17;
      v13 = v15;
      v10.m128i_i64[1] = v12.m128i_i64[1];
      while ( v10.m128i_i64[0] == v8 )
      {
        while ( 1 )
        {
          if ( v9 == v10.m128i_i64[1] )
            return v4;
          if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_18:
            v10.m128i_i64[0] = sub_EF2B30(&v12);
LABEL_13:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *(_QWORD *)v10.m128i_i64[0]) )
            return 0;
          v10.m128i_i64[1] = v12.m128i_i64[1];
          if ( (v12.m128i_i8[8] & 3) != 0 )
            break;
          v10.m128i_i64[0] = v12.m128i_i64[0] + 8;
          v12.m128i_i64[0] = v10.m128i_i64[0];
          if ( v10.m128i_i64[0] != v8 )
            goto LABEL_12;
        }
        if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v12);
        else
          sub_EF2750(&v12, 1);
        v10 = v12;
      }
LABEL_12:
      if ( (v10.m128i_i8[8] & 3) != 0 )
        goto LABEL_18;
      goto LABEL_13;
    }
  }
  return 0;
}
