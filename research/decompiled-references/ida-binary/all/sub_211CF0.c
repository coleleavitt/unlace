unsigned __int64 __fastcall sub_211CF0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = sub_23F1C0(a1, 0xFFFFFFFFLL);
  v4 = sub_240FC0(v3, 0);
  if ( v4 < a2 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_2105C0((__int64)&unk_8CBAA0, v4) )
    {
      if ( (unsigned __int8)xrefblk_t_first_from(v16, a2, 4) )
      {
        do
        {
          v8 = v17;
          if ( v17 != v5 )
          {
            v14 = a1[16];
            v13 = a1[15];
            v15.m128i_i64[0] = v17;
            v15.m128i_i16[4] = 0;
            v9 = a1[17];
            v10 = v14 + 1;
            if ( (unsigned __int64)&v15 < v13 || (unsigned __int64)&v15 >= v13 + 16 * v9 )
            {
              if ( v9 < v10 )
              {
                v11 = qvector_reserve(a1 + 15, v13, v14 + 1, 16);
                a1[15] = v11;
                v13 = v11;
                v14 = a1[16];
              }
              *(__m128i *)(v13 + 16 * v14) = _mm_load_si128(&v15);
            }
            else
            {
              if ( v9 < v10 )
              {
                v12 = qvector_reserve(a1 + 15, v13, v14 + 1, 16);
                a1[15] = v12;
                v13 = v12;
                v14 = a1[16];
              }
              v7 = v13 + 16 * v14;
              *(_QWORD *)v7 = v8;
              *(_WORD *)(v7 + 8) = 0;
            }
            ++a1[16];
            sub_211B40((__int64)a1);
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_from(v16) );
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
