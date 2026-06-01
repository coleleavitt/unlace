__int64 __fastcall sub_12DE2A0(__int64 a1, const __m128i *a2)
{
  __m128i *v4; // rdi
  __int8 v5; // bp
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned __int8 v14; // dl
  char v15; // r10
  int v16; // eax
  unsigned __int8 v17; // r9
  char v18; // bp
  int v19; // ecx
  char v20; // bl
  bool v21; // zf
  int v22; // r8d
  char v23; // r11
  __int64 v24; // r9
  int v25; // eax
  unsigned __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx

  if ( *(_BYTE *)(a1 + 72) )
    return 0;
  v4 = *(__m128i **)(a1 + 40);
  v5 = v4[2].m128i_i8[12];
  sub_12DDF90(v4, a2);
  v6 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(v6 + 44) = v5 & 0x38 | *(_BYTE *)(v6 + 44) & 0xC7;
  v7 = *(_QWORD **)(a1 + 56);
  *(_BYTE *)(a1 + 72) = 1;
  if ( *v7 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)*v7 + 432LL))(
      *v7,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL),
      v6,
      0);
    sub_145BE40(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 56), 0);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
    {
      sub_A87340(v11, **(_QWORD **)(a1 + 56), 0, v8, v9, v10);
      v12 = *(__int64 **)(a1 + 40);
      v13 = *(_QWORD *)(a1 + 16);
      v14 = *((_BYTE *)v12 + 3);
      v15 = *(_BYTE *)v12;
      v16 = *(_DWORD *)v12;
      v17 = *((_BYTE *)v12 + 1);
      v18 = *(_BYTE *)v12;
      v19 = *((unsigned __int8 *)v12 + 89);
      v20 = *(_BYTE *)(v13 + 17465);
      v21 = (*(_WORD *)v12 & 0x1008) == 0;
      *(_QWORD *)(v13 + 17472) = 0;
      LOBYTE(v22) = (v16 & 0x10000080) == 128;
      v23 = *(_BYTE *)(v13 + 17466) & 0x7F;
      *(_BYTE *)(v13 + 17465) = (v17 >> 2) & 2 | v20 & 0xFD;
      LOBYTE(v16) = *(_BYTE *)(v13 + 17467);
      *(_BYTE *)(v13 + 17466) = (v14 >> 2 << 7) | v23;
      LOBYTE(v16) = ((((v17 >> 4) ^ 1) & 1) << 6)
                  | (32 * (((v17 >> 3) ^ 1) & 1)) & 0xBF
                  | (8 * v15) & 0x10
                  | (v17 >> 1) & 8
                  | (4 * (v18 & 1)) & 0x8F
                  | (v17 >> 2) & 2
                  | !v21
                  | v16 & 0x80;
      v24 = (unsigned int)(4 * v22);
      *(_BYTE *)(v13 + 17467) = v16;
      v25 = *(_BYTE *)(v13 + 17468) & 0xF9;
      v13 += 18568;
      v26 = (unsigned int)v24 | (v14 >> 2) & 2 | v25;
      v27 = *(_BYTE *)(v13 - 1099) & 0x7F;
      *(_BYTE *)(v13 - 1100) = v26;
      v28 = v27 | (unsigned int)(v19 << 7);
      *(_BYTE *)(v13 - 1099) = v28;
      *(_QWORD *)(v13 - 1104) = *(_QWORD *)(v13 - 1104) & 0xFFFF80067F800200LL | 0x660800442002LL;
      sub_B3E800(v13, v12 + 68, 0x660800442002LL, v28, v26, v24);
    }
  }
  return 0;
}
