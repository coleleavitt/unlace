unsigned __int64 __fastcall sub_16AB670(__int64 a1, unsigned int a2, __int64 *a3, int *a4, int a5, __m128 a6)
{
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // rbx
  char v17; // al
  char v18; // cl
  char v19; // dl
  unsigned __int8 v20; // al
  char v21; // dl
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 i; // rax
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+8h] [rbp-170h]
  char v34; // [rsp+8h] [rbp-170h]
  char v35; // [rsp+Ch] [rbp-16Ch]
  int v36; // [rsp+10h] [rbp-168h] BYREF
  int v37; // [rsp+14h] [rbp-164h] BYREF
  __int64 v38; // [rsp+18h] [rbp-160h] BYREF
  __int64 v39[2]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v40; // [rsp+30h] [rbp-148h] BYREF
  __int64 v41; // [rsp+38h] [rbp-140h]
  __int64 v42[2]; // [rsp+40h] [rbp-138h] BYREF
  int v43; // [rsp+50h] [rbp-128h]
  int v44; // [rsp+54h] [rbp-124h]
  void *ptr; // [rsp+60h] [rbp-118h]
  _BYTE v46[36]; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v47; // [rsp+94h] [rbp-E4h]
  unsigned int v48; // [rsp+98h] [rbp-E0h]
  int v49; // [rsp+9Ch] [rbp-DCh]
  int v50; // [rsp+A0h] [rbp-D8h]
  int v51; // [rsp+A4h] [rbp-D4h]
  _BYTE v52[200]; // [rsp+B0h] [rbp-C8h] BYREF

  sub_16A8350((__int64)&v40, a1, *a3, (__int64)a4);
  v10 = *a3;
  v47 = a2;
  v48 = a2;
  v39[0] = v10;
  v49 = a5;
  v39[1] = (__int64)(a3 + 1);
  v33 = sub_F6CE20(v39);
  v50 = sub_F6CCB0(v39, a6);
  v11 = *a4;
  v51 = v33;
  v12 = v41 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v11 & 0x10000) != 0 || (*(_BYTE *)(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    goto LABEL_3;
  v38 = *(_QWORD *)(v12 + 8);
  if ( (unsigned __int8)sub_1E63CF0(v40, v47, v42[0], 1, 5236) || (unsigned __int8)sub_1E63CF0(v40, v47, v38, 1, 3968) )
    goto LABEL_15;
  v26 = v40;
  if ( (*(_BYTE *)((v41 & 0xFFFFFFFFFFFFFFFELL) + 1) & 6) == 0 )
  {
    v32 = sub_1A0BDC0(v40, v38, v41 & 0xFFFFFFFFFFFFFFFELL, 0);
    v26 = v40;
    v41 = v32;
  }
  v27 = sub_AAE980(*(_QWORD *)(v26 + 248), v42[0]);
  v28 = sub_AAE980(*(_QWORD *)(v40 + 248), v38);
  if ( v27 != v28 )
  {
    sub_168B9F0((__int64)v52, (__int64 *)(v40 + 8), v47, 0xCFAu, 0);
    v29 = sub_1605D30((__int64)v52, &v38);
    v30 = sub_1605D30(v29, v42);
    v37 = v28;
    v31 = sub_1587D10(v30, &v37);
    v36 = v27;
    sub_1587D10(v31, &v36);
    sub_15F7200(v52);
    v41 = 1;
    goto LABEL_16;
  }
  if ( !sub_F62A70(v42, *(_QWORD *)(v40 + 248)) )
  {
    sub_168B9F0((__int64)v52, (__int64 *)(v40 + 8), v47, 0xCF9u, 0);
    v37 = 1;
LABEL_27:
    sub_1587D10((__int64)v52, &v37);
    sub_15F7200(v52);
LABEL_15:
    v41 = 1;
LABEL_16:
    v16 = 1;
    goto LABEL_11;
  }
  if ( !sub_F62A70(&v38, *(_QWORD *)(v40 + 248)) )
  {
    sub_168B9F0((__int64)v52, (__int64 *)(v40 + 8), v47, 0xCF9u, 0);
    v37 = 0;
    goto LABEL_27;
  }
  v44 = 3;
  if ( v41 == 1 )
    goto LABEL_16;
  v12 = v41 & 0xFFFFFFFFFFFFFFFELL;
LABEL_3:
  v13 = v42[1];
  v14 = sub_EEE9A0(40, *(_QWORD **)(a1 + 248), 8u);
  v15 = v43;
  v16 = v14;
  v17 = v44;
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x58;
  if ( unk_2CD7484 )
  {
    v35 = v15;
    v34 = v17;
    sub_EE9B50(88);
    v15 = v35;
    v17 = v34;
  }
  *(_QWORD *)(v16 + 8) = v13;
  v18 = 2 * (v15 & 3);
  v19 = *(_BYTE *)(v16 + 1);
  *(_QWORD *)(v16 + 16) = v12;
  *(_QWORD *)(v16 + 24) = a3;
  *(_BYTE *)(v16 + 1) = v18 | v19 & 0xF9;
  *(_WORD *)(v16 + 1) &= 0xF807u;
  *(_WORD *)(v16 + 2) = (8 * (v17 & 0x7F)) | *(_WORD *)(v16 + 2) & 0xFC07;
  *(_QWORD *)v16 &= 0xF3FFFFFFuLL;
  v20 = sub_B62B80(v16);
  v21 = *(_BYTE *)(v16 + 1);
  *(_DWORD *)(v16 + 32) = a2;
  *(_DWORD *)(v16 + 36) = a5;
  *(_BYTE *)(v16 + 1) = (v20 << 6) | v21 & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v20 >> 2) & 7;
  if ( v46[32] )
  {
    v22 = *(unsigned int *)(v40 + 1952);
    v23 = *(unsigned int *)(v40 + 1956);
    if ( __PAIR64__(v23, v22) == *(_QWORD *)(v40 + 1944) )
    {
      v23 = 0;
      v22 = 0;
    }
    v16 = sub_C0A3E0(
            *(_QWORD **)(v40 + 248),
            *(_QWORD *)(*(_QWORD *)(v40 + 248) + 19128LL),
            0,
            v16,
            0,
            (*(_BYTE *)(v16 + 1) >> 1) & 3,
            (v23 << 32) | v22);
  }
  for ( i = *(_QWORD *)(v16 + 16); (*(_WORD *)i & 0x1FF) == 0x4F; i = *(_QWORD *)(i + 16) )
    *(_BYTE *)(i + 3) |= 4u;
LABEL_11:
  if ( ptr != v46 )
    free(ptr);
  return v16;
}
