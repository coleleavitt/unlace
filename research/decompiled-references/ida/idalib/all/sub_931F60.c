unsigned __int64 __fastcall sub_931F60(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // r10
  unsigned int v6; // r14d
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // eax
  bool v11; // cf
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  _QWORD *v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r11d
  __int64 v21; // rdx
  _BYTE *v22; // r10
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  int *v29; // r9
  __int64 v30; // r12
  __m128i *v31; // rbx
  __m128i v32; // xmm0
  __int8 v33; // r13
  __m128i v34; // xmm0
  const __m128i *v35; // rdx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // r9
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // eax
  int v44; // edx
  unsigned __int64 result; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rbp
  __int64 v48; // r13
  _QWORD *v49; // rcx
  unsigned __int64 v52; // rdi
  _QWORD *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // rcx
  _QWORD *v58; // r10
  unsigned int v59; // ebp
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  unsigned int *v63; // rax
  unsigned int v64; // r13d
  __int64 v65; // rdx
  _BYTE *v66; // rsi
  unsigned int v67; // eax
  _QWORD *v68; // r12
  unsigned int v69; // eax
  unsigned int v70; // edx
  unsigned int v71; // r11d
  __int64 v72; // r14
  char v73; // al
  unsigned int v74; // r13d
  char v75; // cl
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // [rsp+0h] [rbp-1A8h]
  __int8 v82; // [rsp+0h] [rbp-1A8h]
  __int64 v83; // [rsp+8h] [rbp-1A0h]
  char v84; // [rsp+8h] [rbp-1A0h]
  _QWORD *v85; // [rsp+8h] [rbp-1A0h]
  unsigned int v86; // [rsp+10h] [rbp-198h]
  __int64 v87; // [rsp+10h] [rbp-198h]
  int v88; // [rsp+1Ch] [rbp-18Ch]
  __int64 v89; // [rsp+20h] [rbp-188h]
  __int64 v91; // [rsp+30h] [rbp-178h]
  __int64 v92; // [rsp+38h] [rbp-170h]
  __int64 v93; // [rsp+38h] [rbp-170h]
  _QWORD *v94; // [rsp+48h] [rbp-160h]
  char v95; // [rsp+48h] [rbp-160h]
  __int64 v96; // [rsp+50h] [rbp-158h]
  char v97; // [rsp+58h] [rbp-150h]
  unsigned int v98; // [rsp+5Ch] [rbp-14Ch]
  int v99[66]; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v100; // [rsp+168h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v12 = *(_DWORD *)(a1 + 256);
  v9 = *(_QWORD *)(a1 + 56);
  v100 = __readfsqword(0x28u);
  v10 = (_DWORD)a2 - v5 - (1 << v12);
  v81 = v8;
  v11 = 1 << v12 < (_DWORD)a2 - (_DWORD)v5 - v6;
  LOBYTE(v12) = 6;
  v83 = v9;
  if ( !v11 )
    v10 = v6;
  v86 = (_DWORD)a2 - v5;
  v88 = (_DWORD)a2 - v5;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v10;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v12 = *(_DWORD *)(a1 + 268);
  v89 = *(_QWORD *)(a1 + 96);
  v13 = 1 << v12;
  v97 = 56 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v26 = (v89 ^ (0xCF1BBCDCBB000000LL * *a2)) >> v97;
    *(_DWORD *)(a1 + 44) = v86;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 44);
    v92 = v5;
    v91 = a1 + 64;
    if ( (_DWORD)a2 - (_DWORD)v5 - v14 > 0x180 )
    {
      v59 = v14 + 96;
      if ( v14 >= v14 + 96 )
      {
        v9 = v83;
        v92 = v5;
      }
      else
      {
        v60 = *(_QWORD *)(a1 + 96);
        v94 = a2;
        while ( 1 )
        {
          v61 = (v60 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v14 + 8))) >> v97;
          v62 = (unsigned int)v61 >> 8 << 6;
          _mm_prefetch((const char *)(v83 + v62), 1);
          _mm_prefetch((const char *)(v83 + v62 + 32), 1);
          _mm_prefetch((const char *)(v8 + 4 * v62), 1);
          _mm_prefetch((const char *)(v8 + 4 * v62 + 64), 1);
          v63 = (unsigned int *)(a1 + 64 + 4LL * (v14 & 7));
          v64 = *v63;
          *v63 = v61;
          v65 = v64 >> 8 << 6;
          v66 = (_BYTE *)(v83 + v65);
          v67 = (*(_BYTE *)(v83 + v65) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v83 + v65) - 1) & 0x3F) == 0 )
            v67 = 63;
          *v66 = v67;
          v66[v67] = v64;
          *(_DWORD *)(v8 + 4 * (v65 + v67)) = v14++;
          if ( v59 == v14 )
            break;
          v60 = *(_QWORD *)(a1 + 96);
        }
        a2 = v94;
        v8 = *(_QWORD *)(a1 + 112);
        v9 = *(_QWORD *)(a1 + 56);
        v92 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 52);
      }
      v68 = (_QWORD *)(v5 + v86 - 32);
      v14 = v86 - 32;
      if ( (_QWORD *)((char *)a2 + 1) >= v68 )
      {
        v69 = (_DWORD)a2 + 1 - (_DWORD)v68 + 1;
        if ( v69 > 8 )
          v69 = 8;
        v70 = v69 + v14;
        if ( v14 < v69 + v14 )
        {
          v96 = v5;
          v71 = v86 - 32;
          v98 = v6;
          v72 = *(_QWORD *)(a1 + 96);
          v73 = 56 - v7;
          v95 = v7;
          v74 = v70;
          v75 = v73;
          do
          {
            v76 = 0xCF1BBCDCBB000000LL * *v68;
            v68 = (_QWORD *)((char *)v68 + 1);
            v77 = (v72 ^ v76) >> v75;
            v78 = (unsigned int)v77 >> 8 << 6;
            v79 = 4 * v78;
            _mm_prefetch((const char *)(v9 + v78), 1);
            _mm_prefetch((const char *)(v9 + v78 + 32), 1);
            v80 = v71++ & 7;
            _mm_prefetch((const char *)(v8 + v79), 1);
            _mm_prefetch((const char *)(v8 + v79 + 64), 1);
            *(_DWORD *)(a1 + 4 * v80 + 64) = v77;
          }
          while ( v74 != v71 );
          LOBYTE(v7) = v95;
          v5 = v96;
          v6 = v98;
        }
      }
    }
    if ( v86 > v14 )
    {
      v15 = v92;
      v93 = v5;
      v16 = (_QWORD *)(v15 + v14 + 8);
      do
      {
        v17 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v16)) >> (56 - (unsigned __int8)v7);
        v18 = (unsigned int)v17 >> 8 << 6;
        _mm_prefetch((const char *)(v9 + v18), 1);
        _mm_prefetch((const char *)(v9 + v18 + 32), 1);
        _mm_prefetch((const char *)(v8 + 4 * v18), 1);
        _mm_prefetch((const char *)(v8 + 4 * v18 + 64), 1);
        v19 = (unsigned int *)(v91 + 4LL * (v14 & 7));
        v20 = *v19;
        *v19 = v17;
        v21 = v20 >> 8 << 6;
        v22 = (_BYTE *)(v9 + v21);
        v23 = (*(_BYTE *)(v9 + v21) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v9 + v21) - 1) & 0x3F) == 0 )
          v23 = 63;
        v16 = (_QWORD *)((char *)v16 + 1);
        *v22 = v23;
        v22[v23] = v20;
        *(_DWORD *)(v8 + 4 * (v21 + v23)) = v14++;
      }
      while ( v88 != v14 );
      v5 = v93;
    }
    *(_DWORD *)(a1 + 44) = v86;
    v24 = ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v86 + 8)) ^ v89) >> v97;
    v26 = (unsigned int)v24 >> 8 << 6;
    _mm_prefetch((const char *)(v81 + 4 * v26), 1);
    _mm_prefetch((const char *)(v81 + 4 * v26 + 64), 1);
    _mm_prefetch((const char *)(v83 + v26), 1);
    _mm_prefetch((const char *)(v83 + v26 + 32), 1);
    v25 = (_DWORD *)(v91 + 4LL * (v86 & 7));
    LODWORD(v26) = *v25;
    *v25 = v24;
  }
  v27 = v81;
  *(_DWORD *)(a1 + 104) += v26;
  v28 = (unsigned int)v26 >> 8 << 6;
  v82 = v26;
  v29 = v99;
  v30 = v27 + 4 * v28;
  v31 = (__m128i *)(v83 + v28);
  v32 = _mm_cvtsi32_si128(v26);
  *(_OWORD *)v99 = 0;
  v33 = v31->m128i_i8[0];
  v34 = _mm_unpacklo_epi8(v32, v32);
  v35 = v31;
  v36 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v34, v34), 0);
  v84 = v31->m128i_i8[0] & 0x3F;
  do
  {
    v37 = _mm_loadu_si128(v35++);
    *v29++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v37, v36));
  }
  while ( &v31[4] != v35 );
  v38 = 0;
  _RAX = __ROR8__(v99[0] | ((__int64)v99[3] << 48) | ((__int64)v99[2] << 32) | ((__int64)v99[1] << 16), v84);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v41 = (v84 + (_BYTE)_RDX) & 0x3F;
      if ( v41 )
      {
        v42 = *(_DWORD *)(v30 + 4LL * v41);
        if ( v42 < v6 )
          break;
        --v13;
        _mm_prefetch((const char *)(v5 + v42), 1);
        v99[v38++] = v42;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v13 );
  }
  v43 = (v33 + 63) & 0x3F;
  if ( ((v33 + 63) & 0x3F) == 0 )
    v43 = 63;
  v31->m128i_i8[0] = v43;
  v31->m128i_i8[v43] = v82;
  v44 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v44 + 1;
  *(_DWORD *)(v30 + 4LL * v43) = v44;
  result = 3;
  if ( v38 )
  {
    v46 = 0;
    v47 = (unsigned __int64)a3 - 7;
    do
    {
      while ( 1 )
      {
        v48 = (unsigned int)v99[v46];
        v49 = (_QWORD *)(v5 + v48);
        if ( *(_DWORD *)((char *)a2 + result - 3) == *(_DWORD *)(v5 + v48 + result - 3) )
          break;
LABEL_29:
        if ( ++v46 == v38 )
          return result;
      }
      if ( (unsigned __int64)a2 >= v47 )
      {
        v53 = a2;
      }
      else
      {
        if ( *v49 != *a2 )
        {
          _RDI = *a2 ^ *v49;
          __asm { tzcnt   rdi, rdi }
          v52 = (unsigned int)_RDI >> 3;
          goto LABEL_34;
        }
        v53 = a2 + 1;
        v85 = v49 + 1;
        if ( v47 <= (unsigned __int64)(a2 + 1) )
        {
          ++v49;
        }
        else
        {
          v54 = v49[1];
          v55 = a2[1];
          if ( v55 != v54 )
          {
LABEL_50:
            _RCX = v54 ^ v55;
            __asm { tzcnt   rcx, rcx }
            v52 = (char *)v53 + ((unsigned int)_RCX >> 3) - (char *)a2;
            goto LABEL_34;
          }
          v87 = v5;
          v58 = v85;
          while ( 1 )
          {
            ++v53;
            ++v58;
            if ( v47 <= (unsigned __int64)v53 )
              break;
            v54 = *v58;
            v55 = *v53;
            if ( *v58 != *v53 )
            {
              v5 = v87;
              goto LABEL_50;
            }
          }
          v49 = v58;
          v5 = v87;
        }
      }
      if ( v53 < (_QWORD *)((char *)a3 - 3) && *(_DWORD *)v49 == *(_DWORD *)v53 )
      {
        v53 = (_QWORD *)((char *)v53 + 4);
        v49 = (_QWORD *)((char *)v49 + 4);
      }
      if ( v53 < (_QWORD *)((char *)a3 - 1) && *(_WORD *)v49 == *(_WORD *)v53 )
      {
        v53 = (_QWORD *)((char *)v53 + 2);
        v49 = (_QWORD *)((char *)v49 + 2);
      }
      if ( a3 > v53 )
        v53 = (_QWORD *)((char *)v53 + (*(_BYTE *)v49 == *(_BYTE *)v53));
      v52 = (char *)v53 - (char *)a2;
LABEL_34:
      if ( v52 <= result )
        goto LABEL_29;
      *a4 = (unsigned int)(v88 + 3 - v48);
      if ( a3 == (_QWORD *)((char *)a2 + v52) )
        return v52;
      ++v46;
      result = v52;
    }
    while ( v46 != v38 );
  }
  return result;
}
