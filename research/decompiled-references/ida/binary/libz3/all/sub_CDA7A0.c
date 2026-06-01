__int64 __fastcall sub_CDA7A0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r13
  int v5; // ebp
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  __int64 *p_ptr; // r14
  __int16 v10; // dx
  __int64 *v11; // rbp
  unsigned int v12; // edx
  __int64 v13; // rax
  int *v14; // r12
  unsigned int v15; // ebx
  int v16; // eax
  int *v17; // rsi
  int v18; // edi
  __int16 v19; // ax
  __int64 v20; // rsi
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int *v24; // r12
  bool v25; // cc
  unsigned int v26; // ebx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // rdx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r14
  int v33; // ecx
  __int64 v34; // r8
  __m128i *v35; // r9
  unsigned int v36; // edi
  int v37; // r10d
  __int64 v38; // r8
  __m128i *v39; // rbx
  __int64 v40; // rdi
  __m128i *v41; // rsi
  __int64 i; // rax
  __int64 v43; // rdx
  unsigned int v44; // r11d
  __m128i *v45; // rax
  __m128i *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rcx
  unsigned int v54; // r10d
  __m128i *v55; // rbx
  unsigned int v56; // r9d
  __int64 v57; // rcx
  __m128i *v58; // r14
  int v59; // esi
  __int64 v60; // r9
  __m128i *v61; // rdi
  __m128i *v62; // rax
  __m128i *v63; // rcx
  int *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r14
  __m128i *v70; // rax
  int v71; // r10d
  __m128i *v72; // rdx
  const __m128i *v73; // rax
  __m128i *v74; // r11
  __int64 v75; // rdx
  __m128i *v76; // rsi
  __m128i *v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // rbx
  __m128i *v80; // rax
  int v81; // r11d
  __m128i *v82; // rdx
  int v83; // r10d
  const __m128i *v84; // rax
  __m128i *v85; // rcx
  __int64 v86; // rdx
  __m128i *v87; // rsi
  __m128i *v88; // rdx
  __m128i v89; // xmm0
  unsigned int v90; // edx
  __int64 *v91; // rax
  __int64 v92; // rax
  unsigned int v94; // [rsp+8h] [rbp-180h]
  __int32 v95; // [rsp+Ch] [rbp-17Ch]
  size_t v96; // [rsp+18h] [rbp-170h]
  __int64 v97; // [rsp+18h] [rbp-170h]
  size_t v98; // [rsp+18h] [rbp-170h]
  __m128i *v99; // [rsp+18h] [rbp-170h]
  int v100; // [rsp+20h] [rbp-168h]
  int v101; // [rsp+20h] [rbp-168h]
  size_t v102; // [rsp+20h] [rbp-168h]
  __int64 v103; // [rsp+28h] [rbp-160h]
  size_t v104; // [rsp+28h] [rbp-160h]
  int v105; // [rsp+28h] [rbp-160h]
  int v106; // [rsp+38h] [rbp-150h]
  __int64 *v107; // [rsp+40h] [rbp-148h]
  __int64 v108; // [rsp+48h] [rbp-140h]
  __int64 ptr; // [rsp+50h] [rbp-138h] BYREF
  int v110; // [rsp+58h] [rbp-130h]

  v4 = (__int64)a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
    }
    else
    {
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
      if ( (v5 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v5 | v8;
  }
  p_ptr = &ptr;
  ptr = v4;
  v107 = &ptr;
  v110 = 0;
  v108 = 0x1000000001LL;
  for ( result = 0; ; v4 = p_ptr[2 * result] )
  {
    while ( 1 )
    {
      v10 = *(_WORD *)(v4 + 4);
      v11 = &p_ptr[2 * (unsigned int)result];
      if ( v10 == 1 )
        goto LABEL_28;
      if ( v10 != 2 )
        break;
      v21 = *(_DWORD *)(v4 + 72);
      v22 = *((_DWORD *)v11 + 2);
      v23 = v21 + *(_DWORD *)(v4 + 76) + 1;
      if ( v22 >= v23 )
      {
LABEL_27:
        result = (unsigned int)(v108 - 1);
LABEL_28:
        LODWORD(v108) = result;
        if ( !(_DWORD)result )
          goto LABEL_32;
        goto LABEL_29;
      }
      if ( !v22 )
      {
        v24 = *(unsigned int **)(v4 + 24);
        goto LABEL_38;
      }
      while ( 1 )
      {
        v51 = v22 - 1;
        if ( v21 < v22 )
          v51 = (unsigned int)v51 - v21;
        v24 = *(unsigned int **)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v51 + 80);
LABEL_38:
        ++v22;
        v25 = v24[2] <= 1;
        *((_DWORD *)v11 + 2) = v22;
        if ( v25 )
          break;
        v26 = *v24;
        if ( *v24 >= *(_DWORD *)(a2 + 8) )
        {
          sub_186B510(a2 + 8, v26 + 1, 0);
          v27 = *(_QWORD *)(a2 + 16);
LABEL_41:
          *(_DWORD *)(v27 + 4LL * (v26 >> 5)) |= 1 << v26;
          break;
        }
        v27 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v27 + 4LL * (v26 >> 5)) & (1 << v26)) == 0 )
          goto LABEL_41;
        if ( v22 >= v23 )
          goto LABEL_27;
        v21 = *(_DWORD *)(v4 + 72);
      }
      v28 = (unsigned int)v108;
      if ( (unsigned int)v108 >= HIDWORD(v108) )
      {
        p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
        v67 = 0;
        v28 = (unsigned int)v108;
        if ( (_DWORD)v108 )
        {
          do
          {
            *(__m128i *)&p_ptr[v67] = _mm_loadu_si128((const __m128i *)&v107[v67]);
            v67 += 2;
          }
          while ( v67 != 2LL * (unsigned int)v108 );
        }
        if ( v107 != &ptr && v107 )
        {
          sub_186B220(v107);
          v28 = (unsigned int)v108;
        }
        v107 = p_ptr;
        HIDWORD(v108) *= 2;
      }
      else
      {
        p_ptr = v107;
      }
      v29 = &p_ptr[2 * v28];
      *v29 = (__int64)v24;
      *((_DWORD *)v29 + 2) = 0;
      v30 = (unsigned int)v108;
      v31 = v108 + 1;
LABEL_45:
      LODWORD(v108) = v31;
      result = (unsigned int)(v31 - 1);
      v4 = p_ptr[2 * v30];
    }
    if ( v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v12 = *((_DWORD *)v11 + 2);
    v94 = *(_DWORD *)(v4 + 24);
    if ( v12 < v94 )
    {
      while ( 1 )
      {
        v13 = v12++;
        v14 = *(int **)(v4 + 8 * v13 + 32);
        *((_DWORD *)v11 + 2) = v12;
        if ( (unsigned int)v14[2] > 1 )
        {
          v15 = *v14;
          if ( (unsigned int)*v14 < *(_DWORD *)(a2 + 8) )
          {
            v17 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v15 >> 5));
            v18 = *v17;
            v16 = 1 << v15;
            if ( ((1 << v15) & *v17) != 0 )
              goto LABEL_22;
          }
          else
          {
            sub_186B510(a2 + 8, v15 + 1, 0);
            v16 = 1 << v15;
            v17 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v15 >> 5));
            v18 = *v17;
          }
          *v17 = v18 | v16;
        }
        v19 = *((_WORD *)v14 + 2);
        if ( v19 == 1 )
          goto LABEL_21;
        if ( v19 == 2 )
        {
          v49 = (unsigned int)v108;
          if ( (unsigned int)v108 >= HIDWORD(v108) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
            v68 = 0;
            v49 = (unsigned int)v108;
            if ( (_DWORD)v108 )
            {
              do
              {
                *(__m128i *)&p_ptr[v68] = _mm_loadu_si128((const __m128i *)&v107[v68]);
                v68 += 2;
              }
              while ( v68 != 2LL * (unsigned int)v108 );
            }
            if ( v107 != &ptr && v107 )
            {
              sub_186B220(v107);
              v49 = (unsigned int)v108;
            }
            v107 = p_ptr;
            HIDWORD(v108) *= 2;
          }
          else
          {
            p_ptr = v107;
          }
          v50 = &p_ptr[2 * v49];
          *((_DWORD *)v50 + 2) = 0;
          v30 = (unsigned int)v108;
          *v50 = (__int64)v14;
          v31 = v108 + 1;
          goto LABEL_45;
        }
        if ( v19 )
        {
          v20 = 73;
          sub_1872CE0("");
          goto LABEL_20;
        }
        if ( v14[6] )
        {
          v90 = v108;
          if ( (unsigned int)v108 >= HIDWORD(v108) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v108)));
            v92 = 0;
            v90 = v108;
            if ( (_DWORD)v108 )
            {
              do
              {
                *(__m128i *)&p_ptr[v92] = _mm_loadu_si128((const __m128i *)&v107[v92]);
                v92 += 2;
              }
              while ( v92 != 2LL * (unsigned int)v108 );
            }
            if ( v107 != &ptr && v107 )
            {
              sub_186B220(v107);
              v90 = v108;
            }
            v107 = p_ptr;
            HIDWORD(v108) *= 2;
          }
          else
          {
            p_ptr = v107;
          }
          v91 = &p_ptr[2 * v90];
          *((_DWORD *)v91 + 2) = 0;
          v30 = (unsigned int)v108;
          *v91 = (__int64)v14;
          v31 = v108 + 1;
          goto LABEL_45;
        }
        v32 = sub_15D1F10(v14);
        v33 = *(_DWORD *)(v32 + 12);
        v34 = *((unsigned int *)a1 + 4);
        v35 = (__m128i *)a1[1];
        v36 = v34 - 1;
        v37 = *((_DWORD *)a1 + 4);
        v38 = 16 * v34;
        v39 = (__m128i *)((char *)v35 + v38);
        v40 = 16LL * (v33 & v36);
        v41 = &v35[(unsigned __int64)v40 / 0x10];
        if ( v40 != v38 )
        {
          for ( i = (__int64)v35[(unsigned __int64)v40 / 0x10].m128i_i64; v39 != (__m128i *)i; i += 16 )
          {
            v43 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v43 + 12) == v33 && v32 == v43 )
              {
LABEL_79:
                v95 = *(_DWORD *)(i + 8);
                goto LABEL_80;
              }
            }
            else if ( !v43 )
            {
              goto LABEL_54;
            }
          }
        }
        if ( v35 != v41 )
        {
          for ( i = a1[1]; v41 != (__m128i *)i; i += 16 )
          {
            v66 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v66 + 12) == v33 && v32 == v66 )
                goto LABEL_79;
            }
            else if ( !v66 )
            {
              break;
            }
          }
        }
LABEL_54:
        v44 = 2 * v37;
        v95 = *((_DWORD *)a1 + 8);
        *((_DWORD *)a1 + 8) = v95 + 1;
        if ( 3 * v37 < (unsigned int)(4 * (*((_DWORD *)a1 + 5) + *((_DWORD *)a1 + 6))) )
        {
          v79 = v44;
          v101 = 2 * v37;
          v98 = 16LL * v44;
          v80 = (__m128i *)sub_186B270(v98);
          v81 = v101;
          v38 = v98;
          v35 = v80;
          v82 = &v80[v79];
          if ( v101 )
          {
            do
            {
              v80->m128i_i64[0] = 0;
              ++v80;
              v80[-1].m128i_i32[2] = 0;
            }
            while ( v80 != v82 );
          }
          v83 = v101 - 1;
          v39 = &v35[v98 / 0x10];
          v84 = (const __m128i *)a1[1];
          v85 = (__m128i *)&v84[*((unsigned int *)a1 + 4)];
          if ( v84 != v85 )
          {
            do
            {
              while ( v84->m128i_i64[0] <= 1uLL )
              {
                if ( v85 == ++v84 )
                  goto LABEL_152;
              }
              v86 = 16LL * (*(_DWORD *)(v84->m128i_i64[0] + 12) & (unsigned int)v83);
              v87 = &v35[(unsigned __int64)v86 / 0x10];
              if ( v98 == v86 )
              {
LABEL_160:
                if ( v35 == v87 )
                {
LABEL_172:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v88 = v35;
                while ( v88->m128i_i64[0] )
                {
                  if ( v87 == ++v88 )
                    goto LABEL_172;
                }
              }
              else
              {
                v88 = &v35[(unsigned __int64)v86 / 0x10];
                while ( v88->m128i_i64[0] )
                {
                  if ( v39 == ++v88 )
                    goto LABEL_160;
                }
              }
              v89 = _mm_loadu_si128(v84++);
              *v88 = v89;
            }
            while ( v85 != v84 );
LABEL_152:
            v85 = (__m128i *)a1[1];
          }
          if ( v85 )
          {
            v106 = v101;
            v105 = v101 - 1;
            v102 = v98;
            v99 = v35;
            sub_186B220(v85);
            v81 = v106;
            v83 = v105;
            v38 = v102;
            v35 = v99;
          }
          v33 = *(_DWORD *)(v32 + 12);
          a1[1] = (__int64)v35;
          v40 = 16LL * (v33 & (unsigned int)v83);
          *((_DWORD *)a1 + 4) = v81;
          *((_DWORD *)a1 + 6) = 0;
          v41 = &v35[(unsigned __int64)v40 / 0x10];
        }
        if ( v40 != v38 )
        {
          v45 = v41;
          v46 = nullptr;
          while ( 1 )
          {
            v47 = v45->m128i_i64[0];
            if ( v45->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v47 + 12) == v33 && v32 == v47 )
              {
                v45->m128i_i64[0] = v32;
                v45->m128i_i32[2] = v95;
                goto LABEL_80;
              }
            }
            else
            {
              if ( !v47 )
              {
                if ( v46 )
                  goto LABEL_168;
                v46 = v45;
                goto LABEL_169;
              }
              v46 = v45;
            }
            if ( ++v45 == v39 )
              goto LABEL_66;
          }
        }
        v46 = nullptr;
        while ( 1 )
        {
LABEL_66:
          if ( v35 == v41 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v48 = v35->m128i_i64[0];
          if ( v35->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v48 + 12) == v33 && v32 == v48 )
          {
            v35->m128i_i64[0] = v32;
            v35->m128i_i32[2] = v95;
            goto LABEL_80;
          }
LABEL_65:
          ++v35;
        }
        if ( v48 )
          break;
        if ( v46 )
LABEL_168:
          --*((_DWORD *)a1 + 6);
        else
          v46 = v35;
LABEL_169:
        v46->m128i_i64[0] = v32;
        v46->m128i_i32[2] = v95;
        ++*((_DWORD *)a1 + 5);
LABEL_80:
        v52 = *a1;
        v53 = *(unsigned int *)(*a1 + 8);
        v54 = 2 * v53;
        if ( 3 * (int)v53 < (unsigned int)(4 * (*(_DWORD *)(*a1 + 12) + *(_DWORD *)(*a1 + 16))) )
        {
          v69 = v54;
          v103 = *a1;
          v100 = 2 * v53;
          v96 = 16LL * v54;
          v70 = (__m128i *)sub_186B270(v96);
          v71 = v100;
          v57 = v96;
          v55 = v70;
          v52 = v103;
          v72 = &v70[v69];
          if ( v100 )
          {
            do
            {
              v70->m128i_i64[0] = 0;
              ++v70;
              v70[-1].m128i_i32[2] = 0;
            }
            while ( v70 != v72 );
          }
          v73 = *(const __m128i **)v103;
          v56 = v100 - 1;
          v58 = &v55[v96 / 0x10];
          v74 = (__m128i *)(*(_QWORD *)v103 + 16LL * *(unsigned int *)(v103 + 8));
          if ( *(__m128i **)v103 != v74 )
          {
            do
            {
              while ( v73->m128i_i64[0] <= 1uLL )
              {
                if ( v74 == ++v73 )
                  goto LABEL_129;
              }
              v75 = 16LL * (*(_DWORD *)(v73->m128i_i64[0] + 12) & v56);
              v76 = &v55[(unsigned __int64)v75 / 0x10];
              if ( v96 == v75 )
              {
LABEL_133:
                if ( v55 == v76 )
                {
LABEL_157:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v77 = v55;
                while ( v77->m128i_i64[0] )
                {
                  if ( v76 == ++v77 )
                    goto LABEL_157;
                }
              }
              else
              {
                v77 = &v55[(unsigned __int64)v75 / 0x10];
                while ( v77->m128i_i64[0] )
                {
                  if ( v58 == ++v77 )
                    goto LABEL_133;
                }
              }
              v78 = _mm_loadu_si128(v73++);
              *v77 = v78;
            }
            while ( v74 != v73 );
LABEL_129:
            v74 = *(__m128i **)v103;
          }
          if ( v74 )
          {
            v104 = v96;
            v97 = v52;
            sub_186B220(v74);
            v71 = v100;
            v57 = v104;
            v56 = v100 - 1;
            v52 = v97;
          }
          *(_QWORD *)v52 = v55;
          *(_DWORD *)(v52 + 8) = v71;
          *(_DWORD *)(v52 + 16) = 0;
        }
        else
        {
          v55 = *(__m128i **)v52;
          v56 = v53 - 1;
          v57 = 16 * v53;
          v58 = (__m128i *)(*(_QWORD *)v52 + v57);
        }
        v59 = v14[3];
        v60 = 16LL * (v59 & v56);
        v61 = &v55[(unsigned __int64)v60 / 0x10];
        if ( v60 != v57 )
        {
          v62 = &v55[(unsigned __int64)v60 / 0x10];
          v63 = nullptr;
          while ( 1 )
          {
            v64 = (int *)v62->m128i_i64[0];
            if ( v62->m128i_i64[0] > 1uLL )
            {
              if ( v64[3] == v59 && v14 == v64 )
              {
                v62->m128i_i64[0] = (__int64)v14;
                v62->m128i_i32[2] = v95;
                goto LABEL_21;
              }
            }
            else
            {
              if ( !v64 )
              {
                if ( v63 )
                  goto LABEL_139;
                v63 = v62;
                goto LABEL_140;
              }
              v63 = v62;
            }
            if ( ++v62 == v58 )
              goto LABEL_93;
          }
        }
        v63 = nullptr;
LABEL_93:
        while ( 2 )
        {
          if ( v61 == v55 )
          {
            v20 = 405;
            sub_1872CE0("");
LABEL_20:
            sub_1873130(114, v20);
          }
          v65 = v55->m128i_i64[0];
          if ( v55->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v65 + 12) == v59 && v14 == (int *)v65 )
            {
              v55->m128i_i64[0] = (__int64)v14;
              v55->m128i_i32[2] = v95;
              goto LABEL_21;
            }
            goto LABEL_92;
          }
          if ( v65 )
          {
            v63 = v55;
LABEL_92:
            ++v55;
            continue;
          }
          break;
        }
        if ( v63 )
LABEL_139:
          --*(_DWORD *)(v52 + 16);
        else
          v63 = v55;
LABEL_140:
        v63->m128i_i64[0] = (__int64)v14;
        v63->m128i_i32[2] = v95;
        ++*(_DWORD *)(v52 + 12);
LABEL_21:
        v12 = *((_DWORD *)v11 + 2);
LABEL_22:
        if ( v12 >= v94 )
        {
          LODWORD(result) = v108 - 1;
          goto LABEL_24;
        }
      }
      v46 = v35;
      goto LABEL_65;
    }
LABEL_24:
    LODWORD(v108) = result;
    sub_CD9280(a1, v4);
    result = (unsigned int)v108;
    p_ptr = v107;
    if ( !(_DWORD)v108 )
      break;
LABEL_29:
    result = (unsigned int)(result - 1);
  }
LABEL_32:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

