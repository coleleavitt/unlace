__int64 __fastcall sub_907EA0(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int64 v16; // rax
  __int16 v17; // cx
  _WORD *v18; // rax
  __int64 i; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // edi
  __int64 v23; // r9
  __int64 v24; // rdi
  __int16 v25; // r11
  __int64 v26; // rdi
  unsigned __int16 *v27; // r13
  __int64 v28; // rcx
  int v29; // edx
  signed int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rsi
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rsi
  int v37; // esi
  __int64 v38; // r15
  int v39; // edi
  unsigned int v40; // r12d
  unsigned int *v41; // r11
  unsigned int *v42; // r9
  unsigned int v43; // r10d
  unsigned int *v44; // r8
  unsigned int *v45; // r13
  unsigned int v46; // eax
  __int32 v47; // ecx
  signed int v48; // eax
  unsigned int v49; // r9d
  signed int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // rsi
  signed int v53; // edx
  __int16 v54; // ax
  unsigned __int8 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 *v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int16 *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rcx
  signed int j; // eax
  __int64 v67; // rcx
  __int64 v68; // rdi
  unsigned int v69; // esi
  int v70; // r8d
  int v71; // eax
  unsigned int v72; // r9d
  __int64 v73; // rdi
  int k; // ecx
  unsigned int v75; // esi
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // esi
  unsigned __int32 v79; // edi
  __int32 *v80; // r10
  unsigned int v81; // r14d
  unsigned __int32 v82; // r11d
  __int64 m; // rcx
  __int64 v84; // r9
  __int32 *v85; // r9
  __int32 v86; // ecx
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v91; // [rsp+10h] [rbp-C8h]
  unsigned int v92; // [rsp+20h] [rbp-B8h]
  __int64 v93; // [rsp+28h] [rbp-B0h]
  unsigned __int16 v94; // [rsp+38h] [rbp-A0h]
  __int128 v95; // [rsp+40h] [rbp-98h]
  __int64 v96; // [rsp+50h] [rbp-88h]
  __int16 v97; // [rsp+58h] [rbp-80h]
  __m128i si128; // [rsp+60h] [rbp-78h] BYREF
  __m128i v99; // [rsp+70h] [rbp-68h]
  __m128i v100; // [rsp+80h] [rbp-58h]
  unsigned __int64 v101; // [rsp+90h] [rbp-48h]
  unsigned __int64 v102; // [rsp+98h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  result = -66;
  v8 = -(char)a5 & 3;
  if ( v8 <= a6 && a6 - v8 > 0x12FF )
  {
    v9 = a4;
    if ( !a4 )
      v9 = 11;
    result = -46;
    if ( a3 <= 0xFF )
    {
      v10 = a5 + v8;
      v11 = a5 + v8 + 8;
      v12 = a5 + v8;
      v13 = a5 + v8 + 4104;
      *(_QWORD *)v10 = 0;
      v14 = v10 + 4096;
      *(_QWORD *)(v10 + 4088) = 0;
      memset((void *)(v11 & 0xFFFFFFFFFFFFFFF8LL), 0, 8LL * ((v12 - ((unsigned int)v11 & 0xFFFFFFF8) + 4096) >> 3));
      *(_QWORD *)(v10 + 4096) = 0;
      *(_QWORD *)(v10 + 4856) = 0;
      memset(
        (void *)(v13 & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v10 + 4096 - ((unsigned int)v13 & 0xFFFFFFF8) + 768) >> 3));
      v15 = a2;
      v91 = a3;
      do
      {
        v16 = *v15;
        if ( (unsigned int)v16 > 0xA4 )
        {
          _BitScanReverse((unsigned int *)&v16, v16);
          v16 = 189 - ((unsigned int)v16 ^ 0x1F);
        }
        ++v15;
        ++*(_WORD *)(v14 + 4 * v16);
      }
      while ( &a2[a3 + 1] != v15 );
      v17 = *(_WORD *)(v10 + 4860);
      v18 = (_WORD *)(v10 + 4856);
      do
      {
        v17 += *v18;
        v18 -= 2;
        v18[2] = v17;
        v18[3] = v17;
      }
      while ( (_WORD *)(v10 + 4092) != v18 );
      for ( i = 0; ; ++i )
      {
        v20 = a2[i];
        v21 = v20;
        if ( v20 > 0xA4 )
        {
          _BitScanReverse(&v22, v20);
          v21 = 189 - (v22 ^ 0x1F);
        }
        v23 = v14 + 4LL * (v21 + 1);
        v24 = *(unsigned __int16 *)(v23 + 2);
        v25 = v24 + 1;
        v26 = v11 + 8 * v24;
        *(_WORD *)(v23 + 2) = v25;
        *(_DWORD *)v26 = v20;
        *(_BYTE *)(v26 + 6) = i;
        if ( v91 == i )
          break;
      }
      v27 = (unsigned __int16 *)(v10 + 4756);
      do
      {
        v28 = *v27;
        v29 = v27[1] - (_DWORD)v28;
        if ( v29 > 1 )
          sub_904E50(v11 + 8 * v28, 0, v29 - 1);
        v27 += 2;
      }
      while ( (unsigned __int16 *)(v10 + 4860) != v27 );
      v30 = a3;
      v31 = v11 + 8 * v91;
      v32 = *(_DWORD *)v31;
      if ( *(_DWORD *)v31 )
      {
        v92 = a3;
      }
      else
      {
        do
        {
          v31 = v11 + 8LL * --v30;
          v32 = *(_DWORD *)v31;
        }
        while ( !*(_DWORD *)v31 );
        v92 = v30;
      }
      v33 = v11 + 8LL * (v30 - 1);
      *(_DWORD *)(v10 + 2056) = *(_DWORD *)v33 + v32;
      *(_WORD *)(v33 + 4) = 256;
      *(_WORD *)(v31 + 4) = 256;
      v34 = v30 - 2;
      if ( v30 + 255 > 256 )
      {
        v35 = 257;
        do
        {
          v36 = v35++;
          *(_DWORD *)(v11 + 8 * v36) = 0x40000000;
        }
        while ( v30 + 255 >= v35 );
        v93 = v10;
        v37 = 256;
        *(_DWORD *)v10 = 0x80000000;
        v38 = v10 + 2064;
        v39 = 257;
        while ( 1 )
        {
          v44 = (unsigned int *)(v11 + 8LL * v34);
          v45 = (unsigned int *)(v11 + 8LL * v37);
          v46 = *v44;
          if ( *v44 < *v45 )
          {
            --v34;
            v40 = *v45;
            v41 = (unsigned int *)(v11 + 8LL * v37);
            v42 = (unsigned int *)(v11 + 8LL * v34);
            v43 = *v42;
            if ( *v42 >= *v45 )
              goto LABEL_33;
          }
          else
          {
            ++v37;
            v43 = *v44;
            v46 = *v45;
            v41 = (unsigned int *)(v11 + 8LL * v37);
            v42 = (unsigned int *)(v11 + 8LL * v34);
            v44 = v45;
            v40 = *v41;
            if ( v43 >= *v41 )
            {
LABEL_33:
              ++v37;
              v43 = v40;
              v42 = v41;
              goto LABEL_30;
            }
          }
          --v34;
LABEL_30:
          v38 += 8;
          *(_DWORD *)(v38 - 8) = v43 + v46;
          *((_WORD *)v42 + 2) = v39;
          *((_WORD *)v44 + 2) = v39++;
          if ( v39 == v30 + 256 )
          {
            v10 = v93;
            goto LABEL_52;
          }
        }
      }
      *(_DWORD *)v10 = 0x80000000;
LABEL_52:
      *(_BYTE *)(v11 + 8LL * (v30 + 255) + 7) = 0;
      if ( v30 + 254 > 255 )
      {
        v62 = 8LL * (v30 + 254);
        v63 = (unsigned __int16 *)(v10 + v62 + 12);
        v64 = v10 + v62 + 4 - 8LL * (unsigned int)(v30 - 2);
        do
        {
          v65 = *v63;
          v63 -= 4;
          *((_BYTE *)v63 + 11) = *(_BYTE *)(v11 + 8 * v65 + 7) + 1;
        }
        while ( (unsigned __int16 *)v64 != v63 );
      }
      for ( j = 0;
            j <= v30;
            *(_BYTE *)(v11 + 8 * v67 + 7) = *(_BYTE *)(v11 + 8LL * *(unsigned __int16 *)(v11 + 8 * v67 + 4) + 7) + 1 )
      {
        v67 = j++;
      }
      v49 = *(unsigned __int8 *)(v11 + 8LL * v92 + 7);
      if ( v9 < v49 )
      {
        v68 = v11 + 8LL * v30;
        v69 = *(unsigned __int8 *)(v68 + 7);
        if ( v9 >= v69 )
        {
          v70 = v30;
          v48 = 0;
        }
        else
        {
          v70 = v30;
          v71 = 0;
          do
          {
            --v70;
            *(_BYTE *)(v68 + 7) = v9;
            v68 = v11 + 8LL * v70;
            v71 = (1 << (v49 - v9)) + v71 - (1 << (v49 - v69));
            v69 = *(unsigned __int8 *)(v68 + 7);
          }
          while ( v9 < v69 );
          v48 = v71 >> (v49 - v9);
        }
        if ( v9 == v69 )
        {
          do
            --v70;
          while ( v9 == *(unsigned __int8 *)(v11 + 8LL * v70 + 7) );
        }
        v101 = 0xF0F0F0F0F0F0F0F0LL;
        si128 = _mm_load_si128(xmmword_23A8BC0);
        v99 = si128;
        v100 = si128;
        if ( v70 >= 0 )
        {
          v72 = v9;
          v73 = v10 + 8LL * v70;
          for ( k = v70; k != -1; --k )
          {
            v75 = *(unsigned __int8 *)(v73 + 15);
            if ( v75 < v72 )
            {
              si128.m128i_i32[v9 - v75] = k;
              v72 = v75;
            }
            v73 -= 8;
          }
        }
        while ( v48 > 0 )
        {
          _BitScanReverse(&v76, v48);
          v77 = v76 ^ 0x1F;
          v78 = 32 - v77;
          if ( v77 == 31 )
          {
LABEL_76:
            v79 = si128.m128i_u32[1];
            if ( si128.m128i_i32[1] == -252645136 )
            {
              v85 = &si128.m128i_i32[2];
              for ( m = 1; ; m = v78 )
              {
                v78 = m + 1;
                v79 = *v85;
                if ( (_DWORD)m == 12 )
                  break;
                ++v85;
                if ( v79 != -252645136 )
                  goto LABEL_82;
              }
              m = 12;
LABEL_82:
              v84 = v79;
              goto LABEL_83;
            }
            v78 = 1;
            v81 = 0;
            v84 = si128.m128i_u32[1];
          }
          else
          {
            v79 = si128.m128i_u32[v78];
            v80 = &si128.m128i_i32[31 - v77];
            while ( 1 )
            {
              v81 = v78 - 1;
              v82 = *v80;
              m = v78 - 1;
              if ( v79 != -252645136 )
              {
                v84 = v79;
                if ( v82 == -252645136
                  || *(_DWORD *)(v11 + 8LL * v79) <= (unsigned int)(2 * *(_DWORD *)(v11 + 8LL * v82)) )
                {
                  break;
                }
              }
              --v80;
              --v78;
              v79 = v82;
              if ( v81 == 1 )
                goto LABEL_76;
            }
            if ( v78 > 0xC )
              goto LABEL_83;
          }
          m = v81;
LABEL_83:
          ++*(_BYTE *)(v11 + 8 * v84 + 7);
          v48 -= 1 << m;
          if ( si128.m128i_i32[m] == -252645136 )
            si128.m128i_i32[m] = v79;
          v86 = si128.m128i_i32[v78];
          if ( v86 )
          {
            v87 = (unsigned int)(v86 - 1);
            si128.m128i_i32[v78] = v87;
            if ( *(unsigned __int8 *)(v11 + 8 * v87 + 7) != v9 - v78 )
              LODWORD(v87) = -252645136;
            si128.m128i_i32[v78] = v87;
          }
          else
          {
            si128.m128i_i32[v78] = -252645136;
          }
        }
        while ( v48 )
        {
          v47 = si128.m128i_i32[1];
          ++v48;
          if ( si128.m128i_i32[1] == -252645136 )
          {
            if ( v9 == *(unsigned __int8 *)(v11 + 8LL * v70 + 7) )
            {
              while ( 1 )
              {
                v88 = v70 - 1;
                if ( v9 != *(unsigned __int8 *)(v11 + 8LL * (v70 - 1) + 7) )
                  break;
                --v70;
              }
            }
            else
            {
              v88 = v70++;
            }
            --*(_BYTE *)(v11 + 8LL * v70 + 7);
            si128.m128i_i32[1] = v70;
            v70 = v88;
          }
          else
          {
            --*(_BYTE *)(v11 + 8LL * (unsigned int)(si128.m128i_i32[1] + 1) + 7);
            si128.m128i_i32[1] = v47 + 1;
          }
        }
        v49 = v9;
      }
      result = -1;
      if ( v49 <= 0xC )
      {
        v95 = 0;
        v97 = 0;
        v50 = 0;
        v96 = 0;
        si128 = 0;
        v99.m128i_i64[0] = 0;
        for ( v99.m128i_i16[4] = 0; v50 <= v30; ++*((_WORD *)&v95 + v52) )
        {
          v51 = v50++;
          v52 = *(unsigned __int8 *)(v11 + 8 * v51 + 7);
        }
        v53 = v49;
        v54 = 0;
        if ( v49 )
        {
          do
          {
            si128.m128i_i16[v53] = v54;
            v54 = (unsigned __int16)(*((_WORD *)&v95 + v53--) + v54) >> 1;
          }
          while ( v53 );
        }
        v55 = (unsigned __int8 *)(v10 + 14);
        do
        {
          v56 = *v55;
          v57 = v55[1];
          v55 += 8;
          a1[v56 + 1] = v57;
        }
        while ( (unsigned __int8 *)(v10 + 8 * v91 + 22) != v55 );
        v58 = a1 + 1;
        do
        {
          v59 = *v58;
          v60 = (unsigned __int8)*v58;
          v61 = si128.m128i_u16[v60];
          si128.m128i_i16[v60] = v61 + 1;
          if ( v60 )
            *v58 = v59 | (v61 << (64 - (unsigned __int8)v60));
          ++v58;
        }
        while ( &a1[v91 + 2] != v58 );
        LOBYTE(v94) = v49;
        HIBYTE(v94) = a3;
        *a1 = v94;
        return v49;
      }
    }
  }
  return result;
}
