unsigned __int64 __fastcall sub_18516C0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v7; // rax
  int v8; // edx
  __m128 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // [rsp+8h] [rbp-100h] BYREF
  __int64 v21; // [rsp+10h] [rbp-F8h] BYREF
  char v22; // [rsp+18h] [rbp-F0h]
  __int64 v23; // [rsp+1Ch] [rbp-ECh]
  char v24; // [rsp+24h] [rbp-E4h]
  void *v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D8h]
  _BYTE v27[24]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v30[11]; // [rsp+70h] [rbp-98h] BYREF
  char v31; // [rsp+C8h] [rbp-40h]
  char v32; // [rsp+D4h] [rbp-34h]

  if ( (*(_BYTE *)(*(_QWORD *)a2 + 4LL) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 720) & 1) != 0 || ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x45 )
    {
      *(_BYTE *)(a2 + 720) |= 1u;
    }
    else
    {
      sub_168B9F0((__int64)&v28, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xDADu, 0);
      if ( v31 )
      {
        sub_AE9DF0(v30, (__int64)"virtual", 1u);
      }
      else if ( v32 )
      {
        sub_18510A0((__int64)&v28, (__int64)"virtual");
      }
      LODWORD(v20) = *(_DWORD *)(*(_QWORD *)a2 + 244LL);
      HIDWORD(v20) = v20;
      v16 = sub_1587DB0((__int64)&v28, &v20);
      LODWORD(v21) = *(_DWORD *)(a2 + 80);
      HIDWORD(v21) = v21;
      sub_1587DB0(v16, &v21);
      sub_15F7200(&v28);
      *(_BYTE *)(a2 + 720) |= 1u;
    }
  }
  if ( *a4 != 2 )
  {
    v7 = *(_DWORD **)a2;
    v8 = (*(_BYTE *)(*(_QWORD *)a2 + 3LL) >> 2) & 0x1F;
    if ( ((*(_BYTE *)(*(_QWORD *)a2 + 3LL) >> 2) & 0x1F) == 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a2 + 720) & 1) == 0 && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
  {
    sub_168B9F0((__int64)&v28, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 80), 0xDADu, 0);
    if ( v31 )
    {
      sub_AE9DF0(v30, (__int64)"static", 1u);
    }
    else if ( v32 )
    {
      sub_18510A0((__int64)&v28, (__int64)"static");
    }
    LODWORD(v20) = *(_DWORD *)(*(_QWORD *)a2 + 168LL);
    HIDWORD(v20) = v20;
    v17 = sub_1587DB0((__int64)&v28, &v20);
    LODWORD(v21) = *(_DWORD *)(a2 + 80);
    HIDWORD(v21) = v21;
    sub_1587DB0(v17, &v21);
    sub_15F7200(&v28);
  }
  *(_BYTE *)(a2 + 720) |= 1u;
  *a4 = 0;
  v7 = *(_DWORD **)a2;
  v8 = (*(_BYTE *)(*(_QWORD *)a2 + 3LL) >> 2) & 0x1F;
  if ( ((*(_BYTE *)(*(_QWORD *)a2 + 3LL) >> 2) & 0x1F) != 0 )
  {
LABEL_26:
    sub_1E6B070(a1, 3503, v8, 0, v7[55], v7[57], v7[56], v7[58], 0);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
LABEL_6:
  sub_1839D60(a1, a2, 4054);
  sub_184AFF0(a1, a2, 0);
  v9 = &v28;
  v28.m128_i32[0] = 0;
  sub_147B3A0(a2, &v28);
  v11 = *(_QWORD *)(a2 + 128) + 144LL * v28.m128_u32[0];
  v12 = *(unsigned int *)(v11 + 80);
  if ( (_DWORD)v12 )
  {
    sub_168B9F0((__int64)&v28, (__int64 *)(a1 + 8), v12, 0x1338u, 0);
    LODWORD(v20) = (*(_BYTE *)(v11 + 56) & 8) != 0;
    v18 = sub_1588370((__int64)&v28, (unsigned int *)&v20);
    v19 = *(_DWORD *)(v11 + 80);
    v9 = (__m128 *)&v21;
    v23 = 0;
    v24 = 0;
    v25 = v27;
    v26 = 0;
    v27[0] = 0;
    v27[16] = 0;
    LODWORD(v21) = v19;
    HIDWORD(v21) = v19;
    v22 = 1;
    sub_1589170(v18, &v21);
    if ( v25 != v27 )
      operator delete(v25);
    sub_15F7200(&v28);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
  v13 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 26 )
    v13 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v9, v12, v10);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL) == *(_QWORD *)(v13 + 24)
    && (*(_BYTE *)(a2 + 720) & 1) == 0
    && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
  {
    return a3;
  }
  sub_A5E110(&v28, v13);
  v14 = *(_QWORD *)(a1 + 248);
  v29 = 0;
  v28.m128_u64[1] = 0;
  return sub_A73610(
           v14,
           *(_QWORD *)(v14 + 18632),
           (__int64 *)(v13 + 48),
           *(unsigned __int16 *)(v13 + 22),
           (const __m128i *)&v28,
           0);
}
