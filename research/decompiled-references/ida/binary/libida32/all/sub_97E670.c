unsigned __int64 *__fastcall sub_97E670(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 *v14; // rax

  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || a3 == 1 )
  {
    v9 = a1[1].m128i_i64[0];
    if ( !v9 )
    {
      v9 = sub_975DA0((__int64)a1, a2, v4, v5, v6, v7);
      a1[1].m128i_i64[0] = v9;
    }
    if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
    {
      v13 = a1[22].m128i_i64[0];
      if ( v13 )
        *(_QWORD *)(v13 + 8) = v9;
    }
    v14 = *(unsigned __int64 **)(v9 + 8);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(v9 + 16) )
    {
      sub_975850((const __m128i **)v9, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v10, v11, v12);
      v14 = *(unsigned __int64 **)(v9 + 8);
    }
    *v14 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v14[1] = 1;
    *(_QWORD *)(v9 + 8) += 16LL;
  }
  return sub_97E4B0(a1, (__int16 *)a2);
}

