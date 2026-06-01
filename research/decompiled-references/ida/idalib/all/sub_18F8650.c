void __fastcall sub_18F8650(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        signed __int64 a5,
        __m128i a6,
        double a7)
{
  int v7; // eax
  char *v10; // rax
  signed __int64 v11; // rdx
  __int64 *v12; // r15
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  signed __int64 v34; // [rsp+0h] [rbp-110h]
  unsigned __int64 v36; // [rsp+8h] [rbp-108h]
  __int64 v38; // [rsp+10h] [rbp-100h]
  __int64 v40; // [rsp+20h] [rbp-F0h]
  __int64 v41; // [rsp+20h] [rbp-F0h]
  __int64 v42; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-D8h] BYREF
  char v45; // [rsp+40h] [rbp-D0h]
  unsigned __int8 *v46; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-C0h]

  if ( ((*(_WORD *)a3 + 394) & 0x1FFu) > 1 )
    return;
  v7 = (*(_WORD *)(a3 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v7 - 5) > 1 )
    return;
  v10 = sub_BFA720(v7);
  v34 = v11;
  v12 = (__int64 *)v10;
  sub_168B9F0((__int64)&v46, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 4), 0x1958u, 0);
  v13 = &v43;
  v43 = sub_EEC8C0(a3, a1 + 8, *(double *)a6.m128i_i64);
  v14 = sub_1587DB0((__int64)&v46, &v43);
  v15 = v14;
  if ( *(_BYTE *)(v14 + 120) )
  {
    v45 = 1;
    LODWORD(v44) = a2;
    HIDWORD(v44) = a2;
    v13 = &v44;
    sub_AEC610((__int64 *)(v14 + 32), &v44);
  }
  else
  {
    if ( !*(_BYTE *)(v14 + 132) )
      goto LABEL_6;
    v16 = sub_168B9E0((_QWORD *)v14);
    v20 = *(_QWORD *)(v15 + 16);
    if ( v20 )
    {
      v40 = v16;
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
      v16 = v40;
    }
    v42 = v20;
    v21 = *sub_1587BC0(v16, &v42, v16, v17, v18, v19) + 32LL * *(unsigned int *)(v15 + 128);
    v45 = 1;
    LODWORD(v44) = a2;
    HIDWORD(v44) = a2;
    v13 = &v44;
    sub_AEC610((__int64 *)(v21 + 8), &v44);
  }
  if ( *(_BYTE *)(v15 + 120) )
  {
    v13 = a4;
    sub_AEC220((unsigned __int8 **)(v15 + 32), a4, a5);
LABEL_13:
    if ( *(_BYTE *)(v15 + 120) )
    {
      v13 = v12;
      sub_AEC220((unsigned __int8 **)(v15 + 32), v12, v34);
    }
    else if ( *(_BYTE *)(v15 + 132) )
    {
      v22 = sub_168B9E0((_QWORD *)v15);
      v26 = *(_QWORD *)(v15 + 16);
      if ( v26 )
      {
        v38 = v22;
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
        v22 = v38;
      }
      v44 = v26;
      v27 = sub_1587BC0(v22, &v44, v22, v23, v24, v25);
      v13 = v12;
      sub_AEC220((unsigned __int8 **)(*v27 + 32LL * *(unsigned int *)(v15 + 128) + 8), v12, v34);
    }
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v15 + 132) )
  {
    v28 = sub_168B9E0((_QWORD *)v15);
    v32 = *(_QWORD *)(v15 + 16);
    if ( v32 )
    {
      v41 = v28;
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v28 = v41;
    }
    v44 = v32;
    v33 = sub_1587BC0(v28, &v44, v28, v29, v30, v31);
    v13 = a4;
    sub_AEC220((unsigned __int8 **)(*v33 + 32LL * *(unsigned int *)(v15 + 128) + 8), a4, a5);
    goto LABEL_13;
  }
LABEL_6:
  sub_15F7200(&v46);
  v36 = sub_EEC8C0(a3, (__int64)v13, *(double *)a6.m128i_i64);
  sub_168B9B0((__int64)&v46, a1 + 8, 6275);
  sub_AEC220(&v46, v12, v34);
  sub_18F7970(a1, *(_DWORD *)(a3 + 4), (__int64)&v46, v36, a6, a7);
  if ( v46 )
  {
    if ( v47 )
      sub_1580C40(v47, (unsigned __int64)v46);
  }
}
