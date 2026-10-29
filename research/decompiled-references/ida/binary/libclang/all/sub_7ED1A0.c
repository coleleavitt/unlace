__int64 __fastcall sub_7ED1A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm1
  __int128 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int128 v9; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+108h] [rbp-40h] BYREF

  sub_A85ED0(&v9);
  v5 = _mm_loadu_si128(&v10);
  v6 = v9;
LABEL_2:
  if ( v5.m128i_i64[0] == (_QWORD)v6 )
  {
LABEL_12:
    if ( v5.m128i_i64[1] == *((_QWORD *)&v6 + 1) )
      return 1;
  }
LABEL_3:
  v7 = BYTE8(v6) & 3;
  if ( (_DWORD)v7 )
    *(_QWORD *)&v6 = sub_ACE280(&v9, a2, v7, v2, v3, v4);
  while ( 1 )
  {
    a2 = *(_QWORD *)v6;
    result = sub_7EBA80(a1, *(_QWORD *)v6);
    if ( !(_BYTE)result )
      return result;
    if ( (BYTE8(v9) & 3) != 0 )
    {
      if ( *((_QWORD *)&v9 + 1) <= 3u )
      {
        a2 = 1;
        sub_ACE0F0(&v9, 1);
        v6 = v9;
        goto LABEL_2;
      }
      sub_ACE150(&v9);
      v6 = v9;
      if ( v5.m128i_i64[0] != (_QWORD)v9 )
        goto LABEL_3;
      goto LABEL_12;
    }
    *(_QWORD *)&v6 = v9 + 8;
    *(_QWORD *)&v9 = v6;
    if ( __PAIR128__(*((unsigned __int64 *)&v9 + 1), v6) == *(_OWORD *)&v5 )
      return 1;
  }
}

