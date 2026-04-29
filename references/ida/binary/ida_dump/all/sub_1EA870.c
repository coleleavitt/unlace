unsigned __int64 __fastcall sub_1EA870(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v20[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v21[4]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 *v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+48h] [rbp-60h]
  _QWORD v24[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 != (__m128i *)(a1 + 416) )
  {
    a2->m128i_i64[0] = *(_QWORD *)(a1 + 416);
    if ( (unsigned __int64 *)(a1 + 424) != &a2->m128i_u64[1] )
    {
      sub_1E4290((__int64 *)&v22, a1 + 424);
      v5 = (unsigned __int64 *)a2->m128i_i64[1];
      v6 = v23;
      a2->m128i_i64[1] = (__int64)v22;
      v7 = a2[1].m128i_i64[0];
      v22 = v5;
      a2[1].m128i_i64[0] = v6;
      v23 = v7;
      if ( v5 )
      {
        sub_13FCB0(&v22);
        if ( v22 )
          qfree();
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
    sub_1E9F20((__int64)v20, a2->m128i_i64, a3);
    sub_127A20((__int64)&v22, a1, a3, 1);
    v8 = *(_QWORD *)(a1 + 64);
    sub_64640((__int64 *)&v22, v20, v9, v10, v11, v12);
    sub_317C60(v24, v21);
    v13 = *(_QWORD *)(v8 + 1504);
    sub_64640((__int64 *)&v22, (__int64 *)(v13 + 104), v14, v15, v16, v17);
    sub_317C60(v24, v13 + 120);
    sub_1E17E0(a2, (__int64 *)&v22);
    if ( v24[0] )
    {
      v24[1] = 0;
      qfree();
    }
    qfree();
    if ( v21[0] )
    {
      v21[1] = 0;
      qfree();
    }
    qfree();
  }
  return v25 - __readfsqword(0x28u);
}
