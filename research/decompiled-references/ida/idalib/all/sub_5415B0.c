unsigned __int64 __fastcall sub_5415B0(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  __int16 v5; // ax
  __m128i *v6; // rdi
  __int64 v7; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = *(_WORD *)(a1 + 68);
  if ( (v1 & 0x100) != 0 )
  {
    if ( !under_debugger )
      interr(975);
    BUG();
  }
  v3 = -1;
  v4 = *(_QWORD *)(qword_2CCB598 + 1824);
  if ( (v1 & 0x4000) != 0 )
    v3 = *(_QWORD *)(a1 + 16);
  sub_540F70(a1, 0);
  v5 = *(_WORD *)(a1 + 68);
  if ( (~(_BYTE)v5 & 0x70) == 0 )
  {
    v9.m128i_i64[0] = *(_QWORD *)a1;
    clear_tinfo_t(&v9);
    goto LABEL_11;
  }
  v6 = *(__m128i **)(a1 + 32);
  if ( v6 )
  {
    if ( (v5 & 8) != 0 )
    {
      sub_534B10(v4, v6->m128i_i64[0], v6->m128i_u32[2]);
    }
    else
    {
      v7 = v6->m128i_i64[1];
      if ( !v7 )
      {
LABEL_10:
        operator delete(v6, 0x20u);
        goto LABEL_11;
      }
      v9 = _mm_unpacklo_epi64(_mm_loadl_epi64(v6), (__m128i)(unsigned __int64)v7);
      sub_539600(v4 + 8, (unsigned __int64 *)&v9);
      qfree(*(void **)(*(_QWORD *)(a1 + 32) + 8LL));
    }
    v6 = *(__m128i **)(a1 + 32);
    if ( v6 )
      goto LABEL_10;
  }
  else if ( v3 != -1 )
  {
    sub_533120((_QWORD *)(v4 + 80), v3);
  }
LABEL_11:
  *(_QWORD *)(a1 + 72) = 0;
  *(_WORD *)(a1 + 68) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  return v10 - __readfsqword(0x28u);
}
