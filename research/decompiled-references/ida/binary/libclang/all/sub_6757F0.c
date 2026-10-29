__int64 __fastcall sub_6757F0(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
  __int64 v15; // r13
  __int64 v16; // r15
  __m128i v17; // rax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h]
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]

  v8 = sub_673BB0(
         a1,
         *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL),
         (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL) + 8,
         a4,
         a5,
         a6,
         a7);
  if ( (_BYTE)v8 )
  {
    v9 = v8;
    sub_AC4830(&v21);
    v14 = _mm_load_si128(&v21);
    v15 = v23;
    v16 = v24;
    v20 = v22;
    v17 = v14;
    v19 = v14;
LABEL_5:
    if ( v15 == v17.m128i_i64[0] )
    {
LABEL_11:
      if ( v16 == v17.m128i_i64[1] )
        return v9;
    }
    v18 = v17.m128i_i8[8] & 3;
    if ( (_DWORD)v18 )
      v17.m128i_i64[0] = sub_ACE280(&v19, a2, v18, v11, v12, v13);
    while ( 1 )
    {
      a2 = *(_QWORD *)v17.m128i_i64[0];
      if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v17.m128i_i64[0], a3, *(double *)v14.m128i_i64, a5, a6, a7) )
        break;
      v17.m128i_i64[1] = v19.m128i_i64[1];
      if ( (v19.m128i_i8[8] & 3) != 0 )
      {
        if ( v19.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v19, 1);
        }
        else
        {
          sub_ACE150(&v19);
        }
        v17 = v19;
        goto LABEL_5;
      }
      v17.m128i_i64[0] = v19.m128i_i64[0] + 8;
      v19.m128i_i64[0] = v17.m128i_i64[0];
      if ( v17.m128i_i64[0] == v15 )
        goto LABEL_11;
    }
  }
  return 0;
}

