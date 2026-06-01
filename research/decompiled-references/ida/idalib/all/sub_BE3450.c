__int64 __fastcall sub_BE3450(unsigned __int8 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  unsigned int v5; // ebp
  unsigned __int8 (__fastcall *v6)(unsigned __int8 *); // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __m128i v10; // rax
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)a1;
  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 224LL);
  if ( (char *)v3 != (char *)sub_BC58F0 )
  {
    if ( !v3() )
      return 0;
    v2 = *(_QWORD *)a1;
  }
  v4 = *(__int64 (**)())(v2 + 6008);
  if ( v4 == sub_BC7040 || ((unsigned __int8 (__fastcall *)(unsigned __int8 *, _QWORD *))v4)(a1, a2) )
  {
    v5 = a1[10];
    if ( !(_BYTE)v5 )
    {
      v6 = *(unsigned __int8 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 96LL);
      if ( a2[1] )
      {
        if ( !v6(a1) )
          return 0;
        v6 = *(unsigned __int8 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 96LL);
      }
      if ( ((unsigned __int8 (__fastcall *)(unsigned __int8 *, _QWORD))v6)(a1, a2[7]) )
      {
        v11 = sub_EF2350(a2);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a1 + 96LL))(a1, v11) )
          return (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, a2[8]);
      }
      return 0;
    }
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
          return v5;
        if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_18:
          v10.m128i_i64[0] = sub_EF2B30(&v12);
LABEL_13:
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 96LL))(
                a1,
                *(_QWORD *)v10.m128i_i64[0]) )
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
  return 0;
}
