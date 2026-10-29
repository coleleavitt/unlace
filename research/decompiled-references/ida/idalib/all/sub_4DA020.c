__int64 __fastcall sub_4DA020(__int64 a1, __int64 *a2, __int64 a3, int a4, unsigned __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // r12
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // al
  char aflags; // dl
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  __m128i v26; // [rsp+20h] [rbp-48h] BYREF

  v7 = 0;
  v9 = a5;
  v23 = a3;
  v26.m128i_i64[1] = __readfsqword(0x28u);
  if ( (a7 & 2) == 0 )
  {
    v19 = sub_4CA6C0(a1, a3, a5);
    v7 = v19 - v9;
    v9 = v19;
  }
  if ( (a7 & 1) == 0 )
  {
    if ( (sub_3BE900((_QWORD *)a1, v23, 4) & 0x600) == 0x200 )
      v23 = sub_3C2650((_QWORD *)a1, v23);
    aflags = get_aflags(v23);
    v18 = a7 | 1;
    if ( (aflags & 0x80) == 0 )
      v18 = a7;
    a7 = v18;
  }
  v26.m128i_i64[0] = 0;
  v11 = sub_505D70(a1 + 1624, v9);
  v12 = sub_510810(a1, v11, v7);
  if ( a6 != -1 )
    a6 += v12;
  v13 = sub_510810(a1, v11, a6);
  v14 = v13;
  if ( v11 )
  {
    v25 = v13;
    v15 = is_spec_segm(*(unsigned __int8 *)(v11 + 184));
    v14 = v25;
    if ( v15 )
    {
      v26.m128i_i64[0] -= v12;
      v12 = 0;
    }
  }
  if ( !(unsigned __int8)sub_4D9AA0(*(_QWORD *)a1, a2, v23, a4, v9, v14, &v26, a7) )
    return -1;
  sub_50CE70(a1, a2, v26.m128i_i64[0] - v12, 1);
  if ( *(_BYTE *)(a1 + 2864) )
  {
    v20 = *(_QWORD *)(a1 + 2848);
    v21 = *(_QWORD *)(a1 + 2840);
    if ( *(_QWORD *)(a1 + 2856) < (unsigned __int64)(v20 + 1) )
    {
      v22 = qvector_reserve(a1 + 2840, v21, v20 + 1, 8);
      *(_QWORD *)(a1 + 2840) = v22;
      v21 = v22;
      v20 = *(_QWORD *)(a1 + 2848);
    }
    *(_QWORD *)(v21 + 8 * v20) = v9;
    ++*(_QWORD *)(a1 + 2848);
  }
  return (a2[1] == 0) + a2[1] - 1;
}
