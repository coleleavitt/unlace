__int64 __fastcall sub_6E9810(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // al
  char v6; // al
  unsigned __int64 v7; // r13
  __m128i v8; // xmm0
  __int64 v10; // r13
  int v11; // r9d
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rdx
  _BOOL4 v17; // eax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // al
  unsigned __int8 v24; // r15
  __int16 v25; // r15
  __int16 v26; // ax
  unsigned __int8 v27; // al
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-98h]
  int v30; // [rsp+0h] [rbp-98h]
  unsigned __int8 v31; // [rsp+7h] [rbp-91h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  __m128i v33; // [rsp+10h] [rbp-88h] BYREF
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  __m128i v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h]

  v5 = *(_BYTE *)(a3 + 28);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v6 = v5 & 0x7F;
  if ( v6 == 65 )
  {
    v7 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned __int8)sub_7D53F0(a3, a2) )
    {
      v36.m128i_i8[4] = 0;
      v7 = sub_6C9050((__int64)a2, v7, v36.m128i_u64[0]);
    }
    sub_AFCC70(&v36, v7, 0, 0);
    v8 = _mm_load_si128(&v36);
    *(_QWORD *)(a1 + 16) = v37;
    *(__m128i *)a1 = v8;
LABEL_5:
    if ( !(unsigned __int8)sub_798420(a3) )
      return a1;
LABEL_12:
    sub_AFD1A0(&v33, a2, a1, 1);
    *(__m128i *)a1 = _mm_loadu_si128(&v33);
    *(_QWORD *)(a1 + 16) = v34;
    return a1;
  }
  if ( v6 != 45 )
  {
    sub_B03930(&v36, a3);
    v16 = sub_6CC5F0(a2, 0, 0, v36.m128i_i64[0]);
    v17 = (*(_BYTE *)(a3 + 80) & 2) != 0;
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = (unsigned int)(v17 + 6);
    goto LABEL_5;
  }
  v35 = *(_QWORD *)(a3 + 48);
  v36.m128i_i64[0] = sub_B0B400(&v35);
  v10 = sub_B0FEA0(&v36, a2);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    v11 = 1;
    LODWORD(v10) = v10 & 7 | 1 | v10 & 0xFFFFFFF8;
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(v14 + 16);
  if ( (unsigned int)(v15 - 42) > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1
      || (v28 = sub_B0D320(v14), (v14 = v28) == 0) )
    {
      v11 = 0;
      goto LABEL_10;
    }
    LOBYTE(v15) = *(_BYTE *)(v28 + 16);
  }
  if ( (_BYTE)v15 == 42
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_6B2590(v14) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 2;
  }
LABEL_10:
  v29 = v11;
  v12 = sub_AC40C0(32, a2, 8);
  v13 = *(_DWORD *)(a3 + 24);
  v36.m128i_i64[0] = 0;
  sub_8057D0(v12, (_DWORD)a2, a3, 0, v10, v29, v13, (__int64)&v36, 0);
  if ( *(_BYTE *)(a3 + 80) )
  {
    v18 = sub_AC40C0(32, a2, 8);
    v19 = *(_DWORD *)(a3 + 24);
    v20 = a2[2364];
    v21 = v18;
    v22 = *(_BYTE *)(v12 + 1);
    v23 = (v22 >> 1) & 3;
    v24 = (v22 >> 3) & 7;
    *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x17;
    if ( byte_4AD234C )
    {
      v32 = v20;
      v31 = v23;
      v30 = v19;
      sub_AC4570(23);
      v20 = v32;
      v23 = v31;
      v19 = v30;
    }
    *(_QWORD *)(v21 + 8) = v20;
    *(_DWORD *)(v21 + 16) = v19;
    v25 = (2 * v23) | (8 * v24);
    v26 = *(_WORD *)(v21 + 1);
    *(_QWORD *)(v21 + 24) = v12;
    v12 = v21;
    *(_DWORD *)(v21 + 20) = 0;
    *(_WORD *)(v21 + 1) = v26 & 0xF801 | v25;
    v27 = sub_76BB00(v21);
    *(_BYTE *)(v21 + 1) = (v27 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
    *(_BYTE *)(v21 + 2) = *(_BYTE *)(v21 + 2) & 0xF8 | (v27 >> 2) & 7;
  }
  *(_DWORD *)a1 = 8;
  *(_QWORD *)(a1 + 8) = v12;
  if ( (unsigned __int8)sub_798420(a3) )
    goto LABEL_12;
  return a1;
}

