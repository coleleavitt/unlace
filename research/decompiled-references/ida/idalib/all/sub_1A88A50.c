void __fastcall sub_1A88A50(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __m128i *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v18[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 64 > 2 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    v7 = 7040;
    goto LABEL_6;
  }
  v4 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v5 = v4[1];
  else
    v5 = *v4;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    v7 = 7308;
LABEL_6:
    sub_168B9F0((__int64)v18, a1, v6, v7, 0);
    sub_15F7200(v18);
    return;
  }
  v8 = sub_168B6C0((__int64)a1);
  v9 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = v9[294];
  v9[304] += 40LL;
  v13 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= (unsigned __int64)&v13[2].m128i_u64[1] && v12 )
    v9[294] = (char *)v13 + 40;
  else
    v13 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, v10, v11);
  sub_B160F0(v13, v8, a3);
  sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
}
