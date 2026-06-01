_BYTE *__fastcall sub_1481190(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int16 a8)
{
  __int64 v11; // r12
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  _BYTE *result; // rax
  size_t v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int16 v25; // ax
  int *v26; // rdx
  __int64 *v27; // rdi
  __int64 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int16 v32; // ax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  _QWORD *v35; // rbx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 *v38; // rdi
  unsigned __int64 v40; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v41; // [rsp+18h] [rbp-E0h]
  __int64 v42; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v43; // [rsp+20h] [rbp-D8h]
  int *v44; // [rsp+20h] [rbp-D8h]
  unsigned int v45; // [rsp+2Ch] [rbp-CCh]
  _BYTE *v46; // [rsp+30h] [rbp-C8h] BYREF
  char v47; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+40h] [rbp-B8h]
  int v49; // [rsp+48h] [rbp-B0h]
  __int16 v50; // [rsp+4Ch] [rbp-ACh]
  __int64 (__fastcall *v51)(__int64); // [rsp+50h] [rbp-A8h]
  __int64 v52; // [rsp+58h] [rbp-A0h]
  __int64 v53; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v54[17]; // [rsp+70h] [rbp-88h] BYREF

  v11 = a3;
  v46 = (_BYTE *)(a1 + 1952);
  v13 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v47 = v13;
  v48 = a1;
  v49 = 1507350;
  v50 = 63;
  v51 = sub_146A990;
  v52 = 0;
  v53 = 0;
  if ( (unsigned __int8)sub_1477FA0((__int64)&v46) )
  {
    sub_1564840(v54, a1, a1 + 16, 14);
    sub_AE9DF0(v54, 22, 4u);
    sub_AEA040((__int64)v54);
    goto LABEL_7;
  }
  if ( *(_WORD *)(a1 + 32) != 5 )
  {
    v18 = a1 + 16;
    v19 = 1775;
LABEL_4:
    sub_1564840(v54, a1, v18, v19);
    goto LABEL_5;
  }
  v40 = sub_14803B0(a1, a2, v14, v15, v16, v17);
  v21 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v21) )
    goto LABEL_6;
  v25 = *(_WORD *)(a1 + 32);
  v26 = (int *)(a1 + 16);
  v41 = 0;
  if ( v25 == 5 )
  {
    v44 = (int *)(a1 + 16);
    v37 = sub_14803B0(a1, 66, (__int64)v26, v22, v23, v24);
    v18 = a1 + 16;
    v41 = v37;
    if ( *(_WORD *)(a1 + 32) != 62 )
    {
      v19 = 1776;
      goto LABEL_4;
    }
    v38 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v38, v44);
    v25 = *(_WORD *)(a1 + 32);
    v26 = (int *)(a1 + 16);
  }
  if ( v25 != 66 )
  {
    if ( v25 == 62 )
    {
      sub_1564840(v54, a1, v26, 1776);
      sub_AEA040((__int64)v54);
      goto LABEL_6;
    }
    sub_1564840(v54, a1, v26, 14);
    sub_AE9DF0(v54, 66, 4u);
LABEL_5:
    sub_AEA040((__int64)v54);
LABEL_6:
    LOWORD(v54[0]) = 23;
    sub_15680D0(a1, v54, 1, 1);
LABEL_7:
    result = v46;
    *v46 = v47;
    return result;
  }
  v27 = *(__int64 **)(a1 + 8);
  v28 = (__int64 *)v26;
  v42 = (__int64)v26;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v27, v26);
  v32 = *(_WORD *)(a1 + 32);
  v33 = v42;
  if ( v32 == 5 )
  {
    v43 = sub_14803B0(a1, (__int64)v28, v42, v29, v30, v31);
  }
  else
  {
    v43 = 0;
    if ( v32 != 23 )
    {
      sub_1564840(v54, a1, v33, 14);
      sub_AE9DF0(v54, 23, 4u);
      goto LABEL_5;
    }
  }
  if ( (unsigned __int8)sub_14808E0((__int64)&v46, v28, v33, v29, v30, v31) )
    goto LABEL_7;
  v34 = HIDWORD(v53);
  if ( a5 )
    *a5 = HIDWORD(v53);
  v45 = v34;
  v35 = (_QWORD *)sub_15D92D0(*(_QWORD *)(a4 + 40), 104);
  sub_14798C0((__int64)v35, a2, a6, a7, v11 | ((unsigned __int64)v45 << 32), a8);
  v36 = v35[7];
  v35[5] = 0;
  v35[6] = 0;
  v35[7] = v36 & 0x7F800000 | 3;
  v35[9] = sub_15D7D80(v35);
  v35[10] = v40 | 2;
  v35[11] = v41 | 2;
  v35[12] = v43 | 2;
  sub_147F4B0(a4 + 48, (__int64)v35);
  sub_147F4B0(a4 + 8, (__int64)v35);
  result = v46;
  *v46 = v47;
  return result;
}
