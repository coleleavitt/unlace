void __fastcall sub_19FFC80(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 **v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int8 v18; // al
  __int64 v19; // r15
  __int64 v20; // rax
  __m128i *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rcx
  __int64 v27; // r14
  __int64 *v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-100h]
  __int64 v38; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v39; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 *v43; // [rsp+40h] [rbp-C8h] BYREF
  void *v44[2]; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+88h] [rbp-80h]
  _QWORD *v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h]
  unsigned int v48; // [rsp+A0h] [rbp-68h]
  char v49; // [rsp+A4h] [rbp-64h]
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+C0h] [rbp-48h]

  if ( a3[3].m128i_i16[4] != 1 )
  {
    sub_168B9F0((__int64)&v39, a1, a3[1].m128i_u32[2], 0xCAAu, 0);
    v7 = sub_15DD120((__int64)&v39, (__int64)a3);
    LODWORD(v38) = 1;
    sub_1587D10(v7, (int *)&v38);
    sub_15F7200(&v39);
    return;
  }
  v8 = *(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_11;
  v9 = (__int64 **)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v10 = *v9;
  v11 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v10 < v11 )
  {
    v26 = v10;
    while ( *(_WORD *)(*v26 + 36) != 436 )
    {
      if ( (__int64 *)v11 == ++v26 )
        goto LABEL_11;
    }
    if ( (__int64 *)v11 != v26 )
      goto LABEL_32;
LABEL_11:
    v14 = (_QWORD *)*a1;
    v41 = 0x800000000LL;
    ptr = &v42;
    *(_OWORD *)v44 = 0;
    v46 = v14;
    v39 = 0;
    v45 = 0;
    v47 = v8;
    v48 = 0;
    sub_B85890(&v50, v8);
    v51 = 0;
    v52 = 0x101010000LL;
    sub_1A395A0(&v39);
    v15 = *(_QWORD *)(a2 + 16);
    if ( (v15 & 4) != 0 )
      v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned __int8)sub_1A48440(*a1, &v39, v16, 0) )
    {
      v17 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
      v18 = *(_BYTE *)(v17 + 28) & 0x7F;
      if ( ((v18 + 52) & 0x7Fu) <= 1 || (unsigned int)v18 - 53 <= 1 )
      {
        v17 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
        v18 = *(_BYTE *)(v17 + 28) & 0x7F;
      }
      v37 = v17;
      if ( v18 == 79 )
      {
        v19 = sub_168B6C0((__int64)a1);
        v20 = sub_168B6C0((__int64)a1);
        v21 = (__m128i *)sub_19F7E40((__int64 *)(v20 + 2352), 56, 3u);
        sub_B18E10(v21, v19, a3, v8, v37);
        sub_B8CC60(a2, (__int64)v21, v22, v23, v24, v25);
      }
    }
    if ( BYTE3(v52) )
    {
      if ( (_DWORD)v39 == 5 )
      {
        if ( !BYTE4(v52) )
          goto LABEL_23;
        goto LABEL_48;
      }
      if ( !v44[1] || (*(_BYTE *)(v46[29] + 46LL) & 0x20) == 0 )
        goto LABEL_23;
      sub_1663B80(v46, (__int64)&v39);
    }
    if ( !BYTE4(v52) || (_DWORD)v39 != 5 )
      goto LABEL_23;
LABEL_48:
    sub_1A445B0(v46, &v39);
LABEL_23:
    if ( v44[0] )
      sub_1A39780(v44[0]);
    if ( ptr != &v42 )
      free(ptr);
    return;
  }
  if ( v10 == (__int64 *)v11 )
    goto LABEL_11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 436 )
  {
    v12 = (__int64 *)(v11 + 8);
    while ( v12 != v10 )
    {
      v13 = *v12++;
      if ( *(_WORD *)(v13 + 36) == 436 )
        goto LABEL_32;
    }
    goto LABEL_11;
  }
LABEL_32:
  v27 = *v10;
  if ( *(_WORD *)(*v10 + 36) != 436 )
  {
    v28 = v10 + 1;
    do
      v27 = *v28++;
    while ( *(_WORD *)(v27 + 36) != 436 );
  }
  v29 = 3703;
  if ( v8 == *(_QWORD *)(v27 + 40) )
    v29 = 6860;
  sub_168B9F0((__int64)&v39, a1, a3[1].m128i_u32[2], v29, 0);
  if ( (_BYTE)v47 )
  {
    sub_AE9DF0(&v43, v27, 0xEu);
  }
  else if ( v49 )
  {
    v32 = sub_168B9E0(&v39);
    v35 = v41;
    if ( v41 )
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
    v38 = v35;
    v36 = sub_1587BC0(v32, &v38, v30, v31, v33, v34);
    sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v48 + 8), v27, 0xEu);
  }
  sub_15F7200(&v39);
}
