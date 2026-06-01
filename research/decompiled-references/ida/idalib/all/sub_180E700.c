void __fastcall sub_180E700(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __m128i *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // al
  __int64 v19; // rdi
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // [rsp+Bh] [rbp-BDh] BYREF
  int v25; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v26[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( sub_B8DC30(a2, 1)
    || (v18 = *(_BYTE *)(a2 + 28) & 0x7F, v18 == 8)
    || v18 == 18
    || (unsigned int)v18 - 26 <= 0x1A
    && ((v19 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL),
         *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
     || sub_C1BF80(v19, 1, v6, v7)) )
  {
    v10 = *(_QWORD **)(a1 + 248);
    v11 = v10[294];
    v10[304] += 40LL;
    v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[295] >= v12 + 40 && v11 )
    {
      v10[294] = v12 + 40;
      v13 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v13 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v8, v9);
    }
    sub_B096F0(v13, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
  }
  else
  {
    v20 = 3240;
    v21 = a3[2].m128i_i8[2] & 0xF;
    if ( v21 != 2 )
    {
      if ( v21 == 3 || (v20 = 6598, (a3[2].m128i_i8[3] & 1) != 0) )
        v20 = 3240;
    }
    sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], v20, 0);
    v22 = sub_15DD120((__int64)v26, (__int64)a3);
    v24 = (a3[2].m128i_i8[3] & 2) != 0;
    v23 = sub_1588420(v22, (unsigned __int8 *)&v24);
    v25 = 4;
    sub_180E4C0(v23, &v25);
    sub_15F7200(v26);
  }
}
