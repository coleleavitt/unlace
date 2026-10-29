__int64 __fastcall sub_16C9740(_QWORD *a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  char v12; // al
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  int v15; // esi
  _QWORD *v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r15d
  __int64 v24; // r13
  _WORD *v25; // rax
  char v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rbx
  char v29; // al
  unsigned __int8 v30; // al
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rbx
  int v41; // r15d
  unsigned int v42; // r13d
  __int64 v43; // rbx
  __int64 v45; // [rsp+8h] [rbp-E0h]
  __int64 v46; // [rsp+8h] [rbp-E0h]
  _QWORD v47[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-C8h]
  __int64 v49; // [rsp+28h] [rbp-C0h]
  __int128 v50; // [rsp+30h] [rbp-B8h]
  void *v51; // [rsp+40h] [rbp-A8h]
  __int64 v52; // [rsp+48h] [rbp-A0h]
  __int64 v53; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v56; // [rsp+68h] [rbp-80h]
  _BYTE v57[120]; // [rsp+70h] [rbp-78h] BYREF

  v8 = a1[1];
  v47[1] = a5;
  v47[0] = a4;
  v9 = *(unsigned int *)(v8 + 16);
  ptr = v57;
  v56 = 0x800000000LL;
  v10 = a5 + (unsigned int)(v9 - 1);
  v11 = 8;
  if ( v10 > 8 )
  {
    sub_2237220(&ptr, v57, v10, 8);
    v8 = a1[1];
    v11 = HIDWORD(v56);
    v9 = *(unsigned int *)(v8 + 16);
  }
  v12 = *(_BYTE *)(v8 + 2);
  v13 = 8 * v9 - 16;
  LODWORD(v56) = 0;
  v14 = v13 >> 3;
  v15 = v13 >> 3;
  v16 = (_QWORD *)(v8 + 8 * (((v12 & 8) != 0) + 1LL) + 48);
  v17 = 0;
  if ( v13 >> 3 > v11 )
  {
    v46 = 8 * v9 - 16;
    sub_2237220(&ptr, v57, v14, 8);
    v13 = v46;
    v17 = 8LL * (unsigned int)v56;
    v15 = v14 + v56;
  }
  v18 = (char *)ptr + v17;
  if ( v13 > 0 )
  {
    if ( v13 <= 8 )
      goto LABEL_10;
    v19 = 0;
    do
    {
      *(__m128i *)&v18[v19] = _mm_loadu_si128((const __m128i *)&v16[v19]);
      v19 += 2;
    }
    while ( v19 != 2 * (v14 >> 1) );
    v20 = 8 * (v14 & 0xFFFFFFFFFFFFFFFELL);
    v16 = (_QWORD *)((char *)v16 + v20);
    v18 = (_QWORD *)((char *)v18 + v20);
    if ( v14 != (v14 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_10:
      *v18 = *v16;
  }
  v21 = *a1;
  LODWORD(v56) = v15;
  v22 = sub_AB3DF0(*(_QWORD *)(v21 + 248), a2, a3);
  v23 = *((_DWORD *)a1 + 4);
  v24 = v22;
  v25 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(*a1 + 248LL), 8u);
  v26 = *(_BYTE *)(v24 + 1);
  v27 = *(_QWORD *)(v24 + 8);
  v28 = (__int64)v25;
  *v25 = *v25 & 0xFE00 | 0x14;
  if ( unk_2CD7484 )
  {
    v45 = v27;
    sub_EE9B50(20);
    v27 = v45;
  }
  v29 = *(_BYTE *)(v28 + 1);
  *(_BYTE *)(v28 + 2) &= 0xF0u;
  *(_QWORD *)(v28 + 8) = v27;
  *(_DWORD *)(v28 + 16) = v23;
  *(_DWORD *)(v28 + 20) = v23;
  *(_BYTE *)(v28 + 1) = v26 & 0x3E | v29 & 1;
  *(_QWORD *)(v28 + 24) = v24;
  v30 = sub_B62400(v28);
  *(_BYTE *)(v28 + 1) = (v30 << 6) | *(_BYTE *)(v28 + 1) & 0x3F;
  *(_BYTE *)(v28 + 2) = *(_BYTE *)(v28 + 2) & 0xF8 | (v30 >> 2) & 7;
  v31 = (unsigned int)v56;
  v32 = (unsigned int)v56 + 1LL;
  if ( v32 > HIDWORD(v56) )
  {
    sub_2237220(&ptr, v57, v32, 8);
    v31 = (unsigned int)v56;
  }
  *((_QWORD *)ptr + v31) = v28;
  LODWORD(v56) = v56 + 1;
  sub_16C96C0((__int64)&ptr, (__int64)v47);
  v33 = *a1;
  WORD2(v48) = 0;
  v34 = *((_DWORD *)a1 + 4);
  v50 = 0;
  LODWORD(v49) = v34;
  v53 = 0;
  v51 = ptr;
  v54 = 0;
  LODWORD(v52) = v56;
  LODWORD(v48) = 23;
  sub_1DBA9B0(v33, v47, v35, v36, v37, v38, v48, v49, 0, 0, ptr, v52, 0, 0);
  v39 = a1[1];
  v40 = *a1;
  v41 = *(_DWORD *)(v39 + 20);
  sub_BF6D70(v39);
  v42 = 1;
  v43 = sub_192A5E0(v40, v41, 0, 0, 0);
  sub_1DBAAE0(*a1, 0);
  if ( v43 != 1 )
  {
    sub_14B7B40((__int64)(a1 + 3), v43 & 0xFFFFFFFFFFFFFFFELL);
    LOBYTE(v42) = *((_DWORD *)a1 + 76) < *(_DWORD *)(a1[37] + 196LL);
  }
  if ( ptr != v57 )
    free(ptr);
  return v42;
}
