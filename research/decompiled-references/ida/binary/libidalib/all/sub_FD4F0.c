unsigned __int64 __fastcall sub_FD4F0(__int64 a1)
{
  __int64 v1; // rax
  const __m128i *v3; // rax
  const __m128i *v4; // rbx
  __int64 v5; // rdi
  __m128i *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // r10
  __int64 (*v11)(); // rax
  __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v15; // rdi
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-A8h]
  __int64 v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  __m128i v20; // [rsp+30h] [rbp-88h] BYREF
  __m128i v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  __int128 v24; // [rsp+60h] [rbp-58h] BYREF
  __int64 v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+78h] [rbp-40h]
  __int64 v27; // [rsp+80h] [rbp-38h]
  __int64 v28; // [rsp+88h] [rbp-30h]
  unsigned __int64 v29; // [rsp+98h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  v3 = (const __m128i *)sub_15D8D0(v1 + 440);
  v21.m128i_i64[0] = 0;
  v21.m128i_i64[1] = -1;
  v4 = v3;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  if ( v3 != &v20 )
  {
    v20 = _mm_loadu_si128(v3);
    v21 = _mm_loadu_si128(v3 + 1);
    LODWORD(v22) = v3[2].m128i_i32[0];
    v5 = v3[2].m128i_i64[1];
    if ( v5 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = &v20;
  if ( (unsigned __int8)sub_91180(a1, (__int64)&v20) )
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v15 + 922) & 1) != 0
      && ((_DWORD)v22 != v4[2].m128i_i32[0]
       || v21.m128i_i64[1] != v4[1].m128i_i64[1]
       || *(double *)v20.m128i_i64 != *(double *)v4->m128i_i64
       || *(double *)&v20.m128i_i64[1] != *(double *)&v4->m128i_i64[1]
       || *(double *)v21.m128i_i64 != *(double *)v4[1].m128i_i64) )
    {
      v6 = &v20;
      sub_16B4D0(
        v15,
        &v20,
        0,
        v7,
        v8,
        v9,
        v16.m128i_i64[0],
        v16.m128i_i64[1],
        v17.m128i_i64[0],
        v17.m128i_i64[1],
        v18,
        v19);
    }
  }
  else
  {
    v10 = *(int **)(a1 + 8);
    if ( v10[5] > 0 )
    {
      v25 = 0;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v24 = 0;
      v11 = *(__int64 (**)())(*(_QWORD *)v10 + 360LL);
      if ( v11 == sub_F3E70
        || (v6 = (__m128i *)&v24,
            !((unsigned __int8 (__fastcall *)(int *, __int128 *, const __m128i *))v11)(v10, &v24, v4)) )
      {
        v16 = _mm_loadu_si128(v4);
        v17 = _mm_loadu_si128(v4 + 1);
        v18 = v4[2].m128i_i64[0];
        v6 = (__m128i *)&v24;
        v17.m128i_i16[7] = sub_FB000(a1, v17.m128i_i16[7]);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int128 *, __m128i *))(*(_QWORD *)v12 + 352LL))(
                v12,
                &v24,
                &v16) )
        {
          v13 = *(_QWORD *)(a1 + 8);
          v17.m128i_i32[3] = 0;
          v6 = (__m128i *)&v24;
          (*(void (__fastcall **)(__int64, __int128 *, __m128i *))(*(_QWORD *)v13 + 352LL))(v13, &v24, &v16);
        }
      }
      if ( v28 )
      {
        v6 = (__m128i *)&v24;
        sub_16B280(*(_QWORD *)(a1 + 8) + 440LL, &v24);
        if ( v28 )
          qfree();
      }
    }
  }
  sub_8E4E0(a1, (__int64)v6);
  if ( v23 )
    qfree();
  return v29 - __readfsqword(0x28u);
}

