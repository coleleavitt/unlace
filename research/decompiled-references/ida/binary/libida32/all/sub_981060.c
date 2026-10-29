unsigned __int64 *__fastcall sub_981060(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v7; // r12
  __int64 *v8; // r12
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rax
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  char v19; // r15
  __int64 v20; // r15
  int v21; // eax
  unsigned __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int32 v37; // eax
  __int64 v38; // rdi
  unsigned int v39; // edx
  __int64 *v40; // rax
  __int64 v41; // rax
  __m128 *v42; // rdx
  __int64 v43; // r14
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int32 v55; // eax
  __int32 v56; // edi
  unsigned int v57; // edx
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r15
  __m128 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdi
  _QWORD *v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  int v68; // eax
  unsigned __int64 *v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 *v73; // rax
  int v74; // eax
  __int64 v75; // r15
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // eax
  unsigned __int64 *v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // esi
  __int64 *v87; // rax
  int v88; // eax
  int v89; // r9d
  __int64 v90; // r8
  unsigned int v91; // esi
  __int64 *v92; // rax
  int v93; // eax
  int v94; // r8d
  __int64 v95; // r9
  __int64 v96; // [rsp+8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v98; // [rsp+18h] [rbp-50h]
  unsigned __int64 v99; // [rsp+20h] [rbp-48h] BYREF
  int v100; // [rsp+28h] [rbp-40h]
  int v101; // [rsp+2Ch] [rbp-3Ch]

  v5 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
  if ( v7 == *(_QWORD *)(a1->m128i_i64[0] + 19088) )
  {
    v66 = sub_BD7830();
    v67 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    v8 = (__int64 *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v8 = (__int64 *)v67;
  }
  else
  {
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v9 = *v8;
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (_BYTE)v10 != 42 )
  {
    v46 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v46 + 16) == 42 )
    {
      v47 = sub_F3F310(v9, a2, v46, a4, a5);
      if ( v47 )
      {
        v9 = v47;
        goto LABEL_4;
      }
      v10 = *(unsigned __int8 *)(v9 + 16);
    }
    if ( (unsigned int)(v10 - 25) <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
      && (v9 = sub_F3F310(v9, a2, v46, a4, a5)) != 0 )
    {
      LOBYTE(v96) = *(_BYTE *)(v9 + 21) & 1;
      goto LABEL_6;
    }
    goto LABEL_31;
  }
LABEL_4:
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25 > 1 )
  {
    v32 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v32 > 1
      || (v11 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v32, a4, a5)) == 0 )
    {
LABEL_31:
      LOBYTE(v96) = 0;
      goto LABEL_6;
    }
  }
  LOBYTE(v96) = *(_BYTE *)(v11 + 21) & 1;
LABEL_6:
  v12 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[0] + 2320) + 13LL) & 8) != 0 )
    v12 = *(_BYTE *)(a1[20].m128i_i64[1] + 57);
  v13 = sub_BD7F30(*(_QWORD *)(a2 + 32));
  v18 = v13;
  if ( v13 )
  {
    v19 = 0;
    if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( !(unsigned __int8)sub_B50B60(v13) )
      {
        v74 = *(_DWORD *)(a2 + 16);
        if ( v74 )
        {
          v75 = 0;
          v97 = (unsigned int)(v74 - 1);
          v98 = &v99;
          while ( 1 )
          {
            v76 = *(_QWORD *)(a2 + 8 * (v75 + ((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
            if ( sub_F3F530(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL)) && (*(_BYTE *)(v76 + 1) & 6) == 0 )
            {
              v77 = a1->m128i_i64[1];
              v99 = a2;
              v100 = 7;
              v101 = v75;
              v78 = sub_985780(v77 + 32, v98, 0);
              sub_978C10((__int64)a1, v78, v76, v79, v80, v81);
            }
            if ( v97 == v75 )
              break;
            ++v75;
          }
        }
      }
      if ( (unsigned __int8)sub_B51190(v18) || (unsigned __int8)sub_BDA770(a2, a1->m128i_i64[0]) )
        LOBYTE(v96) = 1;
      if ( (*(_BYTE *)(v18 + 29) & 1) != 0 )
      {
        v70 = sub_B68690(v18);
        v71 = *(__int64 **)v70;
        v72 = *(_QWORD *)v70 + 8LL * *(unsigned int *)(v70 + 8);
        if ( *(_QWORD *)v70 >= v72 )
        {
          if ( v71 != (__int64 *)v72 )
          {
            if ( *(_WORD *)(*(_QWORD *)v72 + 36LL) == 286 )
            {
LABEL_121:
              v12 = 0;
            }
            else
            {
              v84 = (__int64 *)(v72 + 8);
              while ( v71 != v84 )
              {
                v85 = *v84++;
                if ( *(_WORD *)(v85 + 36) == 286 )
                  goto LABEL_121;
              }
            }
          }
        }
        else
        {
          v73 = *(__int64 **)v70;
          while ( *(_WORD *)(*v73 + 36) != 286 )
          {
            if ( (__int64 *)v72 == ++v73 )
              goto LABEL_14;
          }
          if ( (__int64 *)v72 != v73 )
            v12 = 0;
        }
      }
LABEL_14:
      v20 = sub_B685F0(v18);
      v21 = sub_BD8130(a2);
      if ( v21 != 922 && v21 != 150
        || (a2 = v20, (v19 = sub_BDD420(*(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32), v20, 1)) == 0) )
      {
        a2 = 0;
        v19 = 1;
        if ( (unsigned int)sub_B51D10(v18, 0) != 1037 )
        {
          a2 = 0;
          v19 = (unsigned int)sub_B51D10(v18, 0) == 456;
        }
      }
    }
  }
  else
  {
    v19 = 0;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v23 = *(_QWORD *)v22;
  v24 = *(_QWORD *)v22;
  if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 42 )
    goto LABEL_19;
  v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v44 != 42 )
    goto LABEL_52;
  v24 = sub_F3F310(v23, a2, v14, v15, v16);
  v23 = *(_QWORD *)v22;
  if ( v24 )
  {
LABEL_19:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
      goto LABEL_20;
  }
  v44 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_52:
  if ( v44 == 11 )
  {
LABEL_20:
    v23 = *(_QWORD *)(sub_F44710(v23, a2, v14, v15, v16) & 0xFFFFFFFFFFFFFFF0LL);
    v25 = *(unsigned __int8 *)(v23 + 16);
    if ( (unsigned int)(v25 - 25) <= 1 )
      goto LABEL_21;
    goto LABEL_54;
  }
  v25 = *(unsigned __int8 *)(v23 + 16);
  if ( (unsigned int)(v25 - 25) <= 1 )
    goto LABEL_21;
LABEL_54:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    goto LABEL_25;
  v45 = sub_F3F310(v23, a2, v25, v15, v16);
  v23 = v45;
  if ( !v45 )
    goto LABEL_25;
  v25 = *(unsigned __int8 *)(v45 + 16);
LABEL_21:
  if ( (_BYTE)v25 == 26 && ((*(_BYTE *)(v23 + 19) >> 1) & 0xFu) - 9 > 1 && !(unsigned int)sub_F3F320() )
    v12 = 0;
LABEL_25:
  v26 = a1[1].m128i_i64[0];
  v27 = v26;
  if ( !v19 )
  {
    if ( !(_BYTE)v96 && !v12 )
    {
      if ( !v26 )
      {
        sub_976590((__int64)a1, 0, v25, v15, v16, v17);
        v27 = a1[1].m128i_i64[0];
      }
      if ( (unsigned __int8)sub_978340(a1, (_WORD *)v5) )
      {
        v36 = a1[22].m128i_i64[0];
        if ( v36 )
          *(_QWORD *)(v36 + 8) = v27;
      }
      if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 68) )
        goto LABEL_92;
      v37 = a1[19].m128i_i32[2];
      v38 = a1[18].m128i_i64[1];
      if ( !v37 )
        goto LABEL_92;
      v33 = (unsigned int)(v37 - 1);
      v39 = v33 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      v40 = (__int64 *)(v38 + 16LL * v39);
      if ( v5 == *v40 )
      {
        if ( !v40[1] )
          goto LABEL_92;
      }
      else
      {
        if ( *v40 == -4096 )
          goto LABEL_92;
        v86 = v33 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        v68 = 1;
        while ( 1 )
        {
          v35 = (unsigned int)(v68 + 1);
          v86 = v33 & (v68 + v86);
          v87 = (__int64 *)(v38 + 16LL * v86);
          v34 = *v87;
          if ( v5 == *v87 )
            break;
          v68 = v35;
          if ( v34 == -4096 )
            goto LABEL_92;
        }
        if ( !v87[1] )
          goto LABEL_92;
        v88 = 1;
        while ( 1 )
        {
          v89 = v88 + 1;
          v39 = v33 & (v88 + v39);
          v40 = (__int64 *)(v38 + 16LL * v39);
          v90 = *v40;
          if ( v5 == *v40 )
            break;
          v88 = v89;
          if ( v90 == -4096 )
            goto LABEL_44;
        }
      }
      *v40 = -8192;
      --a1[19].m128i_i32[0];
      ++a1[19].m128i_i32[1];
LABEL_44:
      v41 = sub_9857F0(a1->m128i_i64[1] + 32);
      if ( v41 )
      {
        v42 = *(__m128 **)(v27 + 8);
        v43 = v41 | 2;
        if ( (unsigned __int64)v42 >= *(_QWORD *)(v27 + 16) )
        {
          sub_975850((const __m128i **)v27, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v33, v34, v35);
          v42 = *(__m128 **)(v27 + 8);
        }
        v96 = v43;
        *v42 = _mm_loadh_ps((const double *)&v96);
        *(_QWORD *)(v27 + 8) += 16LL;
        return sub_97E4B0(a1, (__int16 *)v5);
      }
LABEL_92:
      v69 = *(unsigned __int64 **)(v27 + 8);
      if ( (unsigned __int64)v69 >= *(_QWORD *)(v27 + 16) )
      {
        sub_975850((const __m128i **)v27, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v33, v34, v35);
        v69 = *(unsigned __int64 **)(v27 + 8);
      }
      v69[1] = 1;
      *v69 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_QWORD *)(v27 + 8) += 16LL;
      return sub_97E4B0(a1, (__int16 *)v5);
    }
    if ( v26 )
    {
      v48 = a1[20].m128i_i8[0] == 0;
      a1[1].m128i_i64[1] = v26;
      if ( !v48 )
        return nullptr;
    }
    if ( (_BYTE)v96 )
    {
      v50 = sub_9765D0((__int64)a1, v26, v25, v15, v16, v17);
      a1[1].m128i_i64[0] = v50;
    }
    else
    {
      v49 = sub_975DA0((__int64)a1, v26, v25, v15, v16, v17);
      a1[1].m128i_i64[0] = v49;
      v50 = v49;
    }
    if ( (unsigned __int8)sub_978340(a1, (_WORD *)v5) )
    {
      v54 = a1[22].m128i_i64[0];
      if ( v54 )
        *(_QWORD *)(v54 + 8) = v50;
    }
    if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 68) )
      goto LABEL_113;
    v55 = a1[19].m128i_i32[2];
    v51 = a1[18].m128i_i64[1];
    if ( !v55 )
      goto LABEL_113;
    v56 = v55 - 1;
    v57 = (v55 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
    v58 = (__int64 *)(v51 + 16LL * v57);
    if ( v5 == *v58 )
    {
      if ( !v58[1] )
        goto LABEL_113;
    }
    else
    {
      if ( *v58 == -4096 )
        goto LABEL_113;
      v91 = v57;
      v82 = 1;
      while ( 1 )
      {
        v52 = (unsigned int)(v82 + 1);
        v91 = v56 & (v82 + v91);
        v92 = (__int64 *)(v51 + 16LL * v91);
        v53 = *v92;
        if ( v5 == *v92 )
          break;
        v82 = v52;
        if ( v53 == -4096 )
          goto LABEL_113;
      }
      if ( !v92[1] )
        goto LABEL_113;
      v93 = 1;
      while ( 1 )
      {
        v94 = v93 + 1;
        v57 = v56 & (v93 + v57);
        v58 = (__int64 *)(v51 + 16LL * v57);
        v95 = *v58;
        if ( v5 == *v58 )
          break;
        v93 = v94;
        if ( v95 == -4096 )
          goto LABEL_77;
      }
    }
    *v58 = -8192;
    --a1[19].m128i_i32[0];
    ++a1[19].m128i_i32[1];
LABEL_77:
    v59 = sub_9857F0(a1->m128i_i64[1] + 32);
    if ( v59 )
    {
      v60 = v59 | 2;
      v61 = *(__m128 **)(v50 + 8);
      if ( (unsigned __int64)v61 >= *(_QWORD *)(v50 + 16) )
      {
        sub_975850((const __m128i **)v50, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v51, v52, v53);
        v61 = *(__m128 **)(v50 + 8);
      }
      v96 = v60;
      *v61 = _mm_loadh_ps((const double *)&v96);
      *(_QWORD *)(v50 + 8) += 16LL;
LABEL_81:
      if ( v12 )
      {
        v62 = a1->m128i_i64[1];
        v63 = a1[7].m128i_i64[1];
        v64 = a1[1].m128i_i64[0];
        v65 = (_QWORD *)(v62 + 32);
        if ( v63 )
          sub_975CA0(v64, v63, 0, v65, v52, v53);
        else
          sub_975B20(v64, *(_QWORD *)(v62 + 8), 2LL * (*(_QWORD *)(v62 + 8) == 0), v65, v52, v53);
      }
      return sub_97E4B0(a1, (__int16 *)v5);
    }
LABEL_113:
    v83 = *(unsigned __int64 **)(v50 + 8);
    if ( (unsigned __int64)v83 >= *(_QWORD *)(v50 + 16) )
    {
      sub_975850((const __m128i **)v50, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v51, v52, v53);
      v83 = *(unsigned __int64 **)(v50 + 8);
    }
    v83[1] = 1;
    *v83 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v50 + 8) += 16LL;
    goto LABEL_81;
  }
  if ( !v26 )
  {
    sub_976590((__int64)a1, 0, v25, v15, v16, v17);
    v26 = a1[1].m128i_i64[0];
  }
  sub_9784E0(a1, v26, v5);
  return sub_97E030(a1, *(_QWORD **)(v5 + 32), 0, v28, v29, v30);
}

