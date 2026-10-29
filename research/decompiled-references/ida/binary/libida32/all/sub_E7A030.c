__int64 __fastcall sub_E7A030(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned int *v14; // rdi
  _DWORD *v15; // rsi
  size_t v16; // rdx
  int v17; // ebp
  __int16 v18; // cx
  __int16 v19; // dx
  __int64 result; // rax
  __int16 v21; // dx
  unsigned int v22; // r15d
  __int16 v23; // dx
  __int64 (*v24)(void); // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned __int8 **v27; // rbp
  __int64 (*v28)(void); // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int8 v31; // dl
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // ebp
  __int64 v36; // rdx
  __int64 v37; // rdx
  bool v38; // [rsp+Fh] [rbp-129h]
  _BYTE *v39; // [rsp+10h] [rbp-128h] BYREF
  signed __int64 v40; // [rsp+18h] [rbp-120h]
  _DWORD *v41; // [rsp+20h] [rbp-118h]
  _QWORD *v42; // [rsp+28h] [rbp-110h]
  __int64 v43; // [rsp+30h] [rbp-108h] BYREF
  _BYTE *v44; // [rsp+38h] [rbp-100h]
  signed __int64 v45; // [rsp+40h] [rbp-F8h]
  _DWORD *v46; // [rsp+48h] [rbp-F0h]
  _QWORD *v47; // [rsp+50h] [rbp-E8h]
  unsigned __int8 *v48; // [rsp+60h] [rbp-D8h] BYREF
  char v49; // [rsp+68h] [rbp-D0h]
  unsigned __int8 *v50[17]; // [rsp+B0h] [rbp-88h] BYREF

  v43 = a2;
  v44 = a3;
  v8 = *(_QWORD *)(a7 + 40);
  v45 = a4;
  v46 = (_DWORD *)a7;
  v47 = a1;
  v39 = a5;
  v40 = a6;
  v41 = (_DWORD *)a8;
  v42 = a1;
  if ( (v8 & 7) != 0 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9;
  }
  v11 = *(_QWORD *)(a8 + 40);
  if ( (v11 & 7) != 0 )
    BUG();
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = *(unsigned int **)(v10 + 16);
  v15 = *(_DWORD **)(v12 + 16);
  v16 = *v14;
  if ( v16 != *v15 || *v14 && memcmp(v14 + 4, v15 + 4, v16) )
  {
    sub_FA3370(v50, *a1, *(unsigned int *)(a7 + 24), 2338);
    sub_E74340(v50, v43);
    sub_E74100(v50, v45 == 0);
    sub_AC84E0(v50, v44, v45);
    v24 = *(__int64 (**)(void))(*(_QWORD *)v46 + 16LL);
    if ( (char *)v24 == (char *)sub_B82370 )
    {
      LODWORD(v25) = v46[6];
      v26 = v46[12];
    }
    else
    {
      v33 = v24();
      v26 = v33;
      v25 = HIDWORD(v33);
    }
    v27 = &v48;
    v48 = (unsigned __int8 *)__PAIR64__(v25, v26);
    v49 = 1;
    sub_AC88D0((__int64 *)v50, (__int64 *)&v48);
    sub_E74100(v50, 0);
    sub_FA33B0(&v48, v50);
    sub_AC6300((__int64)v50);
    sub_AC60B0(&v48, v9, 5u);
    sub_AC6300((__int64)&v48);
    sub_FA3370(v50, *v42, *(unsigned int *)(a8 + 24), 2520);
    sub_E74100(v50, v40 == 0);
    sub_AC84E0(v50, v39, v40);
    v28 = *(__int64 (**)(void))(*(_QWORD *)v41 + 16LL);
    if ( (char *)v28 == (char *)sub_B82370 )
    {
      LODWORD(v29) = v41[6];
      v30 = v41[12];
    }
    else
    {
      v34 = v28();
      v30 = v34;
      v29 = HIDWORD(v34);
    }
    v48 = (unsigned __int8 *)__PAIR64__(v29, v30);
    v49 = 1;
    sub_AC88D0((__int64 *)v50, (__int64 *)&v48);
    sub_E74100(v50, 0);
    sub_FA33B0(&v48, v50);
    sub_AC6300((__int64)v50);
    v31 = 5;
    v32 = v12;
    goto LABEL_18;
  }
  v17 = sub_E747C0(*(_QWORD *)(a7 + 56));
  if ( v17 != (unsigned int)sub_E747C0(*(_QWORD *)(a8 + 56)) )
  {
    v27 = v50;
    sub_E750B0((__int64)v50, (__int64)&v43, *(unsigned int *)(a7 + 24), 1u);
    sub_AC60B0(v50, v9, 5u);
    sub_AC60B0(v50, *(_QWORD *)(a7 + 56), 8u);
    sub_AC6300((__int64)v50);
    sub_E75180((__int64)v50, (__int64)&v39, *(unsigned int *)(a8 + 24), 1u);
    sub_AC60B0(v50, v12, 5u);
    v32 = *(_QWORD *)(a8 + 56);
    v31 = 8;
LABEL_18:
    sub_AC60B0(v27, v32, v31);
    sub_AC6300((__int64)v27);
    return 1;
  }
  if ( (*(_BYTE *)(a8 + 76) & 3) != (*(_BYTE *)(a7 + 76) & 3) )
  {
    sub_E750B0((__int64)v50, (__int64)&v43, *(unsigned int *)(a7 + 24), 2u);
    sub_E74100(v50, *(_BYTE *)(a7 + 76) & 3);
    sub_AC6300((__int64)v50);
    sub_E75180((__int64)v50, (__int64)&v39, *(unsigned int *)(a8 + 24), 2u);
    sub_E74100(v50, *(_BYTE *)(a8 + 76) & 3);
    sub_AC6300((__int64)v50);
    return 1;
  }
  v18 = *(_WORD *)(a7 + 72);
  v19 = *(_WORD *)(a8 + 72);
  result = 0;
  if ( v19 != v18 )
  {
    v21 = v18 ^ v19;
    if ( (v21 & 1) != 0 )
    {
      v22 = 1;
      v23 = 1;
    }
    else if ( (v21 & 2) != 0 )
    {
      v22 = 2;
      v23 = 2;
    }
    else if ( (v21 & 4) != 0 )
    {
      v22 = 3;
      v23 = 4;
    }
    else if ( (v21 & 8) != 0 )
    {
      v22 = 4;
      v23 = 8;
    }
    else if ( (v21 & 0x10) != 0 )
    {
      v22 = 5;
      v23 = 16;
    }
    else if ( (v21 & 0x20) != 0 )
    {
      v22 = 6;
      v23 = 32;
    }
    else if ( (v21 & 0x40) != 0 )
    {
      v22 = 7;
      v23 = 64;
    }
    else if ( (v21 & 0x80u) != 0 )
    {
      v22 = 8;
      v23 = 128;
    }
    else if ( (v21 & 0x100) != 0 )
    {
      v22 = 9;
      v23 = 256;
    }
    else if ( (v21 & 0x200) != 0 )
    {
      v22 = 10;
      v23 = 512;
    }
    else if ( (v21 & 0x400) != 0 )
    {
      v22 = 11;
      v23 = 1024;
    }
    else if ( (v21 & 0x800) != 0 )
    {
      v22 = 12;
      v23 = 2048;
    }
    else if ( (v21 & 0x1000) != 0 )
    {
      v22 = 13;
      v23 = 4096;
    }
    else if ( (v21 & 0x2000) != 0 )
    {
      v22 = 14;
      v23 = 0x2000;
    }
    else if ( (v21 & 0x4000) != 0 )
    {
      v22 = 15;
      v23 = 0x4000;
    }
    else
    {
      if ( v21 >= 0 )
        return result;
      v22 = 16;
      v23 = 0x8000;
    }
    v38 = (unsigned __int16)(v23 & *(_WORD *)(a7 + 74)) != 0;
    v35 = (unsigned __int16)(v23 & *(_WORD *)(a8 + 74));
    if ( ((unsigned __int16)v23 & *(_WORD *)(a7 + 74)) != 0 )
      v36 = *(unsigned int *)(a7 + 52);
    else
      v36 = *(unsigned int *)(a7 + 24);
    sub_E750B0((__int64)v50, (__int64)&v43, v36, 3u);
    sub_AC60B0(v50, v9, 5u);
    sub_AC60B0(v50, v22, 3u);
    sub_E74100(v50, v38);
    sub_AC6300((__int64)v50);
    if ( v35 )
      v37 = *(unsigned int *)(a8 + 52);
    else
      v37 = *(unsigned int *)(a8 + 24);
    sub_E75180((__int64)v50, (__int64)&v39, v37, 3u);
    sub_AC60B0(v50, v12, 5u);
    sub_AC60B0(v50, v22, 3u);
    sub_AC6300((__int64)v50);
    return 1;
  }
  return result;
}

