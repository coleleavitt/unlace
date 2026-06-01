__m128 *__fastcall sub_17AC8F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned __int64 v4; // r12
  __m128 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int32 v11; // edx
  __int64 v12; // r13
  __int64 v13; // rdx
  bool v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 **v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r13
  const __m128i *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  unsigned __int64 v34; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  const __m128i *v44; // rcx
  __m128i *v45; // rax
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // esi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  const __m128i *v56; // rcx
  __m128i *v57; // rax
  unsigned int v58; // esi
  __int64 v59; // rdx
  unsigned __int64 v60; // r9
  unsigned int v61; // edi
  _QWORD *v62; // rax
  __int64 v63; // r8
  __int8 *v64; // rsi
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r8
  __int8 *v67; // rsi
  unsigned __int64 v68; // r13
  __int8 *v69; // rsi
  int v70; // edi
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  __int32 v74; // eax
  __int32 v75; // r11d
  unsigned __int64 v76; // r10
  unsigned int v77; // ecx
  int v78; // r9d
  _QWORD *v79; // r8
  __int32 v80; // eax
  __int32 v81; // r11d
  unsigned __int64 v82; // r10
  unsigned int v83; // ecx
  int v84; // r9d
  unsigned __int64 v85; // rcx
  __int8 *v87; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v88; // [rsp+10h] [rbp-68h]
  int v89; // [rsp+18h] [rbp-60h]
  unsigned int v90; // [rsp+1Ch] [rbp-5Ch]
  unsigned __int64 v91; // [rsp+20h] [rbp-58h] BYREF
  int v92; // [rsp+28h] [rbp-50h]
  int v93; // [rsp+2Ch] [rbp-4Ch]
  __int64 v94; // [rsp+30h] [rbp-48h]
  char v95; // [rsp+38h] [rbp-40h]

  v2 = a2 + 72;
  v3 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    v4 -= 64LL;
  v87 = (__int8 *)a2;
  v5 = (__m128 *)sub_15F1F10(a1);
  v5[99] = _mm_loadh_ps((const double *)&v87);
  v5[92].m128_u64[0] = sub_C1D490(a2, a2, v6, v7);
  if ( !a2 )
    v2 = 0;
  v5[100].m128_i8[0] = *(_QWORD *)(a1 + 544) == v2;
  v8 = sub_B77A30(a2);
  if ( v8 )
    v5[103].m128_u64[1] = *(_QWORD *)(v8 + 56);
  v9 = (*(_BYTE *)(*(_QWORD *)(v4 + 128) + 104LL) >> 3) & 3;
  if ( ((*(_BYTE *)(*(_QWORD *)(v4 + 128) + 104LL) >> 3) & 3) != 0 )
  {
    if ( v9 == 1 )
    {
      v5[80].m128_i32[0] = 1;
    }
    else if ( v9 == 2 )
    {
      v5[80].m128_i32[0] = 2;
    }
  }
  else
  {
    v5[80].m128_i32[0] = 0;
  }
  v10 = *(unsigned int *)(a2 + 160);
  v11 = *(_DWORD *)(a2 + 164);
  if ( (*(_DWORD *)(a2 + 40) & 7) != 6 )
  {
    v11 = 0;
    v10 = 0;
  }
  v5[101].m128_i32[1] = v11;
  v5[101].m128_i32[0] = v10;
  v12 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (unsigned int)(v13 - 25) > 1 )
  {
    v36 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), 0, v13, v10);
    v12 = v36;
    if ( *(_BYTE *)(v36 + 16) == 26 )
      goto LABEL_37;
  }
  else if ( (_BYTE)v13 == 26 )
  {
LABEL_15:
    v14 = (*(_BYTE *)(v12 + 18) & 0x20) == 0;
    goto LABEL_16;
  }
  v36 = sub_179A8B0(v12, 0, v13, v10);
LABEL_37:
  v14 = 1;
  if ( v36 )
    goto LABEL_15;
LABEL_16:
  v5[102].m128_i8[0] = v14;
  if ( (unsigned __int8)sub_B981D0((_QWORD *)a2, 0) )
    v5[100].m128_u64[1] = **(_QWORD **)(a2 + 120);
  v19 = sub_B7E900(v4, 0, v15, v16, v17, v18);
  v20 = *(_QWORD *)(v4 + 128);
  if ( v20 && (*(_BYTE *)(v20 + 10) & 0x20) != 0 )
  {
    v21 = (unsigned __int64 **)(*(_QWORD *)(v20 + 128) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v20 + 128) & 4) != 0 )
    {
      v85 = 0;
      if ( *((_DWORD *)v21 + 2) )
        v85 = **v21;
      v22 = 0;
      v23 = v85 + 16LL * ((*(_DWORD *)(v20 + 104) >> 5) & 0x7FFF);
      if ( *((_DWORD *)v21 + 2) )
        v22 = **v21;
    }
    else if ( v21 )
    {
      v22 = *(_QWORD *)(v20 + 128) & 0xFFFFFFFFFFFFFFF8LL;
      v23 = (__int64)&v21[2 * ((*(_DWORD *)(v20 + 104) >> 5) & 0x7FFF)];
    }
    else
    {
      v22 = 0;
      v23 = 16LL * ((*(_DWORD *)(v20 + 104) >> 5) & 0x7FFF);
    }
    if ( v22 != v23 )
    {
      v87 = &v5[82].m128_i8[8];
      while ( 1 )
      {
        v24 = *(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v24 )
          break;
        if ( (*(_QWORD *)v22 & 4) == 0 )
        {
LABEL_27:
          v25 = *(_QWORD *)(v19 + 48);
          v26 = 0;
          if ( (*(_BYTE *)(v19 + 68) & 0xC) == 0xC )
            v26 = *(_QWORD *)(v19 + 72);
          v27 = *(_DWORD *)(v22 + 8);
          v28 = v5[83].m128_u32[1];
          v91 = v26;
          v29 = v5[82].m128_u64[1];
          v94 = v25;
          v30 = (const __m128i *)&v91;
          v92 = v27;
          v93 = 0;
          v95 = v95 & 0x80 | 3;
          v31 = v5[83].m128_u32[0];
          v32 = v31 + 1;
          v33 = (__m128i *)(v29 + 32 * v31);
          if ( v32 > v28 )
          {
            v64 = &v5[83].m128_i8[8];
            if ( v29 > (unsigned __int64)&v91 || v33 <= (__m128i *)&v91 )
            {
              sub_2237220(v87, v64, v32, 32);
              v30 = (const __m128i *)&v91;
              v33 = (__m128i *)(v5[82].m128_u64[1] + 32LL * v5[83].m128_u32[0]);
            }
            else
            {
              sub_2237220(v87, v64, v32, 32);
              v65 = v5[82].m128_u64[1];
              v30 = (const __m128i *)((char *)&v91 + v65 - v29);
              v33 = (__m128i *)(32LL * v5[83].m128_u32[0] + v65);
            }
          }
          *v33 = _mm_loadu_si128(v30);
          v33[1] = _mm_loadu_si128(v30 + 1);
          ++v5[83].m128_i32[0];
          goto LABEL_32;
        }
        v37 = sub_C94E40((__int64 *)v22);
        v38 = *(_QWORD *)(v19 + 48);
        v39 = *(_DWORD *)(v22 + 8);
        v93 = 0;
        v94 = v38;
        v92 = v39;
        v40 = v5[83].m128_u32[1];
        v95 = (v37 != 1) | v95 & 0x80 | 8;
        v41 = v5[83].m128_u32[0];
        v42 = v41 + 1;
        if ( v41 + 1 > v40 )
        {
          v68 = v5[82].m128_u64[1];
          v69 = &v5[83].m128_i8[8];
          if ( v68 > (unsigned __int64)&v91 || (unsigned __int64)&v91 >= v68 + 32 * v41 )
          {
            sub_2237220(v87, v69, v42, 32);
            v43 = v5[82].m128_u64[1];
            v41 = v5[83].m128_u32[0];
            v44 = (const __m128i *)&v91;
          }
          else
          {
            sub_2237220(v87, v69, v42, 32);
            v43 = v5[82].m128_u64[1];
            v41 = v5[83].m128_u32[0];
            v44 = (const __m128i *)((char *)&v91 + v43 - v68);
          }
        }
        else
        {
          v43 = v5[82].m128_u64[1];
          v44 = (const __m128i *)&v91;
        }
        v45 = (__m128i *)(v43 + 32 * v41);
        *v45 = _mm_loadu_si128(v44);
        v45[1] = _mm_loadu_si128(v44 + 1);
        LODWORD(v45) = v5[83].m128_i32[0] + 1;
        v5[83].m128_i32[0] = (int)v45;
        v5[82].m128_i32[0] = (int)v45;
        do
        {
LABEL_32:
          v34 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v19 = v34;
        }
        while ( v34 && (*(_BYTE *)(v34 + 28) & 0x7Fu) - 49 > 2 );
        v22 += 16LL;
        if ( v23 == v22 )
          return v5;
      }
      if ( (*(_BYTE *)(v24 + 28) & 0x7Fu) - 26 > 0x1A )
        goto LABEL_27;
      if ( (unsigned __int8)sub_B79970(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF8LL) )
        sub_1DC20B0(*(_QWORD *)(a1 + 11280), v24, v24);
      v46 = sub_C94E40((__int64 *)v22);
      v49 = *(_QWORD *)(v19 + 48);
      v50 = *(_DWORD *)(v22 + 12);
      v91 = v24;
      v51 = *(_DWORD *)(v22 + 8);
      v94 = v49;
      v93 = v50;
      v52 = v5[83].m128_u32[1];
      v92 = v51;
      v95 = (v46 == 3) | v95 & 0x80 | 4;
      v53 = v5[83].m128_u32[0];
      v54 = v53 + 1;
      if ( v53 + 1 > v52 )
      {
        v66 = v5[82].m128_u64[1];
        v67 = &v5[83].m128_i8[8];
        if ( v66 > (unsigned __int64)&v91 || (unsigned __int64)&v91 >= v66 + 32 * v53 )
        {
          sub_2237220(v87, v67, v54, 32);
          v55 = v5[82].m128_u64[1];
          v53 = v5[83].m128_u32[0];
          v56 = (const __m128i *)&v91;
        }
        else
        {
          v88 = v5[82].m128_u64[1];
          sub_2237220(v87, v67, v54, 32);
          v47 = v88;
          v55 = v5[82].m128_u64[1];
          v53 = v5[83].m128_u32[0];
          v56 = (const __m128i *)((char *)&v91 + v55 - v88);
        }
      }
      else
      {
        v55 = v5[82].m128_u64[1];
        v56 = (const __m128i *)&v91;
      }
      v57 = (__m128i *)(v55 + 32 * v53);
      *v57 = _mm_loadu_si128(v56);
      v57[1] = _mm_loadu_si128(v56 + 1);
      v58 = v5[81].m128_u32[2];
      v59 = (unsigned int)(v5[83].m128_i32[0] + 1);
      v5[83].m128_i32[0] = v59;
      if ( !v58 )
        goto LABEL_74;
      v60 = v5[80].m128_u64[1];
      v56 = (const __m128i *)(((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
      v61 = (v58 - 1) & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
      v62 = (_QWORD *)(v60 + 16LL * v61);
      v63 = *v62;
      if ( v24 == *v62 )
      {
LABEL_53:
        *((_DWORD *)v62 + 2) = v59;
        goto LABEL_32;
      }
      if ( v63 != -4096 )
      {
        v89 = 1;
        v88 = 0;
        v90 = ((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4);
        while ( 1 )
        {
          if ( v63 == -8192 )
          {
            if ( v88 )
              v62 = (_QWORD *)v88;
            v88 = (unsigned __int64)v62;
          }
          v61 = (v58 - 1) & (v89 + v61);
          v62 = (_QWORD *)(v60 + 16LL * v61);
          v63 = *v62;
          if ( v24 == *v62 )
            goto LABEL_53;
          if ( v63 == -4096 )
            break;
          ++v89;
        }
        v56 = (const __m128i *)v90;
        if ( v88 )
          v62 = (_QWORD *)v88;
      }
      v47 = 3 * v58;
      v70 = v5[81].m128_i32[0] + 1;
      v48 = (unsigned int)(4 * v70);
      if ( (unsigned int)v48 < (unsigned int)v47 )
      {
        v71 = v58 - v5[81].m128_i32[1] - v70;
        v72 = v58 >> 3;
        if ( (unsigned int)v71 > (unsigned int)v72 )
        {
          v73 = *v62;
LABEL_71:
          v5[81].m128_i32[0] = v70;
          if ( v73 != -4096 )
            --v5[81].m128_i32[1];
          goto LABEL_73;
        }
        v89 = (int)v56;
        LODWORD(v88) = v59;
        sub_EC2030(&v5[80].m128_i64[1], v58, v59, (__int64)v56, v71, v72);
        v80 = v5[81].m128_i32[2];
        if ( !v80 )
        {
LABEL_111:
          ++v5[81].m128_i32[0];
          BUG();
        }
        v81 = v80 - 1;
        v82 = v5[80].m128_u64[1];
        LODWORD(v59) = v88;
        v83 = (v80 - 1) & v89;
        v70 = v5[81].m128_i32[0] + 1;
        v62 = (_QWORD *)(v82 + 16LL * v83);
        v73 = *v62;
        if ( v24 == *v62 )
          goto LABEL_71;
        v84 = 1;
        v79 = nullptr;
        if ( v73 != -4096 )
        {
          while ( 1 )
          {
            if ( !v79 && v73 == -8192 )
              v79 = v62;
            v83 = v81 & (v84 + v83);
            LODWORD(v88) = v84 + 1;
            v62 = (_QWORD *)(v82 + 16LL * v83);
            v73 = *v62;
            if ( v24 == *v62 )
              goto LABEL_71;
            if ( v73 == -4096 )
              goto LABEL_82;
            v84 = v88;
          }
        }
      }
      else
      {
LABEL_74:
        LODWORD(v88) = v59;
        sub_EC2030(&v5[80].m128_i64[1], 2 * v58, v59, (__int64)v56, v47, v48);
        v74 = v5[81].m128_i32[2];
        if ( !v74 )
          goto LABEL_111;
        v75 = v74 - 1;
        LODWORD(v59) = v88;
        v76 = v5[80].m128_u64[1];
        v77 = (v74 - 1) & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
        v70 = v5[81].m128_i32[0] + 1;
        v62 = (_QWORD *)(v76 + 16LL * v77);
        v73 = *v62;
        if ( v24 == *v62 )
          goto LABEL_71;
        v78 = 1;
        v79 = nullptr;
        if ( v73 != -4096 )
        {
          while ( 1 )
          {
            if ( !v79 && v73 == -8192 )
              v79 = v62;
            v77 = v75 & (v78 + v77);
            LODWORD(v88) = v78 + 1;
            v62 = (_QWORD *)(v76 + 16LL * v77);
            v73 = *v62;
            if ( v24 == *v62 )
              goto LABEL_71;
            if ( v73 == -4096 )
            {
LABEL_82:
              if ( !v79 )
                break;
              v73 = *v79;
              v62 = v79;
              goto LABEL_71;
            }
            v78 = v88;
          }
        }
      }
      v5[81].m128_i32[0] = v70;
LABEL_73:
      *v62 = v24;
      *((_DWORD *)v62 + 2) = 0;
      goto LABEL_53;
    }
  }
  return v5;
}
