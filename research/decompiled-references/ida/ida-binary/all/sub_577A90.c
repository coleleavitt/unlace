__int64 __fastcall sub_577A90(__int64 *a1, unsigned int a2)
{
  __int64 *v3; // r14
  char *v4; // rdi
  __int64 v5; // r9
  unsigned int i; // edx
  unsigned __int64 v7; // rcx
  __int64 v8; // r11
  bool v9; // cl
  unsigned int v10; // r11d
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rsi
  char *v14; // rax
  unsigned int v15; // ebx
  __int64 *v16; // r8
  unsigned int v17; // eax
  __m128i v18; // xmm0
  unsigned int v19; // esi
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // r11d
  __int64 v26; // r10
  unsigned int v27; // r15d
  __int64 v28; // r9
  char v29; // si
  char v30; // r8
  bool v31; // si
  __int32 v32; // ebx
  unsigned int v33; // r12d
  __int64 v34; // rax
  unsigned int v35; // ebp
  unsigned int v36; // esi
  unsigned __int8 v37; // r13
  __int64 v38; // rax
  unsigned int v39; // r11d
  _DWORD *v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // r10d
  __int32 v44; // edi
  __int64 v45; // rcx
  char v46; // r9
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r9
  unsigned int v49; // r12d
  int v50; // r14d
  int v51; // ecx
  __int64 v52; // rbx
  unsigned __int64 v53; // rdi
  int v54; // edi
  __int64 v55; // rsi
  size_t v56; // rsi
  char *v57; // rax
  __m128i v58; // [rsp+0h] [rbp-88h] BYREF
  unsigned int j; // [rsp+18h] [rbp-70h]
  unsigned int v60; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v61; // [rsp+20h] [rbp-68h]
  unsigned int v62; // [rsp+24h] [rbp-64h]
  __int64 v63; // [rsp+28h] [rbp-60h]
  __int64 v64; // [rsp+30h] [rbp-58h]
  unsigned __int8 v65; // [rsp+39h] [rbp-4Fh]
  unsigned __int8 v66; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int8 v67; // [rsp+3Bh] [rbp-4Dh]
  unsigned int v68; // [rsp+3Ch] [rbp-4Ch]
  char *v69; // [rsp+40h] [rbp-48h]
  __int64 *v70; // [rsp+48h] [rbp-40h]

  v3 = a1;
  v4 = (char *)a1[1];
  v5 = *v3;
  v62 = a2;
  for ( i = *((_DWORD *)v3 + 4); ; --i )
  {
    v13 = i - 1;
    v14 = &v4[32 * v13];
    v15 = *((_DWORD *)v14 + 7);
    v16 = *(__int64 **)v14;
    if ( i == 1
      || ((v7 = *v16, (*v16 & 1) == 0) ? (LOBYTE(v8) = *(_BYTE *)(v7 + 44) & 1) : (v8 = (v7 >> 1) & 1), (_BYTE)v8) )
    {
      v10 = v15 + 1;
    }
    else
    {
      if ( (v7 & 1) != 0 )
        v9 = (*v16 & 8) != 0;
      else
        v9 = (*(_BYTE *)(v7 + 44) & 4) != 0;
      v10 = *((_DWORD *)v14 + 7);
      if ( !v9 )
      {
        v11 = **(_QWORD **)&v4[32 * i - 64];
        if ( *(_WORD *)(v11 + 66) )
          v10 = v15
              - ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 128LL)
                           + 2LL
                           * (*((_DWORD *)v14 + 6)
                            + *(unsigned __int16 *)(v11 + 66)
                            * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 36LL))) == 0)
               - 1);
      }
    }
    result = *v16;
    if ( (*v16 & 1) == 0 && *(_DWORD *)(result + 36) )
      v10 += *(_DWORD *)(result + 56);
    if ( a2 < v10 && a2 >= v15 )
      break;
    if ( i <= 1 )
      return result;
    *((_DWORD *)v3 + 4) = v13;
  }
LABEL_28:
  if ( !i )
    __assert_fail(
      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
      "lib/src/./tree_cursor.c",
      0x23u,
      "ts_tree_cursor_iterate_children");
  result = (__int64)&v4[32 * i - 32];
  v22 = *(__int64 **)result;
  v23 = **(_QWORD **)result;
  if ( (v23 & 1) != 0 || !*(_DWORD *)(v23 + 36) )
    return result;
  v24 = *v3;
  v25 = *(unsigned __int16 *)(v23 + 66);
  v64 = 0;
  v26 = *(_QWORD *)(v24 + 8);
  if ( v25 )
    v64 = *(_QWORD *)(v26 + 128) + 2LL * v25 * (unsigned int)*(unsigned __int16 *)(v26 + 36);
  v27 = *(_DWORD *)(result + 28);
  if ( i == 1 )
    goto LABEL_70;
  v28 = *v22;
  v29 = *(_BYTE *)v22;
  v30 = (v29 & 2) != 0;
  if ( (v28 & 1) == 0 )
    v30 = *(_BYTE *)(v23 + 44) & 1;
  if ( v30 )
    goto LABEL_70;
  v31 = (v29 & 8) != 0;
  if ( (v28 & 1) != 0 )
  {
    if ( v31 )
      goto LABEL_42;
  }
  else if ( (*(_BYTE *)(v23 + 44) & 4) != 0 )
  {
    goto LABEL_42;
  }
  v55 = **(_QWORD **)&v4[32 * i - 64];
  if ( *(_WORD *)(v55 + 66)
    && *(_WORD *)(*(_QWORD *)(v26 + 128)
                + 2LL
                * (*(_DWORD *)(result + 24)
                 + *(unsigned __int16 *)(v55 + 66) * (unsigned int)*(unsigned __int16 *)(v26 + 36))) )
  {
LABEL_70:
    ++v27;
  }
LABEL_42:
  v32 = *(_DWORD *)(result + 12);
  v33 = *(_DWORD *)(result + 8);
  result = *(unsigned int *)(result + 16);
  v58.m128i_i32[0] = v32;
  v61 = result;
  if ( v62 >= v27 )
  {
    v34 = *(unsigned int *)(v23 + 36);
    v68 = i;
    v35 = 0;
    v36 = 0;
    v69 = v4;
    v60 = v34;
    result = 8 * v34;
    v70 = v3;
    v63 = v23 - result;
    for ( j = v33; ; j = v43 )
    {
      if ( v60 == v36 )
        return result;
      v52 = v63 + 8LL * v36;
      v53 = *(_QWORD *)v52;
      if ( (*(_QWORD *)v52 & 1) != 0 )
      {
        v37 = (*(_QWORD *)v52 & 2LL) != 0;
        v38 = (v53 >> 3) & 1;
      }
      else
      {
        v37 = *(_BYTE *)(v53 + 44) & 1;
        LOBYTE(v38) = (*(_BYTE *)(v53 + 44) & 4) != 0;
      }
      v39 = v35;
      if ( !(_BYTE)v38 )
      {
        if ( v64 )
          v37 = (*(unsigned __int16 *)(v64 + 2LL * v35) | v37) != 0;
        v39 = v35 + 1;
      }
      v40 = *(_DWORD **)v52;
      v41 = v27;
      if ( (*(_QWORD *)v52 & 1) == 0 && v40[9] )
        v41 = v40[14] + v27;
      LODWORD(result) = *(unsigned __int8 *)(v52 + 7);
      v42 = v41 - ((v37 == 0) - 1);
      if ( (v53 & 1) != 0 )
      {
        v43 = result + j;
      }
      else
      {
        v54 = v40[5];
        result = (unsigned int)v40[6];
        v43 = v40[4] + j;
        if ( v54 )
        {
          v44 = v58.m128i_i32[0] + v54;
          goto LABEL_55;
        }
      }
      result = v61 + (unsigned int)result;
      v44 = v58.m128i_i32[0];
LABEL_55:
      if ( v36 + 1 < v60 )
      {
        v45 = v63 + 8LL * (v36 + 1);
        v46 = *(_BYTE *)(v45 + 5);
        v66 = *(_BYTE *)(v45 + 4);
        v67 = v46 & 0xF;
        v65 = *(_BYTE *)(v45 + 6);
        v47 = ((unsigned __int64)(v46 & 0xF) << 40) & 0xFF00FFFFFFFFFFFFLL
            | ((unsigned __int64)v66 << 32) & 0xFF00F0FFFFFFFFFFLL
            | *(_QWORD *)v45 & 0xFF00F000FFFFFFFFLL;
        v48 = v47 | ((unsigned __int64)v65 << 48);
        if ( (v47 & 1) != 0 )
        {
          v49 = v66;
          v50 = v65;
          v51 = v67;
        }
        else
        {
          v50 = *(_DWORD *)&byte_4[v47 | ((unsigned __int64)v65 << 48)];
          v51 = *(_DWORD *)&byte_8[v47 | ((unsigned __int64)v65 << 48)];
          v49 = *(_DWORD *)(v48 + 12);
        }
        v43 += v50;
        result = v49 + (unsigned int)result;
        if ( v51 )
        {
          v44 += v51;
          result = v49;
        }
      }
      if ( v62 < v42 )
      {
        v3 = v70;
        v17 = *((_DWORD *)v70 + 5);
        v4 = v69;
        v18 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(j), _mm_cvtsi32_si128(v58.m128i_u32[0])),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v61), _mm_cvtsi32_si128(v36)));
        if ( v17 >= v68 + 1 )
          goto LABEL_25;
        v19 = 2 * v17;
        if ( 2 * v17 < 8 )
          v19 = 8;
        if ( v19 < v68 + 1 )
          v19 = v68 + 1;
        v20 = v19;
        if ( v17 < v19 )
        {
          v58 = v18;
          v56 = 32LL * v19;
          if ( v69 )
            v57 = (char *)off_8C52A8(v69, v56);
          else
            v57 = (char *)off_8C52B8(v56);
          v18 = _mm_load_si128(&v58);
          v4 = v57;
          v21 = *((unsigned int *)v3 + 4);
          v3[1] = (__int64)v4;
          *((_DWORD *)v3 + 5) = v20;
          i = v21 + 1;
        }
        else
        {
LABEL_25:
          v21 = v68;
          i = v68 + 1;
        }
        *((_DWORD *)v3 + 4) = i;
        result = (__int64)&v4[32 * v21];
        *(_QWORD *)result = v52;
        *(_DWORD *)(result + 24) = v35;
        *(_DWORD *)(result + 28) = v27;
        *(__m128i *)(result + 8) = v18;
        if ( v37 && v62 == v27 )
          return result;
        goto LABEL_28;
      }
      v61 = result;
      v35 = v39;
      ++v36;
      v27 = v42;
      v58.m128i_i32[0] = v44;
    }
  }
  return result;
}
