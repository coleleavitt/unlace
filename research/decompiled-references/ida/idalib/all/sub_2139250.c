__int64 __fastcall sub_2139250(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // eax
  const char *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  void *v14; // rax
  __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64 *, __int64, unsigned __int64, __int64); // r8
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64 *, __int64, unsigned __int64, __int64); // r8
  __int64 v21; // rcx
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  __m128 v23; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v24[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v25; // [rsp+40h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  v2 = *(_QWORD *)(a1 + 184);
  if ( (unsigned __int8)sub_2153CB0(a1, &v22) )
  {
    v25 = 259;
    v24[0] = "expected identifier in directive";
    return (unsigned int)sub_21543E0(a1, v24, 0, 0);
  }
  v25 = 259;
  v24[0] = "expected comma";
  if ( (unsigned __int8)sub_2154510(a1, 26, v24) )
    return 1;
  v3 = *(_QWORD *)(a1 + 184);
  if ( (unsigned __int8)sub_21335C0(a1, &v23) )
    return 1;
  v23.m128_u64[1] = 0;
  if ( **(_DWORD **)(a1 + 48) == 26 )
  {
    sub_2132C70(a1, &v23);
    v8 = *(_QWORD *)(a1 + 184);
    if ( (unsigned __int8)sub_21335C0(a1, &v23.m128_u64[1]) )
      return 1;
    v9 = *(_QWORD *)(a1 + 168);
    v10 = *(_DWORD *)(v9 + 260);
    if ( v10 )
    {
      if ( (_BYTE)a2 )
      {
        if ( v10 != 1 )
          goto LABEL_7;
        goto LABEL_20;
      }
    }
    else
    {
      v11 = "alignment not supported on this target";
      if ( (_BYTE)a2 )
        goto LABEL_35;
    }
    if ( !*(_BYTE *)(v9 + 257) )
      goto LABEL_7;
LABEL_20:
    if ( v23.m128_u64[1] && (v23.m128_u64[1] & (v23.m128_u64[1] - 1)) == 0 )
    {
      _BitScanReverse64(&v12, v23.m128_u64[1]);
      v23.m128_u64[1] = (int)(63 - (v12 ^ 0x3F));
      goto LABEL_7;
    }
    v11 = "alignment must be a power of 2";
LABEL_35:
    v25 = 259;
    v24[0] = v11;
    return (unsigned int)sub_2153E90(a1, v8, v24, 0, 0);
  }
LABEL_7:
  v4 = sub_21544B0(a1);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v23.m128_u64[0];
  if ( v23.m128_i64[0] < 0 )
  {
    v25 = 259;
    v24[0] = "size must be non-negative";
    return (unsigned int)sub_2153E90(a1, v3, v24, 0, 0);
  }
  v6 = v22;
  if ( (*(_BYTE *)(v22 + 8) & 4) != 0 )
  {
    v13 = *(_BYTE *)(v22 + 9);
    if ( (v13 & 0x70) == 0x20 )
    {
      v13 &= 0x8Fu;
      *(_QWORD *)(v22 + 24) = 0;
      *(_BYTE *)(v6 + 9) = v13;
    }
    *(_BYTE *)(v6 + 8) &= ~4u;
    *(_QWORD *)v6 = 0;
  }
  else
  {
    if ( *(_QWORD *)v22 )
    {
LABEL_11:
      v24[0] = "invalid symbol redefinition";
      v25 = 259;
      return (unsigned int)sub_2153E90(a1, v2, v24, 0, 0);
    }
    v13 = *(_BYTE *)(v22 + 9);
  }
  if ( (v13 & 0x70) == 0x20 && (*(_BYTE *)(v6 + 8) & 0x40) == 0 )
  {
    v14 = sub_210D820(*(_QWORD *)(v6 + 24));
    *(_QWORD *)v6 = v14;
    if ( v14 )
      goto LABEL_11;
    v5 = v23.m128_u64[0];
    v6 = v22;
  }
  v15 = *(__int64 **)(a1 + 24);
  v16 = 1LL << v23.m128_i8[8];
  v17 = *v15;
  if ( (_BYTE)a2 )
  {
    v20 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64, __int64))(v17 + 488);
    v21 = 0xFFFFFFFFLL;
    if ( v16 )
    {
      _BitScanReverse64(&v16, v16);
      v21 = 63 - ((unsigned int)v16 ^ 0x3F);
    }
    v20(v15, v6, v5, v21);
  }
  else
  {
    v18 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64, __int64))(v17 + 480);
    v19 = 0xFFFFFFFFLL;
    if ( v16 )
    {
      _BitScanReverse64(&v16, v16);
      v19 = 63 - ((unsigned int)v16 ^ 0x3F);
    }
    v4 = a2;
    v18(v15, v6, v5, v19);
  }
  return v4;
}
