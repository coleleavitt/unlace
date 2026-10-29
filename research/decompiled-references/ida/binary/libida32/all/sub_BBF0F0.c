__int64 __fastcall sub_BBF0F0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  unsigned int v5; // ebp
  __int64 v7; // r12
  __int64 v8; // r13
  __m128i v9; // rax
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)a1;
  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 224LL);
  if ( (char *)v3 != (char *)sub_BA1BB0 )
  {
    if ( !v3() )
      return 0;
    v2 = *(_QWORD *)a1;
  }
  v4 = *(__int64 (**)())(v2 + 5968);
  if ( v4 != sub_BA32B0 && !((unsigned __int8 (__fastcall *)(unsigned __int8 *, __int64))v4)(a1, a2) )
    return 0;
  v5 = a1[10];
  if ( (_BYTE)v5 )
  {
    sub_EC6110(&v12, a2);
    v9.m128i_i64[0] = v12.m128i_i64[0];
    v7 = v14;
    v10 = _mm_load_si128(&v12);
    v8 = v15;
    v11 = v13;
    v9.m128i_i64[1] = v10.m128i_i64[1];
    while ( v9.m128i_i64[0] == v7 )
    {
      while ( 1 )
      {
        if ( v9.m128i_i64[1] == v8 )
          return v5;
        if ( (v9.m128i_i8[8] & 3) != 0 )
LABEL_14:
          v9.m128i_i64[0] = sub_ECEDF0(&v10);
LABEL_9:
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 96LL))(
                a1,
                *(_QWORD *)v9.m128i_i64[0]) )
          return 0;
        v9.m128i_i64[1] = v10.m128i_i64[1];
        if ( (v10.m128i_i8[8] & 3) != 0 )
          break;
        v9.m128i_i64[0] = v10.m128i_i64[0] + 8;
        v10.m128i_i64[0] = v9.m128i_i64[0];
        if ( v9.m128i_i64[0] != v7 )
          goto LABEL_8;
      }
      if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v10);
      else
        sub_ECEA10(&v10, 1);
      v9 = v10;
    }
LABEL_8:
    if ( (v9.m128i_i8[8] & 3) != 0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  return (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(a2 + 16));
}

