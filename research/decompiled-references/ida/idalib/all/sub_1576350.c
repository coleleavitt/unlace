__int64 __fastcall sub_1576350(__int64 a1, const __m128i *a2, double a3, double a4)
{
  __int64 v6; // r15
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int32 v10; // r14d
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+8h] [rbp-110h]
  unsigned int v21; // [rsp+1Ch] [rbp-FCh]
  __m128i v22; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-E8h]
  char v24; // [rsp+40h] [rbp-D8h]
  __int32 v25; // [rsp+44h] [rbp-D4h]
  void *v26; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-C8h]
  _BYTE v28[56]; // [rsp+58h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-78h] BYREF

  v6 = a1 + 24;
  if ( sub_10CCDE0(a2[2].m128i_i16[0]) )
  {
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = 0x600000000LL;
  }
  else
  {
    v8 = _mm_loadu_si128(a2 + 1);
    v9 = a2[2].m128i_i64[0];
    v24 = 0;
    v25 = 0;
    v10 = a2[1].m128i_i32[0];
    v26 = v28;
    v27 = 0x600000000LL;
    v22 = v8;
    v23 = v9;
    if ( (_WORD)v9 == 5
      || (v20 = v9, v21 = (unsigned __int16)v9, !sub_10CCDE0(v9))
      && (v20 > 0x13u || (v11 = 982656, !_bittest64(&v11, v21)))
      && v20 != 1
      && ((v20 - 8) & 0xFFF7) != 0
      && v22.m128i_i64[1]
      && sub_FDE0B0((_WORD *)v22.m128i_i64[1], *(_QWORD *)(a2->m128i_i64[1] + 56)) )
    {
      v13 = a2->m128i_i64[1];
      v14 = *(_QWORD *)(v13 + 2944);
      v15 = v14 >= *(unsigned int *)(v13 + 2912) ? sub_14180A0(v13, 1u) : *(_QWORD *)(v13 + 2904) + 24 * v14;
      if ( *(_WORD *)(v15 + 16) == 62 )
      {
        v16 = (__int64 *)a2->m128i_i64[1];
        a2[2].m128i_i32[2] = a2[1].m128i_i32[0];
        sub_14634E0(v16, a2[1].m128i_i32);
        v17 = (__int64 *)a2->m128i_i64[1];
        a2[2].m128i_i32[2] = a2[1].m128i_i32[0];
        sub_14634E0(v17, a2[1].m128i_i32);
        if ( (_WORD)v23 == 5
          && (v19 = *(_QWORD *)(v22.m128i_i64[1] + 16), *(_DWORD *)v19 == 8)
          && *(_QWORD *)(v19 + 16) == 0x796C6E6F64616572LL )
        {
          v25 = v10;
        }
        else
        {
          sub_1564840((__int64)ptr, (__int64)a2, v22.m128i_i32, 1530);
          v18 = 0;
          if ( (unsigned __int16)(v23 - 7) > 0xCu && (_WORD)v23 != 1 )
            v18 = v22.m128i_i64[1];
          sub_AE9DF0((unsigned __int8 **)ptr, v18, 5u);
          sub_AE9DF0((unsigned __int8 **)ptr, (__int64)"cache", 1u);
          sub_AE9DF0((unsigned __int8 **)ptr, 0, 2u);
          sub_AEA040((__int64)ptr);
        }
      }
    }
    sub_1572900((__int64)ptr, (__int64)a2, 8u, 0x33u, v8, a4);
    sub_1576230((char ***)&v26, (char ***)ptr);
    if ( ptr[0] != &v30 )
      free(ptr[0]);
    v12 = v24;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v25;
    *(_QWORD *)(a1 + 16) = 0x600000000LL;
    if ( (_DWORD)v27 )
      sub_1576230((char ***)(a1 + 8), (char ***)&v26);
    if ( v26 != v28 )
      free(v26);
  }
  return a1;
}
