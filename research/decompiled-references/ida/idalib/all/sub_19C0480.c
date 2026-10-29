__int64 __fastcall sub_19C0480(__int64 a1, unsigned int a2, _DWORD *a3, char a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // eax
  __int64 *v12; // rax
  int v13; // edx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r13
  _QWORD *v17; // rsi
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // r13
  _WORD *v21; // rax
  _DWORD *v22; // r14
  __int64 v23; // rbx
  __int16 v24; // ax
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rsi
  char v31; // al
  __int64 v32; // rsi
  int v33; // eax
  int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  _DWORD *v53; // [rsp+8h] [rbp-F0h] BYREF
  int v54; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v55; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+28h] [rbp-D0h]
  _QWORD v57[2]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-B8h]
  int v59; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v60[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v61; // [rsp+A8h] [rbp-50h]
  unsigned int v62; // [rsp+B0h] [rbp-48h]
  char v63; // [rsp+B4h] [rbp-44h]

  v9 = *(_QWORD *)(a1 + 232);
  v53 = a3;
  if ( (*(_BYTE *)(v9 + 68) & 8) == 0
    || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL), v11 = *(_DWORD *)(v10 + 248), (unsigned int)(v11 - 41) > 1)
    && v11 != 26 )
  {
    sub_1C3BC60(a1, a2, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_36;
  }
  sub_1C3BC60(a1, a2, 0);
  sub_1606D30((__int64)v57, (_QWORD *)a1, a2, 157, 0);
  if ( v61 )
  {
    sub_AEC220(v60, *(_BYTE **)(v10 + 216), *(_QWORD *)(v10 + 224));
    sub_15F7200(v57);
  }
  else
  {
    if ( v63 )
    {
      v46 = sub_168B9E0(v57);
      v47 = v58;
      if ( v58 )
        v47 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v58 + 32LL))(v58);
      v55 = v47;
      v48 = sub_1587BC0(v46, &v55, v42, v43, v44, v45);
      sub_AEC220((unsigned __int8 **)(*v48 + 32LL * v62 + 8), *(_BYTE **)(v10 + 216), *(_QWORD *)(v10 + 224));
    }
    sub_15F7200(v57);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
  {
LABEL_36:
    sub_178F5D0((__int64)v57, *(__int64 **)(a1 + 664), a2, 0xDEBu);
    if ( v61 )
    {
      sub_AE9DF0(v60, (__int64)"throw", 1u);
    }
    else if ( v63 )
    {
      sub_19A9980((__int64)v57, (__int64)"throw");
    }
    v29 = *(_QWORD *)(a1 + 664);
    v30 = *(_QWORD *)(*(_QWORD *)v29 + 544LL);
    v31 = *(_BYTE *)(v30 + 8);
    v32 = v30 - 72;
    if ( (v31 & 0x7Fu) - 34 >= 6 )
      v32 = 0;
    v33 = sub_178EA20(v29, v32, nullptr, v26, v27, v28);
    v34 = v33;
    if ( v61 )
    {
      sub_AE9DF0(v60, v33, 2u);
      sub_15F7200(v57);
    }
    else
    {
      if ( v63 )
      {
        v39 = sub_168B9E0(v57);
        v40 = v58;
        if ( v58 )
          v40 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v58 + 32LL))(v58);
        v55 = v40;
        v41 = sub_1587BC0(v39, &v55, v35, v36, v37, v38);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v62 + 8), v34, 2u);
      }
      sub_15F7200(v57);
    }
  }
LABEL_5:
  v12 = *(__int64 **)(a1 + 608);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 + 2);
    if ( (v13 & 0x20000) != 0 )
    {
      sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), a2, 0x1207u, 0);
      if ( v61 )
      {
        sub_AE9DF0(v60, (__int64)"throw", 1u);
      }
      else if ( v63 )
      {
        sub_19A9980((__int64)v57, (__int64)"throw");
      }
      sub_15F7200(v57);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 4) != 0 )
      {
        v12 = *(__int64 **)(a1 + 608);
        if ( v12 )
          goto LABEL_10;
      }
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 4) != 0 )
    {
      while ( (v13 & 0x10000000) == 0 )
      {
        if ( (v13 & 0x2DE1) != 0 )
          goto LABEL_13;
        v12 = (__int64 *)*v12;
        if ( !v12 )
          goto LABEL_13;
LABEL_10:
        v13 = *((_DWORD *)v12 + 2);
      }
      sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
      v54 = 2;
      v52 = sub_1587D10((__int64)v57, &v54);
      LODWORD(v55) = 0;
      sub_1587D10(v52, (int *)&v55);
      sub_15F7200(v57);
    }
  }
LABEL_13:
  v14 = (unsigned __int64)v53;
  if ( !v53 )
    goto LABEL_22;
  if ( (*v53 & 0x10000) != 0 )
  {
    v17 = *(_QWORD **)(a1 + 248);
LABEL_20:
    if ( (unsigned int)(*(_DWORD *)(v17[2181] + 248LL) - 23) > 1 )
      goto LABEL_23;
    v18 = *(_QWORD *)(a1 + 768);
    v19 = sub_EEB7E0(v14, (__int64)v17, *(double *)a5.m128_u64);
    sub_1C0D9F0(v18, *(_QWORD *)(v14 + 8), v19);
LABEL_22:
    v17 = *(_QWORD **)(a1 + 248);
    goto LABEL_23;
  }
  if ( a4 )
  {
    v50 = sub_1C37020(a1, &v53, 1);
    v14 = (unsigned __int64)v53;
    v55 = v50;
    v56 = v51;
  }
  else
  {
    v55 = 0;
    LOBYTE(v56) = 0;
  }
  v15 = sub_A75E00(*(_QWORD **)(a1 + 248), *(_QWORD *)(v14 + 8));
  if ( (unsigned __int8)sub_19BF700((_QWORD *)a1, a2, v15, (unsigned __int64)v53, a5, a6) )
    return 1;
  LODWORD(v57[0]) = 5;
  v57[1] = 0;
  v58 = v15;
  v59 = 0;
  LODWORD(v60[0]) = a2;
  BYTE4(v60[0]) = 0;
  v49 = sub_1C37220(a1, v57, &v55, v53, 0);
  if ( v49 == 1 )
    return 1;
  v17 = *(_QWORD **)(a1 + 248);
  v14 = v49 & 0xFFFFFFFFFFFFFFFELL;
  v53 = (_DWORD *)(v49 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v49 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    goto LABEL_20;
LABEL_23:
  v20 = v17[2329];
  v21 = (_WORD *)sub_EEE9A0(24, v17, 8u);
  v22 = v53;
  v23 = (__int64)v21;
  *v21 = *v21 & 0xFE00 | 0x61;
  if ( unk_2CD7484 )
    sub_EE9B50(97);
  v24 = *(_WORD *)(v23 + 1);
  *(_QWORD *)(v23 + 8) = v20;
  *(_QWORD *)(v23 + 16) = v22;
  v24 &= 0xF801u;
  *(_DWORD *)(v23 + 4) = a2;
  *(_WORD *)(v23 + 1) = v24;
  *(_BYTE *)(v23 + 2) = (8 * (a4 & 1)) | HIBYTE(v24) & 0xF7;
  v25 = sub_B635C0(v23);
  *(_BYTE *)(v23 + 1) = (v25 << 6) | *(_BYTE *)(v23 + 1) & 0x3F;
  *(_BYTE *)(v23 + 2) = *(_BYTE *)(v23 + 2) & 0xF8 | (v25 >> 2) & 7;
  return v23;
}
