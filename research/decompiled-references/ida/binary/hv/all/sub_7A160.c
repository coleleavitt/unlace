__int64 __fastcall sub_7A160(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax
  int v3; // r12d
  unsigned int v4; // r13d
  char v5; // al
  __m128i si128; // xmm0
  __int64 v7; // rsi
  bool v8; // zf
  char v9; // bp
  __m128i v10; // xmm1
  int v11; // eax
  __m128i v12; // xmm0
  unsigned int v13; // r9d
  __int64 v14; // r8
  int **v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // edx
  char v19; // al
  __m128i v20; // xmm0
  int v21; // eax
  char v22; // cl
  __int64 v23; // rdx
  int v24; // eax
  __m128i v25; // xmm3
  __m128i v26; // xmm5
  int v27; // esi
  __m128i v28; // xmm2
  __m128i v29; // xmm1
  __m128i v30; // xmm4
  __int64 v31; // r10
  int v32; // eax
  char v33; // [rsp+7h] [rbp-191h] BYREF
  __int64 v34; // [rsp+8h] [rbp-190h]
  _BYTE v35[92]; // [rsp+10h] [rbp-188h] BYREF
  _BYTE s1[22]; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v37; // [rsp+86h] [rbp-112h]
  unsigned __int16 v38; // [rsp+8Eh] [rbp-10Ah]
  _BYTE v39[17]; // [rsp+90h] [rbp-108h] BYREF
  __int128 v40; // [rsp+A1h] [rbp-F7h] BYREF
  __int128 v41; // [rsp+B1h] [rbp-E7h] BYREF
  __int64 v42; // [rsp+C1h] [rbp-D7h] BYREF
  int v43; // [rsp+C9h] [rbp-CFh]
  __m128i v44; // [rsp+CDh] [rbp-CBh] BYREF
  _BYTE v45[124]; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v46; // [rsp+168h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 56);
  v46 = __readfsqword(0x28u);
  s1[5] = 0;
  *(__m128i *)&s1[6] = _mm_load_si128((const __m128i *)&xmmword_1303B0);
  strcpy(s1, "IDA2");
  v37 = 0xAABBCCDD00000000LL;
  v38 = 910;
  memset(v39, 0, sizeof(v39));
  v42 = 0;
  v43 = 0;
  v40 = 0;
  v41 = 0;
  if ( v1 <= 0x70 )
  {
    sub_17D80((char **)a1);
    return 0;
  }
  if ( sub_91B10(a1, *(_QWORD *)(a1 + 640), s1, 109, 1) != 109 )
    return 0;
  v3 = strcmp(s1, "IDA0");
  *(_BYTE *)(a1 + 634) = v3 == 0;
  if ( HIDWORD(v37) != -1430532899 )
  {
    *(_DWORD *)(a1 + 616) = 0;
    if ( !strcmp(s1, "IDA2") )
    {
      *(_BYTE *)(a1 + 632) = 64;
    }
    else
    {
      if ( v3 && strcmp(s1, "IDA1") )
      {
        *(_BYTE *)(a1 + 632) = 0;
        goto LABEL_37;
      }
      *(_BYTE *)(a1 + 632) = 32;
    }
    v4 = 0;
    goto LABEL_12;
  }
  v4 = v38;
  *(_DWORD *)(a1 + 616) = v38;
  v18 = strcmp(s1, "IDA2");
  v19 = 64;
  if ( v18 )
  {
    if ( v3 && strcmp(s1, "IDA1") )
    {
      *(_BYTE *)(a1 + 632) = 0;
      if ( v4 > 6 )
      {
LABEL_27:
        sub_17D80((char **)a1);
        return 0;
      }
LABEL_37:
      if ( *(_DWORD *)(a1 + 716) == 1 )
        *(_DWORD *)(a1 + 716) = 0;
      goto LABEL_27;
    }
    v19 = 32;
  }
  *(_BYTE *)(a1 + 632) = v19;
  if ( v4 <= 6 )
  {
LABEL_12:
    v5 = *(_BYTE *)(a1 + 850);
    if ( *(_DWORD *)(a1 + 716) == 1 )
      *(_DWORD *)(a1 + 716) = 0;
    if ( v5 )
    {
      *(_QWORD *)(a1 + 688) = *(_QWORD *)&s1[14];
      if ( v4 )
        v4 = v37;
      si128 = _mm_load_si128((const __m128i *)s1);
      *(_DWORD *)(a1 + 620) = v4;
      v7 = *(_QWORD *)(a1 + 640);
      *(__m128i *)v45 = si128;
      *(__m128i *)&v45[16] = _mm_load_si128((const __m128i *)&s1[16]);
      *(__m128i *)&v45[32] = _mm_load_si128((const __m128i *)v39);
      *(__m128i *)&v45[48] = _mm_load_si128((const __m128i *)&v39[16]);
      *(__m128i *)&v45[64] = _mm_load_si128((const __m128i *)((char *)&v40 + 15));
      *(__m128i *)&v45[80] = _mm_load_si128((const __m128i *)((char *)&v41 + 15));
      *(__m128i *)&v45[93] = _mm_loadu_si128(&v44);
      if ( sub_91B10(a1, v7, &v45[109], 15, 1) == 15 )
      {
        v8 = *(_DWORD *)(a1 + 616) == 4;
        v9 = *(_DWORD *)(a1 + 616) > 4u;
        if ( *(_DWORD *)(a1 + 616) <= 4u )
        {
          v25 = _mm_loadl_epi64((const __m128i *)&v45[6]);
          v26 = _mm_loadu_si128((const __m128i *)&v45[76]);
          v27 = *(_DWORD *)&v45[52];
          v28 = _mm_loadl_epi64((const __m128i *)&v45[14]);
          *(__m128i *)v35 = _mm_load_si128((const __m128i *)v45);
          v29 = _mm_loadl_epi64((const __m128i *)&v45[64]);
          v30 = _mm_loadu_si128((const __m128i *)&v45[36]);
          *(_DWORD *)v45 = _mm_cvtsi128_si32(*(__m128i *)v35);
          v11 = *(_DWORD *)&v45[72];
          v31 = *(unsigned int *)&v45[22];
          v10 = _mm_unpacklo_epi32(v29, (__m128i)0LL);
          *(_DWORD *)&v45[22] = *(_DWORD *)&v45[32];
          *(__m128i *)&v35[76] = v26;
          v12 = v26;
          *(_QWORD *)&v45[48] = v31;
          *(_WORD *)&v45[4] = *(_WORD *)&v35[4];
          *(_DWORD *)&v45[72] = v27;
          *(_QWORD *)&v45[76] = *(unsigned int *)&v45[56];
          *(_DWORD *)&v45[84] = *(_DWORD *)&v45[60];
          *(_DWORD *)&v45[104] = v11;
          *(__m128i *)&v45[6] = _mm_unpacklo_epi32(v25, (__m128i)0LL);
          *(__m128i *)&v45[32] = _mm_unpacklo_epi32(v28, (__m128i)0LL);
          *(__m128i *)&v45[56] = v30;
          *(__m128i *)&v45[88] = v10;
          *(__m128i *)&v45[108] = v26;
          if ( !v8 )
          {
            v10 = 0;
            v11 = 0;
          }
        }
        else
        {
          v10 = _mm_loadu_si128((const __m128i *)&v45[88]);
          v11 = *(_DWORD *)&v45[104];
          v12 = _mm_loadu_si128((const __m128i *)&v45[108]);
        }
        *(_DWORD *)(a1 + 712) = v11;
        *(__m128i *)(a1 + 696) = v10;
        memset(v35, 0, 0x58u);
        *(__m128i *)(a1 + 448) = v12;
        sub_92BC0(v35, *(double *)v12.m128i_i64);
        sub_932D0(v35, v45, 124);
        sub_93510(a1 + 432, v35);
        v13 = *(_DWORD *)(a1 + 616);
        if ( v13 <= 6 )
        {
          v14 = *(_QWORD *)&v45[6];
          v15 = &off_163BA0;
          v16 = a1 + 96;
          v17 = 0;
          while ( 1 )
          {
            *(_QWORD *)v16 = *v15;
            *(_DWORD *)(v16 + 40) = *((_DWORD *)v15 + 2);
            switch ( v17 )
            {
              case 1:
                *(_QWORD *)(a1 + 160) = *(_QWORD *)&v45[14];
                *(_DWORD *)(a1 + 196) = *(_DWORD *)&v45[60];
                goto LABEL_45;
              case 2:
                *(_QWORD *)(a1 + 216) = *(_QWORD *)&v45[32];
                *(_DWORD *)(a1 + 252) = *(_DWORD *)&v45[64];
                goto LABEL_45;
              case 3:
                *(_QWORD *)(a1 + 272) = *(_QWORD *)&v45[40];
                *(_DWORD *)(a1 + 308) = *(_DWORD *)&v45[68];
                goto LABEL_45;
              case 4:
                *(_QWORD *)(a1 + 328) = *(_QWORD *)&v45[48];
                *(_DWORD *)(a1 + 364) = *(_DWORD *)&v45[72];
                goto LABEL_45;
              case 5:
                if ( v13 <= 1 )
                {
                  v23 = 0;
                  v24 = 0;
                }
                else
                {
                  v23 = *(_QWORD *)&v45[76];
                  v24 = *(_DWORD *)&v45[84];
                }
                *(_QWORD *)(a1 + 384) = v23;
                *(_DWORD *)(a1 + 420) = v24;
                v33 = 0;
                v34 = 0;
                if ( !sub_78930(a1, (__int64)&v33, v14, v9) )
                  return 0;
                v22 = v33;
                *(_BYTE *)(a1 + 633) = v33;
                goto LABEL_31;
              default:
                v32 = *(_DWORD *)&v45[56];
                *(_QWORD *)(a1 + 104) = v14;
                *(_DWORD *)(a1 + 140) = v32;
LABEL_45:
                ++v17;
                v15 += 2;
                v16 += 56;
                break;
            }
          }
        }
        if ( !byte_1671A1 )
          sub_96F80(3326);
        BUG();
      }
      return 0;
    }
    goto LABEL_27;
  }
  *(_QWORD *)(a1 + 688) = *(_QWORD *)&s1[14];
  *(_DWORD *)(a1 + 620) = v37;
  memset(v45, 0, 0x58u);
  sub_92BC0(v45, 0.0);
  sub_932D0(v45, s1, 109);
  sub_93510(a1 + 432, v45);
  v20 = _mm_loadu_si128(&v44);
  *(_BYTE *)(a1 + 633) = v39[0];
  v21 = v43;
  *(__m128i *)(a1 + 448) = v20;
  *(_DWORD *)(a1 + 712) = v21;
  *(__m128 *)(a1 + 696) = _mm_loadh_ps((const double *)&v42);
  sub_78CE0(a1, (__int64)s1);
  v22 = *(_BYTE *)(a1 + 633);
LABEL_31:
  if ( (unsigned __int8)(v22 - 2) > 1u && v22 || (result = sub_7A050(a1), !(_BYTE)result) )
  {
    sub_17D80((char **)a1);
    return 0;
  }
  return result;
}

