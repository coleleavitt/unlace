__int64 __fastcall sub_258970(__int64 *a1)
{
  __int64 v2; // rbp
  unsigned __int64 **v3; // rbp
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 **v6; // rbp
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 **v9; // rbp
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 **v12; // rbp
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 **v15; // rbp
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 **v18; // rbp
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // r13
  __int64 result; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 *v30; // rdi
  __int64 *v31; // rdi
  unsigned __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  unsigned __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // r14
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  unsigned __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r14
  __int64 *v45; // rdi
  __int64 *v46; // rdi
  __int64 *v47; // r12
  __int64 v48; // rdx
  __int64 *v49; // r13
  __int64 v50; // rax
  __int64 *v51; // r13
  __int64 *v52; // rdi
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // rdi
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 *v62; // rdi
  __int64 *v63; // rdi
  __int64 *v64; // rdi
  __int64 *v65; // rdi
  __int64 *v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rdi
  unsigned __int64 v82; // [rsp+8h] [rbp-30h]
  unsigned __int64 v83; // [rsp+8h] [rbp-30h]
  unsigned __int64 v84; // [rsp+8h] [rbp-30h]
  unsigned __int64 v85; // [rsp+8h] [rbp-30h]
  unsigned __int64 v86; // [rsp+8h] [rbp-30h]
  unsigned __int64 v87; // [rsp+8h] [rbp-30h]

  v2 = a1[1];
  if ( v2 )
  {
    sub_84290(a1[1]);
    j__qfree(v2);
  }
  *(_QWORD *)(a1[27] + 1352) = 0;
  v3 = (unsigned __int64 **)a1[8];
  if ( v3 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_9:
      qfree(v3);
      goto LABEL_10;
    }
    v5 = *v4;
    if ( !v3[1] )
    {
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | *v4 & 3;
      *(__m128i *)(*v3 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v3, (__m128i)(unsigned __int64)*v3);
      **v3 &= ~1uLL;
      **v3 |= 2u;
      goto LABEL_7;
    }
    v27 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_73:
      *v4 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFCLL | v5 & 3;
      *(__m128i *)(*v3 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v3, (__m128i)(unsigned __int64)*v3);
      **v3 &= ~1uLL;
      **v3 |= 2u;
      v3[1] = nullptr;
LABEL_7:
      if ( *v3 )
        qfree(*v3);
      goto LABEL_9;
    }
    v28 = *(_QWORD *)(v27 + 8);
    if ( (*(_BYTE *)v28 & 2) != 0 )
    {
      v29 = *(_QWORD *)(v27 + 16);
      if ( (*(_BYTE *)v29 & 2) != 0 )
        goto LABEL_181;
      goto LABEL_63;
    }
    v59 = *(__int64 **)(v28 + 8);
    if ( (*(_BYTE *)v59 & 2) != 0 )
    {
      v60 = *(__int64 **)(v28 + 16);
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
LABEL_213:
        v76 = *(_QWORD *)(v28 + 32);
        if ( v76 )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree(v76);
        }
        *(_QWORD *)v28 |= 2uLL;
LABEL_150:
        if ( v28 )
          qfree(v28);
        v29 = *(_QWORD *)(v27 + 16);
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
LABEL_69:
          if ( (*(_BYTE *)v27 & 2) != 0 )
          {
LABEL_70:
            if ( v5 > 3 )
              qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
            v4 = *v3;
            v5 = **v3;
            goto LABEL_73;
          }
LABEL_181:
          v68 = *(_QWORD *)(v27 + 32);
          if ( v68 )
          {
            *(_QWORD *)(v27 + 40) = 0;
            qfree(v68);
          }
          *(_QWORD *)v27 |= 2uLL;
          goto LABEL_70;
        }
LABEL_63:
        v30 = *(__int64 **)(v29 + 8);
        if ( (*(_BYTE *)v30 & 2) != 0 )
        {
          v31 = *(__int64 **)(v29 + 16);
          if ( (*(_BYTE *)v31 & 2) != 0 )
            goto LABEL_209;
        }
        else
        {
          sub_253A80(v30);
          v31 = *(__int64 **)(v29 + 16);
          if ( (*(_BYTE *)v31 & 2) != 0 )
            goto LABEL_66;
        }
        sub_253A80(v31);
LABEL_66:
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
LABEL_67:
          if ( v29 )
            qfree(v29);
          goto LABEL_69;
        }
LABEL_209:
        v75 = *(_QWORD *)(v29 + 32);
        if ( v75 )
        {
          *(_QWORD *)(v29 + 40) = 0;
          qfree(v75);
        }
        *(_QWORD *)v29 |= 2uLL;
        goto LABEL_67;
      }
    }
    else
    {
      sub_253A80(v59);
      v60 = *(__int64 **)(v28 + 16);
      if ( (*(_BYTE *)v60 & 2) != 0 )
        goto LABEL_149;
    }
    sub_253A80(v60);
LABEL_149:
    if ( (*(_BYTE *)v28 & 2) != 0 )
      goto LABEL_150;
    goto LABEL_213;
  }
LABEL_10:
  v6 = (unsigned __int64 **)a1[9];
  if ( !v6 )
    goto LABEL_17;
  v7 = *v6;
  if ( *v6 )
  {
    v8 = *v7;
    if ( !v6[1] )
    {
      *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v6 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v6, (__m128i)(unsigned __int64)*v6);
      **v6 &= ~1uLL;
      **v6 |= 2u;
      goto LABEL_14;
    }
    v37 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_101:
      *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v6 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v6, (__m128i)(unsigned __int64)*v6);
      **v6 &= ~1uLL;
      **v6 |= 2u;
      v6[1] = nullptr;
LABEL_14:
      if ( *v6 )
        qfree(*v6);
      goto LABEL_16;
    }
    v38 = *(_QWORD *)(v37 + 8);
    if ( (*(_BYTE *)v38 & 2) != 0 )
    {
      v39 = *(_QWORD *)(v37 + 16);
      if ( (*(_BYTE *)v39 & 2) != 0 )
        goto LABEL_191;
      goto LABEL_91;
    }
    v63 = *(__int64 **)(v38 + 8);
    if ( (*(_BYTE *)v63 & 2) != 0 )
    {
      v64 = *(__int64 **)(v38 + 16);
      if ( (*(_BYTE *)v64 & 2) != 0 )
      {
LABEL_203:
        v74 = *(_QWORD *)(v38 + 40);
        if ( v74 )
        {
          *(_QWORD *)(v38 + 48) = 0;
          qfree(v74);
        }
        *(_QWORD *)v38 |= 2uLL;
LABEL_166:
        if ( v38 )
          qfree(v38);
        v39 = *(_QWORD *)(v37 + 16);
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
LABEL_97:
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
LABEL_98:
            if ( v8 > 3 )
              qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
            v7 = *v6;
            v8 = **v6;
            goto LABEL_101;
          }
LABEL_191:
          v71 = *(_QWORD *)(v37 + 40);
          if ( v71 )
          {
            *(_QWORD *)(v37 + 48) = 0;
            qfree(v71);
          }
          *(_QWORD *)v37 |= 2uLL;
          goto LABEL_98;
        }
LABEL_91:
        v40 = *(__int64 **)(v39 + 8);
        if ( (*(_BYTE *)v40 & 2) != 0 )
        {
          v41 = *(__int64 **)(v39 + 16);
          if ( (*(_BYTE *)v41 & 2) != 0 )
            goto LABEL_217;
        }
        else
        {
          sub_253950(v40);
          v41 = *(__int64 **)(v39 + 16);
          if ( (*(_BYTE *)v41 & 2) != 0 )
            goto LABEL_94;
        }
        sub_253950(v41);
LABEL_94:
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
LABEL_95:
          if ( v39 )
            qfree(v39);
          goto LABEL_97;
        }
LABEL_217:
        v77 = *(_QWORD *)(v39 + 40);
        if ( v77 )
        {
          *(_QWORD *)(v39 + 48) = 0;
          qfree(v77);
        }
        *(_QWORD *)v39 |= 2uLL;
        goto LABEL_95;
      }
    }
    else
    {
      sub_253950(v63);
      v64 = *(__int64 **)(v38 + 16);
      if ( (*(_BYTE *)v64 & 2) != 0 )
        goto LABEL_165;
    }
    sub_253950(v64);
LABEL_165:
    if ( (*(_BYTE *)v38 & 2) != 0 )
      goto LABEL_166;
    goto LABEL_203;
  }
LABEL_16:
  qfree(v6);
LABEL_17:
  v9 = (unsigned __int64 **)a1[11];
  if ( !v9 )
    goto LABEL_24;
  v10 = *v9;
  if ( *v9 )
  {
    v11 = *v10;
    if ( !v9[1] )
    {
      *v10 = *v10 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v9 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v9, (__m128i)(unsigned __int64)*v9);
      **v9 &= ~1uLL;
      **v9 |= 2u;
      goto LABEL_21;
    }
    v47 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    v48 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v48 & 2) != 0 )
    {
LABEL_129:
      *v10 = v11 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v9 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v9, (__m128i)(unsigned __int64)*v9);
      **v9 &= ~1uLL;
      **v9 |= 2u;
      v9[1] = nullptr;
LABEL_21:
      if ( *v9 )
        qfree(*v9);
      goto LABEL_23;
    }
    v49 = (__int64 *)v47[1];
    v50 = *v49;
    if ( (*v49 & 2) != 0 )
    {
      v51 = (__int64 *)v47[2];
      if ( (*(_BYTE *)v51 & 2) != 0 )
        goto LABEL_187;
      goto LABEL_119;
    }
    v55 = (__int64 *)v49[1];
    if ( (*(_BYTE *)v55 & 2) != 0 )
    {
      v56 = (__int64 *)v49[2];
      if ( (*(_BYTE *)v56 & 2) != 0 )
      {
LABEL_207:
        *v49 = v50 | 2;
LABEL_134:
        if ( v49 )
        {
          v87 = v11;
          qfree(v49);
          v11 = v87;
        }
        v51 = (__int64 *)v47[2];
        if ( (*(_BYTE *)v51 & 2) != 0 )
        {
LABEL_125:
          v48 = *v47;
          if ( (*v47 & 2) != 0 )
          {
LABEL_126:
            if ( v11 > 3 )
              qfree(v47);
            v10 = *v9;
            v11 = **v9;
            goto LABEL_129;
          }
LABEL_187:
          *v47 = v48 | 2;
          goto LABEL_126;
        }
LABEL_119:
        v52 = (__int64 *)v51[1];
        if ( (*(_BYTE *)v52 & 2) != 0 )
        {
          v53 = (__int64 *)v51[2];
          if ( (*(_BYTE *)v53 & 2) != 0 )
          {
            v54 = *v51;
LABEL_238:
            *v51 = v54 | 2;
LABEL_123:
            if ( v51 )
            {
              v84 = v11;
              qfree(v51);
              v11 = v84;
            }
            goto LABEL_125;
          }
        }
        else
        {
          v82 = v11;
          sub_2533D0(v52);
          v53 = (__int64 *)v51[2];
          v11 = v82;
          if ( (*(_BYTE *)v53 & 2) != 0 )
            goto LABEL_122;
        }
        v83 = v11;
        sub_2533D0(v53);
        v11 = v83;
LABEL_122:
        v54 = *v51;
        if ( (*v51 & 2) != 0 )
          goto LABEL_123;
        goto LABEL_238;
      }
    }
    else
    {
      v85 = v11;
      sub_2533D0(v55);
      v56 = (__int64 *)v49[2];
      v11 = v85;
      if ( (*(_BYTE *)v56 & 2) != 0 )
        goto LABEL_133;
    }
    v86 = v11;
    sub_2533D0(v56);
    v11 = v86;
LABEL_133:
    v50 = *v49;
    if ( (*v49 & 2) != 0 )
      goto LABEL_134;
    goto LABEL_207;
  }
LABEL_23:
  qfree(v9);
LABEL_24:
  v12 = (unsigned __int64 **)a1[12];
  if ( !v12 )
    goto LABEL_31;
  v13 = *v12;
  if ( *v12 )
  {
    v14 = *v13;
    if ( !v12[1] )
    {
      *v13 = *v13 & 3 | (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v12 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v12, (__m128i)(unsigned __int64)*v12);
      **v12 &= ~1uLL;
      **v12 |= 2u;
      goto LABEL_28;
    }
    v32 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_87:
      *v13 = v14 & 3 | (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v12 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v12, (__m128i)(unsigned __int64)*v12);
      **v12 &= ~1uLL;
      **v12 |= 2u;
      v12[1] = nullptr;
LABEL_28:
      if ( *v12 )
        qfree(*v12);
      goto LABEL_30;
    }
    v33 = *(_QWORD *)(v32 + 8);
    if ( (*(_BYTE *)v33 & 2) != 0 )
    {
      v34 = *(_QWORD *)(v32 + 16);
      if ( (*(_BYTE *)v34 & 2) != 0 )
        goto LABEL_188;
      goto LABEL_77;
    }
    v61 = *(__int64 **)(v33 + 8);
    if ( (*(_BYTE *)v61 & 2) != 0 )
    {
      v62 = *(__int64 **)(v33 + 16);
      if ( (*(_BYTE *)v62 & 2) != 0 )
      {
LABEL_233:
        v81 = *(_QWORD *)(v33 + 32);
        if ( v81 )
        {
          *(_QWORD *)(v33 + 40) = 0;
          qfree(v81);
        }
        *(_QWORD *)v33 |= 2uLL;
LABEL_158:
        if ( v33 )
          qfree(v33);
        v34 = *(_QWORD *)(v32 + 16);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
LABEL_83:
          if ( (*(_BYTE *)v32 & 2) != 0 )
          {
LABEL_84:
            if ( v14 > 3 )
              qfree(v14 & 0xFFFFFFFFFFFFFFFCLL);
            v13 = *v12;
            v14 = **v12;
            goto LABEL_87;
          }
LABEL_188:
          v70 = *(_QWORD *)(v32 + 32);
          if ( v70 )
          {
            *(_QWORD *)(v32 + 40) = 0;
            qfree(v70);
          }
          *(_QWORD *)v32 |= 2uLL;
          goto LABEL_84;
        }
LABEL_77:
        v35 = *(__int64 **)(v34 + 8);
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v36 = *(__int64 **)(v34 + 16);
          if ( (*(_BYTE *)v36 & 2) != 0 )
            goto LABEL_225;
        }
        else
        {
          sub_253820(v35);
          v36 = *(__int64 **)(v34 + 16);
          if ( (*(_BYTE *)v36 & 2) != 0 )
            goto LABEL_80;
        }
        sub_253820(v36);
LABEL_80:
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
LABEL_81:
          if ( v34 )
            qfree(v34);
          goto LABEL_83;
        }
LABEL_225:
        v79 = *(_QWORD *)(v34 + 32);
        if ( v79 )
        {
          *(_QWORD *)(v34 + 40) = 0;
          qfree(v79);
        }
        *(_QWORD *)v34 |= 2uLL;
        goto LABEL_81;
      }
    }
    else
    {
      sub_253820(v61);
      v62 = *(__int64 **)(v33 + 16);
      if ( (*(_BYTE *)v62 & 2) != 0 )
        goto LABEL_157;
    }
    sub_253820(v62);
LABEL_157:
    if ( (*(_BYTE *)v33 & 2) != 0 )
      goto LABEL_158;
    goto LABEL_233;
  }
LABEL_30:
  qfree(v12);
LABEL_31:
  v15 = (unsigned __int64 **)a1[14];
  if ( !v15 )
    goto LABEL_38;
  v16 = *v15;
  if ( *v15 )
  {
    v17 = *v16;
    if ( !v15[1] )
    {
      *v16 = *v16 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v15 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v15, (__m128i)(unsigned __int64)*v15);
      **v15 &= ~1uLL;
      **v15 |= 2u;
      goto LABEL_35;
    }
    v42 = v17 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_115:
      *v16 = v17 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v15 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v15, (__m128i)(unsigned __int64)*v15);
      **v15 &= ~1uLL;
      **v15 |= 2u;
      v15[1] = nullptr;
LABEL_35:
      if ( *v15 )
        qfree(*v15);
      goto LABEL_37;
    }
    v43 = *(_QWORD *)(v42 + 8);
    if ( (*(_BYTE *)v43 & 2) != 0 )
    {
      v44 = *(_QWORD *)(v42 + 16);
      if ( (*(_BYTE *)v44 & 2) != 0 )
        goto LABEL_178;
      goto LABEL_105;
    }
    v65 = *(__int64 **)(v43 + 8);
    if ( (*(_BYTE *)v65 & 2) != 0 )
    {
      v66 = *(__int64 **)(v43 + 16);
      if ( (*(_BYTE *)v66 & 2) != 0 )
      {
LABEL_195:
        v72 = *(_QWORD *)(v43 + 32);
        if ( v72 )
        {
          *(_QWORD *)(v43 + 40) = 0;
          qfree(v72);
        }
        *(_QWORD *)v43 |= 2uLL;
LABEL_174:
        if ( v43 )
          qfree(v43);
        v44 = *(_QWORD *)(v42 + 16);
        if ( (*(_BYTE *)v44 & 2) != 0 )
        {
LABEL_111:
          if ( (*(_BYTE *)v42 & 2) != 0 )
          {
LABEL_112:
            if ( v17 > 3 )
              qfree(v17 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = *v15;
            v17 = **v15;
            goto LABEL_115;
          }
LABEL_178:
          v67 = *(_QWORD *)(v42 + 32);
          if ( v67 )
          {
            *(_QWORD *)(v42 + 40) = 0;
            qfree(v67);
          }
          *(_QWORD *)v42 |= 2uLL;
          goto LABEL_112;
        }
LABEL_105:
        v45 = *(__int64 **)(v44 + 8);
        if ( (*(_BYTE *)v45 & 2) != 0 )
        {
          v46 = *(__int64 **)(v44 + 16);
          if ( (*(_BYTE *)v46 & 2) != 0 )
            goto LABEL_199;
        }
        else
        {
          sub_2536F0(v45);
          v46 = *(__int64 **)(v44 + 16);
          if ( (*(_BYTE *)v46 & 2) != 0 )
            goto LABEL_108;
        }
        sub_2536F0(v46);
LABEL_108:
        if ( (*(_BYTE *)v44 & 2) != 0 )
        {
LABEL_109:
          if ( v44 )
            qfree(v44);
          goto LABEL_111;
        }
LABEL_199:
        v73 = *(_QWORD *)(v44 + 32);
        if ( v73 )
        {
          *(_QWORD *)(v44 + 40) = 0;
          qfree(v73);
        }
        *(_QWORD *)v44 |= 2uLL;
        goto LABEL_109;
      }
    }
    else
    {
      sub_2536F0(v65);
      v66 = *(__int64 **)(v43 + 16);
      if ( (*(_BYTE *)v66 & 2) != 0 )
        goto LABEL_173;
    }
    sub_2536F0(v66);
LABEL_173:
    if ( (*(_BYTE *)v43 & 2) != 0 )
      goto LABEL_174;
    goto LABEL_195;
  }
LABEL_37:
  qfree(v15);
LABEL_38:
  v18 = (unsigned __int64 **)a1[15];
  if ( v18 )
  {
    v19 = *v18;
    if ( !*v18 )
    {
LABEL_44:
      qfree(v18);
      goto LABEL_45;
    }
    v20 = *v19;
    if ( !v18[1] )
    {
      *v19 = *v19 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v18 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v18, (__m128i)(unsigned __int64)*v18);
      **v18 &= ~1uLL;
      **v18 |= 2u;
      goto LABEL_42;
    }
    v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_59:
      *v19 = v20 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v18 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v18, (__m128i)(unsigned __int64)*v18);
      **v18 &= ~1uLL;
      **v18 |= 2u;
      v18[1] = nullptr;
LABEL_42:
      if ( *v18 )
        qfree(*v18);
      goto LABEL_44;
    }
    v23 = *(_QWORD *)(v22 + 8);
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v24 = *(_QWORD *)(v22 + 16);
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_184;
      goto LABEL_49;
    }
    v57 = *(__int64 **)(v23 + 8);
    if ( (*(_BYTE *)v57 & 2) != 0 )
    {
      v58 = *(__int64 **)(v23 + 16);
      if ( (*(_BYTE *)v58 & 2) != 0 )
      {
LABEL_221:
        v78 = *(_QWORD *)(v23 + 32);
        if ( v78 )
        {
          *(_QWORD *)(v23 + 40) = 0;
          qfree(v78);
        }
        *(_QWORD *)v23 |= 2uLL;
LABEL_142:
        if ( v23 )
          qfree(v23);
        v24 = *(_QWORD *)(v22 + 16);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
LABEL_55:
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
LABEL_56:
            if ( v20 > 3 )
              qfree(v20 & 0xFFFFFFFFFFFFFFFCLL);
            v19 = *v18;
            v20 = **v18;
            goto LABEL_59;
          }
LABEL_184:
          v69 = *(_QWORD *)(v22 + 32);
          if ( v69 )
          {
            *(_QWORD *)(v22 + 40) = 0;
            qfree(v69);
          }
          *(_QWORD *)v22 |= 2uLL;
          goto LABEL_56;
        }
LABEL_49:
        v25 = *(__int64 **)(v24 + 8);
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
          v26 = *(__int64 **)(v24 + 16);
          if ( (*(_BYTE *)v26 & 2) != 0 )
            goto LABEL_229;
        }
        else
        {
          sub_2535C0(v25);
          v26 = *(__int64 **)(v24 + 16);
          if ( (*(_BYTE *)v26 & 2) != 0 )
            goto LABEL_52;
        }
        sub_2535C0(v26);
LABEL_52:
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
LABEL_53:
          if ( v24 )
            qfree(v24);
          goto LABEL_55;
        }
LABEL_229:
        v80 = *(_QWORD *)(v24 + 32);
        if ( v80 )
        {
          *(_QWORD *)(v24 + 40) = 0;
          qfree(v80);
        }
        *(_QWORD *)v24 |= 2uLL;
        goto LABEL_53;
      }
    }
    else
    {
      sub_2535C0(v57);
      v58 = *(__int64 **)(v23 + 16);
      if ( (*(_BYTE *)v58 & 2) != 0 )
        goto LABEL_141;
    }
    sub_2535C0(v58);
LABEL_141:
    if ( (*(_BYTE *)v23 & 2) != 0 )
      goto LABEL_142;
    goto LABEL_221;
  }
LABEL_45:
  result = a1[27];
  --*(_DWORD *)(result + 896);
  return result;
}
