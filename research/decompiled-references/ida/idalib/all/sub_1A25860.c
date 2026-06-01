void __fastcall sub_1A25860(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edi
  char v15; // r8
  __int64 v17; // r15
  _WORD *v18; // r12
  __int32 v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 *v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned __int8 v28; // si
  __int64 v29; // r12
  __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // r15
  _QWORD *v33; // rsi
  __int64 v34; // r15
  unsigned __int8 v35; // al
  __int64 v36[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v38[200]; // [rsp+20h] [rbp-C8h] BYREF

  v12 = *(_QWORD *)(a3 + 16);
  v13 = *(_QWORD *)(a3 + 24);
  v14 = *a5;
  v15 = *(_BYTE *)(a1 + 9);
  v36[0] = a4;
  if ( v14 >= (unsigned int)((v13 - v12) >> 3) )
  {
    if ( !v15 )
    {
      v30 = *(_QWORD *)a1 + 8LL;
      v31 = sub_BFB1C0(a3);
      v26 = 3995;
      v25 = (__int64 *)v30;
      v27 = v31;
      goto LABEL_26;
    }
LABEL_20:
    *(_BYTE *)(a1 + 8) = 1;
    *a5 = v14 + 1;
    ++*a9;
    return;
  }
  v17 = *(_QWORD *)a1;
  v18 = *(_WORD **)(v12 + 8LL * v14);
  if ( (*v18 & 0x1FF) == 0x35 && (*(_BYTE *)(*(_QWORD *)(v17 + 232) + 1LL) & 0x10) == 0 )
  {
    if ( !v15 )
    {
      v24 = sub_BFB1C0(a3);
      v25 = (__int64 *)(v17 + 8);
      v26 = 3992;
      v27 = v24;
LABEL_26:
      sub_168B9F0((__int64)v38, v25, v27, v26, 0);
      v32 = sub_1605D30((__int64)v38, v36);
      v37 = sub_EEC8C0(a3, (__int64)v36, *(double *)a7.m128_u64);
      sub_1587DB0(v32, &v37);
      sub_15F7200(v38);
      v14 = *a5;
      goto LABEL_20;
    }
    goto LABEL_20;
  }
  if ( v15 )
  {
    if ( !(unsigned __int8)sub_1A19380(*(_QWORD *)a1, a2, *(_QWORD *)(v12 + 8LL * v14), a7, a8) )
      goto LABEL_15;
    v29 = *(_QWORD *)(a1 + 24);
    if ( !v29 )
    {
      v33 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      v34 = v33[2329];
      v29 = sub_EEE9A0(16, v33, 8u);
      *(_WORD *)v29 = *(_WORD *)v29 & 0xFE00 | 0x2D;
      if ( unk_2CD7484 )
        sub_EE9B50(45);
      *(_WORD *)(v29 + 1) &= 0xF801u;
      *(_QWORD *)(v29 + 8) = v34;
      v35 = sub_B63070(v29);
      *(_BYTE *)(v29 + 1) = (v35 << 6) | *(_BYTE *)(v29 + 1) & 0x3F;
      *(_BYTE *)(v29 + 2) = *(_BYTE *)(v29 + 2) & 0xF8 | (v35 >> 2) & 7;
      *(_QWORD *)(a1 + 24) = v29;
    }
    v20 = v29;
  }
  else
  {
    v19 = sub_EEB7E0(*(_QWORD *)(v12 + 8LL * v14), a2, *(double *)a7.m128_u64);
    v20 = sub_1A24E20(v17, a2, v19, (__int64)v18, 1u, 0, a7, a8);
  }
  if ( v20 != 1 )
  {
    v21 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    if ( !*(_BYTE *)(a1 + 9) && v21 )
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *a5) = v21;
      v28 = ((*v21 >> 14) | (*(_DWORD *)a3 >> 14)) & 0x1F;
      *(_BYTE *)(a3 + 1) = (v28 << 6) | *(_BYTE *)(a3 + 1) & 0x3F;
      *(_BYTE *)(a3 + 2) = *(_BYTE *)(a3 + 2) & 0xF8 | (v28 >> 2);
    }
    goto LABEL_7;
  }
LABEL_15:
  *(_BYTE *)(a1 + 8) = 1;
  v21 = nullptr;
LABEL_7:
  if ( a6 )
    sub_1A11640((_BYTE *)a1, a6, a9, v21, *(double *)a7.m128_u64);
  v22 = *(_QWORD *)(a1 + 32);
  ++*a5;
  if ( v22 )
  {
    v23 = *(unsigned int *)(v22 + 8);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(v22 + 12) )
    {
      sub_2237220(v22, v22 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(v22 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v22 + 8 * v23) = v36[0];
    ++*(_DWORD *)(v22 + 8);
  }
}
