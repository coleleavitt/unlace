__int64 __fastcall sub_BB0490(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 (*v5)(); // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __m128i v8; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // [rsp+8h] [rbp-80h] BYREF
  __m128i v18; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h]
  __m128i v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]

  v17 = a1;
  v3 = sub_BA5B20(&v17, a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = *(__int64 (**)())(*v17 + 4144);
    if ( v5 == sub_BA2470 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v17, a2) )
    {
      if ( ((*(__int64 *)(a2 + 40) >> 1) & 3) != 2
        || (v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL,
            v11 = sub_B685F0(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL),
            v15 = sub_A5E330(v11, v10, 0, v12, v13, v14),
            v16 = *v17,
            v20.m128i_i32[0] = *(_DWORD *)(a2 + 36),
            v20.m128i_i32[1] = v20.m128i_i32[0],
            (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64, __m128i *))(v16 + 136))(v17, v15, &v20)) )
      {
        sub_EC6110(&v20, a2);
        v8.m128i_i64[0] = v20.m128i_i64[0];
        v6 = v22;
        v18 = _mm_load_si128(&v20);
        v7 = v23;
        v19 = v21;
        v8.m128i_i64[1] = v18.m128i_i64[1];
        while ( 1 )
        {
          if ( v6 == v8.m128i_i64[0] )
          {
LABEL_11:
            if ( v7 == v8.m128i_i64[1] )
              return v4;
          }
          while ( 1 )
          {
            if ( (v8.m128i_i8[8] & 3) != 0 )
              v8.m128i_i64[0] = sub_ECEDF0(&v18);
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v17 + 96))(v17, *(_QWORD *)v8.m128i_i64[0]) )
              return 0;
            v8.m128i_i64[1] = v18.m128i_i64[1];
            if ( (v18.m128i_i8[8] & 3) != 0 )
              break;
            v8.m128i_i64[0] = v18.m128i_i64[0] + 8;
            v18.m128i_i64[0] = v8.m128i_i64[0];
            if ( v6 == v8.m128i_i64[0] )
              goto LABEL_11;
          }
          if ( (v18.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_ECEC20(&v18);
          else
            sub_ECEA10(&v18, 1);
          v8 = v18;
        }
      }
    }
  }
  return 0;
}

