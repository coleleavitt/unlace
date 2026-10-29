__int64 __fastcall sub_A80DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  char v10; // al
  __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __m128i v13; // xmm1
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  int v18; // r9d
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r15d
  _WORD *v27; // rax
  char v28; // cl
  __int64 v29; // rsi
  _WORD *v30; // r12
  char v31; // al
  unsigned __int8 v32; // al
  __int64 v33; // rax
  int v34; // [rsp+0h] [rbp-94h]
  char v35; // [rsp+0h] [rbp-94h]
  int v36; // [rsp+4h] [rbp-90h]
  __m128i v37; // [rsp+Ch] [rbp-88h] BYREF
  __int64 v38; // [rsp+1Ch] [rbp-78h]
  __int64 v39; // [rsp+34h] [rbp-60h] BYREF
  __m128i v40; // [rsp+3Ch] [rbp-58h] BYREF
  __int64 v41; // [rsp+4Ch] [rbp-48h]

  v9 = *(_BYTE *)(a3 + 28);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v10 = v9 & 0x7F;
  if ( v10 == 67 )
  {
    v11 = *(_QWORD *)(a3 + 48);
    if ( v11 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !(unsigned __int8)sub_BBE5D0(a3) )
      {
LABEL_4:
        sub_F1D250(&v40, v12, 0, 0);
        v13 = _mm_load_si128(&v40);
        *(_QWORD *)(a1 + 16) = v41;
        *(__m128i *)a1 = v13;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = sub_A7AA70(a2, a3, a3, a4, a5, a6);
      if ( !(unsigned __int8)sub_BBE5D0(a3) )
        goto LABEL_4;
    }
    v12 = sub_A783E0(a2, v12, 0);
    goto LABEL_4;
  }
  if ( v10 != 47 )
  {
    sub_F22AA0(&v40, a3);
    v25 = sub_A80CA0(a2, 0, 0, v40.m128i_i64[0]);
    if ( (*(_BYTE *)(a3 + 80) & 2) != 0 )
      *(_QWORD *)a1 = 7;
    else
      *(_QWORD *)a1 = 6;
    *(_QWORD *)(a1 + 8) = v25;
LABEL_5:
    if ( !(unsigned __int8)sub_B8BE90(a3) )
      return a1;
LABEL_12:
    sub_F1EDF0(&v37, a2, a1, 1);
    v21 = v38;
    *(__m128i *)a1 = _mm_loadu_si128(&v37);
    *(_QWORD *)(a1 + 16) = v21;
    return a1;
  }
  v39 = *(_QWORD *)(a3 + 48);
  v40.m128i_i64[0] = sub_F5C3B0(&v39);
  v17 = sub_F67970(&v40, a2);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v18 = 1;
    LODWORD(v17) = v17 & 7 | 1 | v17 & 0xFFFFFFF8;
    goto LABEL_10;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v23) = *(unsigned __int8 *)(v22 + 16);
  v24 = (unsigned int)(v23 - 43);
  if ( (unsigned int)v24 > 1 )
  {
    v23 = sub_A56C80(v22, a2, v24, v15, v16);
    v18 = 0;
    v22 = v23;
    if ( !v23 )
      goto LABEL_10;
    LOBYTE(v23) = *(_BYTE *)(v23 + 16);
  }
  if ( (_BYTE)v23 == 43
    || (v33 = sub_9B4870(v22, a2, v24, v15, v16),
        v18 = 2,
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL)
      - 25 <= 1) )
  {
    v18 = 1;
  }
LABEL_10:
  v36 = v18;
  v34 = *(_DWORD *)(a3 + 24);
  v40.m128i_i64[0] = 0;
  v19 = sub_EEE9A0(32, a2, 8);
  sub_BF7BD0(v19, a2, a3, 0, v17, v36, v34, (__int64)&v40, 0);
  if ( *(_BYTE *)(a3 + 80) )
  {
    v26 = *(_DWORD *)(a3 + 24);
    v27 = (_WORD *)sub_EEE9A0(32, a2, 8);
    v28 = *(_BYTE *)(v19 + 1);
    v29 = *(_QWORD *)(v19 + 8);
    v30 = v27;
    *v27 = *v27 & 0xFE00 | 0x16;
    if ( unk_2CD7484 )
    {
      v35 = v28;
      sub_EE9B50(22);
      v28 = v35;
    }
    v31 = *((_BYTE *)v30 + 1);
    *((_QWORD *)v30 + 3) = v19;
    *((_BYTE *)v30 + 2) &= 0xF8u;
    v19 = (__int64)v30;
    *((_QWORD *)v30 + 1) = v29;
    *((_DWORD *)v30 + 4) = v26;
    *((_BYTE *)v30 + 1) = v28 & 0x3E | v31 & 1;
    *((_DWORD *)v30 + 5) = 0;
    v32 = sub_B63820(v30);
    *((_BYTE *)v30 + 1) = (v32 << 6) | *((_BYTE *)v30 + 1) & 0x3F;
    *((_BYTE *)v30 + 2) = v30[1] & 0xF8 | (v32 >> 2) & 7;
  }
  v20 = *(_QWORD *)a1 & 0xFFFFFFFE00000000LL;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)a1 = v20 | 8;
  if ( (unsigned __int8)sub_B8BE90(a3) )
    goto LABEL_12;
  return a1;
}
