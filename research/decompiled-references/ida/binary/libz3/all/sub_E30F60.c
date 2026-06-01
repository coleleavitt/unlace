__int64 __fastcall sub_E30F60(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r12d
  _QWORD *v9; // r13
  __int64 *v10; // r15
  __int64 v11; // rax
  __int16 v12; // dx
  __int64 *v13; // r13
  __int64 v14; // r15
  _DWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r12d
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rsi
  char v22; // al
  unsigned int v23; // edx
  unsigned int v24; // eax
  _QWORD *v25; // r9
  __int16 v26; // ax
  unsigned int v27; // r9d
  unsigned int v28; // eax
  unsigned int v29; // edi
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // r12d
  __int64 *v34; // rdx
  __int64 v35; // rdx
  int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // r12d
  _QWORD *v39; // r15
  unsigned int v40; // eax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r15
  _DWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  _BYTE *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  __int64 v61; // r12
  __int64 v62; // rax
  _QWORD *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r12d
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdx
  _BYTE *v71; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 v74; // rdx
  __int64 *v75; // rax
  __int64 v76; // r12
  __int64 v77; // rax
  _QWORD *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 i; // rax
  __m128i *v82; // [rsp+8h] [rbp-170h]
  __int64 v83; // [rsp+10h] [rbp-168h]
  __m128i *v84; // [rsp+18h] [rbp-160h]
  __int64 v85; // [rsp+20h] [rbp-158h]
  _QWORD *v86; // [rsp+20h] [rbp-158h]
  __int64 *ptr; // [rsp+30h] [rbp-148h]
  __int64 v88; // [rsp+38h] [rbp-140h]
  __int64 v89; // [rsp+40h] [rbp-138h] BYREF
  int v90; // [rsp+48h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = *(_DWORD *)(a2 + 12);
    if ( v7 >= v8 )
    {
      v76 = 2 * v8;
      v77 = sub_186B270(8 * v76);
      v7 = *(_DWORD *)(a2 + 8);
      v78 = *(_QWORD **)a2;
      v9 = (_QWORD *)v77;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (_QWORD *)v77 == v78 + 1 )
        {
          for ( i = 0; i != v7; ++i )
            v9[i] = v78[i];
        }
        else
        {
          v79 = 0;
          do
          {
            *(__m128i *)&v9[v79] = _mm_loadu_si128((const __m128i *)&v78[v79]);
            v79 += 2;
          }
          while ( v79 != 2LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            v9[v7 & 0xFFFFFFFE] = v78[v7 & 0xFFFFFFFE];
        }
      }
      if ( v78 != (_QWORD *)(a2 + 16) && v78 )
      {
        sub_186B220(v78);
        v7 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v76;
    }
    else
    {
      v9 = *(_QWORD **)a2;
    }
    v9[v7] = v3;
    *(_DWORD *)(a2 + 8) = v7 + 1;
  }
  v10 = &v89;
  v89 = v3;
  v82 = a1 + 2;
  ptr = &v89;
  v90 = 0;
  v84 = a1 + 13;
  v88 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(v3 + 4);
      v13 = &v10[2 * (unsigned int)v11];
      if ( v12 == 1 )
        break;
      if ( v12 == 2 )
      {
        v27 = *(_DWORD *)(v3 + 72);
        v28 = *((_DWORD *)v13 + 2);
        v29 = v27 + *(_DWORD *)(v3 + 76) + 1;
        if ( v28 >= v29 )
          goto LABEL_150;
        if ( v28 )
          goto LABEL_47;
        v21 = *(_QWORD *)(v3 + 24);
        v28 = 1;
        *((_DWORD *)v13 + 2) = 1;
        if ( *(_DWORD *)(v21 + 8) <= 1u )
        {
LABEL_50:
          v32 = (unsigned int)v88;
          v33 = HIDWORD(v88);
          if ( (unsigned int)v88 < HIDWORD(v88) )
            goto LABEL_51;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(_BYTE *)(v21 + 6);
            if ( (v30 & 1) == 0 )
              break;
            if ( v28 >= v29 )
            {
LABEL_150:
              result = (unsigned int)(v88 - 1);
              LODWORD(v88) = v88 - 1;
              if ( !a1[19].m128i_i8[1] )
                sub_E2E330(a1, "logic does not support quantifiers");
LABEL_12:
              if ( !(_DWORD)result )
                goto LABEL_24;
              goto LABEL_13;
            }
            v27 = *(_DWORD *)(v3 + 72);
LABEL_47:
            v31 = v28 - 1;
            if ( v27 < v28 )
              v31 = (unsigned int)v31 - v27;
            ++v28;
            v21 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v31 + 80);
            *((_DWORD *)v13 + 2) = v28;
            if ( *(_DWORD *)(v21 + 8) <= 1u )
              goto LABEL_50;
          }
          *(_BYTE *)(v21 + 6) = v30 | 1;
          v37 = *(_DWORD *)(a2 + 8);
          v38 = *(_DWORD *)(a2 + 12);
          if ( v37 >= v38 )
          {
            v61 = 2 * v38;
            v62 = sub_186B270(8 * v61);
            v37 = *(_DWORD *)(a2 + 8);
            v63 = *(_QWORD **)a2;
            v39 = (_QWORD *)v62;
            if ( v37 )
            {
              if ( v37 - 1 <= 2 || (_QWORD *)v62 == v63 + 1 )
              {
                for ( j = 0; j != v37; ++j )
                  v39[j] = v63[j];
              }
              else
              {
                v64 = 0;
                do
                {
                  *(__m128i *)&v39[v64] = _mm_loadu_si128((const __m128i *)&v63[v64]);
                  v64 += 2;
                }
                while ( v64 != 2LL * (v37 >> 1) );
                if ( (v37 & 1) != 0 )
                  v39[v37 & 0xFFFFFFFE] = v63[v37 & 0xFFFFFFFE];
              }
            }
            if ( v63 != (_QWORD *)(a2 + 16) && v63 )
            {
              sub_186B220(v63);
              v37 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v39;
            *(_DWORD *)(a2 + 12) = v61;
          }
          else
          {
            v39 = *(_QWORD **)a2;
          }
          v33 = HIDWORD(v88);
          v39[v37] = v21;
          v40 = v37 + 1;
          v32 = (unsigned int)v88;
          *(_DWORD *)(a2 + 8) = v40;
          if ( (unsigned int)v88 < HIDWORD(v88) )
            goto LABEL_51;
        }
        v41 = (unsigned int)(2 * v33);
        v10 = (__int64 *)sub_186B270(16 * v41);
        v42 = 0;
        v43 = ptr;
        v32 = (unsigned int)v88;
        if ( (_DWORD)v88 )
        {
          do
          {
            *(__m128i *)&v10[v42] = _mm_loadu_si128((const __m128i *)&ptr[v42]);
            v42 += 2;
          }
          while ( v42 != 2LL * (unsigned int)v88 );
        }
        if ( !ptr || ptr == &v89 )
          goto LABEL_70;
LABEL_69:
        sub_186B220(v43);
        v32 = (unsigned int)v88;
LABEL_70:
        ptr = v10;
        HIDWORD(v88) = v41;
        goto LABEL_52;
      }
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v18 = *(_DWORD *)(v3 + 24);
      v19 = *((_DWORD *)v13 + 2);
      if ( v19 >= v18 )
        goto LABEL_40;
      while ( 1 )
      {
        v20 = v19++;
        v21 = *(_QWORD *)(v3 + 8 * v20 + 32);
        *((_DWORD *)v13 + 2) = v19;
        if ( *(_DWORD *)(v21 + 8) <= 1u )
          break;
        v22 = *(_BYTE *)(v21 + 6);
        if ( (v22 & 1) == 0 )
        {
          *(_BYTE *)(v21 + 6) = v22 | 1;
          v23 = *(_DWORD *)(a2 + 8);
          v24 = *(_DWORD *)(a2 + 12);
          if ( v23 >= v24 )
          {
            v55 = 2 * v24;
            v56 = sub_186B270(8 * v55);
            v23 = *(_DWORD *)(a2 + 8);
            v57 = *(_QWORD **)a2;
            v25 = (_QWORD *)v56;
            if ( v23 )
            {
              if ( v23 - 1 <= 2 || (_QWORD *)v56 == v57 + 1 )
              {
                for ( k = 0; k != v23; ++k )
                  v25[k] = v57[k];
              }
              else
              {
                v58 = 0;
                do
                {
                  *(__m128i *)&v25[v58] = _mm_loadu_si128((const __m128i *)&v57[v58]);
                  v58 += 2;
                }
                while ( 2LL * (v23 >> 1) != v58 );
                if ( (v23 & 1) != 0 )
                  v25[v23 & 0xFFFFFFFE] = v57[v23 & 0xFFFFFFFE];
              }
            }
            if ( v57 != (_QWORD *)(a2 + 16) && v57 )
            {
              v86 = v25;
              sub_186B220(v57);
              v23 = *(_DWORD *)(a2 + 8);
              v25 = v86;
            }
            *(_QWORD *)a2 = v25;
            *(_DWORD *)(a2 + 12) = v55;
          }
          else
          {
            v25 = *(_QWORD **)a2;
          }
          v25[v23] = v21;
          *(_DWORD *)(a2 + 8) = v23 + 1;
          break;
        }
LABEL_38:
        if ( v19 >= v18 )
        {
          LODWORD(v11) = v88 - 1;
LABEL_40:
          LODWORD(v88) = v11;
          sub_E2FD00(a1, v3);
          result = (unsigned int)v88;
          v10 = ptr;
          goto LABEL_12;
        }
      }
      v26 = *(_WORD *)(v21 + 4);
      if ( v26 == 1 )
      {
        if ( !a1[19].m128i_i8[1] )
          sub_E2E330(a1, "logic does not support quantifiers");
        v45 = sub_15D1F10(v21);
        v46 = *(_DWORD **)(v45 + 24);
        if ( !v46 )
        {
LABEL_93:
          if ( !a1[18].m128i_i8[8] )
            sub_E2E330(a1, "logic does not support uninterpreted sorts");
          goto LABEL_37;
        }
        while ( 1 )
        {
          if ( *v46 == -1 )
            goto LABEL_93;
          if ( v45 == *(_QWORD *)(a1->m128i_i64[0] + 840) )
            goto LABEL_37;
          if ( *v46 == 5 )
          {
            v60 = v46[1];
            if ( v60 == 1 )
            {
              if ( !a1[18].m128i_i8[13] )
                sub_E2E330(a1, "logic does not support integers");
              goto LABEL_37;
            }
            if ( !v60 )
            {
              if ( !a1[18].m128i_i8[12] )
                sub_E2E330(a1, "logic does not support reals");
              goto LABEL_37;
            }
          }
          if ( (unsigned __int8)sub_1673B10(v82, v45) )
          {
            if ( !a1[19].m128i_i8[0] )
              sub_E2E330(a1, "logic does not support bitvectors");
            goto LABEL_37;
          }
          v47 = sub_15F0200(v84);
          v48 = *(_QWORD *)(v45 + 24);
          if ( !v48 )
            goto LABEL_37;
          if ( v47 == *(_DWORD *)v48 )
          {
            if ( !*(_DWORD *)(v48 + 4) && !a1[18].m128i_i8[9] )
              sub_E2E330(a1, "logic does not support algebraic datatypes");
            goto LABEL_37;
          }
          if ( *(_DWORD *)v48 != a1[3].m128i_i32[2] || *(_DWORD *)(v48 + 4) || a1[18].m128i_i8[10] )
            goto LABEL_37;
          if ( !a1[18].m128i_i8[11] )
            sub_E2E330(a1, "logic does not support arrays");
          v49 = *(_QWORD *)(v48 + 8);
          if ( !v49 )
            break;
          v50 = *(_DWORD *)(v49 - 4) - 1;
          if ( *(_DWORD *)(v49 - 4) != 1 )
            goto LABEL_85;
LABEL_90:
          v53 = 16LL * (unsigned int)(*(_DWORD *)(v49 - 4) - 1);
LABEL_91:
          v54 = (_BYTE *)(v53 + v49);
          if ( v54[8] != 1 )
            sub_A8ADA((__int64)"std::get: wrong index for variant");
          v45 = *(_QWORD *)v54;
          v46 = *(_DWORD **)(*(_QWORD *)v54 + 24LL);
          if ( !v46 )
            goto LABEL_93;
        }
        v50 = -1;
LABEL_85:
        v51 = 0;
        v85 = 16LL * v50;
        do
        {
          v52 = v51 + v49;
          if ( *(_BYTE *)(v52 + 8) != 1 )
            sub_A8ADA((__int64)"std::get: wrong index for variant");
          v83 = v51;
          if ( !(unsigned __int8)sub_1673B10(v82, *(_QWORD *)v52) )
            sub_E2E330(a1, "logic supports only arrays from bitvectors to bitvectors");
          v51 = v83 + 16;
          v49 = *(_QWORD *)(*(_QWORD *)(v45 + 24) + 8LL);
        }
        while ( v85 != v83 + 16 );
        v53 = 0xFFFFFFFF0LL;
        if ( !v49 )
          goto LABEL_91;
        goto LABEL_90;
      }
      if ( v26 == 2 )
      {
        v32 = (unsigned int)v88;
        if ( (unsigned int)v88 >= HIDWORD(v88) )
        {
          v41 = (unsigned int)(2 * HIDWORD(v88));
          v10 = (__int64 *)sub_186B270(16 * v41);
          v44 = 0;
          v43 = ptr;
          v32 = (unsigned int)v88;
          if ( (_DWORD)v88 )
          {
            do
            {
              *(__m128i *)&v10[v44] = _mm_loadu_si128((const __m128i *)&ptr[v44]);
              v44 += 2;
            }
            while ( v44 != 2LL * (unsigned int)v88 );
          }
          if ( ptr == &v89 || !ptr )
            goto LABEL_70;
          goto LABEL_69;
        }
LABEL_51:
        v10 = ptr;
LABEL_52:
        v34 = &v10[2 * v32];
        *v34 = v21;
        *((_DWORD *)v34 + 2) = 0;
        v35 = (unsigned int)v88;
        v36 = v88 + 1;
        goto LABEL_53;
      }
      if ( v26 )
      {
        sub_1872CE0("");
        sub_1873130(114, 73);
      }
      if ( !*(_DWORD *)(v21 + 24) )
      {
        sub_E2FD00(a1, v21);
LABEL_37:
        v19 = *((_DWORD *)v13 + 2);
        goto LABEL_38;
      }
      v74 = (unsigned int)v88;
      if ( (unsigned int)v88 >= HIDWORD(v88) )
      {
        v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v88)));
        v80 = 0;
        v74 = (unsigned int)v88;
        if ( (_DWORD)v88 )
        {
          do
          {
            *(__m128i *)&v10[v80] = _mm_loadu_si128((const __m128i *)&ptr[v80]);
            v80 += 2;
          }
          while ( v80 != 2LL * (unsigned int)v88 );
        }
        if ( ptr != &v89 && ptr )
        {
          sub_186B220(ptr);
          v74 = (unsigned int)v88;
        }
        ptr = v10;
        HIDWORD(v88) *= 2;
      }
      else
      {
        v10 = ptr;
      }
      v75 = &v10[2 * v74];
      *((_DWORD *)v75 + 2) = 0;
      v35 = (unsigned int)v88;
      *v75 = v21;
      v36 = v88 + 1;
LABEL_53:
      LODWORD(v88) = v36;
      LODWORD(v11) = v36 - 1;
      v3 = v10[2 * v35];
    }
    if ( !a1[19].m128i_i8[1] )
      sub_E2E330(a1, "logic does not support quantifiers");
    v14 = sub_15D1F10(v3);
    v15 = *(_DWORD **)(v14 + 24);
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *v15 == -1 )
          goto LABEL_144;
        if ( v14 == *(_QWORD *)(a1->m128i_i64[0] + 840) )
          goto LABEL_23;
        if ( *v15 == 5 )
        {
          v59 = v15[1];
          if ( v59 == 1 )
          {
            if ( !a1[18].m128i_i8[13] )
              sub_E2E330(a1, "logic does not support integers");
            goto LABEL_23;
          }
          if ( !v59 )
          {
            if ( !a1[18].m128i_i8[12] )
              sub_E2E330(a1, "logic does not support reals");
            goto LABEL_23;
          }
        }
        if ( (unsigned __int8)sub_1673B10(v82, v14) )
        {
          if ( !a1[19].m128i_i8[0] )
            sub_E2E330(a1, "logic does not support bitvectors");
          goto LABEL_23;
        }
        v16 = sub_15F0200(v84);
        v17 = *(_QWORD *)(v14 + 24);
        if ( !v17 )
          goto LABEL_23;
        if ( v16 == *(_DWORD *)v17 )
        {
          if ( !*(_DWORD *)(v17 + 4) && !a1[18].m128i_i8[9] )
            sub_E2E330(a1, "logic does not support algebraic datatypes");
          goto LABEL_23;
        }
        if ( a1[3].m128i_i32[2] != *(_DWORD *)v17 || *(_DWORD *)(v17 + 4) || a1[18].m128i_i8[10] )
          goto LABEL_23;
        if ( !a1[18].m128i_i8[11] )
          sub_E2E330(a1, "logic does not support arrays");
        v65 = *(_QWORD *)(v17 + 8);
        if ( !v65 )
          break;
        v66 = *(_DWORD *)(v65 - 4) - 1;
        if ( *(_DWORD *)(v65 - 4) != 1 )
          goto LABEL_136;
LABEL_141:
        v70 = 16LL * (unsigned int)(*(_DWORD *)(v65 - 4) - 1);
LABEL_142:
        v71 = (_BYTE *)(v70 + v65);
        if ( v71[8] != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v14 = *(_QWORD *)v71;
        v15 = *(_DWORD **)(*(_QWORD *)v71 + 24LL);
        if ( !v15 )
          goto LABEL_144;
      }
      v66 = -1;
LABEL_136:
      v67 = 0;
      v68 = 16LL * v66;
      do
      {
        v69 = v67 + v65;
        if ( *(_BYTE *)(v69 + 8) != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        if ( !(unsigned __int8)sub_1673B10(v82, *(_QWORD *)v69) )
          sub_E2E330(a1, "logic supports only arrays from bitvectors to bitvectors");
        v67 += 16;
        v65 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8LL);
      }
      while ( v68 != v67 );
      v70 = 0xFFFFFFFF0LL;
      if ( !v65 )
        goto LABEL_142;
      goto LABEL_141;
    }
LABEL_144:
    if ( !a1[18].m128i_i8[8] )
      sub_E2E330(a1, "logic does not support uninterpreted sorts");
LABEL_23:
    v10 = ptr;
    result = (unsigned int)(v88 - 1);
    LODWORD(v88) = result;
    if ( !(_DWORD)result )
      break;
LABEL_13:
    v11 = (unsigned int)(result - 1);
    v3 = v10[2 * v11];
  }
LABEL_24:
  if ( v10 )
  {
    result = (__int64)&v89;
    if ( v10 != &v89 )
      return sub_186B220(v10);
  }
  return result;
}

