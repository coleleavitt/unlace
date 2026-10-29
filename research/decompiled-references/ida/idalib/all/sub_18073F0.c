void __fastcall sub_18073F0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x2B && (*(_BYTE *)(a2 + 9) & 2) == 0 )
  {
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a4[1].m128i_u32[2], 0xD56u, 0);
    sub_15F7200(v16);
  }
  else
  {
    v9 = *(_QWORD **)(a1 + 248);
    v10 = v9[294];
    v9[304] += 40LL;
    v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
      v9[294] = (char *)v11 + 40;
    else
      v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, a5, a6);
    sub_B0F6F0(v11, *(_QWORD *)(a1 + 248), a4);
    sub_B8CC60(a3, (__int64)v11, v12, v13, v14, v15);
  }
}
