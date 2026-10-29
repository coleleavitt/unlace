__int64 __fastcall sub_1B31D70(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  _DWORD *v7; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _WORD *v17; // rax
  _WORD *v18; // r14
  __int16 v19; // ax
  __int64 v20; // rdi
  __int64 *v21; // rsi
  int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h]
  _BOOL4 v28; // [rsp+2Ch] [rbp-BCh] BYREF
  _BYTE v29[184]; // [rsp+30h] [rbp-B8h] BYREF

  v26 = a5;
  v7 = (_DWORD *)*a2;
  v27 = a6;
  if ( ((*v7 >> 14) & 0xD) != 0 )
    return 0;
  v12 = sub_BFB9F0((__int64)v7);
  *a2 = v12;
  v13 = v12;
  *a3 = sub_C00A40(v12, (__int64)a2, v14, v15, v16);
  *a4 = sub_EEC8C0(v13, (__int64)a2, a7);
  v17 = (_WORD *)sub_BFBAE0(v13);
  v18 = v17;
  *a2 = (unsigned __int64)v17;
  if ( !v17 )
    goto LABEL_6;
  v19 = *v17 & 0x1FF;
  if ( v19 != 71 )
  {
    if ( v19 != 46 )
      goto LABEL_6;
    if ( (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_7;
    if ( (*(_WORD *)sub_BFBAE0(*((_QWORD *)v18 + 2)) & 0x1FF) != 0x62 )
      goto LABEL_7;
    v20 = *((_QWORD *)v18 + 3);
    if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 49 > 2 )
      goto LABEL_7;
    return sub_1AEE450(v20);
  }
  v20 = *((_QWORD *)v18 + 2);
  if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 40 <= 6 )
    return sub_1AEE450(v20);
LABEL_6:
  sub_19A27D0(a1);
LABEL_7:
  v21 = (__int64 *)(a1 + 8);
  if ( v27 )
  {
    v22 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    {
      v21 = (__int64 *)(a1 + 8);
      v22 = ((sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) != 0) + 1;
    }
    v23 = *a3;
    v28 = v22;
    sub_168B9F0((__int64)v29, v21, v23, 0x1190u, 0);
    v24 = sub_1588370((__int64)v29, (unsigned int *)&v28);
    v25 = sub_1682BA0(v24, (__int64)&v26);
  }
  else
  {
    sub_168B9F0((__int64)v29, v21, *a3, 0x118Eu, 0);
    v28 = (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) != 0;
    v25 = sub_1587D10((__int64)v29, (int *)&v28);
  }
  sub_15884C0(v25, a4);
  sub_15F7200(v29);
  return 0;
}
