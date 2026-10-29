void __fastcall sub_18F7B20(__int64 a1, int a2, int a3, unsigned __int64 a4, __m128i a5, double a6)
{
  int v6; // eax
  char *v9; // rax
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  char *v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-110h]
  __int64 v27; // [rsp+0h] [rbp-110h]
  __int64 v28; // [rsp+8h] [rbp-108h] BYREF
  __int64 v29; // [rsp+14h] [rbp-FCh] BYREF
  __int64 v30; // [rsp+1Ch] [rbp-F4h] BYREF
  char v31; // [rsp+24h] [rbp-ECh]
  _QWORD v32[2]; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v33[2]; // [rsp+38h] [rbp-D8h] BYREF
  unsigned __int8 *v34; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-C0h]

  if ( ((*(_WORD *)a4 + 394) & 0x1FFu) <= 1 )
  {
    v6 = (*(_WORD *)(a4 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v6 - 16) <= 2 && v6 < a2 )
    {
      sub_168B9F0((__int64)&v34, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 4), 0x19E1u, 0);
      v9 = sub_BFA720((*(_WORD *)(a4 + 2) >> 3) & 0x3F);
      v32[1] = v10;
      v32[0] = v9;
      v26 = sub_166BAF0((__int64)&v34, (__int64)v32);
      v11 = sub_BFA720(a2);
      v33[1] = v12;
      v33[0] = v11;
      v13 = sub_166BAF0(v26, (__int64)v33);
      v14 = &v29;
      v29 = sub_EEC8C0(a4, (__int64)v33, *(double *)a5.m128i_i64);
      v15 = sub_1587DB0(v13, &v29);
      v16 = v15;
      if ( *(_BYTE *)(v15 + 120) )
      {
        v14 = &v30;
        LODWORD(v30) = a3;
        HIDWORD(v30) = a3;
        v31 = 1;
        sub_AEC610((__int64 *)(v15 + 32), &v30);
      }
      else if ( *(_BYTE *)(v15 + 132) )
      {
        v20 = sub_168B9E0((_QWORD *)v15);
        v24 = *(_QWORD *)(v16 + 16);
        if ( v24 )
        {
          v27 = v20;
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
          v20 = v27;
        }
        v28 = v24;
        v14 = &v30;
        v25 = *sub_1587BC0(v20, &v28, v20, v21, v22, v23) + 32LL * *(unsigned int *)(v16 + 128);
        LODWORD(v30) = a3;
        HIDWORD(v30) = a3;
        v31 = 1;
        sub_AEC610((__int64 *)(v25 + 8), &v30);
      }
      sub_15F7200(&v34);
      v17 = sub_EEC8C0(a4, (__int64)v14, *(double *)a5.m128i_i64);
      sub_168B9B0((__int64)&v34, a1 + 8, 6275);
      v18 = sub_BFA720((*(_WORD *)(a4 + 2) >> 3) & 0x3F);
      sub_AEC220(&v34, v18, v19);
      sub_18F7970(a1, *(_DWORD *)(a4 + 4), (__int64)&v34, v17, a5, a6);
      if ( v34 )
      {
        if ( v35 )
          sub_1580C40(v35, (unsigned __int64)v34);
      }
    }
  }
}
