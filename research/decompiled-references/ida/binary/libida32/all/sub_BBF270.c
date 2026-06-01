__int64 __fastcall sub_BBF270(__int64 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rax
  unsigned int v6; // ebx
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
  if ( (unsigned __int8)sub_BA5B20(&v11, a2) )
  {
    v2 = (unsigned __int8 *)v11;
    v3 = *v11;
    v4 = *(__int64 (**)())(*v11 + 4472);
    if ( v4 != sub_BA2700 )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v11, a2) )
        return 0;
      v2 = (unsigned __int8 *)v11;
      v3 = *v11;
    }
    v5 = *(__int64 (**)())(v3 + 4480);
    if ( v5 == sub_BA2710 )
    {
LABEL_4:
      v6 = v2[10];
      if ( !(_BYTE)v6 )
        return (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)v2 + 96LL))(
                 v2,
                 *(_QWORD *)(a2 + 24));
      sub_EC6110(&v14, a2);
      v10.m128i_i64[0] = v14.m128i_i64[0];
      v8 = v16;
      v12 = _mm_load_si128(&v14);
      v9 = v17;
      v13 = v15;
      v10.m128i_i64[1] = v12.m128i_i64[1];
      while ( v8 == v10.m128i_i64[0] )
      {
        while ( 1 )
        {
          if ( v9 == v10.m128i_i64[1] )
            return v6;
          if ( (v10.m128i_i8[8] & 3) != 0 )
LABEL_17:
            v10.m128i_i64[0] = sub_ECEDF0(&v12);
LABEL_12:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v11 + 96))(v11, *(_QWORD *)v10.m128i_i64[0]) )
            return 0;
          v10.m128i_i64[1] = v12.m128i_i64[1];
          if ( (v12.m128i_i8[8] & 3) != 0 )
            break;
          v10.m128i_i64[0] = v12.m128i_i64[0] + 8;
          v12.m128i_i64[0] = v10.m128i_i64[0];
          if ( v8 != v10.m128i_i64[0] )
            goto LABEL_11;
        }
        if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v12);
        else
          sub_ECEA10(&v12, 1);
        v10 = v12;
      }
LABEL_11:
      if ( (v10.m128i_i8[8] & 3) != 0 )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( ((unsigned __int8 (__fastcall *)(unsigned __int8 *, __int64))v5)(v2, a2) )
    {
      v2 = (unsigned __int8 *)v11;
      goto LABEL_4;
    }
  }
  return 0;
}

