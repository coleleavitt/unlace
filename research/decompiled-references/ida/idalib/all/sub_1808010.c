void __fastcall sub_1808010(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  _BYTE v18[184]; // [rsp+0h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = v8;
  if ( *(_BYTE *)(v8 + 16) == 42 )
    goto LABEL_2;
  v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v17 != 42 )
    goto LABEL_10;
  v9 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  if ( v9 )
  {
LABEL_2:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
      goto LABEL_3;
  }
  v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_10:
  if ( v17 != 11 )
  {
    sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xD3Du, 0);
    sub_15F7200(v18);
    return;
  }
LABEL_3:
  v10 = *(_QWORD **)(a1 + 248);
  v11 = v10[294];
  v10[304] += 40LL;
  v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[295] >= (unsigned __int64)&v12[2].m128i_u64[1] && v11 )
    v10[294] = (char *)v12 + 40;
  else
    v12 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, a5, a6);
  sub_B0F470(v12, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
}
