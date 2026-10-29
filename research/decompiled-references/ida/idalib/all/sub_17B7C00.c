void __fastcall sub_17B7C00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v42[8]; // [rsp+8h] [rbp-40h] BYREF

  v42[0] = a3;
  sub_1CB44B0(a1, v42);
  v13 = a1[490];
  v14 = v42[0];
  v15 = *(unsigned int *)(v13 + 280);
  v16 = *(unsigned int *)(v13 + 284);
  if ( v15 + 1 > v16 )
  {
    sub_2237220(v13 + 272, v13 + 288, v15 + 1, 8);
    v15 = *(unsigned int *)(v13 + 280);
  }
  v17 = *(_QWORD *)(v13 + 272);
  *(_QWORD *)(v17 + 8 * v15) = 0;
  v18 = *(_QWORD *)(v14 + 40);
  ++*(_DWORD *)(v13 + 280);
  if ( (v18 & 7) == 0 && (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( a6 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104), v17, v16, v11, v12);
      *(_BYTE *)(*(_QWORD *)(v14 + 128) + 1LL) |= 8u;
    }
    v19 = (_QWORD *)a1[31];
    if ( a4 )
    {
      v20 = sub_B30AE0((__int64)v19, ((unsigned __int64)a4 << 32) | a4, a5);
      sub_B8CC60(v14, v20, v21, v22, v23, v24);
      v19 = (_QWORD *)a1[31];
    }
    if ( a7 )
    {
      v36 = sub_B31A30((__int64)v19, ((unsigned __int64)a7 << 32) | a7);
      sub_B8CC60(v14, v36, v37, v38, v39, v40);
      v19 = (_QWORD *)a1[31];
    }
    if ( a8 )
    {
      v31 = sub_B31470((__int64)v19, ((unsigned __int64)a8 << 32) | a8);
      sub_B8CC60(v14, v31, v32, v33, v34, v35);
      v19 = (_QWORD *)a1[31];
    }
    v25 = *(_QWORD *)(v14 + 40);
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v25 & 7) != 0 )
      v26 = 0;
    v27 = sub_B96A60(v19, *(_BYTE *)(v14 + 73) >> 5, a1[68], *(_DWORD *)(v14 + 56), *(_DWORD *)(v14 + 24), v26, 0, 1);
    if ( !*(_QWORD *)(v27 + 48) )
      *(_QWORD *)(v27 + 48) = *(_QWORD *)(v14 + 48);
    *(_BYTE *)(v27 + 29) = *(_BYTE *)(v27 + 29) & 0x9D | 2;
    v28 = sub_B97230(v14);
    if ( v28 )
      sub_B97250(v27, v28);
    sub_17B7670((__int64)a1, v27, a2, 1, v29, v30);
  }
}
