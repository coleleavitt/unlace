__int64 __fastcall sub_178C3D0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128i a6)
{
  int v7; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // eax
  _QWORD *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  _WORD *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rcx
  char v28; // r10
  __int64 v29; // r9
  __int64 v30; // rsi
  char v31; // al
  unsigned __int8 v32; // al
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  char v36; // [rsp+27h] [rbp-71h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  _QWORD v38[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  char v41; // [rsp+50h] [rbp-48h]

  v7 = a2;
  v10 = sub_178B340(a1, a2, "co_await", 8, a5, a6);
  if ( !v10 )
    return 1;
  v14 = v10;
  v15 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v33 = sub_1907C70(a1, a4);
    if ( v33 != 1 )
    {
      a4 = v33 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_4;
    }
    return 1;
  }
LABEL_4:
  v16 = *(_QWORD *)(a4 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v19 = *(_QWORD **)(a1 + 248);
    v20 = v19[2384];
    v21 = sub_EEE9A0(72, v19, 8u);
    *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x49;
    if ( unk_2CD7484 )
      sub_EE9B50(73);
    *(_WORD *)(v21 + 1) &= 0xF801u;
    *(_QWORD *)(v21 + 8) = v20;
    *(_DWORD *)(v21 + 16) = v7;
    *(_QWORD *)(v21 + 24) = a3;
    *(_QWORD *)(v21 + 32) = a4;
    *(_QWORD *)(v21 + 64) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_QWORD *)(v21 + 56) = 0;
    v22 = sub_B63950(v21);
    *(_BYTE *)(v21 + 1) = (v22 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
    *(_BYTE *)(v21 + 2) = (8 * (a5 & 1)) | (v22 >> 2) & 7 | *(_BYTE *)(v21 + 2) & 0xF0;
    return v21;
  }
  else
  {
    if ( (*(_BYTE *)(a4 + 1) & 6) == 0 )
      a4 = sub_1A0BDC0(a1, v16, a4, 1);
    v17 = sub_C00A40(a4, v16, v11, v12, v13);
    sub_1787C10((__int64)v38, a1, *(_QWORD *)(v14 + 184), v17, a4);
    if ( v41 )
      return 1;
    v23 = (_WORD *)sub_EEE9A0(72, *(_QWORD **)(a1 + 248), 8u);
    v24 = v39;
    v25 = v40;
    v26 = (__int64)v23;
    v27 = v38[1];
    v28 = *(_BYTE *)(v39 + 1);
    v29 = *(_QWORD *)(v39 + 8);
    v30 = v38[0];
    *v23 = *v23 & 0xFE00 | 0x49;
    if ( unk_2CD7484 )
    {
      v37 = v29;
      v36 = v28;
      v35 = v27;
      v34 = v25;
      sub_EE9B50(73);
      v29 = v37;
      v28 = v36;
      v27 = v35;
      v25 = v34;
    }
    v31 = *(_BYTE *)(v26 + 1);
    *(_BYTE *)(v26 + 2) &= 0xF8u;
    *(_DWORD *)(v26 + 16) = v7;
    *(_QWORD *)(v26 + 24) = a3;
    *(_QWORD *)(v26 + 32) = a4;
    *(_QWORD *)(v26 + 48) = v27;
    *(_QWORD *)(v26 + 56) = v24;
    *(_BYTE *)(v26 + 1) = v28 & 0x3E | v31 & 1;
    *(_QWORD *)(v26 + 8) = v29;
    *(_QWORD *)(v26 + 64) = v25;
    *(_QWORD *)(v26 + 40) = v30;
    v32 = sub_B63950(v26);
    *(_BYTE *)(v26 + 1) = (v32 << 6) | *(_BYTE *)(v26 + 1) & 0x3F;
    *(_BYTE *)(v26 + 2) = (v32 >> 2) & 7 | *(_BYTE *)(v26 + 2) & 0xF0 | (8 * (a5 & 1));
    return v26;
  }
}
