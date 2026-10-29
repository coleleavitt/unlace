void __fastcall sub_180F980(__int64 a1, _BYTE *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // [rsp+Ah] [rbp-BEh] BYREF
  bool v18; // [rsp+Bh] [rbp-BDh] BYREF
  int v19; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v20[32]; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int8 *v21; // [rsp+30h] [rbp-98h] BYREF
  char v22; // [rsp+88h] [rbp-40h]
  char v23; // [rsp+94h] [rbp-34h]

  v17 = 0;
  if ( (unsigned __int8)sub_B8C710(a2, &v17, (__int64)a3, a4, a5, a6) )
  {
    v12 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
    sub_B1B670(v12, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60((__int64)a2, (__int64)v12, v13, v14, v15, v16);
    return;
  }
  if ( v17 )
  {
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19AEu, 0);
    if ( v22 )
    {
      sub_AE9DF0(&v21, (__int64)"weak_import", 1u);
    }
    else if ( v23 )
    {
      sub_180D0B0((__int64)v20, (__int64)"weak_import");
    }
    goto LABEL_13;
  }
  v7 = a2[28] & 0x7F;
  if ( v7 != 75 && v7 != 18 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 260LL);
    if ( (unsigned int)v8 > 0x1F || (v9 = 4160750114LL, !_bittest64(&v9, v8)) || v7 != 62 && v7 != 20 )
    {
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19C6u, 0);
      v10 = sub_15DD120((__int64)v20, (__int64)a3);
      v18 = (a3[2].m128i_i8[3] & 2) != 0;
      v11 = sub_1588420(v10, (unsigned __int8 *)&v18);
      v19 = 2;
      sub_180E4C0(v11, &v19);
LABEL_13:
      sub_15F7200(v20);
    }
  }
}
