void __fastcall sub_180FC70(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rdi
  _DWORD *v19; // rdx
  bool v20; // al
  bool v21; // zf
  unsigned int v22; // edx
  _DWORD *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v26[184]; // [rsp+10h] [rbp-B8h] BYREF

  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  v10 = (unsigned int)(v9 - 58);
  if ( (unsigned int)v10 <= 4 )
    goto LABEL_2;
  if ( (unsigned int)(v9 - 49) > 2 )
  {
    sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x7Fu, 0);
    sub_15DD120((__int64)v26, (__int64)a3);
    sub_15F7200(v26);
  }
  else
  {
    v17 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*v17 + 17) & 4) != 0 )
    {
      v18 = *(_QWORD *)(a1 + 248);
      v11 = *(_QWORD *)(a1 + 248);
      goto LABEL_7;
    }
    v20 = sub_F62670(*v17, nullptr, v10, a4, a5, a6);
    v18 = *(_QWORD *)(a1 + 248);
    v21 = !v20;
    v11 = *(_QWORD *)(a1 + 248);
    if ( !v21 || (*(_BYTE *)(a2 + 68) & 1) == 0 )
    {
LABEL_7:
      v19 = *(_DWORD **)(v18 + 17448);
      if ( v19[62] != 38 || v19[64] == 3 && (unsigned int)(v19[65] - 24) <= 1 )
        goto LABEL_3;
      goto LABEL_10;
    }
    sub_A97D20(v18, *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    v11 = *(_QWORD *)(a1 + 248);
    v23 = *(_DWORD **)(v11 + 17448);
    if ( v23[62] != 38 || v23[64] != 3 || (unsigned int)(v23[65] - 24) > 1 )
    {
      if ( v22 <= 8 )
      {
        sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19B5u, 0);
        sub_15F7200(v26);
LABEL_2:
        v11 = *(_QWORD *)(a1 + 248);
LABEL_3:
        v12 = (__m128i *)sub_1806F50((__int64 *)(v11 + 2352), 40, 3u);
        sub_B173A0(v12, *(_QWORD *)(a1 + 248), a3);
        sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
        return;
      }
      v18 = *(_QWORD *)(a1 + 248);
LABEL_10:
      v11 = v18;
      goto LABEL_3;
    }
    if ( v22 > 8 )
      goto LABEL_3;
    sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19A9u, 0);
    v24 = sub_15DD120((__int64)v26, (__int64)a3);
    v25 = *(_QWORD *)(a2 + 48);
    sub_162B6D0(v24, &v25);
    sub_15F7200(v26);
  }
}
