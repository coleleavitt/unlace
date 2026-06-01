unsigned __int64 __fastcall sub_1E43490(
        __int64 *a1,
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
  __int64 *v11; // r12
  __int64 v12; // rdi
  unsigned int v13; // r10d
  char v14; // al
  char v15; // r13
  __int64 v16; // r15
  __int64 v17; // r14
  int v18; // eax
  unsigned __int64 v19; // r12
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v38; // [rsp+30h] [rbp-A8h] BYREF
  char v39; // [rsp+88h] [rbp-50h]
  unsigned int v40; // [rsp+90h] [rbp-48h]
  char v41; // [rsp+94h] [rbp-44h]

  v11 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v11 = (__int64 *)v11[4];
  v12 = *a1;
  v13 = *(_DWORD *)(a2 + 24);
  v14 = *(_BYTE *)(*(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v14 & 8) != 0 )
  {
    sub_168B9F0((__int64)v36, (__int64 *)(v12 + 8), v13, 0x12F3u, 0);
    if ( !v39 )
    {
      if ( v41 )
      {
        v32 = sub_168B9E0(v36);
        v33 = v37;
        if ( v37 )
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        v35 = v33;
        v34 = sub_1587BC0(v32, &v35, v28, v29, v30, v31);
        sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v40 + 8), a2, 0xAu);
      }
LABEL_12:
      v15 = 1;
      sub_15F7200(v36);
      goto LABEL_6;
    }
    sub_AE9DF0(&v38, a2, 0xAu);
    v15 = 1;
    sub_15F7200(v36);
  }
  else
  {
    if ( (v14 & 2) == 0 )
    {
      v15 = 0;
      sub_18C4110(v12, v13, *v11);
      goto LABEL_6;
    }
    v27 = (__int64 *)sub_1DD4AE0(v12, (void **)v11, a1[4], v13, *(_QWORD *)(a2 + 40), 0, a3, a4);
    v11 = v27;
    if ( v27 )
    {
      v15 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1 )
        goto LABEL_6;
      sub_168B9F0((__int64)v36, (__int64 *)(*a1 + 8), *(_DWORD *)(a2 + 24), 0xEE6u, 0);
      v35 = *v11;
      sub_162B6D0((__int64)v36, &v35);
      goto LABEL_12;
    }
    v15 = 1;
    v11 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v11 = (__int64 *)v11[4];
  }
LABEL_6:
  v16 = *(_QWORD *)(a2 + 80);
  v17 = *(_QWORD *)(a2 + 72);
  v18 = sub_B73090(a2);
  v19 = sub_B9B030(
          *(_QWORD **)(*a1 + 248),
          a1[3],
          *(_DWORD *)(a2 + 24),
          *(_QWORD *)(a2 + 40),
          *v11,
          (__int64)v11,
          v18,
          v17,
          v16);
  sub_1E40A90(*a1, (__int64 *)a1[4], a2, v19, a1[5], (_BYTE *)a1[6], a3, a4, a5, a6, v20, v21, a9, a10);
  if ( v15 )
    sub_B88650(v19, 1);
  v25 = *(_BYTE *)(a2 + 29) & 0x60;
  *(_BYTE *)(v19 + 29) = v25 | *(_BYTE *)(v19 + 29) & 0x9F;
  sub_B94AD0((__m128i *)a1[3], v19, v25, v22, v23, v24);
  return v19;
}
