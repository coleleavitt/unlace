void __fastcall sub_180E9B0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // [rsp+Fh] [rbp-C9h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v23[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = *(_QWORD **)(a1 + 248);
  if ( (a3[2].m128i_i8[2] & 0xF) != 4 )
    goto LABEL_6;
  v9 = v8[2181];
  v10 = *(_DWORD *)(v9 + 248);
  if ( ((v10 - 35) & 0xFFFFFFFD) != 0 && v10 != 1 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC86u, 0);
    v17 = sub_15DD120((__int64)v23, (__int64)a3);
    v22[0] = sub_22B7480(v9 + 216);
    v22[1] = v18;
    sub_166BAF0(v17, (__int64)v22);
    sub_15F7200(v23);
    return;
  }
  if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA8u, 0);
    v19 = sub_15DD120((__int64)v23, (__int64)a3);
    v21 = (a3[2].m128i_i8[3] & 2) != 0;
    v20 = sub_1588420(v19, (unsigned __int8 *)&v21);
    LODWORD(v22[0]) = 16;
    sub_180E4C0(v20, (int *)v22);
    sub_15F7200(v23);
  }
  else
  {
LABEL_6:
    v11 = v8[294];
    v8[304] += 40LL;
    v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v12[2].m128i_u64[1] && v11 )
      v8[294] = (char *)v12 + 40;
    else
      v12 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, a5, a6);
    sub_B14BE0(v12, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
  }
}
