unsigned __int64 __fastcall sub_92F1A0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r10
  unsigned int v6; // r12d
  int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned int v10; // eax
  bool v11; // cf
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // rbp
  char v17; // cl
  _DWORD *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int *v21; // rdx
  unsigned int v22; // r11d
  __int64 v23; // rdx
  _BYTE *v24; // r10
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  __int8 v30; // r14
  __int64 v31; // r9
  __int64 v32; // r11
  __m128i v33; // xmm0
  __int64 v34; // rbp
  __m128i *v35; // r11
  __m128i v36; // xmm0
  __int8 v37; // r13
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
  __int64 v54; // r11
  __int64 v55; // rcx
  unsigned int v58; // eax
  _QWORD *v59; // r10
  unsigned int v60; // ebp
  unsigned int v61; // eax
  __int64 v62; // rdx
  unsigned int *v63; // rdx
  unsigned int v64; // r11d
  __int64 v65; // rdx
  _BYTE *v66; // r8
  unsigned int v67; // eax
  _DWORD *v68; // r11
  unsigned int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // edx
  int v72; // r12d
  char v73; // al
  unsigned int v74; // ebx
  char v75; // cl
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // r10
  __int64 v79; // [rsp+0h] [rbp-198h]
  __int64 v80; // [rsp+8h] [rbp-190h]
  _QWORD *v81; // [rsp+8h] [rbp-190h]
  unsigned int v82; // [rsp+10h] [rbp-188h]
  __int64 v83; // [rsp+10h] [rbp-188h]
  int v84; // [rsp+1Ch] [rbp-17Ch]
  char v86; // [rsp+28h] [rbp-170h]
  int v87; // [rsp+2Ch] [rbp-16Ch]
  __int64 v88; // [rsp+30h] [rbp-168h]
  __int64 v89; // [rsp+38h] [rbp-160h]
  __int64 v90; // [rsp+40h] [rbp-158h]
  char v91; // [rsp+48h] [rbp-150h]
  unsigned int v92; // [rsp+4Ch] [rbp-14Ch]
  _DWORD v93[66]; // [rsp+50h] [rbp-148h]
  unsigned __int64 v94; // [rsp+158h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v12 = *(_DWORD *)(a1 + 256);
  v9 = *(_QWORD *)(a1 + 56);
  v94 = __readfsqword(0x28u);
  v10 = (_DWORD)a2 - v5 - (1 << v12);
  v79 = v8;
  v11 = 1 << v12 < (_DWORD)a2 - (_DWORD)v5 - v6;
  LOBYTE(v12) = 4;
  v80 = v9;
  if ( !v11 )
    v10 = v6;
  v82 = (_DWORD)a2 - v5;
  v13 = *(_QWORD *)(a1 + 96);
  v84 = (_DWORD)a2 - v5;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v10;
  if ( *(_DWORD *)(a1 + 268) <= 4u )
    v12 = *(_DWORD *)(a1 + 268);
  v87 = *(_QWORD *)(a1 + 96);
  v14 = 1 << v12;
  v86 = 24 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v58 = v13 ^ (-1640531535 * *(_DWORD *)a2);
    *(_DWORD *)(a1 + 44) = v82;
    v29 = v58 >> v86;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 44);
    v16 = v5;
    v88 = a1 + 64;
    if ( (_DWORD)a2 - (_DWORD)v5 - v15 > 0x180 )
    {
      v60 = v15 + 96;
      if ( v15 >= v15 + 96 )
      {
        v16 = v5;
      }
      else
      {
        while ( 1 )
        {
          v61 = ((unsigned int)v13 ^ (-1640531535 * *(_DWORD *)(v5 + v15 + 8))) >> v86;
          v62 = 16 * (v61 >> 8);
          _mm_prefetch((const char *)(v8 + 4 * v62), 1);
          _mm_prefetch((const char *)(v9 + v62), 1);
          v63 = (unsigned int *)(a1 + 64 + 4LL * (v15 & 7));
          v64 = *v63;
          *v63 = v61;
          v65 = 16 * (v64 >> 8);
          v66 = (_BYTE *)(v9 + v65);
          v67 = (*(_BYTE *)(v9 + v65) - 1) & 0xF;
          if ( ((*(_BYTE *)(v9 + v65) - 1) & 0xF) == 0 )
            v67 = 15;
          *v66 = v67;
          v66[v67] = v64;
          *(_DWORD *)(v8 + 4 * (v65 + v67)) = v15++;
          if ( v60 == v15 )
            break;
          v13 = *(_QWORD *)(a1 + 96);
        }
        v14 = 1 << v12;
        v8 = *(_QWORD *)(a1 + 112);
        v9 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v16 = *(_QWORD *)(a1 + 8);
      }
      v68 = (_DWORD *)(v5 + v82 - 32);
      v15 = v82 - 32;
      if ( (_DWORD *)((char *)a2 + 1) >= v68 )
      {
        v69 = (_DWORD)a2 + 1 - (_DWORD)v68 + 1;
        if ( v69 > 8 )
          v69 = 8;
        v70 = v69 + v15;
        if ( v15 < v69 + v15 )
        {
          v90 = v5;
          v71 = v82 - 32;
          v92 = v6;
          v72 = *(_DWORD *)(a1 + 96);
          v73 = 24 - v7;
          v91 = v7;
          v74 = v70;
          v75 = v73;
          do
          {
            v76 = -1640531535 * *v68;
            v68 = (_DWORD *)((char *)v68 + 1);
            v77 = (v72 ^ (unsigned int)v76) >> v75;
            v78 = 16 * (v77 >> 8);
            _mm_prefetch((const char *)(v8 + 4 * v78), 1);
            _mm_prefetch((const char *)(v9 + v78), 1);
            LOBYTE(v78) = v71++;
            *(_DWORD *)(a1 + 4 * (v78 & 7) + 64) = v77;
          }
          while ( v74 != v71 );
          LOBYTE(v7) = v91;
          v5 = v90;
          v6 = v92;
        }
      }
    }
    if ( v82 > v15 )
    {
      v89 = v5;
      v17 = 24 - v7;
      v18 = (_DWORD *)(v16 + v15 + 8);
      do
      {
        v19 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v18)) >> v17;
        v20 = 16 * (v19 >> 8);
        _mm_prefetch((const char *)(v8 + 4 * v20), 1);
        _mm_prefetch((const char *)(v9 + v20), 1);
        v21 = (unsigned int *)(v88 + 4LL * (v15 & 7));
        v22 = *v21;
        *v21 = v19;
        v23 = 16 * (v22 >> 8);
        v24 = (_BYTE *)(v9 + v23);
        v25 = (*(_BYTE *)(v9 + v23) - 1) & 0xF;
        if ( ((*(_BYTE *)(v9 + v23) - 1) & 0xF) == 0 )
          v25 = 15;
        v18 = (_DWORD *)((char *)v18 + 1);
        *v24 = v25;
        v24[v25] = v22;
        *(_DWORD *)(v8 + 4 * (v23 + v25)) = v15++;
      }
      while ( v84 != v15 );
      v5 = v89;
    }
    *(_DWORD *)(a1 + 44) = v82;
    v26 = (v87 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v82 + 8))) >> v86;
    v27 = 16 * (v26 >> 8);
    _mm_prefetch((const char *)(v79 + 4 * v27), 1);
    _mm_prefetch((const char *)(v80 + v27), 1);
    v28 = (unsigned int *)(v88 + 4LL * (v82 & 7));
    v29 = *v28;
    *v28 = v26;
  }
  v30 = v29;
  *(_DWORD *)(a1 + 104) += v29;
  v31 = 0;
  v32 = 16 * (v29 >> 8);
  v33 = _mm_cvtsi32_si128(v29);
  v34 = v79 + 4 * v32;
  v35 = (__m128i *)(v80 + v32);
  v36 = _mm_unpacklo_epi8(v33, v33);
  v37 = v35->m128i_i8[0];
  v38 = v35->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v36, v36), 0), _mm_loadu_si128(v35))),
                             v38);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v41 = (v38 + (_BYTE)_RDX) & 0xF;
      if ( v41 )
      {
        v42 = *(_DWORD *)(v34 + 4LL * v41);
        if ( v42 < v6 )
          break;
        --v14;
        _mm_prefetch((const char *)(v5 + v42), 1);
        v93[v31++] = v42;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v14 );
  }
  v43 = (v37 + 15) & 0xF;
  if ( ((v37 + 15) & 0xF) == 0 )
    v43 = 15;
  v35->m128i_i8[0] = v43;
  v35->m128i_i8[v43] = v30;
  v44 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v44 + 1;
  *(_DWORD *)(v34 + 4LL * v43) = v44;
  result = 3;
  if ( v31 )
  {
    v46 = 0;
    v47 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v48 = (unsigned int)v93[v46];
        v49 = (_QWORD *)(v5 + v48);
        if ( *(_DWORD *)((char *)a2 + result - 3) == *(_DWORD *)(v5 + v48 + result - 3) )
          break;
LABEL_27:
        if ( ++v46 == v31 )
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
        v81 = v49 + 1;
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
LABEL_48:
            _RCX = v54 ^ v55;
            __asm { tzcnt   rcx, rcx }
            v52 = (char *)v53 + ((unsigned int)_RCX >> 3) - (char *)a2;
            goto LABEL_32;
          }
          v83 = v5;
          v59 = v81;
          while ( 1 )
          {
            ++v53;
            ++v59;
            if ( v47 <= (unsigned __int64)v53 )
              break;
            v54 = *v59;
            v55 = *v53;
            if ( *v59 != *v53 )
            {
              v5 = v83;
              goto LABEL_48;
            }
          }
          v49 = v59;
          v5 = v83;
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
      *a4 = (unsigned int)(v84 + 3 - v48);
      if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v52) )
        return v52;
      ++v46;
      result = v52;
    }
    while ( v46 != v31 );
  }
  return result;
}
