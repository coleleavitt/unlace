_BYTE *__fastcall sub_14A42B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 *v8; // rdi
  bool v9; // zf
  char v10; // al
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *result; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // dl
  __int64 v23; // r8
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  void *v33; // rdi
  int v34; // r14d
  __int64 v35; // r15
  __int16 v36; // ax
  __int64 v37; // rax
  size_t n; // [rsp+8h] [rbp-150h]
  __int64 na; // [rsp+8h] [rbp-150h]
  unsigned __int64 v40; // [rsp+10h] [rbp-148h]
  int v41; // [rsp+10h] [rbp-148h]
  const void *src; // [rsp+18h] [rbp-140h]
  _BYTE *v43; // [rsp+20h] [rbp-138h] BYREF
  char v44; // [rsp+28h] [rbp-130h]
  __int64 v45; // [rsp+30h] [rbp-128h]
  int v46; // [rsp+38h] [rbp-120h]
  __int16 v47; // [rsp+3Ch] [rbp-11Ch]
  __int64 (__fastcall *v48)(__int64); // [rsp+40h] [rbp-118h]
  __int64 v49; // [rsp+48h] [rbp-110h]
  __int64 v50; // [rsp+50h] [rbp-108h]
  void *ptr; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-F0h]
  _BYTE v53[64]; // [rsp+70h] [rbp-E8h] BYREF
  void *v54; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-A0h]
  _QWORD v56[19]; // [rsp+C0h] [rbp-98h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 32);
  v5 = sub_141A630(v4);
  if ( (_WORD)v4 == 1 || v5 )
    v6 = 0;
  else
    v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v7;
  sub_14634E0(v8, (int *)(a1 + 16));
  v9 = *(_WORD *)(a1 + 32) == 22;
  v43 = (_BYTE *)(a1 + 1952);
  v10 = *(_BYTE *)(a1 + 1952);
  v45 = a1;
  v44 = v10;
  *(_BYTE *)(a1 + 1952) = 1;
  v46 = 1507350;
  v47 = 63;
  v48 = sub_146A990;
  v49 = 0;
  v50 = 0;
  if ( !v9 )
    goto LABEL_11;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    LODWORD(v50) = sub_146A990(a1);
    goto LABEL_7;
  }
  if ( (unsigned __int8)sub_1568800(&v43) )
  {
LABEL_11:
    sub_1564840(&v54, a1, a1 + 16, 14);
    sub_AE9DF0((unsigned __int8 **)&v54, 22, 4u);
    sub_AEA040((__int64)&v54);
    goto LABEL_12;
  }
LABEL_7:
  v11 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v11 - 14) > 1u && (unsigned __int16)(v11 - 17) > 2u
    || (v17 = sub_14B6F70(a1), v17 == 1)
    || (v18 = v17 & 0xFFFFFFFFFFFFFFFELL, (*(_WORD *)(v17 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) != 9) )
  {
    sub_1564840(&v54, a1, a1 + 16, 19);
    sub_AE9DF0((unsigned __int8 **)&v54, 4, 2u);
    sub_AEC220((unsigned __int8 **)&v54, (_BYTE *)(*(_QWORD *)(v6 + 16) + 16LL), **(unsigned int **)(v6 + 16));
    sub_AEA040((__int64)&v54);
    LOWORD(v54) = 23;
    sub_15680D0(a1, &v54, 1, 3);
    sub_14808E0((__int64)&v43, (__int64 *)&v54, v12, v13, v14, v15);
  }
  else
  {
    v40 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v18 + 4LL * *(unsigned int *)(v18 + 4) + 20;
    n = sub_19FAA60(
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 680LL),
          v19,
          *(_DWORD *)(v18 + 16) * ((*(_WORD *)(v18 + 2) >> 6) & 7u));
    if ( !v22 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      ptr = v53;
      v52 = 0x100000000LL;
      v24 = (__int64 *)*(unsigned int *)(*(_QWORD *)(v23 + 56) + 856LL);
      sub_14E1560(&v54, v24, &ptr, v40);
      if ( (unsigned __int8)sub_14EC7A0(&v54) )
      {
        sub_14808E0((__int64)&v43, v24, v25, v26, v27, v28);
        v33 = ptr;
        if ( ptr == v53 )
          goto LABEL_12;
        goto LABEL_24;
      }
      v19 = v7;
      sub_1A06120(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 680LL), v7, n, ptr, (unsigned int)v52);
      if ( ptr != v53 )
        free(ptr);
    }
    v29 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
    v30 = v29[294];
    v29[304] += 16LL;
    v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v29[295] >= v31 + 16 && v30 )
    {
      v29[294] = v31 + 16;
      v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v19 = 16;
      v32 = sub_986170((__int64)(v29 + 294), 16, 16, 3, v20, v21);
      v31 = v32 & 0xFFFFFFFFFFFFFFFDLL;
    }
    *(_DWORD *)v32 = v7;
    *(_QWORD *)(v32 + 8) = n;
    v54 = v56;
    v56[0] = v31 | 2;
    v55 = 0xC00000001LL;
    if ( !(unsigned __int8)sub_14808E0((__int64)&v43, (__int64 *)v19, v31 | 2, n, v20, v21) )
    {
      v34 = v55;
      v41 = HIDWORD(v50);
      na = 8LL * (unsigned int)v55;
      src = v54;
      v35 = sub_15D92D0(*(_QWORD *)(a2 + 40), na + 80);
      v36 = sub_F963B0(v6, 0, 5);
      *(_QWORD *)v35 = v6;
      *(_BYTE *)(v35 + 35) &= 0xFCu;
      *(_WORD *)(v35 + 56) = v34;
      *(_QWORD *)(v35 + 56) &= 0x7F80FFFFuLL;
      *(_QWORD *)(v35 + 8) = 0;
      *(_QWORD *)(v35 + 16) = 0;
      *(_DWORD *)(v35 + 24) = v7;
      *(_DWORD *)(v35 + 28) = v41;
      *(_WORD *)(v35 + 32) = v36;
      *(_BYTE *)(v35 + 34) = -11;
      *(_QWORD *)(v35 + 40) = 0;
      *(_QWORD *)(v35 + 48) = 0;
      *(_QWORD *)(v35 + 72) = sub_15D7D80(v35);
      if ( v34 )
        memcpy((void *)(v35 + 80), src, na);
      v37 = *(unsigned int *)(a2 + 56);
      if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 60) )
      {
        sub_2237220(a2 + 48, a2 + 64, v37 + 1, 8);
        v37 = *(unsigned int *)(a2 + 56);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v37) = v35;
      ++*(_DWORD *)(a2 + 56);
      sub_147F4B0(a2 + 8, v35);
    }
    v33 = v54;
    if ( v54 != v56 )
LABEL_24:
      free(v33);
  }
LABEL_12:
  result = v43;
  *v43 = v44;
  return result;
}
