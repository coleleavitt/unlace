void __fastcall sub_180B7D0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax

  v5 = sub_B8DC30(a2, 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 24);
  else
    v6 = *(_QWORD *)(a2 + 80);
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v7 - 34 > 5 )
  {
    if ( v7 == 18 )
    {
      v20 = sub_BA8620(a2);
      v9 = (unsigned int)v20;
      v10 = HIDWORD(v20);
    }
    else
    {
      v10 = 0;
      v9 = 0;
    }
  }
  else
  {
    v8 = sub_B77620(a2);
    v9 = (unsigned int)v8;
    v10 = HIDWORD(v8);
  }
  if ( (unsigned __int8)sub_180B6D0(a1, v6, (__int64)a3, 0, (v10 << 32) | v9, 1) )
  {
    v13 = *(_QWORD **)(a1 + 248);
    v14 = v13[294];
    v13[304] += 40LL;
    v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13[295] >= (unsigned __int64)&v15[2].m128i_u64[1] && v14 )
      v13[294] = (char *)v15 + 40;
    else
      v15 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, v11, v12);
    sub_B18DB0(v15, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
  }
}
