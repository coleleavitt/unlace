__int64 __fastcall sub_5765B0(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // ebp
  int v4; // ecx
  __int64 v5; // rsi
  __int64 **v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // r9
  char v12; // r8
  __int64 v13; // r10
  bool v14; // di
  bool v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned int v19; // ebp
  unsigned int v20; // eax
  __int64 v21; // r15
  unsigned int v22; // r10d
  unsigned int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _DWORD *v31; // rcx
  int v32; // r9d
  bool v33; // zf
  unsigned int v34; // esi
  int v35; // r9d
  unsigned int v36; // r8d
  __int64 v37; // rdi
  char v38; // r10
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // r10
  unsigned int v41; // r11d
  int v42; // r14d
  int v43; // edi
  int v44; // edi
  __int64 v45; // rax
  __m128i v46; // xmm0
  int v47; // esi
  __int64 v48; // rax
  bool v49; // di
  __int64 *v50; // rbx
  __int64 v51; // rax
  __m128i v52; // xmm0
  int v53; // edx
  __int64 v54; // rax
  int v56; // edi
  int v57; // ebp
  __m128i v58; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v60; // [rsp+20h] [rbp-78h]
  unsigned int v61; // [rsp+24h] [rbp-74h]
  unsigned int v62; // [rsp+28h] [rbp-70h]
  int v63; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v64; // [rsp+30h] [rbp-68h]
  unsigned int v65; // [rsp+34h] [rbp-64h]
  __int64 v66; // [rsp+38h] [rbp-60h]
  __int64 v67; // [rsp+40h] [rbp-58h]
  __int64 *v68; // [rsp+48h] [rbp-50h]
  char v69; // [rsp+50h] [rbp-48h]
  unsigned __int8 v70; // [rsp+51h] [rbp-47h]
  unsigned __int8 v71; // [rsp+52h] [rbp-46h]
  unsigned __int8 v72; // [rsp+53h] [rbp-45h]
  int v73; // [rsp+54h] [rbp-44h]
  unsigned __int64 v74; // [rsp+58h] [rbp-40h]

  v2 = a1;
  v3 = *((_DWORD *)a1 + 4);
  v65 = a2;
  v74 = HIDWORD(a2);
  v4 = v3;
  v64 = 0;
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
    goto LABEL_61;
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
    v27 = *(_QWORD *)v21;
    if ( (*(_QWORD *)v21 & 1) != 0 )
    {
      v28 = (v27 >> 1) & 1;
      v29 = (v27 >> 3) & 1;
    }
    else
    {
      LOBYTE(v28) = *(_BYTE *)(v27 + 44) & 1;
      LOBYTE(v29) = (*(_BYTE *)(v27 + 44) & 4) != 0;
    }
    v30 = v19;
    if ( !(_BYTE)v29 )
    {
      if ( v67 )
        LOBYTE(v28) = (*(unsigned __int16 *)(v67 + 2LL * v19) | (unsigned __int8)v28) != 0;
      v30 = v19 + 1;
    }
    v31 = *(_DWORD **)v21;
    v32 = v63;
    v33 = (*(_QWORD *)v21 & 1) == 0;
    v69 = *(_BYTE *)v21 & 1;
    if ( v33 && v31[9] )
      v32 = v31[14] + v63;
    v34 = *(unsigned __int8 *)(v21 + 7);
    v35 = v32 - (((_BYTE)v28 == 0) - 1);
    if ( (v27 & 1) != 0 )
    {
      v58.m128i_i32[0] = v34 + v17;
    }
    else
    {
      v56 = v31[5];
      v34 = v31[6];
      v58.m128i_i32[0] = v17 + v31[4];
      if ( v56 )
      {
        v61 = v18 + v56;
        goto LABEL_38;
      }
    }
    v61 = v18;
    v34 += v60;
LABEL_38:
    v36 = v62 + 1;
    if ( v62 + 1 < v59 )
    {
      v37 = v66 + 8LL * v36;
      v38 = *(_BYTE *)(v37 + 5);
      v72 = *(_BYTE *)(v37 + 4);
      v71 = v38 & 0xF;
      v70 = *(_BYTE *)(v37 + 6);
      v39 = ((unsigned __int64)(v38 & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
          | ((unsigned __int64)v72 << 32) & 0xFF00F0FFFFFFFFFFLL
          | *(_QWORD *)v37 & 0xFF00F000FFFFFFFFLL;
      v40 = v39 | ((unsigned __int64)v70 << 48);
      if ( (v39 & 1) != 0 )
      {
        v41 = v72;
        v42 = v70;
        v43 = v71;
      }
      else
      {
        v42 = *(_DWORD *)&byte_4[v39 | ((unsigned __int64)v70 << 48)];
        v43 = *(_DWORD *)&byte_8[v39 | ((unsigned __int64)v70 << 48)];
        v41 = *(_DWORD *)(v40 + 12);
      }
      v58.m128i_i32[0] += v42;
      v34 += v41;
      if ( v43 )
      {
        v61 += v43;
        v34 = v41;
      }
    }
    if ( (v27 & 1) != 0 )
    {
      v22 = HIBYTE(v27);
      v23 = v22 + v17;
LABEL_17:
      v22 += v60;
      v24 = v18;
      if ( !v23 )
        goto LABEL_18;
      goto LABEL_46;
    }
    v44 = *(_DWORD *)(v27 + 20);
    v22 = *(_DWORD *)(v27 + 24);
    v23 = v17 + *(_DWORD *)(v27 + 16);
    if ( !v44 )
      goto LABEL_17;
    v24 = v18 + v44;
    if ( !v23 )
    {
LABEL_18:
      if ( !v69 )
      {
        v23 = v31[9];
        if ( v23 )
          v23 = v31[12];
      }
LABEL_21:
      v25 = v64 + v23;
      v26 = v64 + 1;
      if ( !(_BYTE)v28 )
        v26 = v25;
      v64 = v26;
      goto LABEL_24;
    }
LABEL_46:
    if ( v65 < v24 )
    {
      if ( !v69 && v31[9] )
      {
        v23 = v31[12];
LABEL_50:
        if ( (_BYTE)v28 )
          goto LABEL_56;
        if ( v23 )
        {
          v2 = v68;
          v58 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v18)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v62)));
          sub_55ECB0((__int64)(v68 + 1), 32);
          v45 = *((unsigned int *)v2 + 4);
          v46 = _mm_load_si128(&v58);
          v47 = v63;
          v4 = v45 + 1;
          v48 = v2[1] + 32 * v45;
          *((_DWORD *)v2 + 4) = v4;
          *(_QWORD *)v48 = v21;
          *(_DWORD *)(v48 + 24) = v19;
          *(_DWORD *)(v48 + 28) = v47;
          *(__m128i *)(v48 + 8) = v46;
          goto LABEL_2;
        }
        goto LABEL_24;
      }
      goto LABEL_55;
    }
    v49 = v24 == v65 && (unsigned int)v74 < v22;
    if ( v69 )
    {
      v23 = 0;
      if ( !v49 )
        goto LABEL_21;
LABEL_55:
      if ( (_BYTE)v28 )
        goto LABEL_56;
      goto LABEL_24;
    }
    v23 = v31[9];
    if ( v23 )
    {
      v23 = v31[12];
      if ( !v49 )
        goto LABEL_21;
      goto LABEL_50;
    }
    if ( !v49 )
      goto LABEL_21;
    if ( (_BYTE)v28 )
    {
LABEL_56:
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
LABEL_24:
    v21 += 8;
    if ( v59 == v36 )
      break;
    v18 = v61;
    v17 = v58.m128i_i32[0];
    v63 = v35;
    v19 = v30;
    ++v62;
    v60 = v34;
  }
  v57 = v73;
  v2 = v68;
LABEL_61:
  *((_DWORD *)v2 + 4) = v57;
  return -1;
}
