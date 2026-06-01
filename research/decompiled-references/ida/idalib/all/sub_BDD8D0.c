__int64 __fastcall sub_BDD8D0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 (*v4)(); // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r12
  __m128i v8; // rax
  __int64 *v10; // [rsp+8h] [rbp-80h] BYREF
  __m128i v11; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12; // [rsp+20h] [rbp-68h]
  __m128i v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]

  v10 = a1;
  v2 = sub_BC9860(&v10, a2);
  if ( (_BYTE)v2 )
  {
    v3 = v2;
    v4 = *(__int64 (**)())(*v10 + 4184);
    if ( v4 == sub_BC6200 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v10, a2) )
    {
      v5 = *(_QWORD **)(a2 + 16);
      if ( !v5 || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*v10 + 136))(v10, *v5, v5 + 1) )
      {
        sub_EE9E50(&v13, a2);
        v8.m128i_i64[0] = v13.m128i_i64[0];
        v6 = v15;
        v11 = _mm_load_si128(&v13);
        v7 = v16;
        v12 = v14;
        v8.m128i_i64[1] = v11.m128i_i64[1];
        while ( v8.m128i_i64[0] == v6 )
        {
          while ( 1 )
          {
            if ( v7 == v8.m128i_i64[1] )
              return v3;
            if ( (v8.m128i_i8[8] & 3) != 0 )
LABEL_13:
              v8.m128i_i64[0] = sub_EF2B30(&v11);
LABEL_8:
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v10 + 96))(v10, *(_QWORD *)v8.m128i_i64[0]) )
              return 0;
            v8.m128i_i64[1] = v11.m128i_i64[1];
            if ( (v11.m128i_i8[8] & 3) != 0 )
              break;
            v8.m128i_i64[0] = v11.m128i_i64[0] + 8;
            v11.m128i_i64[0] = v8.m128i_i64[0];
            if ( v8.m128i_i64[0] != v6 )
              goto LABEL_7;
          }
          if ( (v11.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_EF2960(&v11);
          else
            sub_EF2750(&v11, 1);
          v8 = v11;
        }
LABEL_7:
        if ( (v8.m128i_i8[8] & 3) != 0 )
          goto LABEL_13;
        goto LABEL_8;
      }
    }
  }
  return 0;
}
