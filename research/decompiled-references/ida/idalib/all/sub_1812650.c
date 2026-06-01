void __fastcall sub_1812650(__int64 *a1, _BYTE *a2, const __m128i *a3)
{
  __int64 v4; // rdx
  __m128i *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v24[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = a1[29];
  if ( *(_DWORD *)(v4 + 152) > 0xB85861Fu )
  {
    if ( ((a2[84] + 3) & 3u) <= 1 )
    {
      sub_168B9F0((__int64)v24, a1 + 1, a3[1].m128i_u32[2], 0x107Bu, 0);
      LOBYTE(v22) = (a2[84] & 3) == 2;
      v10 = sub_1588420((__int64)v24, (unsigned __int8 *)&v22);
      v11 = v10;
      if ( !*(_BYTE *)(v10 + 120) )
      {
        if ( *(_BYTE *)(v10 + 132) )
        {
          v19 = sub_168B9E0((_QWORD *)v10);
          v20 = *(_QWORD *)(v11 + 16);
          if ( v20 )
            v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 32LL))(*(_QWORD *)(v11 + 16));
          goto LABEL_17;
        }
LABEL_8:
        sub_15F7200(v24);
        return;
      }
    }
    else
    {
      if ( (a2[28] & 0x7Fu) - 35 > 3
        || *(char *)(v4 + 1) < 0
        || (v13 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2),
            (*(_QWORD *)(v13 + 80) & 0x40000LL) == 0)
        && ((*(_QWORD *)(v13 + 80) >> 16) & 8) == 0
        && !(unsigned int)sub_B984E0(v13) )
      {
        v5 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
        sub_B14270(v5, a1[31], a3);
        sub_B8CC60((__int64)a2, (__int64)v5, v6, v7, v8, v9);
        return;
      }
      sub_168B9F0((__int64)v24, a1 + 1, a3[1].m128i_u32[2], 0x107Bu, 0);
      v22 = 2;
      v14 = sub_1587D10((__int64)v24, &v22);
      v11 = v14;
      if ( !*(_BYTE *)(v14 + 120) )
      {
        if ( *(_BYTE *)(v14 + 132) )
        {
          v19 = sub_168B9E0((_QWORD *)v14);
          v20 = *(_QWORD *)(v11 + 16);
          if ( v20 )
            v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 32LL))(*(_QWORD *)(v11 + 16));
LABEL_17:
          v23 = v20;
          v21 = sub_1587BC0(v19, &v23, v15, v16, v17, v18);
          sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * *(unsigned int *)(v11 + 128) + 8), (__int64)a2, 0xAu);
          goto LABEL_8;
        }
        goto LABEL_8;
      }
    }
    sub_AE9DF0((unsigned __int8 **)(v11 + 32), (__int64)a2, 0xAu);
    goto LABEL_8;
  }
  sub_168B9F0((__int64)v24, a1 + 1, a3[1].m128i_u32[2], 0x9Fu, 0);
  v12 = sub_15DD120((__int64)v24, (__int64)a3);
  v23 = a3[1].m128i_i64[1];
  sub_1587DB0(v12, &v23);
  sub_15F7200(v24);
}
