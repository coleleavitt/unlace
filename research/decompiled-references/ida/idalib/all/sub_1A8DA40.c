void __fastcall sub_1A8DA40(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __m128i *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v24[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( !a3[3].m128i_i16[4] || (v4 = a3[5].m128i_i64[0], (v4 & 2) == 0) || (v7 = v4 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v24, a1, v5, 0x10F5u, 0);
    v6 = sub_15DD120((__int64)v24, (__int64)a3);
    v23 = 0;
    sub_1587D10(v6, &v23);
    sub_15F7200(v24);
    return;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 64 > 2 )
    goto LABEL_8;
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  if ( *(_DWORD *)v8 != 2 || *(_WORD *)(v8 + 16) != 25705 )
  {
    sub_168B9F0((__int64)v24, a1, a3[1].m128i_u32[2], 0x10F7u, 0);
    sub_15DD120((__int64)v24, (__int64)a3);
    sub_15F7200(v24);
    return;
  }
  v21 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  v22 = (*(_QWORD *)(a2 + 80) & 4) != 0 ? v21[1] : *v21;
  if ( sub_F67340(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
LABEL_8:
    v9 = sub_168B6C0((__int64)a1);
    v10 = *(_QWORD *)(v7 + 8);
    v11 = v9;
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    v15 = v12[294];
    v12[304] += 48LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v16[3] && v15 )
      v12[294] = v16 + 3;
    else
      v16 = (__m128i *)sub_986170((__int64)(v12 + 294), 48, 48, 3, v13, v14);
    sub_B15B60(v16, v11, a3, v10);
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
  }
  else
  {
    sub_168B9F0((__int64)v24, a1, a3[1].m128i_u32[2], 0x10F8u, 0);
    sub_15F7200(v24);
  }
}
