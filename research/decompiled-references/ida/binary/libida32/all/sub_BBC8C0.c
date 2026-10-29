__int64 __fastcall sub_BBC8C0(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  unsigned int v5; // ebp
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i v11; // rax
  __int64 *v13; // [rsp+8h] [rbp-80h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v13 = a1;
  if ( !(unsigned __int8)sub_BA5B20(&v13, (__int64)a2) )
    return 0;
  v2 = v13;
  v3 = *v13;
  v4 = *(__int64 (**)())(*v13 + 4744);
  if ( v4 != sub_BA2920 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v4)(v13, a2) )
      return 0;
    v2 = v13;
    v3 = *v13;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 88))(v2, a2[4], a2[5]);
  if ( (_BYTE)v5 )
  {
    v6 = (_QWORD *)a2[6];
    if ( !v6 || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*v13 + 136))(v13, *v6, v6 + 1) )
    {
      v7 = a2[8];
      if ( !v7
        || (v7 & 4) != 0
        || (v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
        || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*v13 + 136))(v13, *v8, v8 + 1) )
      {
        sub_EC6110(&v16, a2);
        v11.m128i_i64[0] = v16.m128i_i64[0];
        v9 = v18;
        v14 = _mm_load_si128(&v16);
        v10 = v19;
        v15 = v17;
        v11.m128i_i64[1] = v14.m128i_i64[1];
        while ( v9 == v11.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( v10 == v11.m128i_i64[1] )
              return v5;
            if ( (v11.m128i_i8[8] & 3) != 0 )
LABEL_18:
              v11.m128i_i64[0] = sub_ECEDF0(&v14);
LABEL_13:
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v13 + 96))(v13, *(_QWORD *)v11.m128i_i64[0]) )
              return 0;
            v11.m128i_i64[1] = v14.m128i_i64[1];
            if ( (v14.m128i_i8[8] & 3) != 0 )
              break;
            v11.m128i_i64[0] = v14.m128i_i64[0] + 8;
            v14.m128i_i64[0] = v11.m128i_i64[0];
            if ( v9 != v11.m128i_i64[0] )
              goto LABEL_12;
          }
          if ( (v14.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_ECEC20(&v14);
          else
            sub_ECEA10(&v14, 1);
          v11 = v14;
        }
LABEL_12:
        if ( (v11.m128i_i8[8] & 3) != 0 )
          goto LABEL_18;
        goto LABEL_13;
      }
    }
  }
  return 0;
}

