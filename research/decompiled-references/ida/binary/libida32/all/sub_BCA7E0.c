__int64 __fastcall sub_BCA7E0(__int64 *a1, const __m128i *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // r12
  __m128i v10; // rax
  __int64 *v11; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v12; // [rsp+10h] [rbp-98h]
  __int64 v13; // [rsp+20h] [rbp-88h]
  __m128i v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h]
  __m128i v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int64 v19; // [rsp+70h] [rbp-38h]

  v11 = a1;
  if ( !(unsigned __int8)sub_BA5F70(&v11, (__int64)a2) )
    return 0;
  v2 = v11;
  v3 = *v11;
  v4 = *(__int64 (**)())(*v11 + 5840);
  if ( v4 != sub_BA31B0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, const __m128i *))v4)(v11, a2) )
      return 0;
    v2 = v11;
    v3 = *v11;
  }
  v5 = a2[3].m128i_i64[0];
  v12 = _mm_loadu_si128(a2 + 2);
  v13 = v5;
  v16 = v12;
  v17 = v5;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const __m128i *, __int64))(v3 + 64))(v2, a2, v5) )
  {
    v6 = sub_BCA0F0(&v11, (__int64)a2);
    if ( (_BYTE)v6 )
    {
      sub_EC6110(&v16, a2);
      v10.m128i_i64[0] = v16.m128i_i64[0];
      v8 = v18;
      v14 = _mm_load_si128(&v16);
      v9 = v19;
      v15 = v17;
      v10.m128i_i64[1] = v14.m128i_i64[1];
      while ( v8 == v10.m128i_i64[0] )
      {
        while ( 1 )
        {
          if ( v9 == v10.m128i_i64[1] )
            return v6;
          if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_15:
            v10.m128i_i64[0] = sub_ECEDF0(&v14);
LABEL_10:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *(_QWORD *)v10.m128i_i64[0]) )
            return 0;
          v10.m128i_i64[1] = v14.m128i_i64[1];
          if ( (v14.m128i_i8[8] & 3) != 0 )
            break;
          v10.m128i_i64[0] = v14.m128i_i64[0] + 8;
          v14.m128i_i64[0] = v10.m128i_i64[0];
          if ( v8 != v10.m128i_i64[0] )
            goto LABEL_9;
        }
        if ( (v14.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v14);
        else
          sub_ECEA10(&v14, 1);
        v10 = v14;
      }
LABEL_9:
      if ( (v10.m128i_i8[8] & 3) != 0 )
        goto LABEL_15;
      goto LABEL_10;
    }
  }
  return 0;
}

