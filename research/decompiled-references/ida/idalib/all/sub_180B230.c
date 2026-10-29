void __fastcall sub_180B230(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // r15
  unsigned int v10; // r12d
  bool v11; // al
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int *v15; // r14
  unsigned __int64 v16; // rax
  _WORD *v17; // r14
  int v18; // eax
  bool v19; // r9
  bool v20; // r10
  char v21; // r11
  __m128i *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // al
  char v28; // al
  bool v29; // r9
  char v30; // al
  unsigned __int64 v31; // [rsp+0h] [rbp-E8h]
  bool v32; // [rsp+Bh] [rbp-DDh]
  bool v33; // [rsp+Bh] [rbp-DDh]
  char v34; // [rsp+Ch] [rbp-DCh]
  bool v35; // [rsp+Dh] [rbp-DBh]
  unsigned __int8 v36; // [rsp+Eh] [rbp-DAh]
  bool v37; // [rsp+Fh] [rbp-D9h]
  int v38; // [rsp+18h] [rbp-D0h] BYREF
  int v39; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v40[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !a3[3].m128i_i16[4] || (v6 = a3[5].m128i_i64[0], (v6 & 2) == 0) )
  {
    sub_168B9F0((__int64)v40, a1 + 1, a3[1].m128i_u32[2], 0xC53u, 0);
    v7 = sub_15DD120((__int64)v40, (__int64)a3);
    v38 = 1;
    v8 = sub_1587D10(v7, &v38);
    v39 = 3;
    sub_180A710(v8, &v39);
    sub_15F7200(v40);
    return;
  }
  v9 = *(_DWORD **)((v6 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v10 = (unsigned __int16)(*v9 >> 9);
  if ( v10 <= 0x23 || (v11 = v10 != 65534, v12 = v10 - 36, !v11) )
    v12 = 0;
  v13 = *(_QWORD *)(a2 + 40);
  if ( (v13 & 7) != 0 )
    BUG();
  v14 = a1[31];
  v15 = *(unsigned int **)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v16 = *v15;
  v17 = v15 + 4;
  v31 = v16;
  v18 = *(_DWORD *)(*(_QWORD *)(v14 + 17448) + 248LL);
  if ( v18 == 3 )
  {
    v19 = 0;
    v20 = 0;
    a5 = 1;
  }
  else
  {
    LOBYTE(a5) = (unsigned int)(v18 - 4) <= 1;
    if ( v18 == 1 )
    {
      v19 = 0;
      v20 = 1;
    }
    else
    {
      v20 = v18 == 2;
      if ( v18 == 27 )
      {
        v19 = 1;
      }
      else
      {
        v19 = v18 == 28;
        if ( v18 == 50 )
        {
          v32 = 1;
          goto LABEL_11;
        }
      }
    }
  }
  v32 = (v18 & 0xFFFFFFFD) == 49;
LABEL_11:
  v21 = *(_BYTE *)(*(_QWORD *)(v14 + 2320) + 89LL);
  if ( (_BYTE)a5 )
  {
    v37 = v19;
    v36 = a5;
    v35 = v20;
    v34 = *(_BYTE *)(*(_QWORD *)(v14 + 2320) + 89LL);
    v27 = sub_16297E0(a1[79], v12);
    v21 = v34;
    v20 = v35;
    a5 = v36;
    v19 = v37;
    if ( !v27 )
      goto LABEL_23;
  }
  if ( v20 )
  {
    v33 = v19;
    v28 = sub_1629780(a1[79], v12, v17, v31);
    v29 = v33;
    if ( !v28 )
    {
      v30 = sub_16297B0(a1[79], v12, v17, v31);
      v29 = v33;
      if ( !v30 )
        goto LABEL_23;
    }
    if ( !v29 )
      goto LABEL_17;
    goto LABEL_28;
  }
  if ( v19 )
  {
LABEL_28:
    if ( !(unsigned __int8)sub_1C253D0(a1[98], v12, v17, v31, a5) )
      goto LABEL_23;
LABEL_17:
    v22 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
    sub_B0D090(v22, a1[31], a3, (__int64)v9);
    sub_B8CC60(a2, (__int64)v22, v23, v24, v25, v26);
    return;
  }
  if ( (_BYTE)a5 || (v21 & 1) != 0 || v32 )
    goto LABEL_17;
LABEL_23:
  sub_168B9F0((__int64)v40, a1 + 1, a3[1].m128i_u32[2], 0xC60u, 0);
  sub_15DD120((__int64)v40, (__int64)a3);
  sub_15F7200(v40);
}
