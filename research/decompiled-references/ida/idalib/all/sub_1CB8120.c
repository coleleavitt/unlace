__int64 __fastcall sub_1CB8120(__int64 *a1, char a2, __m128 a3, __m128 a4)
{
  char v4; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  int v24; // edx
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  int v27; // edx
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-118h]
  unsigned int v37; // [rsp+8h] [rbp-110h]
  char v38; // [rsp+Eh] [rbp-10Ah]
  char v39; // [rsp+Fh] [rbp-109h]
  unsigned __int64 v40; // [rsp+10h] [rbp-108h]
  __int64 v41; // [rsp+10h] [rbp-108h]
  int v42; // [rsp+10h] [rbp-108h]
  int v43; // [rsp+10h] [rbp-108h]
  __int64 v44; // [rsp+18h] [rbp-100h]
  int v45; // [rsp+20h] [rbp-F8h]
  int v46; // [rsp+24h] [rbp-F4h]
  __int64 v47; // [rsp+28h] [rbp-F0h]
  __int64 v48; // [rsp+28h] [rbp-F0h]
  int v49; // [rsp+30h] [rbp-E8h] BYREF
  int v50; // [rsp+34h] [rbp-E4h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-E0h] BYREF
  __int16 *v52; // [rsp+40h] [rbp-D8h] BYREF
  __int16 *v53; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v54[4]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v55; // [rsp+70h] [rbp-A8h] BYREF
  char v56; // [rsp+72h] [rbp-A6h]
  int v57; // [rsp+74h] [rbp-A4h]
  __int64 v58; // [rsp+78h] [rbp-A0h]
  __int64 v59; // [rsp+80h] [rbp-98h]
  __int16 v60; // [rsp+90h] [rbp-88h] BYREF
  char v61; // [rsp+92h] [rbp-86h]
  int v62; // [rsp+94h] [rbp-84h]
  __int64 v63; // [rsp+98h] [rbp-80h]
  __int64 v64; // [rsp+A0h] [rbp-78h]
  __int64 v65; // [rsp+C8h] [rbp-50h]

  v4 = a2;
  v36 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  v8 = *a1;
  v37 = *(_DWORD *)(*a1 + 11200);
  v38 = *(_BYTE *)(*a1 + 12592);
  v39 = *(_BYTE *)(*a1 + 11248);
  v9 = *(_DWORD *)(*(_QWORD *)(*a1 + 264) + 204LL);
  *(_BYTE *)(v8 + 12592) = 1;
  *(_BYTE *)(v8 + 11248) = 1;
  v10 = *a1;
  v11 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL);
  v12 = *(_QWORD *)(v11 + 80);
  v13 = *(_QWORD *)(v12 + 72);
  if ( (v13 & 1) != 0 )
  {
    v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v34 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v16 = nullptr;
      goto LABEL_10;
    }
    v35 = *(_QWORD *)(v12 + 72) & 2LL;
    v16 = v34;
    if ( !(_DWORD)v35 )
      goto LABEL_10;
    v14 = sub_6E2500(v34, *(_QWORD *)(v11 + 80), v35, (__int64)v34, v6, v7) & 0xFFFFFFFFFFFFFFFELL;
    v13 = v14 | 1;
    *(_QWORD *)(v12 + 72) = v14 | 1;
  }
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = (_QWORD *)v15;
  if ( v14 && (v14 & 4) != 0 && v15 )
  {
    v17 = *(_QWORD *)v15;
    v18 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
    if ( *(_DWORD *)(v15 + 8) != v18 )
    {
      *(_DWORD *)(v15 + 8) = v18;
      v40 = v15;
      (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v17 + 152LL))(
        v17,
        v12,
        v15,
        v15);
      v15 = v40;
    }
    v16 = *(_QWORD **)(v15 + 16);
    v10 = *a1;
  }
  else
  {
    v10 = *a1;
  }
LABEL_10:
  v19 = *(_QWORD *)(v10 + 544);
  if ( v16 )
    v16 += 5;
  v20 = *(_QWORD *)(v10 + 512);
  *(_QWORD *)(v10 + 512) = 0;
  v44 = v20;
  v21 = *(_QWORD *)(v10 + 9944);
  *(_QWORD *)(v10 + 544) = v16;
  v65 = v21;
  LODWORD(v21) = *(_DWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 9944) = 0;
  v45 = v21;
  v46 = *(_DWORD *)(v10 + 2632);
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 2632) = *(_DWORD *)(v10 + 3688);
  v22 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18640LL);
  LOWORD(v54[0]) = v54[0] & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v41 = v22;
    sub_EE9B50(26);
    v22 = v41;
  }
  v54[1] = v22;
  *(_WORD *)((char *)v54 + 1) &= 0xF801u;
  v54[2] = 0;
  v54[0] = v54[0] & 0xFFF7FFFF;
  v23 = sub_B62360((__int64)v54);
  v51 = v54;
  BYTE1(v54[0]) = (v23 << 6) | BYTE1(v54[0]) & 0x3F;
  BYTE2(v54[0]) = BYTE2(v54[0]) & 0xF8 | (v23 >> 2) & 7;
  if ( a2 )
  {
    v4 = 1;
    *(_QWORD *)a1[1] |= 1uLL;
    *(_QWORD *)a1[2] |= 1uLL;
  }
  v24 = *(_DWORD *)a1[3];
  v25 = *(_QWORD *)a1[1];
  v55 = v55 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v48 = v25;
    v43 = v24;
    sub_EE9B50(26);
    v25 = v48;
    v24 = v43;
  }
  v57 = v24;
  v58 = v25;
  v59 = 0;
  HIBYTE(v55) = (2 * v4) | HIBYTE(v55) & 0xF9;
  HIBYTE(v55) &= 7u;
  v56 &= 0xF0u;
  v26 = sub_B62360((__int64)&v55);
  v52 = &v55;
  HIBYTE(v55) = (v26 << 6) | HIBYTE(v55) & 0x3F;
  v56 = v56 & 0xF8 | (v26 >> 2) & 7;
  v27 = *(_DWORD *)a1[3];
  v28 = *(_QWORD *)a1[2];
  v60 = v60 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v47 = v28;
    v42 = v27;
    sub_EE9B50(26);
    v28 = v47;
    v27 = v42;
  }
  v63 = v28;
  v62 = v27;
  v64 = 0;
  HIBYTE(v60) = (2 * v4) | HIBYTE(v60) & 0xF9;
  HIBYTE(v60) &= 7u;
  v61 &= 0xF0u;
  v29 = sub_B62360((__int64)&v60);
  v53 = &v60;
  v49 = 0;
  v50 = 0;
  HIBYTE(v60) = (v29 << 6) | HIBYTE(v60) & 0x3F;
  v61 = v61 & 0xF8 | (v29 >> 2) & 7;
  v30 = sub_19225E0(
          (__int64 *)*a1,
          (unsigned __int64 *)&v51,
          (__int64 *)&v52,
          (__int64 *)&v53,
          &v49,
          &v50,
          a3,
          a4,
          *(_DWORD *)a1[3]);
  if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) != 0 && *(_DWORD *)(v8 + 11200) <= v37 )
    v31 = sub_1E704F0(*a1, v30, *(unsigned int *)a1[3]);
  else
    v31 = 0;
  if ( v19 )
  {
    *(_QWORD *)(v10 + 544) = v19;
    *(_QWORD *)(v10 + 512) = v44;
    *(_QWORD *)(v10 + 9944) = v65;
    *(_DWORD *)(v10 + 80) = v45;
    *(_DWORD *)(v10 + 2632) = v46;
  }
  *(_DWORD *)(v8 + 11200) = v37;
  *(_BYTE *)(v8 + 12592) = v38;
  *(_BYTE *)(v8 + 11248) = v39;
  v32 = *(_QWORD *)(v8 + 264);
  if ( *(_DWORD *)(v32 + 204) == 5 )
    *(_BYTE *)(v32 + 194) = 1;
  if ( v9 )
    v9 = 3;
  *(_DWORD *)(v32 + 204) = v9;
  sub_190D5E0(v36, a3);
  return v31;
}
