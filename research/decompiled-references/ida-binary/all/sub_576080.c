__int64 __fastcall sub_576080(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rbx
  int v3; // ebp
  int v4; // ecx
  __int64 v5; // r8
  __int64 **v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // r9
  char v12; // r10
  __int64 v13; // rdi
  bool v14; // si
  bool v15; // r10
  __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  unsigned int v20; // eax
  __int64 v21; // r15
  int v22; // r10d
  unsigned int v23; // eax
  unsigned int v24; // edi
  int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  _DWORD *v32; // rcx
  int v33; // r9d
  bool v34; // zf
  unsigned int v35; // esi
  int v36; // r9d
  unsigned int v37; // r8d
  __int64 v38; // rdi
  char v39; // r10
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r10
  unsigned int v42; // r11d
  int v43; // ebp
  int v44; // edi
  int v45; // edi
  __int64 v46; // rax
  __m128i v47; // xmm0
  int v48; // esi
  __int64 v49; // rax
  __int64 *v50; // rbx
  __int64 v51; // rax
  __m128i v52; // xmm0
  int v53; // edx
  __int64 v54; // rax
  int v56; // edi
  int v57; // ebp
  __m128i v58; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v59; // [rsp+14h] [rbp-74h]
  unsigned int v60; // [rsp+18h] [rbp-70h]
  unsigned int v61; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v62; // [rsp+20h] [rbp-68h]
  int v63; // [rsp+24h] [rbp-64h]
  unsigned int v64; // [rsp+28h] [rbp-60h]
  unsigned int v65; // [rsp+2Ch] [rbp-5Ch]
  __int64 v66; // [rsp+30h] [rbp-58h]
  __int64 v67; // [rsp+38h] [rbp-50h]
  __int64 *v68; // [rsp+40h] [rbp-48h]
  char v69; // [rsp+48h] [rbp-40h]
  unsigned __int8 v70; // [rsp+49h] [rbp-3Fh]
  unsigned __int8 v71; // [rsp+4Ah] [rbp-3Eh]
  unsigned __int8 v72; // [rsp+4Bh] [rbp-3Dh]
  int v73; // [rsp+4Ch] [rbp-3Ch]

  v2 = a1;
  v3 = *((_DWORD *)a1 + 4);
  v65 = a2;
  v64 = 0;
  v4 = v3;
  v73 = v3;
LABEL_2:
  if ( !v4 )
    __assert_fail(
      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
      "lib/src/./tree_cursor.c",
      0x23u,
      "ts_tree_cursor_iterate_children");
  v5 = v2[1];
  v6 = (__int64 **)(v5 + 32LL * (unsigned int)(v4 - 1));
  v7 = *v6;
  v8 = **v6;
  if ( (v8 & 1) != 0 || (v59 = *(_DWORD *)(v8 + 36)) == 0 )
  {
    v57 = v73;
    goto LABEL_59;
  }
  v9 = *v2;
  v10 = *(unsigned __int16 *)(v8 + 66);
  v67 = 0;
  v11 = *(_QWORD *)(v9 + 8);
  if ( v10 )
    v67 = *(_QWORD *)(v11 + 128) + 2LL * v10 * (unsigned int)*(unsigned __int16 *)(v11 + 36);
  v63 = *((_DWORD *)v6 + 7);
  if ( v4 == 1 )
    goto LABEL_14;
  v12 = *(_BYTE *)v7;
  v13 = *v7;
  v14 = (*(_BYTE *)v7 & 2) != 0;
  if ( (v13 & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_10;
LABEL_14:
    ++v63;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
    goto LABEL_14;
LABEL_10:
  v15 = (v12 & 8) != 0;
  if ( (v13 & 1) != 0 )
  {
    if ( v15 )
      goto LABEL_15;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(v8 + 44) & 4) == 0 )
  {
LABEL_12:
    v16 = **(_QWORD **)(v5 + 32LL * (unsigned int)(v4 - 2));
    if ( !*(_WORD *)(v16 + 66)
      || !*(_WORD *)(*(_QWORD *)(v11 + 128)
                   + 2LL
                   * (*((_DWORD *)v6 + 6)
                    + *(unsigned __int16 *)(v16 + 66) * (unsigned int)*(unsigned __int16 *)(v11 + 36))) )
    {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_15:
  v17 = *((_DWORD *)v6 + 2);
  v18 = *((_DWORD *)v6 + 3);
  v68 = v2;
  v19 = 0;
  v20 = *((_DWORD *)v6 + 4);
  v62 = 0;
  v60 = v20;
  v66 = v8 - 8LL * v59;
  v21 = v66;
  while ( 1 )
  {
    v28 = *(_QWORD *)v21;
    if ( (*(_QWORD *)v21 & 1) != 0 )
    {
      v29 = (v28 >> 1) & 1;
      v30 = (v28 >> 3) & 1;
    }
    else
    {
      LOBYTE(v29) = *(_BYTE *)(v28 + 44) & 1;
      LOBYTE(v30) = (*(_BYTE *)(v28 + 44) & 4) != 0;
    }
    v31 = v19;
    if ( !(_BYTE)v30 )
    {
      if ( v67 )
        LOBYTE(v29) = (*(unsigned __int16 *)(v67 + 2LL * v19) | (unsigned __int8)v29) != 0;
      v31 = v19 + 1;
    }
    v32 = *(_DWORD **)v21;
    v33 = v63;
    v34 = (*(_QWORD *)v21 & 1) == 0;
    v69 = *(_BYTE *)v21 & 1;
    if ( v34 && v32[9] )
      v33 = v32[14] + v63;
    v35 = *(unsigned __int8 *)(v21 + 7);
    v36 = v33 - (((_BYTE)v29 == 0) - 1);
    if ( (v28 & 1) != 0 )
    {
      v58.m128i_i32[0] = v17 + v35;
    }
    else
    {
      v56 = v32[5];
      v35 = v32[6];
      v58.m128i_i32[0] = v17 + v32[4];
      if ( v56 )
      {
        v61 = v18 + v56;
        goto LABEL_38;
      }
    }
    v61 = v18;
    v35 += v60;
LABEL_38:
    v37 = v62 + 1;
    if ( v62 + 1 < v59 )
    {
      v38 = v66 + 8LL * v37;
      v39 = *(_BYTE *)(v38 + 5);
      v71 = *(_BYTE *)(v38 + 4);
      v72 = v39 & 0xF;
      v70 = *(_BYTE *)(v38 + 6);
      v40 = ((unsigned __int64)(v39 & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
          | ((unsigned __int64)v71 << 32) & 0xFF00F0FFFFFFFFFFLL
          | *(_QWORD *)v38 & 0xFF00F000FFFFFFFFLL;
      v41 = v40 | ((unsigned __int64)v70 << 48);
      if ( (v40 & 1) != 0 )
      {
        v42 = v71;
        v43 = v70;
        v44 = v72;
      }
      else
      {
        v43 = *(_DWORD *)&byte_4[v40 | ((unsigned __int64)v70 << 48)];
        v44 = *(_DWORD *)&byte_8[v40 | ((unsigned __int64)v70 << 48)];
        v42 = *(_DWORD *)(v41 + 12);
      }
      v58.m128i_i32[0] += v43;
      v35 += v42;
      if ( v44 )
      {
        v61 += v44;
        v35 = v42;
      }
    }
    if ( (v28 & 1) != 0 )
    {
      v22 = HIBYTE(v28);
      v23 = v22 + v17;
LABEL_17:
      v22 += v60;
      v24 = v18;
      if ( v65 >= v23 )
        goto LABEL_18;
      goto LABEL_46;
    }
    v45 = *(_DWORD *)(v28 + 20);
    v22 = *(_DWORD *)(v28 + 24);
    v23 = v17 + *(_DWORD *)(v28 + 16);
    if ( !v45 )
      goto LABEL_17;
    v24 = v18 + v45;
    if ( v65 >= v23 )
    {
LABEL_18:
      v25 = 0;
      if ( !v69 )
      {
        v25 = v32[9];
        if ( v25 )
          v25 = v32[12];
      }
      goto LABEL_21;
    }
LABEL_46:
    v25 = v22 | v24;
    if ( v69 || !v32[9] )
    {
      if ( !v25 )
        goto LABEL_21;
      if ( (_BYTE)v29 )
      {
LABEL_54:
        v50 = v68;
        v58 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v18)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v62)));
        sub_55ECB0((__int64)(v68 + 1), 32);
        v51 = *((unsigned int *)v50 + 4);
        v52 = _mm_load_si128(&v58);
        v53 = v51 + 1;
        v54 = v50[1] + 32 * v51;
        *((_DWORD *)v50 + 4) = v53;
        LODWORD(v50) = v63;
        *(_QWORD *)v54 = v21;
        *(_DWORD *)(v54 + 24) = v19;
        *(_DWORD *)(v54 + 28) = (_DWORD)v50;
        *(__m128i *)(v54 + 8) = v52;
        return v64;
      }
    }
    else
    {
      if ( !v25 )
      {
        v25 = v32[12];
LABEL_21:
        v26 = v64 + v25;
        v27 = v64 + 1;
        if ( !(_BYTE)v29 )
          v27 = v26;
        v64 = v27;
        goto LABEL_24;
      }
      if ( (_BYTE)v29 )
        goto LABEL_54;
      if ( v32[12] )
      {
        v2 = v68;
        v58 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v18)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v62)));
        sub_55ECB0((__int64)(v68 + 1), 32);
        v46 = *((unsigned int *)v2 + 4);
        v47 = _mm_load_si128(&v58);
        v48 = v63;
        v4 = v46 + 1;
        v49 = v2[1] + 32 * v46;
        *((_DWORD *)v2 + 4) = v4;
        *(_QWORD *)v49 = v21;
        *(_DWORD *)(v49 + 24) = v19;
        *(_DWORD *)(v49 + 28) = v48;
        *(__m128i *)(v49 + 8) = v47;
        goto LABEL_2;
      }
    }
LABEL_24:
    v21 += 8;
    if ( v59 == v37 )
      break;
    v17 = v58.m128i_i32[0];
    v18 = v61;
    v60 = v35;
    v19 = v31;
    v63 = v36;
    ++v62;
  }
  v57 = v73;
  v2 = v68;
LABEL_59:
  *((_DWORD *)v2 + 4) = v57;
  return -1;
}
