void __fastcall sub_1A9AEF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int16 v9; // r9
  __int16 v10; // bp
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int16 v29; // [rsp+4h] [rbp-F4h]
  __int64 v30; // [rsp+8h] [rbp-F0h] BYREF
  char v31; // [rsp+17h] [rbp-E1h] BYREF
  __int64 v32; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v35[200]; // [rsp+30h] [rbp-C8h] BYREF

  v30 = a4;
  v8 = sub_168B6C0((__int64)a1);
  v9 = *(_WORD *)(a2 + 72);
  v10 = *(_WORD *)(a3 + 72);
  v11 = v8;
  if ( !a5 && (v10 & 0xE34) == 0 && (v9 & 0xE34) != 0 )
    goto LABEL_4;
  if ( (v9 & 1) != 0 && (v10 & 8) != 0 )
  {
    v29 = *(_WORD *)(a2 + 72);
    sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C92u, 0);
    v34 = *(_QWORD *)(a2 + 40);
    v23 = sub_15894B0((__int64)v35, &v34);
    sub_17AE460(v23, &v30);
    sub_15F7200(v35);
    v9 = v29;
    if ( (((unsigned __int8)v10 ^ (unsigned __int8)v29) & 0x20) != 0 )
      goto LABEL_24;
  }
  else if ( (((unsigned __int8)v10 ^ (unsigned __int8)v9) & 0x20) != 0 )
  {
LABEL_24:
    sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C7Eu, 0);
    v34 = *(_QWORD *)(a2 + 40);
    v24 = sub_15894B0((__int64)v35, &v34);
    v25 = sub_1A9AE40(v24, (__int64)"copy");
    sub_17AE460(v25, &v30);
    sub_15F7200(v35);
    goto LABEL_4;
  }
  if ( (v10 & 1) == 0 && ((v9 & 0x410) != 0) != ((v10 & 0x410) != 0) )
  {
    sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C7Eu, 0);
    v34 = *(_QWORD *)(a2 + 40);
    v21 = sub_15894B0((__int64)v35, &v34);
    v22 = v21;
    if ( *(_BYTE *)(v21 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v21 + 32), (__int64)"retain (or strong)", 1u);
    }
    else if ( *(_BYTE *)(v21 + 132) )
    {
      sub_1A939B0(v21, (__int64)"retain (or strong)");
    }
    sub_17AE460(v22, &v30);
    sub_15F7200(v35);
  }
LABEL_4:
  sub_1A959F0(*a1, a3, a2, 0);
  if ( *(_QWORD *)(a2 + 88) != *(_QWORD *)(a3 + 88) )
  {
    if ( (*(_BYTE *)(a3 + 72) & 1) == 0 )
      goto LABEL_9;
    v12 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v12 = *(_QWORD *)v12;
    if ( (*(_BYTE *)(v12 + 8) & 0x7F) != 0x13 )
    {
LABEL_9:
      sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C7Eu, 0);
      v34 = *(_QWORD *)(a2 + 40);
      v13 = sub_15894B0((__int64)v35, &v34);
      v14 = sub_162BBD0(v13, (__int64)"setter");
      sub_17AE460(v14, &v30);
      sub_15F7200(v35);
      sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a3 + 24), 0x189Au, 0);
      sub_15F7200(v35);
    }
  }
  if ( *(_QWORD *)(a2 + 80) != *(_QWORD *)(a3 + 80) )
  {
    sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C7Eu, 0);
    v34 = *(_QWORD *)(a2 + 40);
    v15 = sub_15894B0((__int64)v35, &v34);
    v16 = sub_162BBD0(v15, (__int64)"getter");
    sub_17AE460(v16, &v30);
    sub_15F7200(v35);
    sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a3 + 24), 0x189Au, 0);
    sub_15F7200(v35);
  }
  v17 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF0LL];
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v17 | (unsigned __int8)*(_QWORD *)(a3 + 56)) & 7;
  v19 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF0LL];
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v19 | *(_BYTE *)(a2 + 56)) & 7;
  if ( !sub_AAC180(v11, v18, v20) )
  {
    v26 = *a1;
    v31 = 0;
    v32 = 0;
    if ( !(unsigned __int8)sub_1BD2CB0(v26, v20, v18, &v32, &v31) || v31 )
    {
      sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a2 + 24), 0x1C83u, 0);
      v33 = *(_QWORD *)(a2 + 56);
      v27 = sub_162B6D0((__int64)v35, &v33);
      v34 = *(_QWORD *)(a3 + 56);
      v28 = sub_162B6D0(v27, &v34);
      sub_17AE460(v28, &v30);
      sub_15F7200(v35);
      sub_168B9F0((__int64)v35, a1, *(_DWORD *)(a3 + 24), 0x189Au, 0);
      sub_15F7200(v35);
    }
  }
}
