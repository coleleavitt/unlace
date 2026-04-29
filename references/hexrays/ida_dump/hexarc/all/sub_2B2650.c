unsigned __int64 __fastcall sub_2B2650(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v17; // [rsp+0h] [rbp-98h] BYREF
  __int64 v18; // [rsp+10h] [rbp-88h] BYREF
  __m128i v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+28h] [rbp-70h]
  __m128i v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  __m128i v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]
  unsigned __int64 v27; // [rsp+78h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_10;
  v3 = 192 * a2 + *(_QWORD *)(a1 + 40);
  v4 = **(bool (__fastcall ***)(__int64))v3;
  if ( v4 == sub_2A5D60 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 40) - 3) <= 1 )
      goto LABEL_4;
LABEL_10:
    sub_2A6B00();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_10;
LABEL_4:
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 40) + 192 * a2;
  copy_argloc(v5 + 8, v5 + 144);
  v6 = *(_QWORD *)(v5 + 160);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  LODWORD(v18) = 0;
  *(_QWORD *)(v5 + 24) = v6;
  v8 = *(_QWORD *)(v5 + 168);
  v19 = si128;
  *(_QWORD *)(v5 + 32) = v8;
  LODWORD(v8) = *(_DWORD *)(v5 + 176);
  v20 = 0;
  *(_DWORD *)(v5 + 40) = v8;
  v26 = 0;
  v22 = 0;
  v23 = 0;
  v25 = -1;
  v21 = 0;
  v24 = 0;
  copy_argloc(v5 + 48, &v18);
  v9 = *(_QWORD *)(v5 + 72);
  v10 = v20;
  v11 = _mm_load_si128(&v21);
  v21 = 0;
  *(_QWORD *)(v5 + 64) = v19.m128i_i64[1];
  v20 = 0;
  if ( v9 )
  {
    *(_QWORD *)(v5 + 80) = 0;
    v17 = v11;
    qfree(v9);
    v11 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(v5 + 72) = v10;
  *(__m128i *)(v5 + 80) = v11;
  copy_tinfo_t(v5 + 96, &v22);
  v12 = *(_QWORD *)(v5 + 104);
  v13 = v23;
  v23 = 0;
  v14 = _mm_load_si128(&v24);
  v24 = 0;
  if ( v12 )
  {
    *(_QWORD *)(v5 + 112) = 0;
    v17 = v14;
    qfree(v12);
    v14 = _mm_load_si128(&v17);
  }
  v15 = v25;
  *(_QWORD *)(v5 + 104) = v13;
  *(__m128i *)(v5 + 112) = v14;
  *(_QWORD *)(v5 + 128) = v15;
  *(_DWORD *)(v5 + 136) = v26;
  sub_2B2600(&v18);
  *(_DWORD *)(v5 + 184) = -2;
  return v27 - __readfsqword(0x28u);
}
