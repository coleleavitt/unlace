__int64 __fastcall sub_16B0740(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5, int a6, __m128 a7, double a8)
{
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 i; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // [rsp+0h] [rbp-178h]
  __int64 v31; // [rsp+0h] [rbp-178h]
  __int64 v32; // [rsp+8h] [rbp-170h]
  __int64 v33; // [rsp+18h] [rbp-160h] BYREF
  __int64 v34; // [rsp+24h] [rbp-154h] BYREF
  char v35; // [rsp+2Ch] [rbp-14Ch]
  __int64 v36; // [rsp+30h] [rbp-148h] BYREF
  __int64 v37; // [rsp+38h] [rbp-140h] BYREF
  __int64 v38[2]; // [rsp+40h] [rbp-138h] BYREF
  int v39; // [rsp+50h] [rbp-128h]
  unsigned int v40; // [rsp+54h] [rbp-124h]
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v42[36]; // [rsp+70h] [rbp-108h] BYREF
  int v43; // [rsp+94h] [rbp-E4h]
  int v44; // [rsp+98h] [rbp-E0h]
  int v45; // [rsp+9Ch] [rbp-DCh]
  __int64 v46; // [rsp+A0h] [rbp-D8h]
  __int64 v47[25]; // [rsp+B0h] [rbp-C8h] BYREF

  sub_16A8350((__int64)&v36, a1, a3, a5);
  v47[0] = *a2;
  v47[1] = (__int64)(a2 + 1);
  v30 = sub_F6CE20(v47);
  LODWORD(v46) = sub_F6CCB0(v47, a7);
  HIDWORD(v46) = v30;
  v43 = v46;
  v44 = a4;
  v45 = a6;
  sub_16AFCC0(&v36, 1, 0, v11, *(double *)a7.m128_u64, a8);
  if ( v37 == 1 )
  {
    v12 = 1;
  }
  else
  {
    v14 = v36;
    v15 = *(_QWORD *)&byte_8[v38[0] & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v15 & 8) != 0 && *(_DWORD *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
    {
      sub_168B9F0((__int64)v47, (__int64 *)(v36 + 8), v46, 0x130Bu, 0);
      v22 = sub_1605D30((__int64)v47, v38);
      if ( *(_BYTE *)(v22 + 120) )
      {
        v35 = 1;
        v34 = v46;
        sub_AEC610((__int64 *)(v22 + 32), &v34);
      }
      else if ( *(_BYTE *)(v22 + 132) )
      {
        v31 = v22;
        v23 = sub_168B9E0((_QWORD *)v22);
        v26 = v31;
        v27 = v23;
        v28 = *(_QWORD *)(v31 + 16);
        if ( v28 )
        {
          v32 = v27;
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
          v27 = v32;
          v26 = v31;
        }
        v33 = v28;
        v29 = *sub_1587BC0(v27, &v33, v26, v27, v24, v25) + 32LL * *(unsigned int *)(v26 + 128);
        v35 = 1;
        v34 = v46;
        sub_AEC610((__int64 *)(v29 + 8), &v34);
      }
      sub_15F7200(v47);
      v14 = v36;
    }
    sub_16AD1A0(v14, &v37, v38[0], *(double *)a7.m128_u64);
    v16 = *(unsigned int *)(a1 + 1952);
    v17 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v17, v16) )
    {
      v17 = 0;
      v16 = 0;
    }
    v18 = sub_C98EE0(
            *(_QWORD **)(a1 + 248),
            v38[1],
            v39,
            (__int64)a2,
            v40,
            v37 & 0xFFFFFFFFFFFFFFFELL,
            (__int64)&ptr,
            (v17 << 32) | v16,
            a4,
            a6);
    if ( v42[32] )
    {
      v19 = *(unsigned int *)(v36 + 1952);
      v20 = *(unsigned int *)(v36 + 1956);
      if ( __PAIR64__(v20, v19) == *(_QWORD *)(v36 + 1944) )
      {
        v20 = 0;
        v19 = 0;
      }
      v18 = sub_C0A3E0(
              *(_QWORD **)(v36 + 248),
              *(_QWORD *)(*(_QWORD *)(v36 + 248) + 19128LL),
              0,
              v18,
              0,
              (*(_BYTE *)(v18 + 1) >> 1) & 3,
              (v20 << 32) | v19);
    }
    for ( i = *(_QWORD *)(v18 + 16); (*(_WORD *)i & 0x1FF) == 0x4F; i = *(_QWORD *)(i + 16) )
      *(_BYTE *)(i + 3) |= 4u;
    v12 = v18;
  }
  if ( ptr != v42 )
    free(ptr);
  return v12;
}
