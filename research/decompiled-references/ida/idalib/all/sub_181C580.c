void __fastcall sub_181C580(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v6; // rax
  __m128i *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // al
  __int64 v18; // rsi
  int v19; // eax
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v38[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v39; // [rsp+88h] [rbp-50h]
  unsigned int v40; // [rsp+90h] [rbp-48h]
  char v41; // [rsp+94h] [rbp-44h]

  v6 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v6 + 89) & 0x40) != 0
    || (*(_BYTE *)(a2 + 96) & 5) != 1
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
  {
    if ( (*(_BYTE *)(v6 + 60) & 0x10) == 0 || !sub_9B48E0(a2) )
      goto LABEL_5;
    sub_178F6C0((__int64)v36, *(__int64 **)(a1 + 664), a3[1].m128i_u32[2], 0xDEEu);
    v15 = *(_QWORD *)(a1 + 664);
    v16 = *(_QWORD *)(*(_QWORD *)v15 + 544LL);
    v17 = *(_BYTE *)(v16 + 8);
    v18 = v16 - 72;
    if ( (v17 & 0x7Fu) - 34 >= 6 )
      v18 = 0;
    v19 = sub_178EA20(v15, v18, nullptr, v12, v13, v14);
    v20 = v19;
    if ( v39 )
    {
      sub_AE9DF0(v38, v19, 2u);
    }
    else
    {
      if ( !v41 )
      {
LABEL_11:
        sub_15F7200(v36);
LABEL_5:
        v7 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
        sub_B0EA90(v7, *(_QWORD *)(a1 + 248), a3);
        sub_B8CC60(a2, (__int64)v7, v8, v9, v10, v11);
        return;
      }
      v25 = sub_168B9E0(v36);
      v26 = v37;
      if ( v37 )
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v35 = v26;
      v27 = sub_1587BC0(v25, &v35, v21, v22, v23, v24);
      sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v40 + 8), v20, 2u);
    }
    if ( !v39 )
      goto LABEL_11;
  }
  else
  {
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xDECu, 0);
    if ( v39 )
    {
      sub_AE9DF0(v38, a2, 0xAu);
    }
    else if ( v41 )
    {
      v30 = sub_168B9E0(v36);
      v33 = v37;
      if ( v37 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v35 = v33;
      v34 = sub_1587BC0(v30, &v35, v28, v29, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v40 + 8), a2, 0xAu);
    }
  }
  sub_15F7200(v36);
}
