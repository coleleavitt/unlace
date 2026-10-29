__int64 __fastcall sub_C2BF70(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  bool v13; // di
  bool v14; // r8
  bool v15; // r9
  char v16; // r10
  __int64 v17; // r14
  _DWORD *v18; // rax
  unsigned int v19; // ebp
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+8h] [rbp-150h]
  __m128i v29; // [rsp+10h] [rbp-148h] BYREF
  __m128i v30; // [rsp+20h] [rbp-138h] BYREF
  __int64 v31; // [rsp+30h] [rbp-128h]
  void *ptr[2]; // [rsp+38h] [rbp-120h] BYREF
  _BYTE v33[72]; // [rsp+48h] [rbp-110h] BYREF
  __m128i v34; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-B8h]
  int v36; // [rsp+A8h] [rbp-B0h]
  __int64 *v37; // [rsp+B0h] [rbp-A8h]
  __int64 v38; // [rsp+B8h] [rbp-A0h]
  void *v39[2]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v40[64]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v41; // [rsp+110h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 32);
  HIBYTE(v41) = 0;
  v5 = *(unsigned int *)(v4 + 144);
  v34 = 0u;
  v39[0] = v40;
  v39[1] = (void *)0x800000000LL;
  v28 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(v4 + 136);
  LOBYTE(v36) = v36 | 1;
  v38 = 0;
  v7 = *(_DWORD *)(v6 + 4 * v5 - 4);
  LODWORD(v5) = *(_DWORD *)(v4 + 128);
  v35 = 0;
  sub_A2B560((__int64)&v29, a2, v5, v7);
  v8 = _mm_load_si128(&v29);
  v35 = 0;
  LOBYTE(v41) = v41 & 0xFD;
  v34 = v8;
  v30 = v8;
  v9 = sub_A2B5D0(&v30);
  v30.m128i_i32[0] = 0;
  v30.m128i_i64[1] = 0;
  v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v31 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_3;
  }
  v21 = v9;
  v22 = *v11;
  v23 = (unsigned int)*(unsigned __int8 *)(*v11 + 16) - 43;
  if ( (unsigned int)v23 <= 1 )
    goto LABEL_31;
  v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v27 > 1 )
  {
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_25;
  }
  v22 = sub_F3F310(*v11, v11, v10, v27);
  if ( v22 )
  {
LABEL_31:
    while ( 1 )
    {
      v24 = *(_QWORD *)(v22 + 32);
      if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
        v25 = (unsigned int)*(unsigned __int8 *)(v22 + 16) - 43;
        if ( (unsigned int)v25 <= 1 )
          break;
        v26 = sub_F3F310(v22, v11, v25, v23);
        v24 = *(_QWORD *)(v26 + 32);
        if ( (*(_BYTE *)(v26 + 18) & 0x10) == 0 )
          goto LABEL_16;
      }
    }
LABEL_16:
    v21 = v24;
  }
  v11 = (__int64 *)v30.m128i_i64[1];
  v16 = v30.m128i_i8[0] & 1;
  v13 = (v30.m128i_i8[0] & 8) != 0;
  v15 = (v30.m128i_i8[0] & 2) != 0;
  v14 = (v30.m128i_i8[0] & 4) != 0;
  v12 = (unsigned __int32)v30.m128i_i32[0] >> 4;
LABEL_25:
  v31 = v21;
LABEL_3:
  v37 = v11;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v33;
  v36 = (8 * v13) & 0xF | (4 * v14) & 0xF | (2 * v15) & 3 | v16 & 3 | (16 * v12);
  v38 = v31;
  sub_C00390((char ***)v39, (char ***)ptr);
  if ( ptr[0] != v33 )
    free(ptr[0]);
  v41 &= 0xFEu;
  v17 = sub_C07FE0(v4, v29.m128i_i64[0], v29.m128i_i64[1], a2, v28, 0);
  v18 = (_DWORD *)sub_B4F900(a2);
  if ( v18 )
  {
    v19 = 0;
    if ( (*v18 & 0x20000) != 0 )
      goto LABEL_7;
    v19 = sub_C2BC60(v17, a1, &v34, (__int64)v18);
    if ( (_BYTE)v19 )
      goto LABEL_11;
    v30.m128i_i8[4] &= ~1u;
    v30.m128i_i32[0] = 0;
    sub_A2BFE0(v17, (__int64)&v30);
    if ( v30.m128i_i32[0] > 1u )
      sub_A2BBA0(v30.m128i_i32);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    **(_BYTE **)(a1 + 24) = 1;
    if ( *(_DWORD *)(a1 + 916) > 2u || *(_BYTE *)(a1 + 914) )
    {
LABEL_11:
      v19 = 1;
      goto LABEL_7;
    }
    v19 = *(unsigned __int8 *)(a1 + 915);
  }
  else
  {
    v19 = sub_C02A80(*(_QWORD *)(a2 + 48), v17);
  }
LABEL_7:
  if ( v39[0] != v40 )
    free(v39[0]);
  return v19;
}

