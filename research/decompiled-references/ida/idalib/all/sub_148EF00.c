_BYTE *__fastcall sub_148EF00(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int16 a9)
{
  unsigned int v9; // r14d
  __int64 v12; // rcx
  __int16 v13; // ax
  _BYTE *result; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rbp
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-8Ch]
  char v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+1Ch] [rbp-7Ch]
  _BYTE *v30; // [rsp+20h] [rbp-78h] BYREF
  char v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  int v33; // [rsp+38h] [rbp-60h]
  __int16 v34; // [rsp+3Ch] [rbp-5Ch]
  __int64 (__fastcall *v35)(__int64); // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]

  v9 = a6;
  v12 = 63;
  v30 = (_BYTE *)(a1 + 1952);
  v26 = a3;
  v31 = *(_BYTE *)(a1 + 1952);
  v35 = sub_146A990;
  v13 = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1952) = 1;
  v32 = a1;
  v33 = 1507350;
  v34 = 63;
  v36 = 0;
  v37 = 0;
  if ( v13 == 22 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
    {
      sub_1568800(&v30);
      if ( *(_WORD *)(a1 + 32) == 23 )
        goto LABEL_5;
      goto LABEL_8;
    }
    LODWORD(v37) = sub_146A990(a1);
    v13 = *(_WORD *)(a1 + 32);
  }
  if ( v13 == 23 )
  {
LABEL_5:
    if ( (unsigned __int8)sub_14808E0((__int64)&v30, a2, a3, v12, a5, a6) )
      goto LABEL_6;
    v20 = HIDWORD(v37);
    v28 = a4 + 8;
LABEL_13:
    v25 = sub_1479050(a4 + 40, (__int64)a2, (v20 << 32) | v26, a5, v9, a9, 0);
    sub_147F4B0(v28, v25);
    goto LABEL_6;
  }
LABEL_8:
  v15 = sub_148B630(a1, nullptr, a7, a8);
  v27 = v16;
  if ( !(unsigned __int8)sub_14808E0((__int64)&v30, nullptr, v16, v17, v18, v19) && !v27 )
  {
    v20 = HIDWORD(v37);
    v28 = a4 + 8;
    if ( v15 )
    {
      v29 = HIDWORD(v37);
      v21 = sub_15D92D0(*(_QWORD *)(a4 + 40), 88);
      v22 = sub_F963B0(a2, a5, a9 & 0xF);
      *(_QWORD *)v21 = a2;
      *(_WORD *)(v21 + 32) = v22;
      *(_DWORD *)(v21 + 24) = v26;
      *(_DWORD *)(v21 + 28) = v29;
      *(_QWORD *)(v21 + 8) = a5;
      *(_DWORD *)(v21 + 16) = v9;
      *(_BYTE *)(v21 + 34) = (16 * ((unsigned __int8)a9 >> 4)) | a9 & 0xF;
      *(_DWORD *)(v21 + 20) = 0;
      LOBYTE(v22) = *(_BYTE *)(v21 + 35);
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_BYTE *)(v21 + 35) = (2 * ((a9 & 0x200) != 0)) | HIBYTE(a9) & 1 | v22 & 0xFC;
      *(_QWORD *)(v21 + 56) = *(_QWORD *)(v21 + 56) & 0x7F800000LL | 0x200000;
      v23 = sub_15D7D80(v21);
      v24 = *(unsigned __int16 *)(v21 + 56);
      *(_QWORD *)(v21 + 72) = v23;
      *(_QWORD *)(v21
                + 16LL * ((*(_BYTE *)(v21 + 58) & 8) != 0)
                + 8 * (v24 + 13LL * ((*(_BYTE *)(v21 + 58) & 4) != 0))
                + 80) = v15;
      sub_147F4B0(a4 + 48, v21);
      sub_147F4B0(v28, v21);
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_6:
  result = v30;
  *v30 = v31;
  return result;
}
