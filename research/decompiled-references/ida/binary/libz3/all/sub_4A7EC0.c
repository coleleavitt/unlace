__int64 __fastcall sub_4A7EC0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // rbp
  int v5; // r12d
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  _QWORD *p_ptr; // r14
  __int16 v10; // dx
  _QWORD *v11; // rbx
  unsigned int v12; // r14d
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int *v15; // r12
  unsigned int v16; // ecx
  int v17; // edi
  int *v18; // rax
  int v19; // esi
  __int16 v20; // ax
  __int64 v21; // rsi
  __int64 v22; // r12
  _DWORD *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  unsigned int v27; // r10d
  _QWORD *v28; // rbx
  __int64 v29; // r9
  unsigned int v30; // r11d
  __int64 v31; // rbp
  int v32; // ecx
  __int64 v33; // r11
  _QWORD *v34; // rdi
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned int **v44; // rdx
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // r10
  __int64 v50; // r9
  int v51; // edi
  __int64 *v52; // r12
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 *v55; // rax
  int v56; // r8d
  __int64 v57; // rdx
  __int64 *v58; // r11
  __int64 *v59; // rdx
  __int64 *v60; // r9
  __int64 v61; // rsi
  __int64 v62; // rbx
  _QWORD *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 *v68; // r8
  __int64 *v69; // r11
  __int64 v70; // rdx
  __int64 *v71; // rsi
  __int64 *v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned int **v76; // rax
  __int64 v77; // rbp
  _QWORD *v78; // rax
  int v79; // r10d
  _QWORD *v80; // rax
  _QWORD *v81; // r8
  __int64 v82; // rdx
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  __int64 v85; // rax
  unsigned int v86; // [rsp+8h] [rbp-1A0h]
  unsigned int v87; // [rsp+8h] [rbp-1A0h]
  unsigned int v88; // [rsp+8h] [rbp-1A0h]
  size_t v89; // [rsp+8h] [rbp-1A0h]
  unsigned int v90; // [rsp+8h] [rbp-1A0h]
  __int64 v91; // [rsp+10h] [rbp-198h]
  unsigned int v93; // [rsp+28h] [rbp-180h]
  int v94; // [rsp+28h] [rbp-180h]
  __int64 v95; // [rsp+28h] [rbp-180h]
  __int64 v96; // [rsp+30h] [rbp-178h]
  int v97; // [rsp+30h] [rbp-178h]
  __int64 v98; // [rsp+38h] [rbp-170h]
  __int64 v99; // [rsp+38h] [rbp-170h]
  __int64 v100; // [rsp+40h] [rbp-168h]
  __int64 v101; // [rsp+40h] [rbp-168h]
  char *v102; // [rsp+48h] [rbp-160h]
  _QWORD *v103; // [rsp+60h] [rbp-148h]
  __int64 v104; // [rsp+68h] [rbp-140h]
  _DWORD *ptr; // [rsp+70h] [rbp-138h] BYREF
  int v106; // [rsp+78h] [rbp-130h]

  v4 = a3;
  v5 = 1 << *a3;
  v6 = 4LL * (*a3 >> 5);
  if ( *a3 < *(_DWORD *)(a2 + 8) )
  {
    result = v6 + *(_QWORD *)(a2 + 16);
    v8 = *(_DWORD *)result;
    if ( (v5 & *(_DWORD *)result) != 0 )
      return result;
  }
  else
  {
    sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
    result = v6 + *(_QWORD *)(a2 + 16);
    v8 = *(_DWORD *)result;
  }
  p_ptr = &ptr;
  *(_DWORD *)result = v5 | v8;
  v103 = &ptr;
  ptr = v4;
  v106 = 0;
  v91 = a2 + 8;
  v104 = 0x1000000001LL;
  LODWORD(result) = 0;
  while ( 1 )
  {
LABEL_4:
    v10 = *((_WORD *)v4 + 2);
    v11 = &p_ptr[2 * (unsigned int)result];
    if ( v10 == 1 )
      goto LABEL_33;
    if ( v10 != 2 )
      break;
    v38 = v4[18];
    v39 = *((_DWORD *)v11 + 2);
    v40 = v38 + v4[19] + 1;
    if ( v39 >= v40 )
    {
LABEL_32:
      LODWORD(result) = v104 - 1;
LABEL_33:
      LODWORD(v104) = result;
      goto LABEL_34;
    }
    if ( !v39 )
    {
      v15 = *((unsigned int **)v4 + 3);
      goto LABEL_46;
    }
    while ( 1 )
    {
      v65 = v39 - 1;
      if ( v38 < v39 )
        v65 = (unsigned int)v65 - v38;
      v15 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v65];
LABEL_46:
      ++v39;
      v41 = *v15;
      *((_DWORD *)v11 + 2) = v39;
      if ( v41 >= *(_DWORD *)(a2 + 8) )
        break;
      v42 = *(_QWORD *)(a2 + 16);
      if ( (*(_DWORD *)(v42 + 4LL * (v41 >> 5)) & (1 << v41)) == 0 )
        goto LABEL_48;
      if ( v39 >= v40 )
        goto LABEL_32;
      v38 = v4[18];
    }
    v87 = v41;
    sub_186B510(v91, v41 + 1, 0);
    v42 = *(_QWORD *)(a2 + 16);
    v41 = v87;
LABEL_48:
    *(_DWORD *)(v42 + 4LL * (v41 >> 5)) |= 1 << v41;
    v43 = (unsigned int)v104;
    if ( (unsigned int)v104 >= HIDWORD(v104) )
    {
      v62 = (unsigned int)(2 * HIDWORD(v104));
      p_ptr = (_QWORD *)sub_186B270(16 * v62);
      v63 = v103;
      v66 = 0;
      v43 = (unsigned int)v104;
      if ( (_DWORD)v104 )
      {
        do
        {
          *(__m128i *)&p_ptr[v66] = _mm_loadu_si128((const __m128i *)&v103[v66]);
          v66 += 2;
        }
        while ( v66 != 2LL * (unsigned int)v104 );
      }
      goto LABEL_68;
    }
LABEL_49:
    p_ptr = v103;
LABEL_50:
    v44 = (unsigned int **)&p_ptr[2 * v43];
    *v44 = v15;
    *((_DWORD *)v44 + 2) = 0;
    v45 = (unsigned int)v104;
    v46 = v104 + 1;
LABEL_51:
    LODWORD(v104) = v46;
    LODWORD(result) = v46 - 1;
    v4 = (_DWORD *)p_ptr[2 * v45];
  }
  if ( v10 )
  {
    v37 = 100;
    sub_1872CE0("");
    goto LABEL_37;
  }
  v12 = v4[6];
  v13 = *((_DWORD *)v11 + 2);
  if ( v13 < v12 )
  {
    while ( 1 )
    {
      v14 = v13++;
      v15 = *(unsigned int **)&v4[2 * v14 + 8];
      *((_DWORD *)v11 + 2) = v13;
      v16 = *v15;
      if ( *v15 < *(_DWORD *)(a2 + 8) )
      {
        v17 = 1 << v16;
        v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v16 >> 5));
        v19 = *v18;
        if ( ((1 << v16) & *v18) != 0 )
          goto LABEL_16;
      }
      else
      {
        v86 = *v15;
        sub_186B510(v91, v16 + 1, 0);
        v17 = 1 << v86;
        v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v86 >> 5));
        v19 = *v18;
      }
      *v18 = v19 | v17;
      v20 = *((_WORD *)v15 + 2);
      if ( v20 == 1 )
      {
LABEL_15:
        v13 = *((_DWORD *)v11 + 2);
        goto LABEL_16;
      }
      if ( v20 == 2 )
      {
        v43 = (unsigned int)v104;
        if ( (unsigned int)v104 < HIDWORD(v104) )
          goto LABEL_49;
        v62 = (unsigned int)(2 * HIDWORD(v104));
        p_ptr = (_QWORD *)sub_186B270(16 * v62);
        v63 = v103;
        v64 = 0;
        v43 = (unsigned int)v104;
        if ( (_DWORD)v104 )
        {
          do
          {
            *(__m128i *)&p_ptr[v64] = _mm_loadu_si128((const __m128i *)&v103[v64]);
            v64 += 2;
          }
          while ( v64 != 2LL * (unsigned int)v104 );
        }
LABEL_68:
        if ( v63 != &ptr && v63 )
        {
          sub_186B220(v63);
          v43 = (unsigned int)v104;
        }
        v103 = p_ptr;
        HIDWORD(v104) = v62;
        goto LABEL_50;
      }
      if ( v20 )
      {
        v21 = 73;
        sub_1872CE0("");
        goto LABEL_14;
      }
      if ( v15[6] )
      {
        v75 = (unsigned int)v104;
        if ( (unsigned int)v104 >= HIDWORD(v104) )
        {
          p_ptr = (_QWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v104)));
          v85 = 0;
          v75 = (unsigned int)v104;
          if ( (_DWORD)v104 )
          {
            do
            {
              *(__m128i *)&p_ptr[v85] = _mm_loadu_si128((const __m128i *)&v103[v85]);
              v85 += 2;
            }
            while ( v85 != 2LL * (unsigned int)v104 );
          }
          if ( v103 != &ptr && v103 )
          {
            sub_186B220(v103);
            v75 = (unsigned int)v104;
          }
          v103 = p_ptr;
          HIDWORD(v104) *= 2;
        }
        else
        {
          p_ptr = v103;
        }
        v76 = (unsigned int **)&p_ptr[2 * v75];
        *((_DWORD *)v76 + 2) = 0;
        v45 = (unsigned int)v104;
        *v76 = v15;
        v46 = v104 + 1;
        goto LABEL_51;
      }
      v47 = *((_QWORD *)v15 + 2);
      v48 = *(_DWORD **)(v47 + 24);
      if ( v48 && *v48 != -1 )
        goto LABEL_15;
      v49 = *a1;
      v50 = *(unsigned int *)(*a1 + 8);
      v51 = *(_DWORD *)(*a1 + 16);
      v93 = 2 * v50;
      if ( 3 * (int)v50 < (unsigned int)(4 * (v51 + *(_DWORD *)(*a1 + 12))) )
      {
        v100 = *a1;
        v98 = *((_QWORD *)v15 + 2);
        v52 = (__int64 *)sub_186B270(8LL * v93);
        v54 = 8LL * v93;
        v47 = v98;
        v49 = v100;
        if ( v93 )
        {
          memset(v52, 0, 8LL * v93);
          v47 = v98;
          v49 = v100;
          v54 = 8LL * v93;
        }
        v68 = *(__int64 **)v49;
        v88 = v93 - 1;
        v69 = (__int64 *)(*(_QWORD *)v49 + 8LL * *(unsigned int *)(v49 + 8));
        v55 = (__int64 *)((char *)v52 + v54);
        if ( *(__int64 **)v49 != v69 )
        {
          do
          {
            while ( (unsigned __int64)*v68 <= 1 )
            {
              if ( v69 == ++v68 )
                goto LABEL_99;
            }
            v70 = 8LL * (*(_DWORD *)(*v68 + 12) & v88);
            v71 = &v52[(unsigned __int64)v70 / 8];
            if ( v54 == v70 )
            {
LABEL_105:
              if ( v52 == v71 )
              {
LABEL_122:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v72 = v52;
              while ( *v72 )
              {
                if ( v71 == ++v72 )
                  goto LABEL_122;
              }
            }
            else
            {
              v72 = &v52[(unsigned __int64)v70 / 8];
              while ( *v72 )
              {
                if ( v55 == ++v72 )
                  goto LABEL_105;
              }
            }
            v73 = *v68++;
            *v72 = v73;
          }
          while ( v69 != v68 );
LABEL_99:
          v69 = *(__int64 **)v49;
        }
        if ( v69 )
        {
          v102 = (char *)v52 + v54;
          v101 = v54;
          v99 = v49;
          v96 = v47;
          sub_186B220(v69);
          v55 = (__int64 *)v102;
          v54 = v101;
          v49 = v99;
          v47 = v96;
        }
        *(_QWORD *)v49 = v52;
        v51 = 0;
        *(_DWORD *)(v49 + 16) = 0;
        *(_DWORD *)(v49 + 8) = v93;
      }
      else
      {
        v52 = *(__int64 **)v49;
        v53 = v50 - 1;
        v54 = 8 * v50;
        v88 = v53;
        v55 = (__int64 *)(*(_QWORD *)v49 + v54);
      }
      v56 = *(_DWORD *)(v47 + 12);
      v57 = 8LL * (v56 & v88);
      v58 = &v52[(unsigned __int64)v57 / 8];
      if ( v57 != v54 )
      {
        v59 = &v52[(unsigned __int64)v57 / 8];
        v60 = nullptr;
        while ( 1 )
        {
          v61 = *v59;
          if ( (unsigned __int64)*v59 > 1 )
          {
            if ( *(_DWORD *)(v61 + 12) == v56 && v47 == v61 )
            {
              *v59 = v47;
              v13 = *((_DWORD *)v11 + 2);
              goto LABEL_16;
            }
          }
          else
          {
            if ( !v61 )
            {
              if ( v60 )
                goto LABEL_112;
              v60 = v59;
              goto LABEL_113;
            }
            v60 = v59;
          }
          if ( ++v59 == v55 )
            goto LABEL_84;
        }
      }
      v60 = nullptr;
      while ( 1 )
      {
LABEL_84:
        if ( v58 == v52 )
        {
          v21 = 405;
          sub_1872CE0("");
LABEL_14:
          sub_1873130(114, v21);
        }
        v67 = *v52;
        if ( (unsigned __int64)*v52 <= 1 )
          break;
        if ( *(_DWORD *)(v67 + 12) == v56 && v47 == v67 )
        {
          *v52 = v47;
          v13 = *((_DWORD *)v11 + 2);
          goto LABEL_16;
        }
LABEL_83:
        ++v52;
      }
      if ( v67 )
        break;
      if ( v60 )
LABEL_112:
        *(_DWORD *)(v49 + 16) = v51 - 1;
      else
        v60 = v52;
LABEL_113:
      *v60 = v47;
      v13 = *((_DWORD *)v11 + 2);
      ++*(_DWORD *)(v49 + 12);
LABEL_16:
      if ( v13 >= v12 )
      {
        LODWORD(result) = v104 - 1;
        goto LABEL_18;
      }
    }
    v60 = v52;
    goto LABEL_83;
  }
LABEL_18:
  v22 = *((_QWORD *)v4 + 2);
  LODWORD(v104) = result;
  v23 = *(_DWORD **)(v22 + 24);
  if ( !v23 || *v23 == -1 )
  {
    v24 = *a1;
    v25 = *(unsigned int *)(*a1 + 8);
    v26 = *(_DWORD *)(*a1 + 16);
    v27 = 2 * v25;
    if ( 3 * (int)v25 < (unsigned int)(4 * (v26 + *(_DWORD *)(*a1 + 12))) )
    {
      v77 = v27;
      v94 = 2 * v25;
      v89 = 8LL * v27;
      v78 = (_QWORD *)sub_186B270(v89);
      v79 = v94;
      v29 = v89;
      v28 = v78;
      if ( v94 )
      {
        memset(v78, 0, 8 * v77);
        v29 = v89;
        v79 = v94;
      }
      v80 = *(_QWORD **)v24;
      v30 = v79 - 1;
      v31 = (__int64)v28 + v29;
      v81 = (_QWORD *)(*(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8));
      if ( *(_QWORD **)v24 != v81 )
      {
        do
        {
          if ( *v80 > 1u )
          {
            v82 = 8LL * (*(_DWORD *)(*v80 + 12LL) & v30);
            v83 = &v28[(unsigned __int64)v82 / 8];
            if ( v29 == v82 )
            {
LABEL_144:
              if ( v28 == v83 )
              {
LABEL_154:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v84 = v28;
              while ( *v84 )
              {
                if ( v83 == ++v84 )
                  goto LABEL_154;
              }
            }
            else
            {
              v84 = &v28[(unsigned __int64)v82 / 8];
              while ( *v84 )
              {
                if ( (_QWORD *)v31 == ++v84 )
                  goto LABEL_144;
              }
            }
            *v84 = *v80;
          }
          ++v80;
        }
        while ( v81 != v80 );
        v81 = *(_QWORD **)v24;
      }
      if ( v81 )
      {
        v97 = v79;
        v95 = v29;
        v90 = v79 - 1;
        sub_186B220(v81);
        v79 = v97;
        v29 = v95;
        v30 = v90;
      }
      *(_QWORD *)v24 = v28;
      v26 = 0;
      *(_DWORD *)(v24 + 8) = v79;
      *(_DWORD *)(v24 + 16) = 0;
    }
    else
    {
      v28 = *(_QWORD **)v24;
      v29 = 8 * v25;
      v30 = v25 - 1;
      v31 = *(_QWORD *)v24 + 8 * v25;
    }
    v32 = *(_DWORD *)(v22 + 12);
    v33 = v32 & v30;
    v34 = &v28[v33];
    if ( 8 * v33 != v29 )
    {
      result = (__int64)&v28[v33];
      v35 = nullptr;
      while ( 1 )
      {
        v36 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v36 + 12) == v32 && v22 == v36 )
          {
            *(_QWORD *)result = v22;
            p_ptr = v103;
            LODWORD(result) = v104;
            goto LABEL_34;
          }
        }
        else
        {
          if ( !v36 )
          {
            if ( v35 )
              goto LABEL_151;
            v35 = (_QWORD *)result;
            goto LABEL_152;
          }
          v35 = (_QWORD *)result;
        }
        result += 8;
        if ( result == v31 )
          goto LABEL_117;
      }
    }
    v35 = nullptr;
LABEL_117:
    while ( v34 != v28 )
    {
      v74 = *v28;
      if ( *v28 > 1u )
      {
        if ( *(_DWORD *)(v74 + 12) == v32 && v22 == v74 )
        {
          LODWORD(result) = v104;
          p_ptr = v103;
          *v28 = v22;
          goto LABEL_34;
        }
      }
      else
      {
        if ( !v74 )
        {
          if ( v35 )
LABEL_151:
            *(_DWORD *)(v24 + 16) = v26 - 1;
          else
            v35 = v28;
LABEL_152:
          *v35 = v22;
          LODWORD(result) = v104;
          ++*(_DWORD *)(v24 + 12);
          p_ptr = v103;
LABEL_34:
          if ( !(_DWORD)result )
            goto LABEL_39;
LABEL_35:
          result = (unsigned int)(result - 1);
          v4 = (_DWORD *)p_ptr[2 * result];
          goto LABEL_4;
        }
        v35 = v28;
      }
      ++v28;
    }
    v37 = 405;
    sub_1872CE0("");
LABEL_37:
    sub_1873130(114, v37);
  }
  p_ptr = v103;
  if ( (_DWORD)result )
    goto LABEL_35;
LABEL_39:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

