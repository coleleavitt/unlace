__int64 __fastcall sub_14F7130(const __m128i *a1, unsigned int a2, unsigned int a3, __m128i a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 m128i_i64; // r12
  __int64 v9; // rbp
  size_t v10; // rax
  _WORD v11[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  if ( a1[2].m128i_i16[0] == 3 )
  {
    v4 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v4 + 760) )
    {
      *(_BYTE *)(v4 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 6LL) = 1;
    }
    v5 = a1[6].m128i_i64[0];
    a1[2].m128i_i16[0] = 1;
    sub_1708510(*(_QWORD *)(v5 + 656), *(_QWORD *)(v5 + 608));
    return 1;
  }
  else
  {
    m128i_i64 = (__int64)a1[1].m128i_i64;
    if ( sub_13D0E90((__int64)a1[1].m128i_i64, 14) )
    {
      return sub_14F6700((__int64)a1, a2, a4);
    }
    else if ( sub_13D0E90(m128i_i64, 13) )
    {
      return sub_14F63C0((__int64)a1, a2, a4);
    }
    else if ( sub_13D0E90(m128i_i64, 17) )
    {
      return sub_14F6480((__int64)a1, a2, a4);
    }
    else if ( sub_13D0E90(m128i_i64, 18) )
    {
      return sub_14F7020((__int64)a1, a2);
    }
    else if ( sub_13D0E90(m128i_i64, 25) && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 105LL) & 0x40) != 0 )
    {
      v11[0] = 63;
      sub_15680D0(a1, v11, 1, 0);
      return sub_1C36210(a1[6].m128i_i64[0], a1[1].m128i_u32[0], 0);
    }
    else
    {
      a1[127].m128i_i32[1] = a2;
      v9 = sub_14C2840(a1, a2, a4);
      if ( v9 == 1 )
      {
        v11[0] = 63;
        sub_15680D0(a1, v11, 1, 0);
        return 1;
      }
      else
      {
        v10 = j__strlen(&byte_22F0C30);
        sub_156A150(a1, 1642, &byte_22F0C30, v10);
        return sub_1534210(a1, v9, a3);
      }
    }
  }
}
