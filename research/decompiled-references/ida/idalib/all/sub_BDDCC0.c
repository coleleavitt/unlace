__int64 __fastcall sub_BDDCC0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 (*v4)(); // rax
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // r12
  __m128i v12; // rax
  __int64 *v13; // [rsp+8h] [rbp-80h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v13 = a1;
  v2 = sub_BC9860(&v13, a2);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v2;
  v4 = *(__int64 (**)())(*v13 + 3928);
  if ( v4 != sub_BC6000 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v13, a2) )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( !v5 )
  {
LABEL_9:
    sub_EE9E50(&v16, a2);
    v12.m128i_i64[0] = v16.m128i_i64[0];
    v10 = v18;
    v14 = _mm_load_si128(&v16);
    v11 = v19;
    v15 = v17;
    v12.m128i_i64[1] = v14.m128i_i64[1];
    while ( v10 == v12.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v11 == v12.m128i_i64[1] )
          return v3;
        if ( (v12.m128i_i8[8] & 3) != 0 )
LABEL_17:
          v12.m128i_i64[0] = sub_EF2B30(&v14);
LABEL_12:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v13 + 96))(v13, *(_QWORD *)v12.m128i_i64[0]) )
          return 0;
        v12.m128i_i64[1] = v14.m128i_i64[1];
        if ( (v14.m128i_i8[8] & 3) != 0 )
          break;
        v12.m128i_i64[0] = v14.m128i_i64[0] + 8;
        v14.m128i_i64[0] = v12.m128i_i64[0];
        if ( v10 != v12.m128i_i64[0] )
          goto LABEL_11;
      }
      if ( (v14.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v14);
      else
        sub_EF2750(&v14, 1);
      v12 = v14;
    }
LABEL_11:
    if ( (v12.m128i_i8[8] & 3) != 0 )
      goto LABEL_17;
    goto LABEL_12;
  }
  v6 = 0;
  v7 = 8LL * (unsigned int)(v5 - 1) + 8;
  while ( 1 )
  {
    v8 = *(_QWORD **)(v6 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*v13 + 136))(v13, *v8, v8 + 1) )
      return 0;
    v6 += 8;
    if ( v6 == v7 )
      goto LABEL_9;
  }
}
