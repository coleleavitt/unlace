__int64 __fastcall sub_1571800(const __m128i *a1, unsigned int a2, __m128i a3)
{
  __int16 v3; // ax
  unsigned __int64 v5; // rax
  int *v8; // rax
  int v9; // ecx
  int *v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 *v24; // rdi

  v3 = a1[2].m128i_i16[0];
  if ( v3 != 102 )
  {
    if ( v3 != 5 )
      goto LABEL_3;
    v8 = *(int **)(a1[1].m128i_i64[1] + 16);
    v9 = *(_QWORD *)v8;
    if ( v9 != 6 )
      goto LABEL_8;
    if ( v8[4] != 1952543859 || *((_WORD *)v8 + 10) != 25449 )
      goto LABEL_3;
  }
  v16 = a1->m128i_i64[1];
  v17 = *(_QWORD *)(v16 + 2944);
  if ( *(unsigned int *)(v16 + 2912) <= v17 )
  {
    if ( *(_WORD *)(sub_14180A0(v16, 1u) + 16) != 62 )
      goto LABEL_20;
  }
  else if ( *(_WORD *)(*(_QWORD *)(v16 + 2904) + 24 * v17 + 16) != 62 )
  {
LABEL_20:
    if ( a1[2].m128i_i16[0] != 5 )
      goto LABEL_3;
    v8 = *(int **)(a1[1].m128i_i64[1] + 16);
    v9 = *v8;
LABEL_8:
    if ( v9 != 3 )
      goto LABEL_3;
    v10 = v8 + 4;
    if ( *((_WORD *)v8 + 8) != 26980 || *((_BYTE *)v8 + 18) != 109 )
    {
LABEL_10:
      if ( *((_WORD *)v8 + 8) == 30062 && *((_BYTE *)v10 + 2) == 109 )
      {
        v11 = a1->m128i_i64[1];
        v12 = *(_QWORD *)(v11 + 2944);
        v13 = v12 >= *(unsigned int *)(v11 + 2912) ? sub_14180A0(v11, 1u) : *(_QWORD *)(v11 + 2904) + 24 * v12;
        if ( *(_WORD *)(v13 + 16) == 62 )
        {
          v14 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v14, a1[1].m128i_i32);
          v15 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v15, a1[1].m128i_i32);
        }
      }
      goto LABEL_3;
    }
    v20 = a1->m128i_i64[1];
    v21 = *(_QWORD *)(v20 + 2944);
    if ( v21 >= *(unsigned int *)(v20 + 2912) )
      v22 = sub_14180A0(v20, 1u);
    else
      v22 = *(_QWORD *)(v20 + 2904) + 24 * v21;
    if ( *(_WORD *)(v22 + 16) == 62 )
    {
      v23 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v23, a1[1].m128i_i32);
      v24 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v24, a1[1].m128i_i32);
      sub_14C4CD0(a1, a3);
      return 1;
    }
    if ( a1[2].m128i_i16[0] == 5 )
    {
      v8 = *(int **)(a1[1].m128i_i64[1] + 16);
      if ( *v8 == 3 )
      {
        v10 = v8 + 4;
        goto LABEL_10;
      }
    }
LABEL_3:
    v5 = sub_14BDAD0((__int64)a1, 0, a3);
    if ( v5 > 1 )
      sub_1AA2500(*(_QWORD *)(a1[6].m128i_i64[0] + 744), 20, 29, a2, v5 & 0xFFFFFFFFFFFFFFFELL);
    return 0;
  }
  v18 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v18, a1[1].m128i_i32);
  v19 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v19, a1[1].m128i_i32);
  sub_15715B0(a1, 29, a3);
  return 2;
}
