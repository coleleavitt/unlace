__int64 __fastcall sub_178B6E0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4, __m128i a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  const char *v17; // rcx
  size_t v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // rbx
  char v28; // al
  __int64 v30; // rdx
  size_t v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp-8h] [rbp-40h]
  unsigned __int64 v34[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a2;
  v34[0] = a3;
  v7 = sub_178B340(a1, a2, "co_return", 9, a4, a5);
  if ( !v7 )
    return 1;
  v11 = v34[0];
  v12 = v7;
  if ( !v34[0] )
  {
    v14 = *(_QWORD *)(v7 + 184);
    goto LABEL_18;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v34[0] + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FFu) > 0x1F2 )
  {
    a2 = v34[0];
    v32 = sub_1907C70(a1, v34[0]);
    if ( v32 == 1 )
      return 1;
    v11 = v32 & 0xFFFFFFFFFFFFFFFELL;
    v14 = *(_QWORD *)(v12 + 184);
    v34[0] = v32 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v32 & 0xFFFFFFFFFFFFFFFELL) != 0 )
      goto LABEL_6;
LABEL_18:
    v30 = 0;
    v11 = 0;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(v12 + 184);
LABEL_6:
  if ( (*(_WORD *)v11 & 0x1FF) == 0x35
    || (v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v15 + 16) != 13)
    || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    sub_1C37020(a1, v34, 2);
    v17 = "return_value";
    v18 = 12;
    v33 = 1;
    goto LABEL_10;
  }
  v30 = (unsigned int)sub_C00A40(v11, a2, v8, v9, v10);
LABEL_19:
  v34[0] = sub_19B4A30(a1, v11, v30, 1, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
  v31 = j__strlen("return_void");
  v33 = 0;
  v17 = "return_void";
  v18 = v31;
LABEL_10:
  v19 = sub_17840A0(a1, v14, v6, v17, v18, v16, a5);
  if ( v19 == 1 )
    return 1;
  v21 = 0;
  v22 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v23 = v22;
  if ( v22 )
    v21 = (unsigned int)sub_C00A40(v22, v14, 0, v33, v20);
  v24 = sub_19B4A30(a1, v23, v21, 0, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
  v25 = sub_EEE9A0(40, *(_QWORD **)(a1 + 248), 8u);
  v26 = v34[0];
  v27 = v25;
  LOWORD(v25) = *(_WORD *)v25 & 0xFE00;
  LOBYTE(v25) = v25 | 0xF7;
  *(_WORD *)v27 = v25;
  if ( unk_2CD7484 )
    sub_EE9B50(247);
  v28 = *(_BYTE *)(v27 + 32);
  *(_DWORD *)(v27 + 8) = v6;
  *(_QWORD *)(v27 + 16) = v26;
  *(_QWORD *)(v27 + 24) = v24;
  *(_BYTE *)(v27 + 32) = v28 & 0xFE | a4 & 1;
  return v27;
}
