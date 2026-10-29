__int64 __fastcall sub_568CA0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // r15
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // r11
  unsigned int v32; // r10d
  __int128 v33; // xmm0
  unsigned __int64 v34; // rbx
  __int128 v35; // xmm4
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  __m128i si128; // xmm0
  unsigned __int64 v40; // r10
  bool v41; // al
  unsigned int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // r12d
  __int64 v45; // r13
  __m128i v46; // xmm0
  int v47; // r10d
  __int64 v48; // rbx
  char v50; // al
  __m128i v51; // [rsp+0h] [rbp-118h]
  __int64 v52; // [rsp+28h] [rbp-F0h]
  __m128i v53; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v54; // [rsp+40h] [rbp-D8h] BYREF
  char v55; // [rsp+57h] [rbp-C1h]
  __int64 v56; // [rsp+58h] [rbp-C0h]
  unsigned int v57; // [rsp+60h] [rbp-B8h]
  unsigned int v58; // [rsp+64h] [rbp-B4h]
  __int64 v59; // [rsp+68h] [rbp-B0h]
  __int64 v60; // [rsp+70h] [rbp-A8h]
  unsigned int v61; // [rsp+78h] [rbp-A0h]
  unsigned int v62; // [rsp+7Ch] [rbp-9Ch]
  unsigned int v63; // [rsp+80h] [rbp-98h]
  unsigned int v64; // [rsp+84h] [rbp-94h]
  __int64 v65; // [rsp+88h] [rbp-90h]
  unsigned int v66; // [rsp+90h] [rbp-88h]
  unsigned __int16 v67; // [rsp+94h] [rbp-84h]
  char v68; // [rsp+97h] [rbp-81h]
  __int64 v69; // [rsp+98h] [rbp-80h]
  __m128i v70; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-68h]
  __int128 v72; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v73; // [rsp+D0h] [rbp-48h] BYREF

  v66 = a2;
  v68 = a3;
  v52 = *((_QWORD *)&a8 + 1);
  v8 = a8;
  v70 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = *(_QWORD *)a8;
  v55 = 0;
  v69 = a1;
  v71 = _mm_loadu_si128((const __m128i *)&a8);
  if ( (v9 & 1) != 0 )
  {
LABEL_36:
    v19 = 0;
    v18 = 0;
    v10 = 0;
    v9 = 0;
    v56 = 0;
  }
  else
  {
LABEL_2:
    v10 = *(_DWORD *)(v9 + 36);
    if ( v10 )
    {
      v11 = *(unsigned __int16 *)(v9 + 66);
      v56 = 0;
      a2 = *(_QWORD *)(v52 + 8);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned int)v11 * *(unsigned __int16 *)(a2 + 36);
        v11 = *(_QWORD *)(a2 + 128);
        v56 = v11 + 2 * v12;
      }
      v71.m128i_i64[0] = v8;
      v71.m128i_i64[1] = v52;
      v10 = sub_565DC0(a1, a2, v11, a4, a5, a6, _mm_load_si128(&v70).m128i_u32[0]);
      v17 = sub_565DD0(a1, a2, v13, v14, v15, v16, (__int128)_mm_load_si128(&v70));
      v18 = v17;
      v19 = HIDWORD(v17);
    }
    else
    {
      v56 = 0;
      v19 = 0;
      v18 = 0;
      v9 = 0;
    }
  }
  v57 = 0;
  v20 = v9;
  v21 = v18;
  v22 = 0;
  v23 = v10;
  while ( 1 )
  {
    if ( v20 )
    {
      while ( 1 )
      {
        v24 = *(unsigned int *)(v20 + 36);
        if ( v22 == (_DWORD)v24 )
          goto LABEL_38;
        v25 = 0;
        if ( (v20 & 1) == 0 )
          v25 = v20 - 8 * v24;
        v26 = v25 + 8LL * v22;
        v27 = *(_QWORD *)v26;
        if ( (*(_QWORD *)v26 & 1) != 0 )
          v28 = (v27 >> 3) & 1;
        else
          LOBYTE(v28) = (*(_BYTE *)(v27 + 44) & 4) != 0;
        if ( (_BYTE)v28 )
        {
          v29 = 0;
          v53.m128i_i32[0] = 0;
          v67 = 0;
        }
        else
        {
          v29 = v56;
          if ( v56 )
          {
            v67 = *(_WORD *)(v56 + 2LL * v57);
            a4 = v67;
            v53.m128i_i32[0] = v67;
          }
          else
          {
            a4 = 0;
            v53.m128i_i32[0] = 0;
            v67 = 0;
          }
          ++v57;
        }
        if ( v22 )
        {
          if ( (v27 & 1) != 0 )
          {
            v30 = BYTE6(v27);
            v31 = (v27 >> 40) & 0xF;
            v32 = BYTE4(v27);
          }
          else
          {
            v30 = *(_DWORD *)(v27 + 4);
            LODWORD(v31) = *(_DWORD *)(v27 + 8);
            v32 = *(_DWORD *)(v27 + 12);
          }
          v23 += v30;
          v19 = v32 + (unsigned int)v19;
          if ( (_DWORD)v31 )
          {
            v21 += v31;
            v19 = v32;
          }
        }
        v33 = (__int128)_mm_unpacklo_epi64(
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v21)),
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v53.m128i_u32[0])));
        if ( (v27 & 1) != 0 )
          break;
        v47 = *(_DWORD *)(v27 + 20);
        LODWORD(v34) = *(_DWORD *)(v27 + 24);
        v23 += *(_DWORD *)(v27 + 16);
        if ( !v47 )
          goto LABEL_24;
        v21 += v47;
LABEL_25:
        v73.m128i_i64[0] = v25 + 8LL * v22++;
        v72 = v33;
        v73.m128i_i64[1] = v52;
        v35 = (__int128)_mm_load_si128(&v73);
        v54 = v33;
        v36 = sub_566CC0(v19, a2, v29, a4, a5, v25, v33, v35);
        si128 = _mm_load_si128((const __m128i *)&v54);
        if ( v66 >= v36 )
          goto LABEL_37;
        v40 = *(_QWORD *)v26;
        v41 = (*(_BYTE *)v26 & 4) != 0;
        a1 = (*(_BYTE *)v26 & 2) != 0;
        if ( v68 )
        {
          if ( (v40 & 1) == 0 )
            a1 = *(_BYTE *)(v40 + 44) & 1;
          a2 = v53.m128i_u32[0];
          if ( v53.m128i_i32[0] || (_BYTE)a1 )
          {
LABEL_50:
            v48 = v69;
            *(_QWORD *)(v69 + 16) = v26;
            *(_QWORD *)(v48 + 24) = v52;
            *(__m128i *)v48 = si128;
            return v48;
          }
        }
        else
        {
          v37 = v67;
          if ( v67 )
          {
            if ( v67 == 0xFFFF )
              goto LABEL_50;
            if ( v67 != 0xFFFE )
            {
              a4 = v52;
              a1 = *(_QWORD *)(v52 + 8);
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + 3LL * v67 + 1) )
                goto LABEL_50;
            }
          }
          else
          {
            if ( (v40 & 1) != 0 )
            {
              if ( (*(_BYTE *)v26 & 2) == 0 )
                goto LABEL_31;
            }
            else
            {
              v50 = *(_BYTE *)(v40 + 44);
              if ( (v50 & 1) == 0 )
                goto LABEL_31;
              v41 = (v50 & 2) != 0;
            }
            if ( v41 )
              goto LABEL_50;
          }
        }
LABEL_31:
        v53 = si128;
        v51 = _mm_load_si128((const __m128i *)&v72);
        if ( (unsigned int)sub_5682F0(
                             a1,
                             a2,
                             v37,
                             a4,
                             a5,
                             v38,
                             v51.m128i_i32[0],
                             v51.m128i_i32[2],
                             (__int64 *)_mm_load_si128(&v73).m128i_i64[0]) )
        {
          v42 = v23;
          v43 = v22;
          v44 = v21;
          v45 = v20;
          v8 = v26;
          v46 = _mm_load_si128(&v53);
          if ( (*(_QWORD *)v26 & 1) == 0 && v43 < *(_DWORD *)(*(_QWORD *)v26 + 36LL) )
          {
            v61 = v43;
            v64 = v34;
            v60 = v56;
            v58 = v44;
            v62 = v57;
            v63 = v42;
            v65 = v52;
            v59 = v45;
            v55 = 1;
          }
          v9 = *(_QWORD *)v26;
          v71.m128i_i64[0] = v26;
          v70 = v46;
          v71.m128i_i64[1] = v52;
          if ( (v9 & 1) == 0 )
            goto LABEL_2;
          goto LABEL_36;
        }
LABEL_37:
        v19 = (unsigned int)v34;
      }
      v34 = HIBYTE(v27);
      v23 += HIBYTE(v27);
LABEL_24:
      LODWORD(v34) = v19 + v34;
      goto LABEL_25;
    }
LABEL_38:
    if ( !v55 )
      break;
    v22 = v61;
    v55 = 0;
    v19 = v64;
    v21 = v58;
    v23 = v63;
    v20 = v59;
    v56 = v60;
    v57 = v62;
    v52 = v65;
  }
  v48 = v69;
  *(_OWORD *)v69 = 0;
  *(_OWORD *)(v48 + 16) = 0;
  return v48;
}
