unsigned __int64 __fastcall sub_90C0A0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r10
  unsigned int v6; // r13d
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // eax
  bool v11; // cf
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // rdx
  _DWORD *v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int *v20; // rdx
  unsigned int v21; // r11d
  __int64 v22; // rdx
  _BYTE *v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int *v27; // rcx
  unsigned int v28; // eax
  __int8 v29; // r14
  __int64 v30; // r9
  __int64 v31; // r11
  __m128i v32; // xmm0
  __int64 v33; // rbp
  __m128i *v34; // r11
  __m128i v35; // xmm0
  __int8 v36; // r12
  __m128i v37; // xmm0
  char v38; // bl
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
  __int64 v54; // rcx
  __int64 v55; // r11
  unsigned int v58; // eax
  _QWORD *v59; // r10
  unsigned int v60; // ebx
  unsigned int v61; // eax
  __int64 v62; // rdx
  unsigned int *v63; // rdx
  unsigned int v64; // r12d
  __int64 v65; // rdx
  _BYTE *v66; // r8
  unsigned int v67; // eax
  _DWORD *v68; // rbp
  unsigned int v69; // eax
  unsigned int v70; // edx
  unsigned int v71; // r11d
  int v72; // r13d
  char v73; // al
  unsigned int v74; // r12d
  char v75; // cl
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r10
  __int64 v80; // [rsp+8h] [rbp-1A0h]
  __int64 v81; // [rsp+10h] [rbp-198h]
  _QWORD *v82; // [rsp+10h] [rbp-198h]
  unsigned int v83; // [rsp+18h] [rbp-190h]
  __int64 v84; // [rsp+18h] [rbp-190h]
  int v85; // [rsp+24h] [rbp-184h]
  char v87; // [rsp+30h] [rbp-178h]
  int v88; // [rsp+34h] [rbp-174h]
  __int64 v89; // [rsp+38h] [rbp-170h]
  __int64 v90; // [rsp+40h] [rbp-168h]
  __int64 v91; // [rsp+40h] [rbp-168h]
  char v92; // [rsp+48h] [rbp-160h]
  __int64 v93; // [rsp+50h] [rbp-158h]
  unsigned int v94; // [rsp+5Ch] [rbp-14Ch]
  _DWORD v95[66]; // [rsp+60h] [rbp-148h]
  unsigned __int64 v96; // [rsp+168h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v12 = *(_DWORD *)(a1 + 256);
  v9 = *(_QWORD *)(a1 + 56);
  v96 = __readfsqword(0x28u);
  v10 = (_DWORD)a2 - v5 - (1 << v12);
  v80 = v8;
  v11 = 1 << v12 < (_DWORD)a2 - (_DWORD)v5 - v6;
  LOBYTE(v12) = 5;
  v81 = v9;
  if ( !v11 )
    v10 = v6;
  v83 = (_DWORD)a2 - v5;
  v13 = *(_QWORD *)(a1 + 96);
  v85 = (_DWORD)a2 - v5;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v10;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v12 = *(_DWORD *)(a1 + 268);
  v88 = *(_QWORD *)(a1 + 96);
  v14 = 1 << v12;
  v87 = 24 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v58 = v13 ^ (-1640531535 * *(_DWORD *)a2);
    *(_DWORD *)(a1 + 44) = v83;
    v28 = v58 >> v87;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 44);
    v90 = v5;
    v89 = a1 + 64;
    if ( (_DWORD)a2 - (_DWORD)v5 - v15 > 0x180 )
    {
      v60 = v15 + 96;
      if ( v15 >= v15 + 96 )
      {
        v8 = v80;
        v90 = v5;
      }
      else
      {
        while ( 1 )
        {
          v61 = ((unsigned int)v13 ^ (-1640531535 * *(_DWORD *)(v5 + v15 + 8))) >> v87;
          v62 = 32 * (v61 >> 8);
          _mm_prefetch((const char *)(v9 + v62), 1);
          _mm_prefetch((const char *)(v80 + 4 * v62), 1);
          _mm_prefetch((const char *)(v80 + 4 * v62 + 64), 1);
          v63 = (unsigned int *)(a1 + 64 + 4LL * (v15 & 7));
          v64 = *v63;
          *v63 = v61;
          v65 = 32 * (v64 >> 8);
          v66 = (_BYTE *)(v9 + v65);
          v67 = (*(_BYTE *)(v9 + v65) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v9 + v65) - 1) & 0x1F) == 0 )
            v67 = 31;
          *v66 = v67;
          v66[v67] = v64;
          *(_DWORD *)(v80 + 4 * (v65 + v67)) = v15++;
          if ( v60 == v15 )
            break;
          v13 = *(_QWORD *)(a1 + 96);
        }
        v14 = 1 << v12;
        v8 = *(_QWORD *)(a1 + 112);
        v9 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v90 = *(_QWORD *)(a1 + 8);
      }
      v68 = (_DWORD *)(v5 + v83 - 32);
      v15 = v83 - 32;
      if ( (_DWORD *)((char *)a2 + 1) >= v68 )
      {
        v69 = (_DWORD)a2 + 1 - (_DWORD)v68 + 1;
        if ( v69 > 8 )
          v69 = 8;
        v70 = v69 + v15;
        if ( v15 < v69 + v15 )
        {
          v93 = v5;
          v71 = v83 - 32;
          v94 = v6;
          v72 = *(_DWORD *)(a1 + 96);
          v73 = 24 - v7;
          v92 = v7;
          v74 = v70;
          v75 = v73;
          do
          {
            v76 = -1640531535 * *v68;
            v68 = (_DWORD *)((char *)v68 + 1);
            v77 = (v72 ^ (unsigned int)v76) >> v75;
            v78 = 32 * (v77 >> 8);
            v79 = 4 * v78;
            _mm_prefetch((const char *)(v9 + v78), 1);
            LOBYTE(v78) = v71++;
            _mm_prefetch((const char *)(v8 + v79), 1);
            _mm_prefetch((const char *)(v8 + v79 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v78 & 7) + 64) = v77;
          }
          while ( v74 != v71 );
          LOBYTE(v7) = v92;
          v5 = v93;
          v6 = v94;
        }
      }
    }
    if ( v83 > v15 )
    {
      v16 = v90;
      v91 = v5;
      v17 = (_DWORD *)(v16 + v15 + 8);
      do
      {
        v18 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v17)) >> (24 - v7);
        v19 = 32 * (v18 >> 8);
        _mm_prefetch((const char *)(v9 + v19), 1);
        _mm_prefetch((const char *)(v8 + 4 * v19), 1);
        _mm_prefetch((const char *)(v8 + 4 * v19 + 64), 1);
        v20 = (unsigned int *)(v89 + 4LL * (v15 & 7));
        v21 = *v20;
        *v20 = v18;
        v22 = 32 * (v21 >> 8);
        v23 = (_BYTE *)(v9 + v22);
        v24 = (*(_BYTE *)(v9 + v22) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v9 + v22) - 1) & 0x1F) == 0 )
          v24 = 31;
        v17 = (_DWORD *)((char *)v17 + 1);
        *v23 = v24;
        v23[v24] = v21;
        *(_DWORD *)(v8 + 4 * (v22 + v24)) = v15++;
      }
      while ( v85 != v15 );
      v5 = v91;
    }
    *(_DWORD *)(a1 + 44) = v83;
    v25 = (v88 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v83 + 8))) >> v87;
    v26 = 32 * (v25 >> 8);
    _mm_prefetch((const char *)(v80 + 4 * v26), 1);
    _mm_prefetch((const char *)(v80 + 4 * v26 + 64), 1);
    _mm_prefetch((const char *)(v81 + v26), 1);
    v27 = (unsigned int *)(v89 + 4LL * (v83 & 7));
    v28 = *v27;
    *v27 = v25;
  }
  v29 = v28;
  *(_DWORD *)(a1 + 104) += v28;
  v30 = 0;
  v31 = 32 * (v28 >> 8);
  v32 = _mm_cvtsi32_si128(v28);
  v33 = v80 + 4 * v31;
  v34 = (__m128i *)(v81 + v31);
  v35 = _mm_unpacklo_epi8(v32, v32);
  v36 = v34->m128i_i8[0];
  v37 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v35, v35), 0);
  v38 = v34->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v34), v37))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v37, _mm_loadu_si128(v34 + 1))) << 16),
                         v38);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v41 = (v38 + (_BYTE)_RDX) & 0x1F;
      if ( v41 )
      {
        v42 = *(_DWORD *)(v33 + 4LL * v41);
        if ( v42 < v6 )
          break;
        --v14;
        _mm_prefetch((const char *)(v5 + v42), 1);
        v95[v30++] = v42;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v14 );
  }
  v43 = (v36 + 31) & 0x1F;
  if ( ((v36 + 31) & 0x1F) == 0 )
    v43 = 31;
  v34->m128i_i8[0] = v43;
  v34->m128i_i8[v43] = v29;
  v44 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v44 + 1;
  *(_DWORD *)(v33 + 4LL * v43) = v44;
  result = 3;
  if ( v30 )
  {
    v46 = 0;
    v47 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v48 = (unsigned int)v95[v46];
        v49 = (_QWORD *)(v5 + v48);
        if ( *(_DWORD *)((char *)a2 + result - 3) == *(_DWORD *)(v5 + v48 + result - 3) )
          break;
LABEL_27:
        if ( ++v46 == v30 )
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
          goto LABEL_32;
        }
        v53 = a2 + 1;
        v82 = v49 + 1;
        if ( v47 <= (unsigned __int64)(a2 + 1) )
        {
          ++v49;
        }
        else
        {
          v54 = v49[1];
          v55 = a2[1];
          if ( v54 != v55 )
          {
LABEL_48:
            _RCX = v55 ^ v54;
            __asm { tzcnt   rcx, rcx }
            v52 = (char *)v53 + ((unsigned int)_RCX >> 3) - (char *)a2;
            goto LABEL_32;
          }
          v84 = v5;
          v59 = v82;
          while ( 1 )
          {
            ++v53;
            ++v59;
            if ( v47 <= (unsigned __int64)v53 )
              break;
            v55 = *v59;
            v54 = *v53;
            if ( *v59 != *v53 )
            {
              v5 = v84;
              goto LABEL_48;
            }
          }
          v49 = v59;
          v5 = v84;
        }
      }
      if ( (unsigned __int64)v53 < a3 - 3 && *(_DWORD *)v49 == *(_DWORD *)v53 )
      {
        v53 = (_QWORD *)((char *)v53 + 4);
        v49 = (_QWORD *)((char *)v49 + 4);
      }
      if ( (unsigned __int64)v53 < a3 - 1 && *(_WORD *)v49 == *(_WORD *)v53 )
      {
        v53 = (_QWORD *)((char *)v53 + 2);
        v49 = (_QWORD *)((char *)v49 + 2);
      }
      if ( a3 > (unsigned __int64)v53 )
        v53 = (_QWORD *)((char *)v53 + (*(_BYTE *)v49 == *(_BYTE *)v53));
      v52 = (char *)v53 - (char *)a2;
LABEL_32:
      if ( result >= v52 )
        goto LABEL_27;
      *a4 = (unsigned int)(v85 + 3 - v48);
      if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v52) )
        return v52;
      ++v46;
      result = v52;
    }
    while ( v46 != v30 );
  }
  return result;
}

