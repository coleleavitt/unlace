_BYTE *__fastcall sub_148F1B0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        int a9,
        __int16 a10)
{
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int *v20; // rdx
  _BYTE *result; // rax
  size_t v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int16 v31; // ax
  char v32; // dl
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // rdi
  __int64 v38; // [rsp+8h] [rbp-100h]
  unsigned __int64 v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+18h] [rbp-F0h]
  char v41; // [rsp+26h] [rbp-E2h]
  char v42; // [rsp+27h] [rbp-E1h]
  int *v43; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v45; // [rsp+40h] [rbp-C8h] BYREF
  char v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+50h] [rbp-B8h]
  int v48; // [rsp+58h] [rbp-B0h]
  __int16 v49; // [rsp+5Ch] [rbp-ACh]
  __int64 (__fastcall *v50)(__int64); // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v53[17]; // [rsp+80h] [rbp-88h] BYREF

  v45 = (_BYTE *)(a1 + 1952);
  v15 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v46 = v15;
  v47 = a1;
  v49 = 63;
  v48 = 1507350;
  v50 = sub_146A990;
  v51 = 0;
  v52 = 0;
  sub_1477FA0((__int64)&v45);
  if ( *(_WORD *)(a1 + 32) != 5 )
  {
    v20 = (int *)(a1 + 16);
LABEL_3:
    sub_1564840(v53, a1, v20, 14);
    sub_AE9DF0(v53, 5, 4u);
    sub_AEA040((__int64)v53);
LABEL_4:
    sub_156E210(&v45);
    goto LABEL_5;
  }
  v39 = sub_14803B0(a1, a2, v16, v17, v18, v19);
  v22 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v22) )
    goto LABEL_4;
  v23 = &v44;
  v44 = 0;
  v40 = sub_148B630(a1, &v44, a7, a8);
  v41 = v24;
  if ( (_BYTE)v24 )
    goto LABEL_4;
  if ( *(_WORD *)(a1 + 32) == 66 )
  {
    v42 = 0;
    v43 = (int *)(a1 + 16);
    while ( 1 )
    {
      v28 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v28, v43);
      if ( *(_WORD *)(a1 + 32) != 5 )
        break;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( (unsigned int)*(_QWORD *)v29 == 17 )
      {
        if ( *(_QWORD *)(v29 + 16) ^ 0x635F74756F79616CLL | *(_QWORD *)(v29 + 24) ^ 0x6C62697461706D6FLL
          || *(_BYTE *)(v29 + 32) != 101 )
        {
LABEL_18:
          v38 = *(_QWORD *)(a1 + 24);
          sub_1564840(v53, a1, v43, 1900);
          sub_1478560(v53, v38);
          sub_AEA040((__int64)v53);
          sub_156E210(&v45);
          goto LABEL_5;
        }
        v41 = 1;
      }
      else
      {
        if ( (unsigned int)*(_QWORD *)v29 != 12
          || *(_QWORD *)(v29 + 16) != 0x5F65625F7473756DLL
          || *(_DWORD *)(v29 + 24) != 1819047278 )
        {
          goto LABEL_18;
        }
        v42 = 1;
      }
      v36 = *(__int64 **)(a1 + 8);
      v23 = (__int64 *)v43;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v36, v43);
      if ( *(_WORD *)(a1 + 32) != 66 )
        goto LABEL_10;
    }
    v20 = v43;
    goto LABEL_3;
  }
  v42 = 0;
LABEL_10:
  if ( !(unsigned __int8)sub_14808E0((__int64)&v45, v23, v24, v25, v26, v27) )
  {
    v30 = sub_15D92D0(*(_QWORD *)(a4 + 40), 104);
    v31 = sub_F963B0(a2, a6, a10 & 0xF);
    *(_QWORD *)v30 = a2;
    *(_WORD *)(v30 + 32) = v31;
    *(_QWORD *)(v30 + 8) = a6;
    *(_DWORD *)(v30 + 20) = 0;
    *(_BYTE *)(v30 + 34) = (16 * ((unsigned __int8)a10 >> 4)) | a10 & 0xF;
    *(_DWORD *)(v30 + 16) = a9;
    v32 = *(_BYTE *)(v30 + 35);
    *(_DWORD *)(v30 + 24) = a3;
    *(_DWORD *)(v30 + 28) = a3;
    *(_QWORD *)(v30 + 40) = 0;
    *(_QWORD *)(v30 + 48) = 0;
    *(_BYTE *)(v30 + 35) = HIBYTE(a10) & 1 | v32 & 0xFC | (2 * ((a10 & 0x200) != 0));
    *(_QWORD *)(v30 + 56) = *(_QWORD *)(v30 + 56) & 0x7F800000LL | 0x80001;
    v33 = sub_15D7D80(v30);
    v34 = *(unsigned __int16 *)(v30 + 56);
    *(_QWORD *)(v30 + 72) = v33;
    *(_QWORD *)(v30 + 80) = v39 | 2;
    v35 = v30 + 104LL * ((*(_BYTE *)(v30 + 58) & 4) != 0) + 8 * v34 + 80;
    *(_QWORD *)v35 = v40;
    *(_BYTE *)(v35 + 8) = (2 * v42) | v41 & 1 | *(_BYTE *)(v35 + 8) & 0xFC;
    sub_147F4B0(a4 + 48, v30);
    sub_147F4B0(a4 + 8, v30);
  }
  if ( a5 )
    *a5 = HIDWORD(v52);
LABEL_5:
  result = v45;
  *v45 = v46;
  return result;
}
