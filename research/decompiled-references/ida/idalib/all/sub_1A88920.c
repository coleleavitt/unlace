void __fastcall sub_1A88920(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __m128i *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[184]; // [rsp+0h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v8 = *(_QWORD *)v8;
  v9 = *(_BYTE *)(v8 + 8) & 0x7F;
  if ( v9 == 20 )
  {
    v11 = v8 - 48;
LABEL_11:
    if ( v11 )
    {
      sub_BAC3D0(v11, a2, (__int64)a3, a4, a5, a6);
      v12 = sub_168B6C0((__int64)a1);
      v13 = (_QWORD *)sub_168B6C0((__int64)a1);
      v16 = v13[294];
      v13[304] += 40LL;
      v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13[295] >= (unsigned __int64)&v17[2].m128i_u64[1] && v16 )
        v13[294] = (char *)v17 + 40;
      else
        v17 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, v14, v15);
      sub_B15FA0(v17, v12, a3);
      sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
    }
    return;
  }
  if ( v9 != 23 || (v10 = *(_QWORD *)(v8 - 8), (v10 & 7) == 0) && (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_168B9F0((__int64)v22, a1, *(_DWORD *)(a2 + 24), 0xE59u, 0);
    sub_15F7200(v22);
    return;
  }
  if ( v8 != 48 )
  {
    v11 = *(_QWORD *)(v8 + 40);
    goto LABEL_11;
  }
}
