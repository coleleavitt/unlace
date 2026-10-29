__int64 __fastcall sub_BAC8F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 i; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v8; // xmm1
  __int128 j; // rax
  __int64 result; // rax
  __m128i v11; // [rsp+0h] [rbp-158h]
  __int64 v12; // [rsp+10h] [rbp-148h]
  __int128 v13; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v14; // [rsp+108h] [rbp-50h] BYREF
  __int64 v15; // [rsp+118h] [rbp-40h]

  v3 = a2 + 8 * a3;
  if ( a2 != v3 )
  {
    for ( i = a2; v3 != i; i += 8 )
    {
      sub_E89E30(&v13);
      v8 = _mm_loadu_si128(&v14);
      v11 = v8;
      v12 = v15;
      for ( j = v13; ; j = v13 )
      {
        if ( v8.m128i_i64[0] == (_QWORD)j )
          goto LABEL_10;
LABEL_5:
        *((_QWORD *)&j + 1) = BYTE8(j) & 3;
        if ( DWORD2(j) )
          *(_QWORD *)&j = sub_ECEDF0(&v13);
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)*a1 + 96LL))(
                   *a1,
                   *(_QWORD *)j,
                   *((_QWORD *)&j + 1),
                   v5,
                   v6,
                   v7,
                   v11.m128i_i64[0],
                   v11.m128i_i64[1],
                   v12);
        if ( !(_BYTE)result )
          return result;
        *((_QWORD *)&j + 1) = *((_QWORD *)&v13 + 1);
        if ( (BYTE8(v13) & 3) == 0 )
          break;
        if ( (*((_QWORD *)&v13 + 1) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v13);
        else
          sub_ECEA10(&v13, 1);
      }
      *(_QWORD *)&j = v13 + 8;
      *(_QWORD *)&v13 = j;
      if ( v8.m128i_i64[0] != (_QWORD)j )
        goto LABEL_5;
LABEL_10:
      if ( v8.m128i_i64[1] != *((_QWORD *)&j + 1) )
        goto LABEL_5;
    }
  }
  return 1;
}

