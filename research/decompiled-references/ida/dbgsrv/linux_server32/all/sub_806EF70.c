/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806EF70
// Address: 0x0806EF70

//----- (0806EF70) --------------------------------------------------------
int __cdecl sub_806EF70(int a1)
{
  int v1; // edi
  unsigned int v3; // eax
  unsigned int v4; // edx
  __m128i v5; // xmm1
  __m128i v6; // xmm3
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // eax
  char *v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edi
  int v18; // ebx
  bool v19; // zf
  unsigned int v20; // edx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  char *v26; // edx
  bool v27; // cc
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  char *v36; // ecx
  unsigned int v37; // edx
  char *v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // eax
  const char *v42; // ecx
  int v43; // eax
  int v44; // eax
  _QWORD *v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // [esp-Ch] [ebp-74h]
  int v49; // [esp-8h] [ebp-70h]
  __int64 v50; // [esp-8h] [ebp-70h]
  int v51; // [esp-4h] [ebp-6Ch]
  __m128i v52; // [esp+0h] [ebp-68h] BYREF
  int v53; // [esp+10h] [ebp-58h]
  int v54; // [esp+14h] [ebp-54h]
  char *v55; // [esp+1Ch] [ebp-4Ch]
  char *v56[4]; // [esp+20h] [ebp-48h]
  __m128i v57; // [esp+30h] [ebp-38h]
  char *s1; // [esp+40h] [ebp-28h] BYREF
  int v59; // [esp+44h] [ebp-24h]
  int v60; // [esp+48h] [ebp-20h]
  unsigned int v61; // [esp+4Ch] [ebp-1Ch]

  v61 = __readgsdword(0x14u);
  if ( !*(_QWORD *)(a1 + 424) )
  {
    v1 = 0;
    goto LABEL_3;
  }
  v3 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1);
  v5 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
  v6 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v4)), v5);
  v52.m128i_i64[0] = v6.m128i_i64[0];
  v54 = _mm_cvtsi128_si32(v6);
  v53 = _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u));
  v57 = _mm_add_epi64(v5, _mm_loadl_epi64((const __m128i *)(a1 + 424)));
  v7 = sub_80CD730(*(_DWORD *)(a1 + 360), v57.m128i_i64[0], 0);
  if ( (v8 & v7) == 0xFFFFFFFF )
    goto LABEL_19;
  v9 = *(_DWORD *)(a1 + 448);
  v10 = *(_DWORD *)(a1 + 60);
  if ( v10 < v9 )
  {
    v36 = *(char **)(a1 + 56);
    if ( *(_DWORD *)(a1 + 64) < v9 )
    {
      v57.m128i_i32[0] = *(_DWORD *)(a1 + 448);
      v36 = (char *)sub_80CF920(a1 + 56, v36, v9, 0x40u);
      v9 = v57.m128i_i32[0];
      *(_DWORD *)(a1 + 56) = v36;
      v10 = *(_DWORD *)(a1 + 60);
    }
    v57.m128i_i32[0] = v9;
    memset(&v36[64 * v10], 0, (v9 - v10) << 6);
    *(_DWORD *)(a1 + 60) = v57.m128i_i32[0];
    v9 = *(_DWORD *)(a1 + 448);
  }
  else if ( v9 != v10 )
  {
    *(_DWORD *)(a1 + 60) = v9;
  }
  *(_BYTE *)(a1 + 176) = 1;
  v11 = nullptr;
  v57.m128i_i64[0] = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = v57.m128i_u32[0] * (unsigned __int64)*(unsigned __int16 *)(a1 + 442);
      v55 = v11;
      v14 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 424) + (int)v13),
              _mm_cvtsi32_si128((*(_QWORD *)(a1 + 424) + v13) >> 32));
      if ( __CFADD__(*(_QWORD *)(a1 + 424), v13) )
        break;
      *(__m128i *)v56 = _mm_add_epi64(v14, _mm_loadl_epi64((const __m128i *)(a1 + 364)));
      v15 = sub_80CD730(*(_DWORD *)(a1 + 360), *(__int64 *)v56, 0);
      if ( (v16 & v15) == 0xFFFFFFFF )
        break;
      if ( !*(_BYTE *)(a1 + 176) )
      {
        if ( !byte_811F8A1 )
        {
          if ( v61 == __readgsdword(0x14u) )
            sub_80CFF40(20099, v48, v49, v51);
          sub_80D7AB0();
        }
        JUMPOUT(0x804CE02);
      }
      v12 = (unsigned int)v55 < *(_DWORD *)(a1 + 60) ? *(_DWORD *)(a1 + 56) + ((_DWORD)v55 << 6) : 0;
      v56[0] = v55;
      if ( !sub_806A490((int *)a1, v12) )
        break;
      v11 = v56[0] + 1;
      ++v57.m128i_i64[0];
      if ( (unsigned int)(v56[0] + 1) >= *(_DWORD *)(a1 + 448) )
        goto LABEL_21;
    }
LABEL_19:
    v1 = 0;
    goto LABEL_20;
  }
LABEL_21:
  v17 = *(_DWORD *)(a1 + 56);
  v18 = 0;
  v57.m128i_i32[0] = v17 + (*(_DWORD *)(a1 + 60) << 6);
  if ( v17 != v57.m128i_i32[0] )
  {
    while ( 1 )
    {
      if ( !v18 || !*(_QWORD *)(v17 + 32) )
        goto LABEL_28;
      v22 = *(_DWORD *)(v17 + 4);
      if ( v22 == 6 )
        break;
      if ( v22 == 11 )
      {
        v19 = *(_BYTE *)(a1 + 176) == 0;
        *(_DWORD *)(a1 + 92) = v18;
        v23 = *(_DWORD *)(v17 + 40);
        if ( v19 )
          goto LABEL_118;
        if ( v23 >= *(_DWORD *)(a1 + 60) )
          goto LABEL_101;
        v24 = *(_DWORD *)(a1 + 56) + (v23 << 6);
        if ( !v24 )
          goto LABEL_101;
LABEL_36:
        sub_806ED60(a1, (__m128i *)(a1 + 260), (unsigned int)v24 | 0x100000000LL);
        goto LABEL_28;
      }
      if ( v22 == 2 )
      {
        v19 = *(_BYTE *)(a1 + 176) == 0;
        *(_DWORD *)(a1 + 124) = v18;
        v20 = *(_DWORD *)(v17 + 40);
        if ( v19 )
        {
          if ( v61 != __readgsdword(0x14u) )
            sub_80D7AB0();
          sub_8068EB0();
          goto LABEL_125;
        }
        if ( v20 >= *(_DWORD *)(a1 + 60) )
          goto LABEL_101;
        v21 = *(_DWORD *)(a1 + 56) + (v20 << 6);
        if ( !v21 )
          goto LABEL_101;
        sub_806ED60(a1, (__m128i *)(a1 + 228), (unsigned int)v21 | 0x100000000LL);
      }
LABEL_28:
      v17 += 64;
      ++v18;
      if ( v57.m128i_i32[0] == v17 )
        goto LABEL_37;
    }
    v37 = *(_DWORD *)(v17 + 40);
    if ( !*(_BYTE *)(a1 + 176) )
    {
      if ( v61 == __readgsdword(0x14u) )
      {
        sub_8068EB0();
LABEL_118:
        if ( v61 == __readgsdword(0x14u) )
        {
          sub_8068EB0();
          goto LABEL_120;
        }
LABEL_130:
        sub_80D7AB0();
      }
LABEL_125:
      sub_80D7AB0();
    }
    if ( v37 >= *(_DWORD *)(a1 + 60) || (v24 = *(_DWORD *)(a1 + 56) + (v37 << 6)) == 0 )
    {
LABEL_101:
      sub_8058290();
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v24 + 4) == 11 )
    {
      *(_DWORD *)(v24 + 40) = 0;
      goto LABEL_28;
    }
    goto LABEL_36;
  }
LABEL_37:
  v25 = *(_DWORD *)(a1 + 452);
  if ( v25 )
  {
    if ( !*(_BYTE *)(a1 + 176) )
    {
      if ( v61 != __readgsdword(0x14u) )
        sub_80D7AB0();
      sub_8068EB0();
      goto LABEL_130;
    }
    v17 = *(_DWORD *)(a1 + 56);
    if ( v25 < *(_DWORD *)(a1 + 60) )
    {
      v45 = (_QWORD *)(v17 + (v25 << 6));
      if ( v45 )
      {
        *(_QWORD *)(a1 + 180) = v45[3];
        *(_QWORD *)(a1 + 188) = v45[2];
        *(_QWORD *)(a1 + 196) = v45[4];
      }
    }
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 56);
  }
  s1 = nullptr;
  v26 = nullptr;
  v60 = 0;
  if ( v57.m128i_i32[0] != v17 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
                  v17 += 64;
                  ++v26;
                  if ( v57.m128i_i32[0] == v17 )
                  {
                    v38 = s1;
                    v39 = *(_DWORD *)(a1 + 96);
                    if ( *(_DWORD *)(a1 + 100) )
                    {
                      if ( !v39 )
                        *(_DWORD *)(a1 + 100) = 0;
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 100) = v39;
                    }
                    if ( v38 )
                    {
                      v59 = 0;
                      sub_80CF780(v38);
                    }
                    goto LABEL_77;
                  }
                }
                while ( !v26 || !*(_QWORD *)(v17 + 32) );
                v27 = (*(_DWORD *)(a1 + 180) != 0) + *(_DWORD *)(a1 + 184) > 0;
                v59 = 0;
                if ( v27 && *(_QWORD *)(a1 + 196) )
                {
                  v56[0] = v26;
                  HIDWORD(v50) = *(_DWORD *)v17;
                  LODWORD(v50) = a1 + 180;
                  sub_806E910(*(_DWORD *)(a1 + 172), (__m128i **)&s1, v50);
                  v26 = v56[0];
                }
                v28 = *(_DWORD *)(v17 + 4);
                if ( v28 != 18 )
                  break;
                v44 = *(_DWORD *)(v17 + 40);
                if ( v44 )
                {
                  if ( v44 == *(_DWORD *)(a1 + 124) )
                  {
                    *(_DWORD *)(a1 + 136) = v26;
                    v44 = *(_DWORD *)(v17 + 40);
                  }
                  if ( *(_DWORD *)(a1 + 92) == v44 )
                    *(_DWORD *)(a1 + 140) = v26;
                }
              }
              if ( v28 <= 0x12 )
                break;
              switch ( v28 )
              {
                case 0x6FFFFFFEu:
                  *(_DWORD *)(a1 + 152) = v26;
                  break;
                case 0x6FFFFFFFu:
                  *(_DWORD *)(a1 + 156) = v26;
                  break;
                case 0x6FFFFFFDu:
                  *(_DWORD *)(a1 + 148) = v26;
                  break;
              }
            }
            if ( v28 == 3 )
              break;
            if ( v28 == 8 )
              goto LABEL_79;
            if ( v28 == 1 )
            {
              if ( !v59 )
                goto LABEL_79;
              v55 = v26;
              v56[0] = s1;
              v29 = strcmp(s1, ".interp");
              v26 = v55;
              if ( v29 )
              {
                v30 = strcmp(v56[0], ".got");
                v26 = v55;
                if ( v30 )
                {
                  v31 = strcmp(v56[0], ".got.plt");
                  v26 = v55;
                  if ( v31 )
                  {
                    v32 = strcmp(v56[0], ".plt.got");
                    v26 = v55;
                    if ( v32 )
                    {
                      v33 = strcmp(v56[0], ".plt.sec");
                      v26 = v55;
                      if ( v33 )
                      {
                        v34 = strcmp(v56[0], ".gnu_debugdata");
                        v26 = v55;
                        if ( v34 )
                        {
                          v35 = strcmp(v56[0], ".eh_frame");
                          v26 = v55;
                          if ( v35 )
                          {
LABEL_120:
                            if ( !*(_BYTE *)(a1 + 477) )
                              goto LABEL_80;
                            v55 = v26;
                            v47 = strcmp(v56[0], ".opd");
                            v26 = v55;
                            if ( v47 )
                            {
LABEL_79:
                              if ( v59 )
                              {
LABEL_80:
                                v56[0] = v26;
                                v40 = strcmp(s1, ".plt");
                                v26 = v56[0];
                                if ( !v40 )
                                  *(char **)(a1 + 116) = v56[0];
                              }
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 132) = v55;
                            }
                          }
                          else
                          {
                            *(_DWORD *)(a1 + 168) = v55;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(a1 + 164) = v55;
                        }
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 160) = v55;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 144) = v55;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 100) = v55;
                  }
                }
                else
                {
                  *(_DWORD *)(a1 + 96) = v55;
                  *(_BYTE *)(a1 + 177) = 1;
                }
              }
              else
              {
                *(_DWORD *)(a1 + 108) = v55;
              }
            }
          }
        }
        while ( !v59 );
        v55 = v26;
        v56[0] = s1;
        v41 = strcmp(s1, ".strtab");
        v42 = v56[0];
        v56[0] = v55;
        if ( v41 )
          break;
        sub_806ED60(a1, (__m128i *)(a1 + 228), v17);
LABEL_88:
        v26 = v56[0];
      }
      v43 = strcmp(v42, ".dynstr");
      v26 = v56[0];
      if ( !v43 )
      {
        sub_806ED60(a1, (__m128i *)(a1 + 260), v17);
        goto LABEL_88;
      }
    }
  }
  v46 = *(_DWORD *)(a1 + 96);
  if ( *(_DWORD *)(a1 + 100) )
  {
    if ( !v46 )
      *(_DWORD *)(a1 + 100) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = v46;
  }
LABEL_77:
  v1 = 1;
LABEL_20:
  v57 = _mm_add_epi64(_mm_load_si128(&v52), _mm_loadl_epi64((const __m128i *)(a1 + 364)));
  sub_80CD730(*(_DWORD *)(a1 + 360), v57.m128i_i64[0], 0);
LABEL_3:
  if ( v61 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v1;
}
// 806F74A: control flows out of bounds to 804CE02
// 806EFD4: variable 'v4' is possibly undefined
// 806F02F: variable 'v8' is possibly undefined
// 806F103: variable 'v16' is possibly undefined
// 806F519: variable 'v26' is possibly undefined
// 806F76B: variable 'v48' is possibly undefined
// 806F76B: variable 'v49' is possibly undefined
// 806F76B: variable 'v51' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
