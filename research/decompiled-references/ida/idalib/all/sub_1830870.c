void __fastcall sub_1830870(__int64 a1, __int64 a2, const __m128i *a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // r14
  int v8; // r13d
  int v9; // r8d
  char v10; // al
  int v11; // r15d
  unsigned int v12; // r13d
  int v13; // r14d
  __m128i *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // [rsp+Fh] [rbp-D9h]
  int v20; // [rsp+1Ch] [rbp-CCh] BYREF
  int v21[50]; // [rsp+20h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) && (unsigned __int8)sub_15EB980((__int64)a3, a1, 2u) )
  {
    v5 = sub_B8DC30(a2, 1);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 24);
    else
      v6 = *(_QWORD *)(a2 + 80);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    {
      sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19BAu, 0);
      sub_15DD120((__int64)v21, (__int64)a3);
      sub_15F7200(v21);
      return;
    }
    if ( (unsigned __int8)sub_182B2A0(a1, (__int64)a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v20, 1)
      && (unsigned __int8)sub_18306D0(a1, a2, (__int64)a3, 0, a4) )
    {
      v7 = 0;
      v8 = v20 & 0x3FFFFFFF;
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
        v7 = sub_B72F20(a2);
      if ( a3[3].m128i_i16[4] != 2 )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
LABEL_15:
        v12 = ((v7 & 1) << 30) | v8 | 0x80000000;
        v13 = (v9 << 31) | v11 | ((v10 & 1) << 30);
        v14 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
        sub_B09250(v14, *(_QWORD *)(a1 + 248), a3, v12, v13);
        sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
        return;
      }
      if ( (unsigned __int8)sub_182B2A0(a1, (__int64)a3, a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, v21, 2) )
      {
        v9 = sub_18306D0(a1, a2, (__int64)a3, 1u, a4);
        if ( (_BYTE)v9 )
        {
          v10 = 0;
          v11 = v21[0] & 0x3FFFFFFF;
          if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
          {
            v19 = v9;
            v10 = sub_B72F20(a2);
            v9 = v19;
          }
          goto LABEL_15;
        }
      }
    }
  }
}
