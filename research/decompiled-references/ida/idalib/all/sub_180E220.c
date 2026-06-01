void __fastcall sub_180E220(__int64 a1, __int64 a2, const __m128i *a3, _DWORD *a4, double a5)
{
  char v7; // al
  unsigned int v8; // ebp
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // r15
  __m128i *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-E0h] BYREF
  void *v28; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-D0h]
  char v30; // [rsp+2Ch] [rbp-CCh]
  _BYTE v31[200]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = *(_BYTE *)(a2 + 28);
  v8 = a3[1].m128i_u32[2];
  v26 = 0;
  if ( (v7 & 0x7Fu) - 64 > 2 )
  {
    v10 = *(_QWORD *)(a2 + 48);
  }
  else
  {
    v9 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v10 = v9[1];
    else
      v10 = *v9;
  }
  v26 = v10;
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 4) == 0 )
  {
    v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v12 - 42) > 2u && (unsigned __int8)(v12 - 33) > 1u )
    {
      sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v8, 0x19B6u, 0);
      v24 = sub_180A660((__int64)v31, (__int64)a3);
      v25 = sub_1605D30(v24, &v26);
      v28 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      sub_1587DB0(v25, (__int64 *)&v28);
      sub_15F7200(v31);
      return;
    }
  }
  if ( (*a4 & 0x20000) != 0 )
  {
    v14 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
    sub_B089C0(v14, *(_QWORD *)(a1 + 248), a3, (__int64)a4);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
    return;
  }
  v29 = 1;
  v28 = nullptr;
  v30 = 0;
  v13 = sub_1915C50(a1, a4, &v28, 2972, 0);
  if ( v13 != 1 )
  {
    if ( v29 > 0x40 )
    {
      if ( (unsigned int)sub_22069E0(&v28) != 1 )
      {
LABEL_11:
        sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v8, 0xBA4u, 0);
        v27 = sub_EEC8C0((unsigned __int64)a4, a1 + 8, a5);
        sub_1587DB0((__int64)v31, &v27);
        sub_15F7200(v31);
        goto LABEL_12;
      }
    }
    else if ( !v28 || ((unsigned __int64)v28 & ((unsigned __int64)v28 - 1)) != 0 )
    {
      goto LABEL_11;
    }
    v19 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
    sub_B089C0(v19, *(_QWORD *)(a1 + 248), a3, v13 & 0xFFFFFFFFFFFFFFFELL);
    sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
  }
LABEL_12:
  if ( v29 > 0x40 )
  {
    if ( v28 )
      operator delete[](v28);
  }
}
