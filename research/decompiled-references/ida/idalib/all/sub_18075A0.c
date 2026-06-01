void __fastcall sub_18075A0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v14[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 108LL) & 1) != 0 )
  {
    v4 = sub_168B6C0(a1 + 8);
    v5 = (_QWORD *)sub_168B6C0(a1 + 8);
    v8 = v5[294];
    v5[304] += 40LL;
    v9 = (__m128i *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v5[295] >= (unsigned __int64)&v9[2].m128i_u64[1] && v8 )
      v5[294] = (char *)v9 + 40;
    else
      v9 = (__m128i *)sub_986170((__int64)(v5 + 294), 40, 40, 3, v6, v7);
    sub_B09D70(v9, v4, a3);
    sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
  }
  else
  {
    sub_168B9F0((__int64)v14, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1BDDu, 0);
    sub_15F7200(v14);
  }
}
