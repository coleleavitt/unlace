_BYTE *__fastcall sub_1481580(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5, __int64 a6, int a7, __int16 a8)
{
  bool v9; // zf
  _BYTE *result; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r8d
  __int64 v27; // r13
  __int16 v28; // ax
  char v29; // dl
  __int64 v30; // rax
  unsigned __int16 v31; // bx
  char v32; // al
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdi
  __int64 *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int *v47; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v48; // [rsp+8h] [rbp-E0h]
  int v49; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+10h] [rbp-D8h]
  int v51; // [rsp+10h] [rbp-D8h]
  __int64 v52; // [rsp+18h] [rbp-D0h]
  _BYTE *v53; // [rsp+20h] [rbp-C8h] BYREF
  char v54; // [rsp+28h] [rbp-C0h]
  __int64 v55; // [rsp+30h] [rbp-B8h]
  int v56; // [rsp+38h] [rbp-B0h]
  __int16 v57; // [rsp+3Ch] [rbp-ACh]
  __int64 (__fastcall *v58)(__int64); // [rsp+40h] [rbp-A8h]
  __int64 v59; // [rsp+48h] [rbp-A0h]
  __int64 v60; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v61[17]; // [rsp+60h] [rbp-88h] BYREF

  v9 = *(_WORD *)(a1 + 32) == 22;
  v53 = (_BYTE *)(a1 + 1952);
  v54 = *(_BYTE *)(a1 + 1952);
  v57 = 63;
  *(_BYTE *)(a1 + 1952) = 1;
  v55 = a1;
  v56 = 1507350;
  v58 = sub_146A990;
  v59 = 0;
  v60 = 0;
  if ( !v9 )
    goto LABEL_2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v53) )
    {
LABEL_2:
      sub_1564840(v61, a1, a1 + 16, 14);
      sub_AE9DF0(v61, 22, 4u);
      sub_AEA040((__int64)v61);
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v60) = sub_146A990(a1);
  }
  v14 = *(_WORD *)(a1 + 32);
  if ( v14 == 23 )
  {
    sub_1564820(v61, a1, *(unsigned int *)(a1 + 16), 1543);
    sub_AEA040((__int64)v61);
    sub_14808E0((__int64)&v53, (__int64 *)a1, v41, v42, v43, v44);
    goto LABEL_3;
  }
  v47 = (int *)(a1 + 16);
  if ( v14 != 103 && v14 != 86 )
  {
    sub_1564840(v61, a1, a1 + 16, 6592);
    sub_1478560(v61, a2);
    v31 = *(_WORD *)(a1 + 32);
    v32 = sub_141A630(v31);
    if ( v31 == 1 || v32 )
      v33 = nullptr;
    else
      v33 = *(__int64 **)(a1 + 24);
    sub_1478560(v61, (__int64)v33);
    sub_AEA040((__int64)v61);
    v38 = *(unsigned __int16 *)(a1 + 32);
    if ( (unsigned __int16)v38 > 0x19u || (v45 = 67026952, !_bittest64(&v45, v38)) )
    {
      if ( !sub_10CCDE0(v38) )
      {
        v39 = *(__int64 **)(a1 + 8);
        v33 = (__int64 *)v47;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v39, v47);
      }
    }
    sub_14808E0((__int64)&v53, v33, v34, v35, v36, v37);
    goto LABEL_3;
  }
  v49 = *(_DWORD *)(a1 + 16);
  if ( sub_141A630(v14) )
    v16 = 0;
  else
    v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
  v18 = v17[294];
  v17[304] += 16LL;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17[295] >= v19 + 16 && v18 )
  {
    v17[294] = v19 + 16;
  }
  else
  {
    v52 = v16;
    v40 = sub_986170((__int64)(v17 + 294), 16, 16, 3, v16, v15);
    v16 = v52;
    v19 = v40;
  }
  v20 = v49;
  *(_QWORD *)(v19 + 8) = v16;
  v50 = v19;
  *(_DWORD *)v19 = v20;
  v21 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v21, v47);
  if ( (unsigned __int8)sub_14808E0((__int64)&v53, (__int64 *)v47, v22, v23, v24, v25) )
  {
LABEL_3:
    result = v53;
    *v53 = v54;
    return result;
  }
  v26 = HIDWORD(v60);
  if ( a5 )
    *a5 = HIDWORD(v60);
  v48 = v50;
  v51 = v26;
  v27 = sub_15D92D0(*(_QWORD *)(a4 + 40), 88);
  v28 = sub_F963B0(a2, a6, a8 & 0xF);
  *(_QWORD *)v27 = a2;
  *(_QWORD *)(v27 + 8) = a6;
  *(_WORD *)(v27 + 32) = v28;
  *(_BYTE *)(v27 + 34) = (16 * ((unsigned __int8)a8 >> 4)) | a8 & 0xF;
  *(_DWORD *)(v27 + 16) = a7;
  v29 = *(_BYTE *)(v27 + 35);
  *(_DWORD *)(v27 + 20) = 0;
  *(_DWORD *)(v27 + 24) = a3;
  *(_DWORD *)(v27 + 28) = v51;
  *(_QWORD *)(v27 + 40) = 0;
  *(_QWORD *)(v27 + 48) = 0;
  *(_BYTE *)(v27 + 35) = HIBYTE(a8) & 1 | v29 & 0xFC | (2 * ((a8 & 0x200) != 0));
  *(_QWORD *)(v27 + 56) = *(_QWORD *)(v27 + 56) & 0x7F800000LL | 1;
  *(_QWORD *)(v27 + 72) = sub_15D7D80(v27);
  *(_QWORD *)(v27 + 80) = v48 | 2;
  v30 = *(unsigned int *)(a4 + 56);
  if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 60) )
  {
    sub_2237220(a4 + 48, a4 + 64, v30 + 1, 8);
    v30 = *(unsigned int *)(a4 + 56);
  }
  *(_QWORD *)(*(_QWORD *)(a4 + 48) + 8 * v30) = v27;
  ++*(_DWORD *)(a4 + 56);
  sub_147F4B0(a4 + 8, v27);
  result = v53;
  *v53 = v54;
  return result;
}
