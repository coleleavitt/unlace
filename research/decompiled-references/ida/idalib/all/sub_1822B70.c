void __fastcall sub_1822B70(_QWORD *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // r14
  __int64 v14; // r13
  __m128i *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-E0h] BYREF
  char *v28; // [rsp+10h] [rbp-D8h] BYREF
  size_t v29; // [rsp+18h] [rbp-D0h]
  _QWORD v30[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v32; // [rsp+40h] [rbp-A8h] BYREF
  char v33; // [rsp+98h] [rbp-50h]
  unsigned int v34; // [rsp+A0h] [rbp-48h]
  char v35; // [rsp+A4h] [rbp-44h]

  v28 = nullptr;
  v29 = 0;
  if ( (unsigned __int8)sub_181F2D0((__int64)a1, (__int64)a3, &v28, nullptr, a4, a5) )
  {
    v11 = *(_QWORD *)(a2 + 80);
    if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 && (v11 & 0x2000000) == 0
      || (v11 & 0x2000000) != 0
      || (*(_BYTE *)(a2 + 83) & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128))
      || (*(_BYTE *)(a2 + 83) & 0x40) != 0
      || (v12 = HIDWORD(v11), (v12 & 0x20) != 0)
      || (v12 & 0x40) != 0
      || sub_B8CF80(a2, (__int64)a3, *(_BYTE *)(a2 + 83) & 0x40, v8, v9, v10) )
    {
      sub_168B9F0((__int64)v30, a1 + 1, a3[1].m128i_u32[2], 0xB98u, 0);
      if ( v33 )
      {
        sub_AE9DF0(&v32, a2, 0xAu);
      }
      else if ( v35 )
      {
        v24 = sub_168B9E0(v30);
        v25 = v31;
        if ( v31 )
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
        v27 = v25;
        v26 = sub_1587BC0(v24, &v27, v20, v21, v22, v23);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v34 + 8), a2, 0xAu);
      }
      LODWORD(v27) = 1;
      sub_1587D10((__int64)v30, (int *)&v27);
      sub_15F7200(v30);
    }
    else
    {
      sub_18093E0(a1, (__int64)a3, v28, v29);
      v13 = v28;
      v14 = v29;
      v15 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352LL), 56, 3u);
      sub_B2ECB0(v15, a1[31], a3, v13, v14);
      sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
    }
  }
}
