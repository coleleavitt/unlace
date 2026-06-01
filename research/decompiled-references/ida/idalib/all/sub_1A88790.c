void __fastcall sub_1A88790(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __m128i *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v17[184]; // [rsp+0h] [rbp-B8h] BYREF

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v4 - 64 > 2 )
  {
    if ( v4 == 75 )
    {
      v6 = *(_QWORD *)(a2 + 56);
LABEL_4:
      if ( sub_F673B0(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_5;
LABEL_10:
      sub_168B9F0((__int64)v17, a1, *(_DWORD *)(a2 + 24), 0x10EFu, 0);
      sub_15F7200(v17);
      return;
    }
    sub_168B9F0((__int64)v17, a1, *(_DWORD *)(a2 + 24), 0x1BF9u, 0);
    sub_15F7200(v17);
  }
  else
  {
    v5 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) == 0 )
    {
      v6 = *v5;
      goto LABEL_4;
    }
    if ( !sub_F673B0(*(_QWORD *)(v5[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_10;
  }
LABEL_5:
  v7 = sub_168B6C0((__int64)a1);
  v8 = (_QWORD *)sub_168B6C0((__int64)a1);
  v11 = v8[294];
  v8[304] += 40LL;
  v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8[295] >= (unsigned __int64)&v12[2].m128i_u64[1] && v11 )
    v8[294] = (char *)v12 + 40;
  else
    v12 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, v9, v10);
  sub_B16260(v12, v7, a3);
  sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
}
