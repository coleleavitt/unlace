__int64 __fastcall sub_AC54E0(_QWORD *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rsi
  unsigned __int16 v15; // ax
  unsigned __int64 *v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r12
  int v51; // edx
  _DWORD *v52; // r15
  unsigned __int64 v53; // rsi
  unsigned int v54; // r14d
  unsigned __int8 v55; // dl
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  _QWORD *v74; // r12
  unsigned __int64 v75; // r13
  const __m128i *v76; // rbx
  __int64 v77; // rdx
  __m128i *v78; // rax
  char *v79; // rdx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  const __m128i *p_ptr; // rdx
  __m128i *v86; // rax
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r13
  unsigned __int64 v89; // rax
  __int64 v90; // rdi
  int v91; // eax
  __int64 v92; // rdx
  unsigned __int64 v93; // rbp
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // [rsp-10h] [rbp-158h]
  _BYTE *v99; // [rsp-8h] [rbp-150h]
  unsigned __int64 v101; // [rsp+10h] [rbp-138h]
  unsigned int v102; // [rsp+10h] [rbp-138h]
  __int64 v103; // [rsp+18h] [rbp-130h]
  __int64 v104; // [rsp+28h] [rbp-120h]
  unsigned __int64 v105; // [rsp+30h] [rbp-118h]
  char v106; // [rsp+4Eh] [rbp-FAh] BYREF
  char v107; // [rsp+4Fh] [rbp-F9h] BYREF
  __int64 v108; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v109; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v111; // [rsp+68h] [rbp-E0h]
  _BYTE v112[32]; // [rsp+70h] [rbp-D8h] BYREF
  __m128 v113; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v114[168]; // [rsp+A0h] [rbp-A8h] BYREF

  v3 = 0;
  v4 = (__int64)a2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v6 = v4 & 0xFFFFFFFFFFFFFFF0LL;
                  v3 |= v4 & 7;
                  v7 = v4 & 0xFFFFFFFFFFFFFFF0LL;
                  v108 = v3;
                  if ( (v4 & 8) != 0 )
                  {
                    v3 |= *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
                    v108 = v3;
                    v7 = *(_QWORD *)v6;
                  }
                  v8 = *(_BYTE *)(v7 + 16);
                  if ( v8 != 24 )
                    break;
LABEL_5:
                  v4 = *(_QWORD *)(v7 + 40);
                }
                if ( v8 != 56 )
                  break;
                v4 = sub_F5DBF0(v7);
                v3 = v108;
              }
              if ( v8 != 40 )
                break;
              v4 = *(_QWORD *)(v7 + 32);
            }
            if ( v8 != 30 )
              break;
            v4 = sub_F5DC20(v7);
            v3 = v108;
          }
          if ( v8 != 46 )
            break;
          if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
            goto LABEL_15;
          v4 = *(_QWORD *)(v7 + 8);
        }
        if ( v8 != 8 )
          break;
LABEL_15:
        v4 = *(_QWORD *)(v7 + 48);
      }
      v9 = v8;
      if ( v8 <= 1u )
        goto LABEL_5;
      if ( v8 != 16 )
        break;
      if ( (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_20;
      v4 = *(_QWORD *)(v7 + 24);
    }
    v9 = (unsigned int)v8 - 25;
    if ( (unsigned int)v9 <= 1 )
      break;
LABEL_39:
    if ( v8 == 49 )
    {
      if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
        goto LABEL_41;
      LOBYTE(v109) = 0;
      v113.m128_u64[1] = 0x400000000LL;
      v113.m128_u64[0] = (unsigned __int64)v114;
      v103 = v7 + 48 + 24LL * *(unsigned int *)(v7 + 20);
      if ( v7 + 48 != v103 )
      {
        v9 = 0;
        v74 = a1;
        v105 = v7;
        v75 = v7 + 48;
        do
        {
          v76 = (const __m128i *)v75;
          if ( (*(_DWORD *)v75 & 0x7FFFFFFF) == 1 )
          {
            a2 = (_BYTE *)sub_AC54E0(v74, *(_QWORD *)(v75 + 8), &v109);
            sub_F1D250(&ptr, a2, 0, 0);
            v82 = v113.m128_u32[2];
            v83 = v113.m128_u32[2] + 1LL;
            if ( v83 > v113.m128_u32[3] )
            {
              v87 = v113.m128_u64[0];
              a2 = v114;
              if ( v113.m128_u64[0] > (unsigned __int64)&ptr
                || (unsigned __int64)&ptr >= v113.m128_u64[0] + 24 * (unsigned __int64)v113.m128_u32[2] )
              {
                sub_2237220(&v113, v114, v83, 24);
                v82 = v113.m128_u32[2];
                p_ptr = (const __m128i *)&ptr;
                v84 = v113.m128_u64[0];
              }
              else
              {
                sub_2237220(&v113, v114, v83, 24);
                v84 = v113.m128_u64[0];
                v82 = v113.m128_u32[2];
                p_ptr = (const __m128i *)((char *)&ptr + v113.m128_u64[0] - v87);
              }
            }
            else
            {
              v84 = v113.m128_u64[0];
              p_ptr = (const __m128i *)&ptr;
            }
            v86 = (__m128i *)(v84 + 24 * v82);
            *v86 = _mm_loadu_si128(p_ptr);
            v86[1].m128i_i64[0] = p_ptr[1].m128i_i64[0];
            v9 = (unsigned int)++v113.m128_i32[2];
          }
          else
          {
            v77 = v9 + 1;
            a2 = (_BYTE *)v113.m128_u64[0];
            v78 = (__m128i *)(v113.m128_u64[0] + 24 * v9);
            if ( v9 + 1 > (unsigned __int64)v113.m128_u32[3] )
            {
              if ( v113.m128_u64[0] > v75 || (unsigned __int64)v78 <= v75 )
              {
                a2 = v114;
                sub_2237220(&v113, v114, v77, 24);
                v78 = (__m128i *)(v113.m128_u64[0] + 24LL * v113.m128_u32[2]);
              }
              else
              {
                v81 = v75 - v113.m128_u64[0];
                a2 = v114;
                sub_2237220(&v113, v114, v77, 24);
                v76 = (const __m128i *)(v113.m128_u64[0] + v81);
                v78 = (__m128i *)(24LL * v113.m128_u32[2] + v113.m128_u64[0]);
              }
            }
            *v78 = _mm_loadu_si128(v76);
            v78[1].m128i_i64[0] = v76[1].m128i_i64[0];
            v9 = (unsigned int)++v113.m128_i32[2];
          }
          v75 += 24LL;
        }
        while ( v103 != v75 );
        a1 = v74;
        v6 = v4 & 0xFFFFFFFFFFFFFFF0LL;
        v79 = (char *)v113.m128_u64[0];
        if ( (_BYTE)v109 )
        {
          *a3 = 1;
          v80 = sub_AB7CB0(a1, *(_QWORD *)(v105 + 32), v79, v9, nullptr, 0, v4);
          v79 = (char *)v113.m128_u64[0];
          v9 = v98;
          v4 = v80;
          a2 = v99;
          v6 = v80 & 0xFFFFFFFFFFFFFFF0LL;
        }
        if ( v79 != v114 )
          free(v79);
      }
LABEL_20:
      v10 = *(_QWORD *)v6;
      v11 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
      if ( (_BYTE)v11 != 42 )
        goto LABEL_69;
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v8 - 2) <= 4u )
    {
      v49 = sub_AC54E0(a1, *(_QWORD *)(v7 + 32), a3);
      v50 = v49;
      v51 = *(unsigned __int8 *)(v7 + 16);
      if ( (unsigned int)(v51 - 2) > 1 )
      {
        if ( (_BYTE)v51 == 6 )
        {
          a2 = (_BYTE *)v49;
          v4 = sub_A71A40(a1, v49, *(_QWORD *)(v7 + 40), (*(_WORD *)(v7 + 18) >> 6) & 7, (*(_BYTE *)(v7 + 18) >> 3) & 7);
        }
        else
        {
          a2 = (_BYTE *)v49;
          if ( (_BYTE)v51 == 4 )
            v4 = sub_A71B90(
                   (__int64)a1,
                   v49,
                   *(_QWORD *)(v7 + 40),
                   (*(_WORD *)(v7 + 18) >> 6) & 7,
                   (*(_BYTE *)(v7 + 18) >> 3) & 7);
          else
            v4 = sub_A71E50((__int64)a1, v49, (*(_WORD *)(v7 + 18) >> 6) & 7, (*(_BYTE *)(v7 + 18) >> 3) & 7);
        }
      }
      else
      {
        v52 = nullptr;
        v53 = *(_QWORD *)(v7 + 40);
        v54 = (*(_BYTE *)(v7 + 18) >> 3) & 7;
        v102 = (*(_WORD *)(v7 + 18) >> 6) & 7;
        if ( (*(_BYTE *)(v7 + 19) & 2) != 0 )
          v52 = *(_DWORD **)(v53 + 16);
        v55 = *(_BYTE *)(v7 + 19);
        if ( (v55 & 2) != 0 )
        {
          v113.m128_i32[2] = *(_DWORD *)(v53 + 8);
          if ( v113.m128_i32[2] > 0x40u )
            sub_2205510(&v113);
          else
            v113.m128_u64[0] = *(_QWORD *)v53;
        }
        else
        {
          v113.m128_i32[2] = 8 * ((v55 >> 2) & 0x1F);
          if ( v113.m128_i32[2] > 64 )
            sub_2205470(&v113, v53, 0);
          else
            v113.m128_u64[0] = v53;
        }
        a2 = (_BYTE *)v50;
        v4 = sub_A70F70((__int64)a1, v50, (__int64)&v113, v52, v102, v54);
        if ( v113.m128_i32[2] > 0x40u && v113.m128_u64[0] )
          operator delete[]((void *)v113.m128_u64[0]);
      }
      goto LABEL_68;
    }
LABEL_41:
    v20 = sub_A8A250(a1);
    v23 = *(_QWORD *)(v20 + 48);
    if ( v23 )
    {
      v24 = v23 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = (_BYTE *)v20;
      v24 = sub_A7AA70((__int64)a1, v20, 0, v9, v21, v22);
    }
    v25 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == v24 )
      goto LABEL_20;
    v26 = sub_A8A180(a1);
    v29 = *(_QWORD *)(v26 + 48);
    if ( v29 )
    {
      v30 = v29 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = (_BYTE *)v26;
      v30 = sub_A7AA70((__int64)a1, v26, 0, v9, v27, v28);
    }
    if ( v25 == v30 )
      goto LABEL_20;
    v31 = sub_A8A1F0(a1);
    v34 = *(_QWORD *)(v31 + 48);
    if ( v34 )
    {
      v35 = v34 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = (_BYTE *)v31;
      v35 = sub_A7AA70((__int64)a1, v31, 0, v9, v32, v33);
    }
    if ( v25 == v35 )
      goto LABEL_20;
    a2 = (_BYTE *)sub_A89FE0(a1);
    if ( v25 == sub_A82070((__int64)a1, (__int64)a2, 0, v36, v37, v38) )
      goto LABEL_20;
    v39 = sub_AA7570(a1);
    v42 = *(_QWORD *)(v39 + 48);
    if ( v42 )
    {
      v43 = v42 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = (_BYTE *)v39;
      v43 = sub_A7AA70((__int64)a1, v39, 0, v9, v40, v41);
    }
    if ( v25 == v43 )
      goto LABEL_20;
    v44 = sub_A8A3D0(a1);
    v47 = *(_QWORD *)(v44 + 48);
    if ( v47 )
    {
      v48 = v47 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = (_BYTE *)v44;
      v48 = sub_A7AA70((__int64)a1, v44, 0, v9, v45, v46);
    }
    if ( v25 == v48 )
      goto LABEL_20;
    switch ( *(_BYTE *)(v7 + 16) )
    {
      case 0:
      case 1:
      case 0x18:
        goto LABEL_172;
      case 8:
        v88 = *(_QWORD *)(v7 + 48);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 9:
      case 0xC:
      case 0x28:
        v88 = *(_QWORD *)(v7 + 32);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0xF:
        if ( !(unsigned __int8)sub_F5DDC0(v7) )
          goto LABEL_20;
        v88 = sub_F5DDD0(v7);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x10:
      case 0x11:
        v88 = *(_QWORD *)(v7 + 24);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v88 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_20;
        goto LABEL_142;
      case 0x1E:
        v88 = sub_F5DC20(v7);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x21:
        if ( !(unsigned __int8)sub_F62DD0(v7) )
          goto LABEL_20;
        if ( (unsigned __int8)sub_F62DD0(v7) )
          goto LABEL_140;
        goto LABEL_182;
      case 0x25:
        goto LABEL_140;
      case 0x27:
        if ( !(unsigned int)sub_F5E0F0(v7) )
          goto LABEL_20;
        if ( (unsigned int)sub_F5E0F0(v7) )
        {
          v88 = *(_QWORD *)(v7 + 8LL * ((unsigned int)sub_F5E0F0(v7) - 1) + 64);
          v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
LABEL_182:
          v88 = v7 & 0xFFFFFFFFFFFFFFF0LL;
          v89 = v88;
        }
        goto LABEL_142;
      case 0x2E:
        if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
          v88 = *(_QWORD *)(v7 + 48);
        else
LABEL_140:
          v88 = *(_QWORD *)(v7 + 8);
        goto LABEL_141;
      case 0x31:
        if ( (*(_BYTE *)(v7 + 17) & 4) == 0
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29 )
        {
          v96 = *(_QWORD *)(v7 + 16);
        }
        else
        {
          v96 = *(_QWORD *)(v7 + 16);
          if ( (v96 & 0x80000) == 0 )
            goto LABEL_20;
        }
        if ( (v96 & 0x80000) != 0 )
          v97 = sub_F5E8A0(v7);
        else
          v97 = *(_QWORD *)(v7 + 8);
LABEL_169:
        v88 = v97;
LABEL_141:
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_142:
        v90 = *(_QWORD *)v89;
        v91 = *(unsigned __int8 *)(*(_QWORD *)v89 + 16LL);
        v92 = (unsigned int)(v91 - 57);
        if ( (unsigned int)v92 <= 1 )
          goto LABEL_20;
        if ( (unsigned int)(v91 - 47) <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
          && (v90 = sub_F63050(v90, a2, v92, v9)) != 0 )
        {
          v93 = *(_QWORD *)v6;
          if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 53 )
          {
            v94 = *(_QWORD *)(sub_F60F10(v90, a2, v92, v9, v45) + 120);
            v95 = v94 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v94 & 4) != 0 )
              v95 = 0;
            if ( *(_QWORD *)(v93 + 32) == v95 )
              goto LABEL_20;
          }
        }
        v4 = v88;
        *a3 = 1;
        v3 = v108;
        break;
      case 0x33:
        if ( !(unsigned __int8)sub_F5DC90(v7) )
          goto LABEL_20;
        v88 = sub_F64EA0(v7);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x34:
        v88 = sub_F64D80(v7);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x35:
        v88 = sub_F5DAC0(v7);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x36:
        if ( (*(_BYTE *)(v7 + 17) & 4) != 0 )
          goto LABEL_20;
LABEL_172:
        v88 = *(_QWORD *)(v7 + 40);
        v89 = v88 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_142;
      case 0x38:
        v97 = sub_F5DBF0(v7);
        goto LABEL_169;
      default:
        goto LABEL_20;
    }
  }
  v14 = *(_QWORD *)(v7 + 24);
  v106 = 0;
  v109 = v14;
  v101 = sub_AC54E0(a1, v14, &v106);
  v15 = sub_F5E9A0(&v109);
  if ( HIBYTE(v15) )
    v101 = sub_A719E0((__int64)a1, v15, v101, v101);
  a2 = nullptr;
  v107 = 0;
  ptr = v112;
  v111 = 0x400000000LL;
  if ( *(_BYTE *)(v7 + 16) == 26 )
  {
    v104 = v7 + 48 + 8LL * *(unsigned __int16 *)(v7 + 22);
    if ( v7 + 48 != v104 )
    {
      v16 = (unsigned __int64 *)(v7 + 48);
      do
      {
        while ( 1 )
        {
          v113.m128_u64[0] = *v16;
          v17 = sub_AC54E0(a1, v113.m128_u64[0], &v107);
          v18 = sub_F5E9A0(&v113);
          if ( HIBYTE(v18) )
            v17 = sub_A719E0((__int64)a1, v18, v17, v17);
          v9 = HIDWORD(v111);
          v19 = (unsigned int)v111 + 1LL;
          if ( v19 > HIDWORD(v111) )
            break;
          ++v16;
          *((_QWORD *)ptr + (unsigned int)v111) = v17;
          LODWORD(v111) = v111 + 1;
          if ( (unsigned __int64 *)v104 == v16 )
            goto LABEL_33;
        }
        ++v16;
        sub_2237220(&ptr, v112, v19, 8);
        *((_QWORD *)ptr + (unsigned int)v111) = v17;
        LODWORD(v111) = v111 + 1;
      }
      while ( (unsigned __int64 *)v104 != v16 );
    }
LABEL_33:
    a2 = (_BYTE *)v7;
  }
  if ( !v106 && !v107 )
  {
    if ( ptr != v112 )
      free(ptr);
    v8 = *(_BYTE *)(v7 + 16);
    goto LABEL_39;
  }
  *a3 = 1;
  if ( a2 )
  {
    sub_A5E110(&v113, (__int64)a2);
    a2 = (_BYTE *)v101;
    v4 = sub_A73610((__int64)a1, v101, (__int64 *)ptr, (unsigned int)v111, (const __m128i *)&v113, 0);
  }
  else
  {
    a2 = (_BYTE *)v101;
    v113.m128_i16[0] = *(_WORD *)(v7 + 20) >> 2;
    v4 = sub_A71610((__int64)a1, v101, (unsigned __int16 *)&v113);
  }
  if ( ptr != v112 )
    free(ptr);
LABEL_68:
  v6 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(v10 + 16);
  if ( (_BYTE)v11 == 42 )
    goto LABEL_21;
LABEL_69:
  v56 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v56 + 16) != 42 )
    goto LABEL_72;
  v10 = sub_F63050(v10, a2, v56, v9);
  if ( v10 )
  {
LABEL_21:
    v12 = sub_AC54E0(a1, *(_QWORD *)(v10 + 32), a3);
    v4 = sub_A70010((__int64)a1, v12);
    return sub_F5E8B0(&v108, a1, v4);
  }
  v10 = *(_QWORD *)v6;
  v11 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
LABEL_72:
  if ( (_BYTE)v11 == 34 )
  {
LABEL_73:
    v57 = sub_AC54E0(a1, *(_QWORD *)(v10 + 32), a3);
    v4 = sub_A74EC0((__int64)a1, v57);
    return sub_F5E8B0(&v108, a1, v4);
  }
  v58 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v58 + 16) == 34 )
  {
    v10 = sub_F63050(v10, a2, v58, v9);
    if ( v10 )
      goto LABEL_73;
    v10 = *(_QWORD *)v6;
    v11 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
  }
  if ( (_BYTE)v11 != 43 )
  {
    v65 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v65 + 16) == 43 )
    {
      v10 = sub_F63050(v10, a2, v65, v9);
      if ( v10 )
        goto LABEL_81;
      v10 = *(_QWORD *)v6;
      v11 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
    }
    if ( (_BYTE)v11 == 44 )
      goto LABEL_92;
    v71 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v71 + 16) == 44 )
    {
      v10 = sub_F63050(v10, a2, v71, v9);
      if ( v10 )
      {
LABEL_92:
        v66 = v10;
        while ( 1 )
        {
          v67 = *(_QWORD *)(v66 + 32);
          if ( (*(_BYTE *)(v66 + 18) & 0x10) == 0 )
            break;
          v68 = v67 & 0xFFFFFFFFFFFFFFF0LL;
          v66 = *(_QWORD *)v68;
          v69 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v68 + 16LL) - 43;
          if ( (unsigned int)v69 > 1 )
            v66 = sub_F63050(v66, v68, v69, v9);
        }
        v70 = sub_AC54E0(a1, v67, a3);
        v4 = sub_A72DD0((__int64)a1, v70);
        return sub_F5E8B0(&v108, a1, v4);
      }
      v10 = *(_QWORD *)v6;
      v11 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
    }
    if ( ((unsigned int)(v11 - 35) <= 1
       || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
       && (v10 = sub_F63050(v10, a2, v71, v9)) != 0)
      && *(_QWORD *)(*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFFF0LL) != v10
      && !*a3 )
    {
      v72 = sub_AC54E0(a1, *(_QWORD *)(v10 + 24), a3);
      v73 = (*(_WORD *)(v10 + 18) >> 3) & 0x7F;
      v4 = sub_A750A0(
             (__int64)a1,
             v72,
             (_QWORD *)(v10 + 48),
             v73,
             (_BYTE *)(v10 + 8 * v73 + 48),
             *(_BYTE *)(v10 + 19) >> 2,
             *(_BYTE *)(v10 + 20) & 1);
    }
    return sub_F5E8B0(&v108, a1, v4);
  }
LABEL_81:
  v59 = v10;
  while ( 1 )
  {
    v60 = *(_QWORD *)(v59 + 32);
    if ( (*(_BYTE *)(v59 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v61 = v60 & 0xFFFFFFFFFFFFFFF0LL;
      v59 = *(_QWORD *)v61;
      v62 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v61 + 16LL) - 43;
      if ( (unsigned int)v62 <= 1 )
        break;
      v63 = sub_F63050(v59, v61, v62, v9);
      v60 = *(_QWORD *)(v63 + 32);
      if ( (*(_BYTE *)(v63 + 18) & 0x10) == 0 )
        goto LABEL_85;
    }
  }
LABEL_85:
  v64 = sub_AC54E0(a1, v60, a3);
  v4 = sub_A73030((__int64)a1, v64, 1u);
  return sub_F5E8B0(&v108, a1, v4);
}
