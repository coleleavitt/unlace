unsigned __int64 __fastcall sub_930450(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // r10
  unsigned int v6; // r14d
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // eax
  bool v11; // cf
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rdx
  unsigned int v20; // r11d
  __int64 v21; // rdx
  _BYTE *v22; // r10
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rax
  __int8 v27; // r13
  __int64 v28; // r9
  __int64 v29; // r11
  __m128i v30; // xmm0
  __int64 v31; // rbp
  __m128i *v32; // r11
  __m128i v33; // xmm0
  __int8 v34; // r12
  __m128i v35; // xmm0
  char v36; // bl
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // eax
  int v42; // edx
  unsigned __int64 result; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rbp
  __int64 v46; // r13
  _QWORD *v47; // rcx
  unsigned __int64 v50; // rdi
  _QWORD *v51; // rdi
  __int64 v52; // r11
  __int64 v53; // rcx
  _QWORD *v56; // r10
  unsigned int v57; // ebp
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int *v61; // rdx
  unsigned int v62; // r11d
  __int64 v63; // rdx
  _BYTE *v64; // rsi
  unsigned int v65; // eax
  _QWORD *v66; // rbp
  unsigned int v67; // eax
  unsigned int v68; // edx
  unsigned int v69; // r11d
  __int64 v70; // r14
  char v71; // al
  unsigned int v72; // r12d
  char v73; // cl
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r10
  __int64 v78; // [rsp+0h] [rbp-1A8h]
  __int64 v79; // [rsp+8h] [rbp-1A0h]
  _QWORD *v80; // [rsp+8h] [rbp-1A0h]
  unsigned int v81; // [rsp+10h] [rbp-198h]
  __int64 v82; // [rsp+10h] [rbp-198h]
  int v83; // [rsp+1Ch] [rbp-18Ch]
  __int64 v84; // [rsp+20h] [rbp-188h]
  __int64 v86; // [rsp+30h] [rbp-178h]
  __int64 v87; // [rsp+38h] [rbp-170h]
  __int64 v88; // [rsp+38h] [rbp-170h]
  _QWORD *v89; // [rsp+48h] [rbp-160h]
  char v90; // [rsp+48h] [rbp-160h]
  __int64 v91; // [rsp+50h] [rbp-158h]
  char v92; // [rsp+58h] [rbp-150h]
  unsigned int v93; // [rsp+5Ch] [rbp-14Ch]
  _DWORD v94[66]; // [rsp+60h] [rbp-148h]
  unsigned __int64 v95; // [rsp+168h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v12 = *(_DWORD *)(a1 + 256);
  v9 = *(_QWORD *)(a1 + 56);
  v95 = __readfsqword(0x28u);
  v10 = (_DWORD)a2 - v5 - (1 << v12);
  v78 = v8;
  v11 = 1 << v12 < (_DWORD)a2 - (_DWORD)v5 - v6;
  LOBYTE(v12) = 5;
  v79 = v9;
  if ( !v11 )
    v10 = v6;
  v81 = (_DWORD)a2 - v5;
  v83 = (_DWORD)a2 - v5;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v10;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v12 = *(_DWORD *)(a1 + 268);
  v84 = *(_QWORD *)(a1 + 96);
  v13 = 1 << v12;
  v92 = 56 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v26 = (v84 ^ (0xCF1BBCDCBF9B0000LL * *a2)) >> v92;
    *(_DWORD *)(a1 + 44) = v81;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 44);
    v87 = v5;
    v86 = a1 + 64;
    if ( (_DWORD)a2 - (_DWORD)v5 - v14 > 0x180 )
    {
      v57 = v14 + 96;
      if ( v14 >= v14 + 96 )
      {
        v87 = v5;
      }
      else
      {
        v58 = *(_QWORD *)(a1 + 96);
        v89 = a2;
        while ( 1 )
        {
          v59 = (v58 ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v5 + v14 + 8))) >> v92;
          v60 = 32 * ((unsigned int)v59 >> 8);
          _mm_prefetch((const char *)(v9 + v60), 1);
          _mm_prefetch((const char *)(v8 + 4 * v60), 1);
          _mm_prefetch((const char *)(v8 + 4 * v60 + 64), 1);
          v61 = (unsigned int *)(a1 + 64 + 4LL * (v14 & 7));
          v62 = *v61;
          *v61 = v59;
          v63 = 32 * (v62 >> 8);
          v64 = (_BYTE *)(v9 + v63);
          v65 = (*(_BYTE *)(v9 + v63) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v9 + v63) - 1) & 0x1F) == 0 )
            v65 = 31;
          *v64 = v65;
          v64[v65] = v62;
          *(_DWORD *)(v8 + 4 * (v63 + v65)) = v14++;
          if ( v57 == v14 )
            break;
          v58 = *(_QWORD *)(a1 + 96);
        }
        a2 = v89;
        v8 = *(_QWORD *)(a1 + 112);
        v9 = *(_QWORD *)(a1 + 56);
        v87 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 52);
      }
      v66 = (_QWORD *)(v5 + v81 - 32);
      v14 = v81 - 32;
      if ( (_QWORD *)((char *)a2 + 1) >= v66 )
      {
        v67 = (_DWORD)a2 + 1 - (_DWORD)v66 + 1;
        if ( v67 > 8 )
          v67 = 8;
        v68 = v67 + v14;
        if ( v14 < v67 + v14 )
        {
          v91 = v5;
          v69 = v81 - 32;
          v93 = v6;
          v70 = *(_QWORD *)(a1 + 96);
          v71 = 56 - v7;
          v90 = v7;
          v72 = v68;
          v73 = v71;
          do
          {
            v74 = 0xCF1BBCDCBF9B0000LL * *v66;
            v66 = (_QWORD *)((char *)v66 + 1);
            v75 = (v70 ^ v74) >> v73;
            v76 = 32 * ((unsigned int)v75 >> 8);
            v77 = 4 * v76;
            _mm_prefetch((const char *)(v9 + v76), 1);
            LOBYTE(v76) = v69++;
            _mm_prefetch((const char *)(v8 + v77), 1);
            _mm_prefetch((const char *)(v8 + v77 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v76 & 7) + 64) = v75;
          }
          while ( v72 != v69 );
          LOBYTE(v7) = v90;
          v5 = v91;
          v6 = v93;
        }
      }
    }
    if ( v81 > v14 )
    {
      v15 = v87;
      v88 = v5;
      v16 = (_QWORD *)(v15 + v14 + 8);
      do
      {
        v17 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBF9B0000LL * *v16)) >> (56 - (unsigned __int8)v7);
        v18 = 32 * ((unsigned int)v17 >> 8);
        _mm_prefetch((const char *)(v9 + v18), 1);
        _mm_prefetch((const char *)(v8 + 4 * v18), 1);
        _mm_prefetch((const char *)(v8 + 4 * v18 + 64), 1);
        v19 = (unsigned int *)(v86 + 4LL * (v14 & 7));
        v20 = *v19;
        *v19 = v17;
        v21 = 32 * (v20 >> 8);
        v22 = (_BYTE *)(v9 + v21);
        v23 = (*(_BYTE *)(v9 + v21) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v9 + v21) - 1) & 0x1F) == 0 )
          v23 = 31;
        v16 = (_QWORD *)((char *)v16 + 1);
        *v22 = v23;
        v22[v23] = v20;
        *(_DWORD *)(v8 + 4 * (v21 + v23)) = v14++;
      }
      while ( v83 != v14 );
      v5 = v88;
    }
    *(_DWORD *)(a1 + 44) = v81;
    v24 = ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v5 + v81 + 8)) ^ v84) >> v92;
    v26 = 32 * ((unsigned int)v24 >> 8);
    _mm_prefetch((const char *)(v78 + 4 * v26), 1);
    _mm_prefetch((const char *)(v78 + 4 * v26 + 64), 1);
    _mm_prefetch((const char *)(v79 + v26), 1);
    v25 = (_DWORD *)(v86 + 4LL * (v81 & 7));
    LODWORD(v26) = *v25;
    *v25 = v24;
  }
  v27 = v26;
  *(_DWORD *)(a1 + 104) += v26;
  v28 = 0;
  v29 = 32 * ((unsigned int)v26 >> 8);
  v30 = _mm_cvtsi32_si128(v26);
  v31 = v78 + 4 * v29;
  v32 = (__m128i *)(v79 + v29);
  v33 = _mm_unpacklo_epi8(v30, v30);
  v34 = v32->m128i_i8[0];
  v35 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v33, v33), 0);
  v36 = v32->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v32), v35))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v35, _mm_loadu_si128(v32 + 1))) << 16),
                         v36);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v39 = (v36 + (_BYTE)_RDX) & 0x1F;
      if ( v39 )
      {
        v40 = *(_DWORD *)(v31 + 4LL * v39);
        if ( v40 < v6 )
          break;
        --v13;
        _mm_prefetch((const char *)(v5 + v40), 1);
        v94[v28++] = v40;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v13 );
  }
  v41 = (v34 + 31) & 0x1F;
  if ( ((v34 + 31) & 0x1F) == 0 )
    v41 = 31;
  v32->m128i_i8[0] = v41;
  v32->m128i_i8[v41] = v27;
  v42 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v42 + 1;
  *(_DWORD *)(v31 + 4LL * v41) = v42;
  result = 3;
  if ( v28 )
  {
    v44 = 0;
    v45 = (unsigned __int64)a3 - 7;
    do
    {
      while ( 1 )
      {
        v46 = (unsigned int)v94[v44];
        v47 = (_QWORD *)(v5 + v46);
        if ( *(_DWORD *)((char *)a2 + result - 3) == *(_DWORD *)(v5 + v46 + result - 3) )
          break;
LABEL_27:
        if ( ++v44 == v28 )
          return result;
      }
      if ( (unsigned __int64)a2 >= v45 )
      {
        v51 = a2;
      }
      else
      {
        if ( *v47 != *a2 )
        {
          _RDI = *a2 ^ *v47;
          __asm { tzcnt   rdi, rdi }
          v50 = (unsigned int)_RDI >> 3;
          goto LABEL_32;
        }
        v51 = a2 + 1;
        v80 = v47 + 1;
        if ( v45 <= (unsigned __int64)(a2 + 1) )
        {
          ++v47;
        }
        else
        {
          v52 = v47[1];
          v53 = a2[1];
          if ( v53 != v52 )
          {
LABEL_48:
            _RCX = v52 ^ v53;
            __asm { tzcnt   rcx, rcx }
            v50 = (char *)v51 + ((unsigned int)_RCX >> 3) - (char *)a2;
            goto LABEL_32;
          }
          v82 = v5;
          v56 = v80;
          while ( 1 )
          {
            ++v51;
            ++v56;
            if ( v45 <= (unsigned __int64)v51 )
              break;
            v52 = *v56;
            v53 = *v51;
            if ( *v56 != *v51 )
            {
              v5 = v82;
              goto LABEL_48;
            }
          }
          v47 = v56;
          v5 = v82;
        }
      }
      if ( v51 < (_QWORD *)((char *)a3 - 3) && *(_DWORD *)v47 == *(_DWORD *)v51 )
      {
        v51 = (_QWORD *)((char *)v51 + 4);
        v47 = (_QWORD *)((char *)v47 + 4);
      }
      if ( v51 < (_QWORD *)((char *)a3 - 1) && *(_WORD *)v47 == *(_WORD *)v51 )
      {
        v51 = (_QWORD *)((char *)v51 + 2);
        v47 = (_QWORD *)((char *)v47 + 2);
      }
      if ( a3 > v51 )
        v51 = (_QWORD *)((char *)v51 + (*(_BYTE *)v47 == *(_BYTE *)v51));
      v50 = (char *)v51 - (char *)a2;
LABEL_32:
      if ( result >= v50 )
        goto LABEL_27;
      *a4 = (unsigned int)(v83 + 3 - v46);
      if ( a3 == (_QWORD *)((char *)a2 + v50) )
        return v50;
      ++v44;
      result = v50;
    }
    while ( v44 != v28 );
  }
  return result;
}
