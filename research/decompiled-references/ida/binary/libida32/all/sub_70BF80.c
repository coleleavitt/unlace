__int64 __fastcall sub_70BF80(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax
  int v3; // r12d
  unsigned int v4; // r13d
  __m128i si128; // xmm0
  __int64 v6; // rsi
  bool v7; // zf
  char v8; // bp
  __m128i v9; // xmm1
  int v10; // eax
  __m128i v11; // xmm0
  unsigned int v12; // r9d
  __int64 v13; // r8
  _UNKNOWN **v14; // rsi
  __int64 v15; // rcx
  int v16; // edx
  __m128i v17; // xmm0
  int v18; // eax
  char v19; // cl
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  __m128i v23; // xmm3
  __m128i v24; // xmm5
  int v25; // esi
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm4
  __int64 v29; // r10
  char v30; // al
  char v31; // [rsp+7h] [rbp-191h] BYREF
  __int64 v32; // [rsp+8h] [rbp-190h]
  _BYTE v33[92]; // [rsp+10h] [rbp-188h] BYREF
  _BYTE s1[22]; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v35; // [rsp+86h] [rbp-112h]
  unsigned __int16 v36; // [rsp+8Eh] [rbp-10Ah]
  _BYTE v37[17]; // [rsp+90h] [rbp-108h] BYREF
  __int128 v38; // [rsp+A1h] [rbp-F7h] BYREF
  __int128 v39; // [rsp+B1h] [rbp-E7h] BYREF
  __int64 v40; // [rsp+C1h] [rbp-D7h] BYREF
  int v41; // [rsp+C9h] [rbp-CFh]
  __m128i v42; // [rsp+CDh] [rbp-CBh] BYREF
  _BYTE v43[124]; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v44; // [rsp+168h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  s1[5] = 0;
  v1 = *(_QWORD *)(a1 + 56);
  *(__m128i *)&s1[6] = _mm_load_si128((const __m128i *)&xmmword_2384270);
  strcpy(s1, "IDA1");
  v35 = 0xAABBCCDD00000000LL;
  v36 = 910;
  memset(v37, 0, sizeof(v37));
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  if ( v1 <= 0x70 )
  {
    sub_3573A0((char **)a1);
    return 0;
  }
  if ( sub_813700(a1, *(_QWORD *)(a1 + 640), s1, 109, 1) != 109 )
    return 0;
  v3 = strcmp(s1, "IDA0");
  *(_BYTE *)(a1 + 634) = v3 == 0;
  if ( HIDWORD(v35) != -1430532899 )
  {
    *(_DWORD *)(a1 + 616) = 0;
    if ( strcmp(s1, "IDA2") )
    {
      if ( !v3 )
      {
        *(_BYTE *)(a1 + 632) = 32;
        v4 = 0;
        goto LABEL_9;
      }
      v4 = 0;
      goto LABEL_30;
    }
    *(_BYTE *)(a1 + 632) = 64;
LABEL_22:
    if ( *(_DWORD *)(a1 + 716) == 1 )
      *(_DWORD *)(a1 + 716) = 0;
    goto LABEL_24;
  }
  v4 = v36;
  *(_DWORD *)(a1 + 616) = v36;
  if ( !strcmp(s1, "IDA2") )
  {
    *(_BYTE *)(a1 + 632) = 64;
    if ( v4 > 6 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( v3 )
  {
LABEL_30:
    if ( strcmp(s1, "IDA1") )
    {
      *(_BYTE *)(a1 + 632) = 0;
      if ( v4 <= 6 && *(_DWORD *)(a1 + 716) == 1 )
        *(_DWORD *)(a1 + 716) = 0;
      goto LABEL_24;
    }
    *(_BYTE *)(a1 + 632) = 32;
    if ( v4 <= 6 )
    {
      v30 = *(_BYTE *)(a1 + 850);
      if ( *(_DWORD *)(a1 + 716) == 1 )
        *(_DWORD *)(a1 + 716) = 0;
      if ( v30 )
        goto LABEL_12;
      goto LABEL_24;
    }
    goto LABEL_32;
  }
  *(_BYTE *)(a1 + 632) = 32;
  if ( v4 <= 6 )
  {
LABEL_9:
    if ( *(_DWORD *)(a1 + 716) == 1 )
      *(_DWORD *)(a1 + 716) = 0;
    if ( *(_BYTE *)(a1 + 850) )
    {
LABEL_12:
      *(_QWORD *)(a1 + 688) = *(_QWORD *)&s1[14];
      if ( v4 )
        v4 = v35;
      si128 = _mm_load_si128((const __m128i *)s1);
      *(_DWORD *)(a1 + 620) = v4;
      v6 = *(_QWORD *)(a1 + 640);
      *(__m128i *)v43 = si128;
      *(__m128i *)&v43[16] = _mm_load_si128((const __m128i *)&s1[16]);
      *(__m128i *)&v43[32] = _mm_load_si128((const __m128i *)v37);
      *(__m128i *)&v43[48] = _mm_load_si128((const __m128i *)&v37[16]);
      *(__m128i *)&v43[64] = _mm_load_si128((const __m128i *)((char *)&v38 + 15));
      *(__m128i *)&v43[80] = _mm_load_si128((const __m128i *)((char *)&v39 + 15));
      *(__m128i *)&v43[93] = _mm_loadu_si128(&v42);
      if ( sub_813700(a1, v6, &v43[109], 15, 1) == 15 )
      {
        v7 = *(_DWORD *)(a1 + 616) == 4;
        v8 = *(_DWORD *)(a1 + 616) > 4u;
        if ( *(_DWORD *)(a1 + 616) <= 4u )
        {
          v23 = _mm_loadl_epi64((const __m128i *)&v43[6]);
          v24 = _mm_loadu_si128((const __m128i *)&v43[76]);
          v25 = *(_DWORD *)&v43[52];
          v26 = _mm_loadl_epi64((const __m128i *)&v43[14]);
          *(__m128i *)v33 = _mm_load_si128((const __m128i *)v43);
          v27 = _mm_loadl_epi64((const __m128i *)&v43[64]);
          v28 = _mm_loadu_si128((const __m128i *)&v43[36]);
          *(_DWORD *)v43 = _mm_cvtsi128_si32(*(__m128i *)v33);
          v10 = *(_DWORD *)&v43[72];
          v29 = *(unsigned int *)&v43[22];
          v9 = _mm_unpacklo_epi32(v27, (__m128i)0LL);
          *(_DWORD *)&v43[22] = *(_DWORD *)&v43[32];
          *(__m128i *)&v33[76] = v24;
          v11 = v24;
          *(_QWORD *)&v43[48] = v29;
          *(_WORD *)&v43[4] = *(_WORD *)&v33[4];
          *(_DWORD *)&v43[72] = v25;
          *(_QWORD *)&v43[76] = *(unsigned int *)&v43[56];
          *(_DWORD *)&v43[84] = *(_DWORD *)&v43[60];
          *(_DWORD *)&v43[104] = v10;
          *(__m128i *)&v43[6] = _mm_unpacklo_epi32(v23, (__m128i)0LL);
          *(__m128i *)&v43[32] = _mm_unpacklo_epi32(v26, (__m128i)0LL);
          *(__m128i *)&v43[56] = v28;
          *(__m128i *)&v43[88] = v9;
          *(__m128i *)&v43[108] = v24;
          if ( !v7 )
          {
            v9 = 0;
            v10 = 0;
          }
        }
        else
        {
          v9 = _mm_loadu_si128((const __m128i *)&v43[88]);
          v10 = *(_DWORD *)&v43[104];
          v11 = _mm_loadu_si128((const __m128i *)&v43[108]);
        }
        *(_DWORD *)(a1 + 712) = v10;
        *(__m128i *)(a1 + 696) = v9;
        memset(v33, 0, 0x58u);
        *(__m128i *)(a1 + 448) = v11;
        MD5Init(v33);
        MD5Update();
        MD5Final(a1 + 432, v33);
        v12 = *(_DWORD *)(a1 + 616);
        if ( v12 <= 6 )
        {
          v13 = *(_QWORD *)&v43[6];
          v14 = &off_2B0E4A0;
          v15 = a1 + 96;
          v16 = 0;
          while ( 1 )
          {
            *(_QWORD *)v15 = *v14;
            *(_DWORD *)(v15 + 40) = *((_DWORD *)v14 + 2);
            switch ( v16 )
            {
              case 1:
                *(_QWORD *)(a1 + 160) = *(_QWORD *)&v43[14];
                *(_DWORD *)(a1 + 196) = *(_DWORD *)&v43[60];
                goto LABEL_47;
              case 2:
                *(_QWORD *)(a1 + 216) = *(_QWORD *)&v43[32];
                *(_DWORD *)(a1 + 252) = *(_DWORD *)&v43[64];
                goto LABEL_47;
              case 3:
                *(_QWORD *)(a1 + 272) = *(_QWORD *)&v43[40];
                *(_DWORD *)(a1 + 308) = *(_DWORD *)&v43[68];
                goto LABEL_47;
              case 4:
                *(_QWORD *)(a1 + 328) = *(_QWORD *)&v43[48];
                *(_DWORD *)(a1 + 364) = *(_DWORD *)&v43[72];
                goto LABEL_47;
              case 5:
                if ( v12 <= 1 )
                {
                  v20 = 0;
                  v21 = 0;
                }
                else
                {
                  v20 = *(_QWORD *)&v43[76];
                  v21 = *(_DWORD *)&v43[84];
                }
                *(_QWORD *)(a1 + 384) = v20;
                *(_DWORD *)(a1 + 420) = v21;
                v31 = 0;
                v32 = 0;
                if ( !sub_70A380(a1, (__int64)&v31, v13, v8) )
                  return 0;
                v19 = v31;
                *(_BYTE *)(a1 + 633) = v31;
                goto LABEL_33;
              default:
                v22 = *(_DWORD *)&v43[56];
                *(_QWORD *)(a1 + 104) = v13;
                *(_DWORD *)(a1 + 140) = v22;
LABEL_47:
                ++v16;
                v14 += 2;
                v15 += 56;
                break;
            }
          }
        }
        if ( !under_debugger )
          interr(3326);
        BUG();
      }
      return 0;
    }
LABEL_24:
    sub_3573A0((char **)a1);
    return 0;
  }
LABEL_32:
  *(_QWORD *)(a1 + 688) = *(_QWORD *)&s1[14];
  *(_DWORD *)(a1 + 620) = v35;
  memset(v43, 0, 0x58u);
  MD5Init(v43);
  MD5Update();
  MD5Final(a1 + 432, v43);
  v17 = _mm_loadu_si128(&v42);
  *(_BYTE *)(a1 + 633) = v37[0];
  v18 = v41;
  *(__m128i *)(a1 + 448) = v17;
  *(_DWORD *)(a1 + 712) = v18;
  *(__m128 *)(a1 + 696) = _mm_loadh_ps((const double *)&v40);
  sub_70A7E0(a1, (__int64)s1);
  v19 = *(_BYTE *)(a1 + 633);
LABEL_33:
  if ( (unsigned __int8)(v19 - 2) > 1u && v19 || (result = sub_70BE70(a1), !(_BYTE)result) )
  {
    sub_3573A0((char **)a1);
    return 0;
  }
  return result;
}

