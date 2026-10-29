unsigned __int64 __fastcall sub_1849520(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __m128 a5)
{
  _QWORD *v6; // r13
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+18h] [rbp-2050h]
  _BYTE v24[12]; // [rsp+24h] [rbp-2044h]
  unsigned __int64 v25; // [rsp+38h] [rbp-2030h] BYREF
  __int64 v26; // [rsp+40h] [rbp-2028h] BYREF
  __int64 v27; // [rsp+48h] [rbp-2020h]
  __int64 v28; // [rsp+50h] [rbp-2018h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-2010h]
  unsigned __int64 v30; // [rsp+60h] [rbp-2008h]
  int v31; // [rsp+68h] [rbp-2000h]
  int v32; // [rsp+70h] [rbp-1FF8h]
  char v33; // [rsp+74h] [rbp-1FF4h]
  __int64 v34[1021]; // [rsp+80h] [rbp-1FE8h] BYREF

  v6 = a2 + 1;
  v8 = *a2;
  v25 = a3;
  v34[0] = v8;
  v34[1] = (__int64)(a2 + 1);
  sub_F6CE20(v34);
  v9 = sub_F6CCB0(v34, a5);
  v10 = a1 + 1;
  v11 = v9;
  if ( (*(_BYTE *)(a1[29] + 1LL) & 0x10) != 0 )
  {
    sub_168B9F0((__int64)v34, v10, v9, 0x1A6Bu, 0);
    sub_15F7200(v34);
    if ( (*(_WORD *)v25 & 0x1FF) == 0x13 )
    {
      v15 = (unsigned __int64 *)(v25 + 24);
      v23 = *(unsigned int *)(v25 + 4);
      v16 = sub_EEC8C0(v25, (__int64)v10, *(double *)a5.m128_u64);
      v17 = *(_QWORD *)(a4 + 48);
      v33 = 0;
      *(_QWORD *)v24 = v16;
      LODWORD(v28) = 11;
      v29 = nullptr;
      v30 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      v31 = 0;
      v32 = 0;
      LOWORD(v26) = 0;
      HIDWORD(v26) = v11;
      v27 = v16;
    }
    else
    {
      v21 = sub_EEC8C0(v25, (__int64)v10, *(double *)a5.m128_u64);
      LODWORD(v28) = 11;
      *(_DWORD *)v24 = v21;
      *(_QWORD *)&v24[4] = HIDWORD(v21);
      v22 = *(_QWORD *)(a4 + 48);
      v29 = nullptr;
      v31 = 0;
      v30 = v22 & 0xFFFFFFFFFFFFFFF0LL;
      v32 = 0;
      v33 = 0;
      HIDWORD(v27) = sub_EEC140(v25);
      v15 = &v25;
      LOWORD(v26) = 1;
      HIDWORD(v26) = v11;
      LODWORD(v27) = sub_EEB7E0(v25, (__int64)v10, *(double *)a5.m128_u64);
      v23 = 1;
    }
    sub_1A19220((unsigned int)v34, (_DWORD)a1, (unsigned int)&v28, (unsigned int)&v26, (_DWORD)v15, v23, 0, 1);
    v18 = sub_1A1D600((unsigned int)v34, (_DWORD)a1, (unsigned int)&v28, (unsigned int)&v26, (_DWORD)v15, v23, 0);
    if ( v18 == 1 || (v20 = sub_19B4A30(a1, v18 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)v24, 0, 0, 0), v20 == 1) )
    {
      v19 = v15;
      v13 = 1;
      v20 = sub_18C4330(
              a1,
              *(unsigned int *)v24,
              *(unsigned int *)&v24[4],
              v19,
              v23,
              *(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v20 == 1 )
      {
LABEL_9:
        sub_1A0BB10(v34);
        return v13;
      }
    }
    else if ( (unsigned __int8)sub_B8E180(a1[68]) )
    {
      v20 = v25;
    }
    v13 = sub_18406C0((__int64 *)(a1[31] + 2352LL), 32, 3u);
    sub_B98AA0(v13, a1[31], (__int64)a2, *(int *)v24, v20 & 0xFFFFFFFFFFFFFFFELL, *(int *)&v24[4]);
    goto LABEL_9;
  }
  sub_168B9F0((__int64)v34, v10, v9, 0xE47u, 0);
  v12 = *a2;
  v29 = v6;
  v13 = 1;
  v28 = v12;
  HIDWORD(v26) = sub_F6CE20(&v28);
  LODWORD(v26) = sub_F6CCB0(&v28, a5);
  sub_1587DB0((__int64)v34, &v26);
  sub_15F7200(v34);
  return v13;
}
