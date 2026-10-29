void __fastcall sub_18176A0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned int *v8; // rdi
  __m128i *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v17[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( a3[3].m128i_i16[4] && (v5 = a3[5].m128i_i64[0], (v5 & 2) != 0) )
  {
    v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    v8 = *(unsigned int **)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
    if ( (unsigned __int8)sub_B105B0((__int64)(v8 + 4), *v8, &v15) )
    {
      v9 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B10580(v9, *(_QWORD *)(a1 + 248), a3, v15);
      sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
    }
    else
    {
      sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)v7, 0x19C0u, 0);
      v14 = sub_15DD120((__int64)v17, (__int64)a3);
      v16 = *(_QWORD *)(v7 + 8);
      sub_18175F0(v14, &v16);
      sub_15F7200(v17);
    }
  }
  else
  {
    sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC57u, 0);
    v6 = sub_15DD120((__int64)v17, (__int64)a3);
    LODWORD(v16) = 3;
    sub_180A710(v6, (int *)&v16);
    sub_15F7200(v17);
  }
}
