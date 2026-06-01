__int64 __fastcall sub_56BAE0(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 v4; // r12
  unsigned int v5; // edi
  __int64 *v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r8d
  unsigned int v10; // ebp
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  int v13; // r9d
  char v14; // di
  int v15; // ecx
  unsigned __int64 v16; // r11
  __int64 v17; // rbx
  int v18; // r14d
  int v19; // ecx
  int v20; // r14d
  int v21; // ecx
  int v22; // r9d
  int v23; // r11d
  _WORD *v24; // r9
  __int64 v25; // rcx
  char v26; // cl
  __int64 result; // rax
  __int64 v28; // rax
  __int16 v29; // bx
  int v30; // esi
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int16 v33; // si
  char v34; // r9
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // r11
  unsigned int v38; // ecx
  __int16 v39; // r9
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // [rsp+Eh] [rbp-4Ah]
  int v46; // [rsp+18h] [rbp-40h]
  unsigned int v47; // [rsp+1Ch] [rbp-3Ch]

  if ( (a1 & 1) != 0 )
    __assert_fail("!self.data.is_inline", "lib/src/./subtree.c", 0x157u, "ts_subtree_summarize_children");
  v2 = *(unsigned __int16 *)(a1 + 66);
  *(_WORD *)(a1 + 44) &= 0xFE3Fu;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  if ( v2 )
    v4 = *(_QWORD *)(a2 + 128) + 2LL * v2 * (unsigned int)*(unsigned __int16 *)(a2 + 36);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = nullptr;
  if ( (a1 & 1) != 0 )
  {
    v44 = *(_WORD *)(a1 + 40);
    if ( v5 )
    {
LABEL_6:
      v47 = v5;
      v7 = v5;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = v6[v8];
        v13 = *(_DWORD *)(a1 + 20);
        v14 = v12 & 1;
        if ( v13 )
        {
          if ( v14 )
          {
LABEL_81:
            if ( !v8 )
            {
              *(_DWORD *)(a1 + 20) = 0;
              *(_DWORD *)(a1 + 24) = HIBYTE(v12);
              v21 = HIBYTE(v12) + BYTE6(v12);
              *(__m128i *)(a1 + 4) = _mm_unpacklo_epi64(
                                       _mm_unpacklo_epi32(
                                         _mm_cvtsi32_si128(BYTE6(v12)),
                                         _mm_cvtsi32_si128(BYTE5(v12) & 0xF)),
                                       _mm_unpacklo_epi32(_mm_cvtsi32_si128(BYTE4(v12)), _mm_cvtsi32_si128(HIBYTE(v12))));
LABEL_18:
              v22 = *(_DWORD *)(a1 + 32);
              if ( (v12 & 0x20) != 0 )
                v22 += 610;
              *(_DWORD *)(a1 + 32) = v22;
              if ( v44 > 0xFFFDu && (v12 & 8) == 0 && (v12 & 2) != 0 )
                *(_DWORD *)(a1 + 32) = v22 + 100;
              if ( v10 < v21 + ((v12 >> 44) & 0xF) )
                v10 = v21 + ((v12 >> 44) & 0xF);
              v23 = 0;
              if ( !v4 )
              {
                if ( (v12 & 2) == 0 )
                  goto LABEL_43;
                goto LABEL_40;
              }
              goto LABEL_24;
            }
            v16 = HIBYTE(v12);
            v18 = BYTE4(v12);
            v15 = HIBYTE(v12) + BYTE6(v12);
            v17 = (v12 >> 40) & 0xF;
            goto LABEL_96;
          }
        }
        else
        {
          if ( v14 )
            goto LABEL_81;
          if ( (*(_BYTE *)(v12 + 45) & 1) != 0 )
            *(_BYTE *)(a1 + 45) |= 1u;
        }
        if ( *(char *)(v12 + 44) < 0 )
          *(_BYTE *)(a1 + 44) |= 0x80u;
        if ( !v8 )
        {
          v35 = *(_DWORD *)(v12 + 4);
          v36 = *(_QWORD *)(v12 + 8);
          *(_DWORD *)(a1 + 4) = v35;
          *(_QWORD *)(a1 + 8) = v36;
          LODWORD(v36) = *(_DWORD *)(v12 + 16);
          v37 = *(_QWORD *)(v12 + 20);
          *(_DWORD *)(a1 + 16) = v36;
          v21 = v36 + v35;
          *(_QWORD *)(a1 + 20) = v37;
          goto LABEL_64;
        }
        v15 = *(_DWORD *)(v12 + 16) + *(_DWORD *)(v12 + 4);
        LODWORD(v16) = *(_DWORD *)(v12 + 24);
        v46 = *(_DWORD *)(v12 + 20);
        LODWORD(v17) = *(_DWORD *)(v12 + 8);
        v18 = *(_DWORD *)(v12 + 12);
        if ( v46 )
        {
          v19 = *(_DWORD *)(a1 + 16) + v15;
          LODWORD(v17) = v46 + v17;
          v20 = *(_DWORD *)(a1 + 24);
          if ( (_DWORD)v17 )
            goto LABEL_16;
          goto LABEL_97;
        }
LABEL_96:
        LODWORD(v16) = v18 + v16;
        v19 = *(_DWORD *)(a1 + 16) + v15;
        v20 = *(_DWORD *)(a1 + 24);
        if ( (_DWORD)v17 )
        {
LABEL_16:
          v13 += v17;
          goto LABEL_17;
        }
LABEL_97:
        LODWORD(v16) = v20 + v16;
LABEL_17:
        *(_DWORD *)(a1 + 16) = v19;
        v21 = *(_DWORD *)(a1 + 4) + v19;
        *(_DWORD *)(a1 + 20) = v13;
        *(_DWORD *)(a1 + 24) = v16;
        if ( v14 )
          goto LABEL_18;
LABEL_64:
        v38 = *(_DWORD *)(v12 + 28) + v21;
        v39 = *(_WORD *)(v12 + 40);
        if ( v10 < v38 )
          v10 = v38;
        if ( v39 != -2 )
        {
          v40 = *(_DWORD *)(a1 + 32);
          if ( (*(_BYTE *)(v12 + 45) & 2) != 0 )
            v41 = v40 + 610;
          else
            v41 = *(_DWORD *)(v12 + 32) + v40;
          *(_DWORD *)(a1 + 32) = v41;
        }
        v23 = *(_DWORD *)(v12 + 36);
        if ( v44 > 0xFFFDu && (*(_BYTE *)(v12 + 44) & 4) == 0 )
        {
          if ( v39 == -1 && !v23 )
          {
LABEL_77:
            v23 = 0;
            if ( !v4 )
            {
              v26 = *(_BYTE *)(v12 + 44);
              if ( (v26 & 1) == 0 )
                goto LABEL_33;
LABEL_40:
              ++*(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 56) = v9 + 1;
              if ( v14 )
                goto LABEL_41;
LABEL_93:
              v26 = *(_BYTE *)(v12 + 44);
              if ( (v26 & 2) != 0 )
              {
                ++*(_DWORD *)(a1 + 52);
                v26 = *(_BYTE *)(v12 + 44);
              }
              goto LABEL_33;
            }
            goto LABEL_24;
          }
          if ( (*(_BYTE *)(v12 + 44) & 1) == 0 )
          {
            if ( !v23 )
              goto LABEL_77;
            *(_DWORD *)(a1 + 32) += 100 * *(_DWORD *)(v12 + 48);
            goto LABEL_85;
          }
          *(_DWORD *)(a1 + 32) += 100;
        }
        if ( !v23 )
          goto LABEL_77;
LABEL_85:
        v9 += *(_DWORD *)(v12 + 56);
        v42 = *(_DWORD *)(v12 + 60);
        *(_DWORD *)(a1 + 56) = v9;
        *(_DWORD *)(a1 + 60) += v42;
        if ( !v4 )
        {
          v26 = *(_BYTE *)(v12 + 44);
          if ( (v26 & 1) != 0 )
            goto LABEL_40;
          goto LABEL_87;
        }
LABEL_24:
        v24 = (_WORD *)(v4 + 2LL * v11);
        if ( *v24 )
        {
          if ( !v14 )
          {
            v26 = *(_BYTE *)(v12 + 44);
            if ( (v26 & 4) == 0 )
            {
LABEL_27:
              ++*(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 56) = v9 + 1;
              v25 = (unsigned __int16)*v24;
              if ( (_WORD)v25 == 0xFFFF || (_WORD)v25 != 0xFFFE && *(_BYTE *)(*(_QWORD *)(a2 + 104) + 3 * v25 + 1) )
                ++*(_DWORD *)(a1 + 52);
              goto LABEL_31;
            }
LABEL_91:
            if ( (v26 & 1) != 0 )
            {
              ++*(_DWORD *)(a1 + 48);
              *(_DWORD *)(a1 + 56) = v9 + 1;
              goto LABEL_93;
            }
LABEL_87:
            if ( !v23 )
              goto LABEL_33;
            goto LABEL_88;
          }
          if ( (v12 & 8) == 0 )
            goto LABEL_27;
        }
        else if ( !v14 )
        {
          v26 = *(_BYTE *)(v12 + 44);
          goto LABEL_91;
        }
        if ( (v12 & 2) != 0 )
        {
          ++*(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 56) = v9 + 1;
LABEL_41:
          if ( (v12 & 4) != 0 )
            ++*(_DWORD *)(a1 + 52);
LABEL_43:
          v11 += (v12 & 8) == 0;
          if ( ++v8 == v7 )
            goto LABEL_44;
          goto LABEL_38;
        }
        if ( !v23 )
          goto LABEL_43;
LABEL_88:
        *(_QWORD *)(a1 + 48) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 48)),
                                 _mm_loadl_epi64((const __m128i *)(v12 + 48))).m128i_u64[0];
LABEL_31:
        if ( v14 )
          goto LABEL_43;
        v26 = *(_BYTE *)(v12 + 44);
LABEL_33:
        if ( (v26 & 0x40) != 0 )
          *(_BYTE *)(a1 + 44) |= 0x40u;
        if ( *(_WORD *)(v12 + 40) == 0xFFFF )
          *(_DWORD *)(a1 + 42) |= 0x18FFFFu;
        v11 += (*(_BYTE *)(v12 + 44) & 4) == 0;
        if ( ++v8 == v7 )
        {
LABEL_44:
          v5 = v47;
          goto LABEL_45;
        }
LABEL_38:
        v9 = *(_DWORD *)(a1 + 56);
      }
    }
  }
  else
  {
    v6 = (__int64 *)(a1 - 8LL * v5);
    v44 = *(_WORD *)(a1 + 40);
    if ( v5 )
      goto LABEL_6;
  }
  v10 = 0;
LABEL_45:
  result = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 28) = v10 - (result + *(_DWORD *)(a1 + 4));
  if ( v44 > 0xFFFDu )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 32) + result + 30 * *(_DWORD *)(a1 + 20) + 500);
    *(_DWORD *)(a1 + 32) = result;
  }
  if ( v5 )
  {
    v28 = *v6;
    v29 = *((unsigned __int8 *)v6 + 1);
    v30 = *((unsigned __int16 *)v6 + 1);
    v31 = v6[v5 - 1];
    BYTE1(v28) = *((_BYTE *)v6 + 1);
    v28 &= 0xFFFFFFFF0000FFFFLL;
    v32 = v28 | ((unsigned __int64)(unsigned __int16)v30 << 16);
    result = v28 & 1;
    if ( (_DWORD)result )
    {
      *(_DWORD *)(a1 + 68) = (unsigned __int8)v29 | (v30 << 16);
    }
    else
    {
      if ( *(_DWORD *)(v32 + 36) )
      {
        *(_WORD *)(a1 + 68) = *(_WORD *)(v32 + 68);
        v33 = *(_WORD *)(v32 + 70);
      }
      else
      {
        *(_WORD *)(a1 + 68) = *(_WORD *)(v32 + 40);
        v33 = *(_WORD *)(v32 + 42);
      }
      *(_WORD *)(a1 + 70) = v33;
      if ( (*(_BYTE *)(v32 + 44) & 8) != 0 )
        *(_BYTE *)(a1 + 44) |= 8u;
    }
    v34 = v31 & 1;
    if ( (v31 & 1) == 0 && (*(_BYTE *)(v31 + 44) & 0x10) != 0 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
    if ( v5 != 1 && (*(_BYTE *)(a1 + 44) & 1) == 0 && (*(_BYTE *)(a1 + 44) & 2) == 0 )
    {
      if ( (v32 & 1) == 0 )
        v29 = *(_WORD *)(v32 + 40);
      if ( v29 == v44 )
      {
        if ( (_BYTE)result )
        {
          result = 1;
          if ( v34 )
            goto LABEL_115;
          LODWORD(result) = *(unsigned __int16 *)(v31 + 64);
        }
        else
        {
          v43 = *(_WORD *)(v32 + 64);
          if ( v34 )
          {
            result = 1;
            if ( !v43 )
            {
LABEL_115:
              *(_WORD *)(a1 + 64) = result;
              return result;
            }
LABEL_120:
            *(_WORD *)(a1 + 64) = v43 + 1;
            return result;
          }
          result = *(unsigned __int16 *)(v31 + 64);
          if ( (unsigned __int16)result < v43 )
            goto LABEL_120;
        }
        result = (unsigned int)(result + 1);
        goto LABEL_115;
      }
    }
  }
  return result;
}
