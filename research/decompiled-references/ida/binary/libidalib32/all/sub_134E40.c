__int64 __fastcall sub_134E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  const __m128i *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm0
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __m128i v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int128 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  __int64 v27; // [rsp+50h] [rbp-38h]
  __int64 v28; // [rsp+58h] [rbp-30h]
  unsigned __int64 v29; // [rsp+68h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 208);
  v3 = *(_QWORD *)(a1 + 184);
  v29 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 8 * a2);
  if ( v3 || (v3 = qword_251660) != 0 )
  {
    v5 = (const __m128i *)sub_15D010(v3 + 440);
    if ( *(_QWORD *)(a1 + 184) || (v6 = &qword_251660, qword_251660) )
    {
      v23 = v4;
      v20 = _mm_loadu_si128(v5);
      v10 = _mm_loadu_si128(v5 + 1);
      v11 = v5[2].m128i_i64[0];
      v21 = v10;
      v22 = v11;
      if ( v4 )
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(
                v4,
                a2,
                v6,
                v7,
                v8,
                v9,
                v20.m128i_i64[0],
                v20.m128i_i64[1],
                v21.m128i_i64[0],
                v21.m128i_i64[1],
                v22);
      v12 = (unsigned __int64)&v24;
      v25 = 0;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v24 = 0;
      if ( (unsigned int)sub_15E260(v3, &v24, &v20, 1) == 1 )
      {
        HIWORD(v26) = 5;
        sub_16BD30(v3, &v24, 6, 0);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
        if ( v13 == -1 || (v12 = v13, !(unsigned __int8)sub_120900()) )
          sub_8F660(
            (__int64)"Could not jump to location (no suitable view to jump)\n",
            v12,
            v14,
            v15,
            v16,
            v17,
            *(_OWORD *)&v20,
            *(_OWORD *)&v21,
            v22);
      }
      if ( v28 )
        qfree();
      if ( v23 )
        qfree();
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
      if ( v19 != -1 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v3 + 704LL))(v3, v19, 1, 0);
    }
  }
  else
  {
    sub_8F660((__int64)"Could not jump to location (no view to jump)\n");
  }
  return -1;
}

