__int64 __fastcall sub_575C70(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rdi
  char v7; // al
  _DWORD *v8; // r9
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  int v13; // ebp
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // r9d
  unsigned int v24; // edi
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  int v27; // edx
  int v28; // r9d
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  unsigned int v33; // [rsp+0h] [rbp-88h]
  unsigned int v34; // [rsp+4h] [rbp-84h]
  unsigned int v35; // [rsp+8h] [rbp-80h]
  unsigned int v36; // [rsp+Ch] [rbp-7Ch]
  __int64 v37; // [rsp+10h] [rbp-78h]
  unsigned int v38; // [rsp+18h] [rbp-70h]
  unsigned int v39; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v40; // [rsp+20h] [rbp-68h]
  unsigned int v41; // [rsp+24h] [rbp-64h]
  unsigned int v42; // [rsp+28h] [rbp-60h]
  int v43; // [rsp+2Ch] [rbp-5Ch]
  int v44; // [rsp+30h] [rbp-58h]
  unsigned int v45; // [rsp+38h] [rbp-50h]
  unsigned __int8 v46; // [rsp+3Eh] [rbp-4Ah]
  __int64 v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+48h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    sub_55D250();
  v2 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)(v1 - 1);
  v5 = **(_QWORD **)(v2 + 32 * v4);
  if ( (v5 & 1) != 0 )
    return 0;
  v33 = *(_DWORD *)(v5 + 36);
  if ( !v33 )
    return 0;
  v6 = *(_QWORD *)a1;
  v47 = 0;
  if ( *(_WORD *)(v5 + 66) )
    v47 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 128LL)
        + 2LL * *(unsigned __int16 *)(v5 + 66) * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 36LL);
  v7 = sub_55D600(v6, v2, v4);
  v48 = a1;
  v45 = 0;
  v37 = 0;
  v9 = 0;
  v35 = v8[4];
  v10 = 0;
  v11 = v8[2];
  v40 = 0;
  v12 = v8[3];
  v13 = v8[7] - ((v7 == 0) - 1);
  v41 = 0;
  v42 = 0;
  v14 = v5 - 8LL * v33;
  v38 = 0;
  v39 = 0;
  v43 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( (*(_QWORD *)v14 & 1) != 0 )
    {
      v16 = (v15 >> 1) & 1;
      v17 = (v15 >> 3) & 1;
    }
    else
    {
      LOBYTE(v16) = *(_BYTE *)(v15 + 44) & 1;
      LOBYTE(v17) = (*(_BYTE *)(v15 + 44) & 4) != 0;
    }
    v34 = v9;
    if ( !(_BYTE)v17 )
    {
      if ( v47 )
        LOBYTE(v16) = (*(unsigned __int16 *)(v47 + 2LL * v9) | (unsigned __int8)v16) != 0;
      v34 = v9 + 1;
    }
    v18 = *(_DWORD **)v14;
    v19 = v13;
    if ( (*(_QWORD *)v14 & 1) == 0 && v18[9] )
      v19 = v18[14] + v13;
    v20 = *(unsigned __int8 *)(v14 + 7);
    v21 = v19 - (((_BYTE)v16 == 0) - 1);
    v22 = v11 + v20;
    if ( (v15 & 1) != 0 || (v23 = v18[5], v20 = v18[6], v22 = v11 + v18[4], !v23) )
    {
      v36 = v12;
      v20 += v35;
    }
    else
    {
      v36 = v23 + v12;
    }
    v24 = v10 + 1;
    if ( v10 + 1 < v33 )
    {
      v46 = *(_BYTE *)(v14 + 12);
      v25 = *(unsigned __int8 *)(v14 + 14);
      v26 = ((unsigned __int64)(*(_BYTE *)(v14 + 13) & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
          | *(_QWORD *)(v14 + 8) & 0xFF00F000FFFFFFFFLL
          | ((unsigned __int64)v46 << 32) & 0xFF00F0FFFFFFFFFFLL
          | (v25 << 48);
      if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
      {
        v27 = v46;
        v44 = (unsigned __int8)v25;
        v28 = *(_BYTE *)(v14 + 13) & 0xF;
      }
      else
      {
        v28 = *(_DWORD *)&byte_8[((unsigned __int64)(*(_BYTE *)(v14 + 13) & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
                               | *(_QWORD *)(v14 + 8) & 0xFF00F000FFFFFFFFLL
                               | ((unsigned __int64)v46 << 32) & 0xFF00F0FFFFFFFFFFLL
                               | (v25 << 48)];
        v44 = *(_DWORD *)(v26 + 4);
        v27 = *(_DWORD *)(v26 + 12);
      }
      v20 += v27;
      v22 += v44;
      if ( v28 )
      {
        v36 += v28;
        v20 = v27;
      }
    }
    if ( !(_BYTE)v16 )
      break;
    v37 = v14;
    v14 += 8;
    v43 = v13;
    v45 = v9;
    v39 = v10;
    v40 = v35;
    v41 = v12;
    v42 = v11;
    v38 = 2;
    if ( v33 == v24 )
      goto LABEL_32;
LABEL_12:
    v35 = v20;
    v9 = v34;
    v13 = v21;
    v11 = v22;
    v12 = v36;
    ++v10;
  }
  if ( (*(_BYTE *)v14 & 1) == 0 && v18[9] && v18[12] )
  {
    v43 = v13;
    v45 = v9;
    v39 = v10;
    v40 = v35;
    v41 = v12;
    v42 = v11;
    v37 = v14;
    v38 = 1;
  }
  v14 += 8;
  if ( v33 != v24 )
    goto LABEL_12;
LABEL_32:
  if ( !v37 )
    return 0;
  sub_55ECB0(v48 + 8, 32);
  v29 = *(unsigned int *)(v48 + 16);
  v30 = v29 + 1;
  v31 = *(_QWORD *)(v48 + 8) + 32 * v29;
  *(_DWORD *)(v48 + 16) = v30;
  *(_QWORD *)v31 = v37;
  *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v42), _mm_cvtsi32_si128(v41)),
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v39)));
  *(_DWORD *)(v31 + 24) = v45;
  *(_DWORD *)(v31 + 28) = v43;
  return v38;
}
