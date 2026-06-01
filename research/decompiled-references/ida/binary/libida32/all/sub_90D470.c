unsigned __int64 __fastcall sub_90D470(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r14d
  int v6; // r13d
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rbp
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  _DWORD *v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r11d
  __int64 v21; // rdx
  _BYTE *v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  int *v30; // r9
  __int64 v31; // r12
  __m128i *v32; // rbx
  __int8 v33; // r13
  const __m128i *v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  char v37; // cl
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int64 v40; // r9
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // edx
  unsigned __int64 result; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rbp
  int v50; // ebx
  __int64 v51; // r13
  _QWORD *v52; // rcx
  unsigned __int64 v55; // rdi
  _QWORD *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // rcx
  int v61; // eax
  _QWORD *v62; // r10
  unsigned int v63; // ebx
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rax
  unsigned int *v67; // rax
  unsigned int v68; // r14d
  __int64 v69; // rdx
  _BYTE *v70; // r11
  unsigned int v71; // eax
  _DWORD *v72; // r12
  unsigned int v73; // eax
  unsigned int v74; // edx
  unsigned int v75; // r11d
  int v76; // r15d
  char v77; // al
  unsigned int v78; // r13d
  char v79; // cl
  int v80; // edx
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // [rsp+0h] [rbp-1A8h]
  __int8 v86; // [rsp+0h] [rbp-1A8h]
  __int64 v87; // [rsp+8h] [rbp-1A0h]
  _QWORD *v88; // [rsp+8h] [rbp-1A0h]
  int v89; // [rsp+10h] [rbp-198h]
  __int64 v90; // [rsp+10h] [rbp-198h]
  char v91; // [rsp+1Ch] [rbp-18Ch]
  _QWORD *v93; // [rsp+28h] [rbp-180h]
  __int64 v94; // [rsp+30h] [rbp-178h]
  __int64 v95; // [rsp+38h] [rbp-170h]
  __int64 v96; // [rsp+38h] [rbp-170h]
  int v97; // [rsp+40h] [rbp-168h]
  unsigned int v98; // [rsp+44h] [rbp-164h]
  char v99; // [rsp+48h] [rbp-160h]
  __int64 v100; // [rsp+50h] [rbp-158h]
  unsigned int v101; // [rsp+58h] [rbp-150h]
  int v102[66]; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v103; // [rsp+168h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_QWORD *)(a1 + 112);
  v93 = a4;
  v8 = (_DWORD)a2 - v4;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = 1 << *(_DWORD *)(a1 + 256);
  v103 = __readfsqword(0x28u);
  v85 = v7;
  v11 = (_DWORD)a2 - v4 - v10;
  LOBYTE(a4) = 6;
  if ( v10 >= (_DWORD)a2 - (_DWORD)v4 - v5 )
    v11 = v5;
  v87 = v9;
  v12 = *(_QWORD *)(a1 + 96);
  v89 = (_DWORD)a2 - v4;
  if ( !*(_DWORD *)(a1 + 40) )
    v5 = v11;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    LODWORD(a4) = *(_DWORD *)(a1 + 268);
  v97 = *(_QWORD *)(a1 + 96);
  v13 = 1 << (char)a4;
  v91 = 24 - v6;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v61 = -1640531535 * *(_DWORD *)a2;
    *(_DWORD *)(a1 + 44) = v8;
    v27 = ((unsigned int)v12 ^ v61) >> v91;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 44);
    v95 = v4;
    v94 = a1 + 64;
    if ( v8 - v14 > 0x180 )
    {
      v63 = v14 + 96;
      if ( v14 >= v14 + 96 )
      {
        v7 = v85;
        v95 = v4;
      }
      else
      {
        LODWORD(v64) = *(_QWORD *)(a1 + 96);
        v98 = v5;
        while ( 1 )
        {
          v65 = ((unsigned int)v64 ^ (-1640531535 * *(_DWORD *)(v4 + v14 + 8))) >> v91;
          v66 = v65 >> 8 << 6;
          _mm_prefetch((const char *)(v9 + v66), 1);
          _mm_prefetch((const char *)(v9 + v66 + 32), 1);
          _mm_prefetch((const char *)(v85 + 4 * v66), 1);
          _mm_prefetch((const char *)(v85 + 4 * v66 + 64), 1);
          v67 = (unsigned int *)(a1 + 64 + 4LL * (v14 & 7));
          v68 = *v67;
          *v67 = v65;
          v69 = v68 >> 8 << 6;
          v70 = (_BYTE *)(v9 + v69);
          v71 = (*(_BYTE *)(v9 + v69) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v9 + v69) - 1) & 0x3F) == 0 )
            v71 = 63;
          *v70 = v71;
          v70[v71] = v68;
          *(_DWORD *)(v85 + 4 * (v69 + v71)) = v14++;
          if ( v63 == v14 )
            break;
          v64 = *(_QWORD *)(a1 + 96);
        }
        v8 = (_DWORD)a2 - v4;
        v5 = v98;
        v7 = *(_QWORD *)(a1 + 112);
        v9 = *(_QWORD *)(a1 + 56);
        v6 = *(_DWORD *)(a1 + 52);
        v95 = *(_QWORD *)(a1 + 8);
      }
      v72 = (_DWORD *)(v4 + v8 - 32);
      v14 = v8 - 32;
      if ( (_DWORD *)((char *)a2 + 1) >= v72 )
      {
        v73 = (_DWORD)a2 + 1 - (_DWORD)v72 + 1;
        if ( v73 > 8 )
          v73 = 8;
        v74 = v73 + v14;
        if ( v14 < v73 + v14 )
        {
          v100 = v4;
          v75 = v8 - 32;
          v101 = v8;
          v76 = *(_DWORD *)(a1 + 96);
          v77 = 24 - v6;
          v99 = v6;
          v78 = v74;
          v79 = v77;
          do
          {
            v80 = -1640531535 * *v72;
            v72 = (_DWORD *)((char *)v72 + 1);
            v81 = (v76 ^ (unsigned int)v80) >> v79;
            v82 = v81 >> 8 << 6;
            v83 = 4 * v82;
            _mm_prefetch((const char *)(v9 + v82), 1);
            _mm_prefetch((const char *)(v9 + v82 + 32), 1);
            v84 = v75++ & 7;
            _mm_prefetch((const char *)(v7 + v83), 1);
            _mm_prefetch((const char *)(v7 + v83 + 64), 1);
            *(_DWORD *)(a1 + 4 * v84 + 64) = v81;
          }
          while ( v78 != v75 );
          LOBYTE(v6) = v99;
          v4 = v100;
          v8 = v101;
        }
      }
    }
    if ( v8 > v14 )
    {
      v15 = v95;
      v96 = v4;
      v16 = (_DWORD *)(v15 + v14 + 8);
      do
      {
        v17 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v16)) >> (24 - v6);
        v18 = v17 >> 8 << 6;
        _mm_prefetch((const char *)(v9 + v18), 1);
        _mm_prefetch((const char *)(v9 + v18 + 32), 1);
        _mm_prefetch((const char *)(v7 + 4 * v18), 1);
        _mm_prefetch((const char *)(v7 + 4 * v18 + 64), 1);
        v19 = (unsigned int *)(v94 + 4LL * (v14 & 7));
        v20 = *v19;
        *v19 = v17;
        v21 = v20 >> 8 << 6;
        v22 = (_BYTE *)(v9 + v21);
        v23 = (*(_BYTE *)(v9 + v21) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v9 + v21) - 1) & 0x3F) == 0 )
          v23 = 63;
        v16 = (_DWORD *)((char *)v16 + 1);
        *v22 = v23;
        v22[v23] = v20;
        *(_DWORD *)(v7 + 4 * (v21 + v23)) = v14++;
      }
      while ( v89 != v14 );
      v4 = v96;
    }
    *(_DWORD *)(a1 + 44) = v8;
    v24 = (v97 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v4 + v8 + 8))) >> v91;
    v25 = v24 >> 8 << 6;
    _mm_prefetch((const char *)(v85 + 4 * v25), 1);
    _mm_prefetch((const char *)(v85 + 4 * v25 + 64), 1);
    _mm_prefetch((const char *)(v87 + v25), 1);
    _mm_prefetch((const char *)(v87 + v25 + 32), 1);
    v26 = (unsigned int *)(v94 + 4LL * (v8 & 7));
    v27 = *v26;
    *v26 = v24;
  }
  v28 = v85;
  *(_DWORD *)(a1 + 104) += v27;
  v86 = v27;
  v29 = v27 >> 8 << 6;
  *(_OWORD *)v102 = 0;
  v30 = v102;
  v31 = v28 + 4 * v29;
  v32 = (__m128i *)(v87 + v29);
  v33 = v32->m128i_i8[0];
  v34 = v32;
  v35 = _mm_cvtsi32_si128(v27);
  v36 = _mm_unpacklo_epi8(v35, v35);
  v37 = v32->m128i_i8[0] & 0x3F;
  v38 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v36, v36), 0);
  do
  {
    v39 = _mm_loadu_si128(v34++);
    *v30++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v39, v38));
  }
  while ( &v32[4] != v34 );
  v40 = 0;
  _RAX = __ROR8__(v102[0] | ((__int64)v102[3] << 48) | ((__int64)v102[2] << 32) | ((__int64)v102[1] << 16), v37);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v43 = (v37 + (_BYTE)_RDX) & 0x3F;
      if ( v43 )
      {
        v44 = *(_DWORD *)(v31 + 4LL * v43);
        if ( v44 < v5 )
          break;
        --v13;
        _mm_prefetch((const char *)(v4 + v44), 1);
        v102[v40++] = v44;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v13 );
  }
  v45 = (v33 + 63) & 0x3F;
  if ( ((v33 + 63) & 0x3F) == 0 )
    v45 = 63;
  v32->m128i_i8[0] = v45;
  v32->m128i_i8[v45] = v86;
  v46 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v46 + 1;
  *(_DWORD *)(v31 + 4LL * v45) = v46;
  result = 3;
  if ( v40 )
  {
    v48 = 0;
    v49 = a3 - 7;
    v50 = v89 + 3;
    do
    {
      while ( 1 )
      {
        v51 = (unsigned int)v102[v48];
        v52 = (_QWORD *)(v4 + v51);
        if ( *(_DWORD *)((char *)a2 + result - 3) == *(_DWORD *)(v4 + v51 + result - 3) )
          break;
LABEL_29:
        if ( ++v48 == v40 )
          return result;
      }
      if ( (unsigned __int64)a2 >= v49 )
      {
        v56 = a2;
      }
      else
      {
        if ( *v52 != *a2 )
        {
          _RDI = *a2 ^ *v52;
          __asm { tzcnt   rdi, rdi }
          v55 = (unsigned int)_RDI >> 3;
          goto LABEL_34;
        }
        v56 = a2 + 1;
        v88 = v52 + 1;
        if ( v49 <= (unsigned __int64)(a2 + 1) )
        {
          ++v52;
        }
        else
        {
          v57 = v52[1];
          v58 = a2[1];
          if ( v58 != v57 )
          {
LABEL_50:
            _RCX = v57 ^ v58;
            __asm { tzcnt   rcx, rcx }
            v55 = (char *)v56 + ((unsigned int)_RCX >> 3) - (char *)a2;
            goto LABEL_34;
          }
          v90 = v4;
          v62 = v88;
          while ( 1 )
          {
            ++v56;
            ++v62;
            if ( v49 <= (unsigned __int64)v56 )
              break;
            v57 = *v62;
            v58 = *v56;
            if ( *v62 != *v56 )
            {
              v4 = v90;
              goto LABEL_50;
            }
          }
          v52 = v62;
          v4 = v90;
        }
      }
      if ( (unsigned __int64)v56 < a3 - 3 && *(_DWORD *)v52 == *(_DWORD *)v56 )
      {
        v56 = (_QWORD *)((char *)v56 + 4);
        v52 = (_QWORD *)((char *)v52 + 4);
      }
      if ( (unsigned __int64)v56 < a3 - 1 && *(_WORD *)v52 == *(_WORD *)v56 )
      {
        v56 = (_QWORD *)((char *)v56 + 2);
        v52 = (_QWORD *)((char *)v52 + 2);
      }
      if ( a3 > (unsigned __int64)v56 )
        v56 = (_QWORD *)((char *)v56 + (*(_BYTE *)v52 == *(_BYTE *)v56));
      v55 = (char *)v56 - (char *)a2;
LABEL_34:
      if ( v55 <= result )
        goto LABEL_29;
      *v93 = (unsigned int)(v50 - v51);
      if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v55) )
        return v55;
      ++v48;
      result = v55;
    }
    while ( v48 != v40 );
  }
  return result;
}

