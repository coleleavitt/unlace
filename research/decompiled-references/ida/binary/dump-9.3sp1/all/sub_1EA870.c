unsigned __int64 __fastcall sub_1EA870(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v22[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v23[4]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 *v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a2 != (__m128i *)(a1 + 416) )
  {
    a2->m128i_i64[0] = *(_QWORD *)(a1 + 416);
    if ( (unsigned __int64 *)(a1 + 424) != &a2->m128i_u64[1] )
    {
      sub_1E4290((__int64 *)&v24, a1 + 424);
      v5 = (unsigned __int64 *)a2->m128i_i64[1];
      v6 = v25;
      a2->m128i_i64[1] = (__int64)v24;
      v7 = a2[1].m128i_i64[0];
      v24 = v5;
      a2[1].m128i_i64[0] = v6;
      v25 = v7;
      if ( v5 )
      {
        sub_13FCB0(&v24);
        if ( v24 )
          qfree((__int64)v24);
      }
    }
    a2[1].m128i_i8[8] = *(_BYTE *)(a1 + 440);
  }
  for ( ; a4 != a3; a3 = *(_QWORD *)(a3 + 8) )
  {
    if ( !a3 )
    {
      if ( !under_debugger )
        sub_383060(52049);
      BUG();
    }
    sub_1E9F20((__int64)v22, a2->m128i_i64, a3);
    sub_127A20((__int64)&v24, a1, a3, 1, v8, v9);
    v10 = *(_QWORD *)(a1 + 64);
    sub_64640((__int64 *)&v24, v22, v11, v12, v13, v14);
    sub_317C60(v26, v23);
    v15 = *(_QWORD *)(v10 + 1504);
    sub_64640((__int64 *)&v24, (__int64 *)(v15 + 104), v16, v17, v18, v19);
    sub_317C60(v26, v15 + 120);
    sub_1E17E0(a2, (__int64 *)&v24);
    if ( v26[0] )
    {
      v26[1] = 0;
      qfree(v26[0]);
    }
    qfree((__int64)v24);
    if ( v23[0] )
    {
      v23[1] = 0;
      qfree(v23[0]);
    }
    qfree(v22[0]);
  }
  return v27 - __readfsqword(0x28u);
}
