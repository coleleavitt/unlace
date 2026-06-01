__int64 __fastcall sub_575850(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // rdi
  char v8; // al
  _DWORD *v9; // r9
  int v10; // r15d
  unsigned int v11; // r12d
  bool v12; // cf
  unsigned int v13; // eax
  int v14; // r15d
  unsigned int v15; // ebp
  unsigned int v16; // r13d
  __int64 v17; // r10
  unsigned __int8 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // r11d
  _DWORD *v21; // rdx
  int v22; // esi
  bool v23; // zf
  unsigned int v24; // eax
  int v25; // esi
  unsigned int v26; // r10d
  __int64 v27; // rcx
  char v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  int v31; // ecx
  unsigned int v32; // r9d
  int v33; // edi
  __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  int v37; // edi
  __int64 v38; // r14
  __int64 v39; // rax
  __m128i v40; // xmm0
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __m128i v45; // xmm0
  int v46; // edx
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+14h] [rbp-64h]
  unsigned int v50; // [rsp+18h] [rbp-60h]
  unsigned int v51; // [rsp+1Ch] [rbp-5Ch]
  __int64 v52; // [rsp+20h] [rbp-58h]
  unsigned int v53; // [rsp+28h] [rbp-50h]
  char v54; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int8 v55; // [rsp+2Dh] [rbp-4Bh]
  unsigned __int8 v56; // [rsp+2Eh] [rbp-4Ah]
  unsigned __int8 v57; // [rsp+2Fh] [rbp-49h]
  __int64 v58; // [rsp+30h] [rbp-48h]
  __int64 v59; // [rsp+38h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    sub_55D250();
  v2 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)(v1 - 1);
  v5 = **(_QWORD **)(v2 + 32 * v4);
  if ( (v5 & 1) == 0 && *(_DWORD *)(v5 + 36) )
  {
    v6 = *(unsigned __int16 *)(v5 + 66);
    v7 = *(_QWORD *)a1;
    v58 = 0;
    if ( v6 )
      v58 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 128LL)
          + 2LL * v6 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 36LL);
    v8 = sub_55D600(v7, v2, v4);
    v10 = v9[7];
    v11 = v9[2];
    v59 = a1;
    v12 = v8 == 0;
    v13 = v9[3];
    v14 = v10 - (v12 - 1);
    v50 = v11;
    v15 = 0;
    v16 = 0;
    v49 = v13;
    v53 = v9[4];
    v51 = *(_DWORD *)(v17 + 36);
    v52 = v17 - 8LL * v51;
    while ( 1 )
    {
      if ( v51 == v15 )
        return 0;
      v34 = v52 + 8LL * v15;
      v35 = *(_QWORD *)v34;
      if ( (*(_QWORD *)v34 & 1) != 0 )
      {
        v18 = (*(_QWORD *)v34 & 2LL) != 0;
        v19 = (v35 >> 3) & 1;
      }
      else
      {
        v18 = *(_BYTE *)(v35 + 44) & 1;
        LOBYTE(v19) = (*(_BYTE *)(v35 + 44) & 4) != 0;
      }
      v20 = v16;
      if ( !(_BYTE)v19 )
      {
        if ( v58 )
          v18 = (v18 | *(unsigned __int16 *)(v58 + 2LL * v16)) != 0;
        v20 = v16 + 1;
      }
      v21 = *(_DWORD **)v34;
      v22 = v14;
      v23 = (*(_QWORD *)v34 & 1) == 0;
      v54 = *(_BYTE *)v34 & 1;
      if ( v23 && v21[9] )
        v22 = v21[14] + v14;
      v24 = *(unsigned __int8 *)(v34 + 7);
      v25 = v22 - ((v18 == 0) - 1);
      if ( (v35 & 1) != 0 )
        break;
      v37 = v21[5];
      v24 = v21[6];
      v26 = v21[4] + v50;
      if ( !v37 )
        goto LABEL_17;
      v48.m128i_i32[0] = v49 + v37;
LABEL_18:
      if ( v15 + 1 < v51 )
      {
        v27 = v52 + 8LL * (v15 + 1);
        v28 = *(_BYTE *)(v27 + 5);
        v56 = *(_BYTE *)(v27 + 4);
        v57 = v28 & 0xF;
        v55 = *(_BYTE *)(v27 + 6);
        v29 = ((unsigned __int64)(v28 & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
            | ((unsigned __int64)v56 << 32) & 0xFF00F0FFFFFFFFFFLL
            | *(_QWORD *)v27 & 0xFF00F000FFFFFFFFLL;
        v30 = v29 | ((unsigned __int64)v55 << 48);
        if ( (v29 & 1) != 0 )
        {
          v31 = v57;
          v32 = v56;
          v33 = v55;
        }
        else
        {
          v33 = *(_DWORD *)&byte_4[v29 | ((unsigned __int64)v55 << 48)];
          v31 = *(_DWORD *)&byte_8[v29 | ((unsigned __int64)v55 << 48)];
          v32 = *(_DWORD *)(v30 + 12);
        }
        v26 += v33;
        v24 += v32;
        if ( v31 )
        {
          v48.m128i_i32[0] += v31;
          v24 = v32;
        }
      }
      if ( v18 )
      {
        v38 = v52 + 8LL * v15;
        v48 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), _mm_cvtsi32_si128(v49)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v53), _mm_cvtsi32_si128(v15)));
        sub_55ECB0(v59 + 8, 32);
        v39 = *(unsigned int *)(v59 + 16);
        v40 = _mm_load_si128(&v48);
        v41 = v39 + 1;
        v42 = *(_QWORD *)(v59 + 8) + 32 * v39;
        *(_DWORD *)(v59 + 16) = v41;
        *(_QWORD *)v42 = v38;
        *(_DWORD *)(v42 + 24) = v16;
        *(_DWORD *)(v42 + 28) = v14;
        *(__m128i *)(v42 + 8) = v40;
        return 2;
      }
      if ( !v54 && v21[9] && v21[12] )
      {
        v43 = v52 + 8LL * v15;
        v48 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), _mm_cvtsi32_si128(v49)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v53), _mm_cvtsi32_si128(v15)));
        sub_55ECB0(v59 + 8, 32);
        v44 = *(unsigned int *)(v59 + 16);
        v45 = _mm_load_si128(&v48);
        v46 = v44 + 1;
        v47 = *(_QWORD *)(v59 + 8) + 32 * v44;
        *(_DWORD *)(v59 + 16) = v46;
        *(_QWORD *)v47 = v43;
        *(_DWORD *)(v47 + 24) = v16;
        *(_DWORD *)(v47 + 28) = v14;
        *(__m128i *)(v47 + 8) = v45;
        return 1;
      }
      v53 = v24;
      v14 = v25;
      ++v15;
      v50 = v26;
      v16 = v20;
      v49 = v48.m128i_i32[0];
    }
    v26 = v24 + v50;
LABEL_17:
    v24 += v53;
    v48.m128i_i32[0] = v49;
    goto LABEL_18;
  }
  return 0;
}
