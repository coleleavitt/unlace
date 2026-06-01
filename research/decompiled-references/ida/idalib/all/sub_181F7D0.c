void __fastcall sub_181F7D0(_QWORD *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  char *v13; // r14
  __int64 v14; // r13
  __m128i *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+Ch] [rbp-ECh] BYREF
  __int64 v25; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-E0h] BYREF
  char *v27; // [rsp+20h] [rbp-D8h] BYREF
  size_t v28; // [rsp+28h] [rbp-D0h]
  _BYTE v29[200]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = (unsigned __int64)a3;
  v27 = nullptr;
  v28 = 0;
  if ( (unsigned __int8)sub_181F2D0((__int64)a1, (__int64)a3, &v27, nullptr, a4, a5) )
  {
    v9 = *(_QWORD *)(a1[31] + 17448LL);
    v10 = *(unsigned int *)(v9 + 260);
    if ( (unsigned int)v10 <= 0x1F )
    {
      v8 = 4160750114LL;
      if ( _bittest64(&v8, v10) )
      {
        sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0xB99u, 0);
        sub_15F7200(v29);
        return;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(v9 + 248) - 41) <= 1 )
    {
      v11 = *(_QWORD *)(v9 + 208);
      v7 = *(_QWORD *)(v11 + 416);
      v12 = sub_FBFEC0(*(_QWORD *)(v11 + 408), v7);
      if ( v12 )
      {
        if ( v12 <= 6 )
        {
          v7 = (unsigned __int64)(a1 + 1);
          sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0xB9Au, 0);
          sub_15F7200(v29);
        }
      }
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v25 = a2;
      if ( (unsigned __int8)sub_B726C0(a2, v7, v9, v8) )
      {
        sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0xB98u, 0);
        v23 = sub_16060E0((__int64)v29, &v25);
        LODWORD(v26) = 0;
        sub_1587D10(v23, (int *)&v26);
        sub_15F7200(v29);
        return;
      }
      goto LABEL_9;
    }
    v26 = a2;
    v25 = 0;
    v20 = sub_B8C330(a2);
    if ( (unsigned int)sub_B74100(a2, v20) )
    {
      v21 = sub_B81B70(v26);
      if ( !v21 )
        goto LABEL_19;
      if ( v21 > 3u )
      {
        if ( v21 <= 6u )
        {
          sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0xB98u, 0);
          v22 = sub_16065E0((__int64)v29, &v26);
          v24 = 0;
          sub_1587D10(v22, &v24);
          sub_15F7200(v29);
          return;
        }
LABEL_19:
        BUG();
      }
    }
LABEL_9:
    sub_18093E0(a1, (__int64)a3, v27, v28);
    v13 = v27;
    v14 = v28;
    v15 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352LL), 56, 3u);
    sub_B2D4B0(v15, a1[31], a3, v13, v14);
    sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
  }
}
