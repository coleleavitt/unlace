unsigned __int64 __fastcall sub_EC20(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned int v13; // ecx
  unsigned __int8 v14; // dl
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // si
  unsigned __int8 v21; // di
  unsigned int v22; // r8d
  int v23; // edi
  __int64 v24; // rsi
  __m128i v25; // xmm1
  __m128i v26; // xmm4
  unsigned __int64 v27; // xmm0_8
  __int64 v28; // rax
  int v29; // r10d
  unsigned int v30; // ecx
  unsigned __int8 v31; // dl
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // si
  unsigned __int8 v36; // al
  __int64 v37; // r8
  __int64 v39; // [rsp+0h] [rbp-E8h]
  int v40; // [rsp+Ch] [rbp-DCh]
  _BYTE v41[16]; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v42[3]; // [rsp+20h] [rbp-C8h] BYREF
  int v43; // [rsp+2Ch] [rbp-BCh] BYREF
  int v44; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v46[27]; // [rsp+3Ch] [rbp-ACh] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16) + *(int *)(a1 + 73);
  v47 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 56) = 1;
  qlseek(*(_QWORD *)(a1 + 8), v1, 0);
  sub_83D0(*(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), (__int64)v41, *(_BYTE *)(a1 + 382));
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + (int)v46[9], 0);
  v3 = sub_DC70(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 57), v42, *(_BYTE *)(a1 + 382));
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + (int)v46[15], 0);
  v4 = *(_QWORD *)(a1 + 8);
  sub_DB90(v4, (unsigned int *)&v43, 1u, "ECOFF ss", -1, -1);
  if ( v43 <= 0 )
  {
    v39 = 0;
  }
  else
  {
    v5 = (unsigned int)v43;
    v39 = qalloc((unsigned int)v43);
    if ( !v39 )
      goto LABEL_33;
    lread(v4, v39, v5);
  }
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + (int)v46[17], 0);
  v6 = *(_QWORD *)(a1 + 8);
  sub_DB90(v6, (unsigned int *)&v44, 1u, "ECOFF ssext", -1, -1);
  if ( v44 > 0 )
  {
    v7 = (unsigned int)v44;
    v8 = qalloc((unsigned int)v44);
    v9 = v8;
    if ( v8 )
    {
      lread(v6, v8, v7);
      goto LABEL_7;
    }
LABEL_33:
    sub_5B40((__int64)"read_ecoff_raw");
  }
  v9 = 0;
LABEL_7:
  v10 = 0;
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + (int)v46[19], 0);
  v11 = sub_DE80(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 57), &v45, *(_BYTE *)(a1 + 382));
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + (int)v46[23], 0);
  v12 = sub_E330(*(_QWORD *)(a1 + 8), (_WORD *)(a1 + 57), v46, *(_BYTE *)(a1 + 382));
  if ( v46[0] )
  {
    while ( 1 )
    {
      v16 = v12 + 24LL * (int)v10;
      v17 = *(unsigned int *)(v16 + 8);
      if ( (unsigned int)v17 >= v44 )
        break;
      v18 = v9 + v17;
      v19 = *(_QWORD *)v16;
      v20 = *(_BYTE *)(v16 + 12);
      v21 = *(_BYTE *)(v16 + 13);
      if ( *(_BYTE *)(a1 + 382) )
      {
        v13 = v20 >> 2;
        v14 = (v21 >> 5) | (8 * v20) & 0x18;
      }
      else
      {
        v13 = v20 & 0x3F;
        v14 = (v20 >> 6) | (4 * v21) & 0x1C;
      }
      v15 = v10++;
      sub_9820(a1, v15, v14, v13, v18, v19);
      if ( v10 >= v46[0] )
        goto LABEL_15;
    }
LABEL_14:
    qfree(v3);
    qfree(v39);
    qfree(v9);
    qfree(v11);
    qfree(v12);
    sub_6000((__int64)"Bad ECOFF symbol table");
  }
LABEL_15:
  v22 = v42[0];
  v23 = 0;
  if ( v45 )
  {
    do
    {
      v24 = v11 + 96LL * v23;
      v25 = _mm_loadl_epi64((const __m128i *)(v24 + 40));
      v26 = _mm_unpacklo_epi32(v25, (__m128i)0LL);
      v27 = _mm_add_epi64(v26, _mm_srli_si128(v26, 8)).m128i_u64[0];
      if ( _mm_cvtsi128_si32(v25) >= v22 || v22 < v27 )
        goto LABEL_14;
      if ( v26.m128i_i64[0] < v27 )
      {
        v28 = v3 + 16 * v26.m128i_i64[0];
        do
        {
          *(_DWORD *)(v28 + 8) += *(_DWORD *)(v24 + 36);
          v28 += 16;
        }
        while ( v3 + 16 * v27 != v28 );
        v22 = v42[0];
      }
    }
    while ( ++v23 < v45 );
  }
  if ( v22 )
  {
    v29 = 0;
    do
    {
      v32 = v3 + 16LL * v29;
      v33 = *(unsigned int *)(v32 + 8);
      if ( (unsigned int)v33 >= v43 )
        goto LABEL_14;
      v34 = *(_QWORD *)v32;
      v35 = *(_BYTE *)(v32 + 13);
      v36 = *(_BYTE *)(v32 + 12);
      v37 = v39 + v33;
      if ( *(_BYTE *)(a1 + 382) )
      {
        v30 = v36 >> 2;
        v31 = (v35 >> 5) | (8 * v36) & 0x18;
      }
      else
      {
        v30 = v36 & 0x3F;
        v31 = (v36 >> 6) | (4 * v35) & 0x1C;
      }
      v40 = v29;
      sub_9820(a1, v46[0] + v29, v31, v30, v37, v34);
      v29 = v40 + 1;
    }
    while ( v40 + 1 < v42[0] );
  }
  qfree(v3);
  qfree(v39);
  qfree(v9);
  qfree(v11);
  qfree(v12);
  return v47 - __readfsqword(0x28u);
}

