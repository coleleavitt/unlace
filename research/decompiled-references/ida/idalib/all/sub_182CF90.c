void __fastcall sub_182CF90(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __m128i a5, double a6)
{
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r13
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // dl
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // al
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __m128i *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // [rsp+Fh] [rbp-C9h] BYREF
  _BYTE v31[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( a2 && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v7 = sub_B77A30(a2) == 0;
    v8 = a1[29];
    if ( !v7 )
    {
      v9 = a2;
      v10 = 1;
      if ( (*(_BYTE *)(v8 + 96) & 0x10) != 0 )
      {
        sub_1C74160(a1[100], a2, a3);
        goto LABEL_6;
      }
LABEL_17:
      if ( (a3[2].m128i_i8[2] & 0xF0) == 0xF0 )
      {
        if ( (unsigned int)sub_FA77D0(a3) == 3 )
          goto LABEL_24;
        if ( (a3[2].m128i_i8[2] & 0xF0) == 0xF0 )
        {
          if ( (unsigned int)sub_FA77D0(a3) == 4 )
            goto LABEL_24;
          if ( (a3[2].m128i_i8[2] & 0xF0) == 0xF0 )
            v20 = sub_FA77D0(a3);
          else
            v20 = (unsigned __int8)a3[2].m128i_i8[2] >> 4;
LABEL_20:
          if ( v20 != 5 )
          {
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 41) > 1 )
            {
              if ( (*(_BYTE *)(a1[29] + 52) & 1) == 0 && (!v9 || v10) )
              {
                sub_168B9F0((__int64)v31, a1 + 1, a3[1].m128i_u32[2], 0xCA9u, 0);
                v21 = sub_15DD120((__int64)v31, (__int64)a3);
                v30 = (a3[2].m128i_i8[3] & 2) != 0;
                v22 = sub_1588420(v21, (unsigned __int8 *)&v30);
                if ( *(_BYTE *)(v22 + 120) )
                {
                  sub_AE9DF0((unsigned __int8 **)(v22 + 32), (__int64)"functions", 1u);
                }
                else if ( *(_BYTE *)(v22 + 132) )
                {
                  sub_180D0B0(v22, (__int64)"functions");
                }
                sub_15F7200(v31);
              }
              v23 = sub_168B6C0((__int64)(a1 + 1));
              v24 = sub_168B6C0((__int64)(a1 + 1));
              v25 = (__m128i *)sub_1806F50((__int64 *)(v24 + 2352), 40, 3u);
              sub_B11850(v25, v23, a3);
              sub_B8CC60(a2, (__int64)v25, v26, v27, v28, v29);
            }
            else
            {
              sub_182A270(a1, a2, a3, a4);
            }
            goto LABEL_6;
          }
LABEL_24:
          sub_168B9F0((__int64)v31, a1 + 1, a3[1].m128i_u32[2], 0x7Fu, 0);
          sub_15DD120((__int64)v31, (__int64)a3);
          sub_15F7200(v31);
          goto LABEL_6;
        }
        v19 = (unsigned __int8)a3[2].m128i_i8[2] >> 4;
      }
      else
      {
        v19 = (unsigned __int8)a3[2].m128i_i8[2] >> 4;
        if ( v19 == 3 )
          goto LABEL_24;
      }
      v20 = v19;
      if ( v19 == 4 )
        goto LABEL_24;
      goto LABEL_20;
    }
    v9 = a2;
    v10 = 0;
    if ( (*(_BYTE *)(v8 + 96) & 0x10) == 0 )
      goto LABEL_17;
  }
  else if ( (*(_BYTE *)(a1[29] + 96) & 0x10) == 0 )
  {
    v9 = 0;
    v10 = 0;
    goto LABEL_17;
  }
  sub_168B9F0((__int64)v31, a1 + 1, a3[1].m128i_u32[2], 0x19C7u, 0);
  v17 = sub_15DD120((__int64)v31, (__int64)a3);
  v30 = (a3[2].m128i_i8[3] & 2) != 0;
  v18 = sub_1588420(v17, (unsigned __int8 *)&v30);
  if ( *(_BYTE *)(v18 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v18 + 32), (__int64)"function templates", 1u);
    sub_15F7200(v31);
  }
  else
  {
    if ( *(_BYTE *)(v18 + 132) )
      sub_180D0B0(v18, (__int64)"function templates");
    sub_15F7200(v31);
  }
LABEL_6:
  v14 = *(_BYTE *)(a2 + 28) & 0x7F;
  v15 = (v14 + 120) & 0x7F;
  if ( (unsigned __int8)v15 > 0x3Au )
  {
    if ( v14 == 75 )
      return;
LABEL_10:
    sub_182C660(a1, a2, a3, v11, v12, v13, a5, a6);
    return;
  }
  v16 = 0x7000FFFFC000001LL;
  if ( !_bittest64(&v16, v15) )
    goto LABEL_10;
}
