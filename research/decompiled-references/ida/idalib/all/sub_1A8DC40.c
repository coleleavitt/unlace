void __fastcall sub_1A8DC40(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __m128i *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-E0h]
  int v22; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v23[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( a3[3].m128i_i16[4]
    && (v4 = a3[5].m128i_i64[0], (v4 & 2) != 0)
    && (v7 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8)) != 0 )
  {
    v8 = 0;
    if ( (a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      v8 = *(_QWORD *)((a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
    v9 = 0;
    if ( (a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      v9 = *(_QWORD *)((a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8);
    v21 = v8;
    v10 = sub_168B6C0((__int64)a1);
    v11 = (_QWORD *)sub_168B6C0((__int64)a1);
    v13 = v21;
    v14 = v11[294];
    v11[304] += 64LL;
    v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11[295] >= (unsigned __int64)&v15[4] && v14 )
    {
      v11[294] = v15 + 4;
    }
    else
    {
      v20 = sub_986170((__int64)(v11 + 294), 64, 64, 3, v21, v12);
      v13 = v21;
      v15 = (__m128i *)v20;
    }
    sub_B15BC0(v15, v10, a3, v7, v13, v9);
    sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v23, a1, v5, 0x10F5u, 0);
    v6 = sub_15DD120((__int64)v23, (__int64)a3);
    v22 = 0;
    sub_1587D10(v6, &v22);
    sub_15F7200(v23);
  }
}
