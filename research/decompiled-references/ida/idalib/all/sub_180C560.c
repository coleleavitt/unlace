void __fastcall sub_180C560(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __m128i *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v26[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = (__int64 *)(a1 + 8);
  if ( sub_9B48E0(a2) )
  {
    sub_168B9F0((__int64)v26, v4, *(_DWORD *)(a2 + 24), 0xE5Du, 0);
    v25 = *(_WORD *)(a3[4].m128i_i64[1] + 8) == 23;
    sub_1588420((__int64)v26, (unsigned __int8 *)&v25);
    sub_15F7200(v26);
  }
  else if ( *(_WORD *)(a3[4].m128i_i64[1] + 8) == 23 )
  {
    v15 = sub_168B6C0((__int64)v4);
    v16 = (_QWORD *)sub_168B6C0((__int64)v4);
    v19 = v16[294];
    v16[304] += 40LL;
    v20 = (__m128i *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v16[295] >= (unsigned __int64)&v20[2].m128i_u64[1] && v19 )
      v16[294] = (char *)v20 + 40;
    else
      v20 = (__m128i *)sub_986170((__int64)(v16 + 294), 40, 40, 3, v17, v18);
    sub_B09530(v20, v15, a3);
    sub_B8CC60(a2, (__int64)v20, v21, v22, v23, v24);
  }
  else
  {
    v5 = sub_168B6C0((__int64)v4);
    v6 = (_QWORD *)sub_168B6C0((__int64)v4);
    v9 = v6[294];
    v6[304] += 40LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
      v6[294] = (char *)v10 + 40;
    else
      v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 40, 40, 3, v7, v8);
    sub_B14D30(v10, v5, a3);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  }
}
