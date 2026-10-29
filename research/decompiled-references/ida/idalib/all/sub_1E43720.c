__int64 __fastcall sub_1E43720(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // ecx
  char v14; // al
  _QWORD *v15; // rax
  __int64 *v16; // r14
  __int64 v17; // r14
  unsigned __int8 v18; // dl
  unsigned __int64 v19; // r15
  char v20; // r13
  __int64 v21; // r8
  int v22; // edi
  unsigned __int64 v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  char v33; // al
  __int64 v34; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int16 *v39; // rax
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v50[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v52; // [rsp+30h] [rbp-A8h] BYREF
  char v53; // [rsp+88h] [rbp-50h]
  unsigned int v54; // [rsp+90h] [rbp-48h]
  char v55; // [rsp+94h] [rbp-44h]

  v11 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 32);
  v12 = *(_QWORD *)a1;
  v13 = *(_DWORD *)(a2 + 24);
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v14 & 2) != 0 || (v14 & 8) != 0 )
  {
    v15 = sub_1DD4AE0(v12, (void **)v11, *(_QWORD *)(a1 + 32), v13, *(_QWORD *)(a2 + 40), 0, a3, a4);
    v11 = (unsigned __int64)v15;
    if ( !v15 )
    {
      v11 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
        v11 = *(_QWORD *)(v11 + 32);
      goto LABEL_10;
    }
    v16 = *(__int64 **)a1;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
      sub_168B9F0((__int64)v50, v16 + 1, *(_DWORD *)(a2 + 24), 0xEE6u, 0);
      v17 = *(_QWORD *)v11;
      if ( v53 )
      {
        sub_AE9DF0(&v52, *(_QWORD *)v11, 8u);
      }
      else if ( v55 )
      {
        v45 = sub_168B9E0(v50);
        v46 = v51;
        if ( v51 )
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
        v49 = v46;
        v47 = sub_1587BC0(v45, &v49, v41, v42, v43, v44);
        sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v54 + 8), v17, 8u);
      }
      sub_15F7200(v50);
LABEL_10:
      v18 = *(_BYTE *)(a2 + 68);
      v16 = *(__int64 **)a1;
      if ( (v18 & 1) == 0 )
        goto LABEL_13;
      v19 = *(_QWORD *)(a2 + 72);
      if ( (v18 & 0xC) == 0xC || (v18 & 0xC) == 0 )
        goto LABEL_13;
      v40 = 1;
LABEL_47:
      v19 = *(_QWORD *)(v19 + 8);
      if ( v40 )
      {
LABEL_13:
        v19 = 0;
        v20 = 1;
        goto LABEL_14;
      }
      goto LABEL_38;
    }
  }
  else
  {
    sub_18C4110(v12, v13, *(_QWORD *)v11);
    v16 = *(__int64 **)a1;
  }
  v18 = *(_BYTE *)(a2 + 68);
  if ( (v18 & 1) == 0 )
  {
    v19 = 0;
    goto LABEL_45;
  }
  v19 = *(_QWORD *)(a2 + 72);
  if ( (v18 & 0xC) != 0xC && (v18 & 0xC) != 0 )
  {
    v40 = 0;
    goto LABEL_47;
  }
LABEL_38:
  if ( !v19 )
  {
LABEL_45:
    v20 = 0;
    goto LABEL_14;
  }
  sub_18C74E0((__int64)v16, 4, 0, 4);
  v39 = sub_1DF2070(*(_QWORD *)a1, v19, *(_QWORD *)(a1 + 32), v36, v37, v38, a3, a4);
  if ( v39 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v19 = 0;
    v20 = 1;
  }
  else
  {
    v20 = 0;
    v19 = (unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFELL;
  }
  sub_190D5E0((__int64)v16, a3);
  v18 = *(_BYTE *)(a2 + 68);
  v16 = *(__int64 **)a1;
LABEL_14:
  v21 = *(_QWORD *)(a1 + 24);
  v22 = (v18 >> 2) & 3;
  if ( (v18 & 0xC) == 0xC )
    v22 = 0;
  if ( v21 )
    v21 -= 64;
  v23 = sub_17B6880(
          v16,
          *(_QWORD *)(a2 + 40),
          *(_QWORD *)v11,
          (__int64 *)v11,
          v21,
          *(_DWORD *)(a2 + 24),
          *(double *)a3.m128_u64,
          (v18 & 2) != 0,
          (_DWORD *)v19,
          v22,
          *(_DWORD *)(a2 + 64),
          (*(_BYTE *)(a2 + 29) >> 5) & 3,
          0,
          nullptr);
  v26 = v23;
  if ( !v23 )
  {
    v48 = sub_B8C1B0(*(_QWORD *)(a1 + 24));
    sub_B88650(v48, 1);
    return v26;
  }
  sub_1E40A90(
    *(_QWORD *)a1,
    *(__int64 **)(a1 + 32),
    a2,
    v23,
    *(_QWORD *)(a1 + 40),
    *(_BYTE **)(a1 + 48),
    a3,
    a4,
    a5,
    a6,
    v24,
    v25,
    a9,
    a10);
  if ( (*(_BYTE *)(v26 + 29) & 1) != 0 )
    sub_180FE80(*(_QWORD *)a1, v26, v27, v28, v29, v30);
  if ( v20 )
    sub_B88650(v26, 1);
  v31 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v26 + 40) )
  {
    if ( !sub_B72A20(v26, *(_QWORD *)(v31 + 232)) )
      goto LABEL_27;
    v31 = *(_QWORD *)a1;
  }
  sub_A96CE0(*(_QWORD *)(v31 + 248), v26, a2, v28, v29, v30);
LABEL_27:
  v32 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v26 + 16) & 4) != 0 )
    v32 = *(_QWORD *)v32;
  if ( (*(_BYTE *)(v32 + 8) & 0x7Fu) - 59 > 2 || v32 == 64 || (*(_BYTE *)(v32 + 11) & 1) == 0 )
    goto LABEL_32;
  v28 = *(_BYTE *)(sub_B8EAA0(v32) + 8) & 0x7F;
  if ( (unsigned __int8)v28 > 0x12u )
  {
    v28 = ((_BYTE)v28 + 94) & 0x7F;
    if ( (unsigned __int8)v28 > 5u )
      goto LABEL_32;
    goto LABEL_56;
  }
  if ( ((1LL << v28) & 0x40182) != 0 )
LABEL_56:
    sub_1DC20B0(*(_QWORD *)(*(_QWORD *)a1 + 11280LL), a2, v26, v28);
LABEL_32:
  v33 = *(_BYTE *)(a2 + 29) & 2 | *(_BYTE *)(v26 + 29) & 0xFD;
  *(_BYTE *)(v26 + 29) = v33;
  v34 = *(_BYTE *)(a2 + 29) & 0x60;
  *(_BYTE *)(v26 + 29) = v34 | v33 & 0x9F;
  sub_B94AD0(*(__m128i **)(a1 + 24), v26, v34, v28, v29, v30);
  return v26;
}
