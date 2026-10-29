__int64 __fastcall sub_B8D560(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // r12
  void *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rsi
  _QWORD *v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  void *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // ebp
  size_t v33; // rsi
  unsigned int *v34; // rax
  _DWORD *v35; // rdi
  __int64 v36; // rax
  size_t v37; // rdi
  __int64 v38; // rax
  int *v39; // r15
  _DWORD *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdx
  int *v43; // rax
  int *v44; // rsi
  int v45; // ecx
  char v46; // di
  __int64 v47; // rcx
  char v48; // di
  __int64 v49; // rcx
  __int64 v50; // rax
  void *v51; // r12
  int *v52; // rsi
  unsigned int v53; // r12d
  size_t v54; // rdi
  __int64 v55; // rax
  __int64 *v56; // r14
  _DWORD *v57; // r15
  __int64 v58; // r9
  __int64 *v59; // r11
  unsigned __int64 v60; // rdi
  __int64 *v61; // r10
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdi
  __m128i v64; // xmm0
  unsigned __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 *v67; // r12
  void *v68; // rdi
  unsigned int v69; // r12d
  size_t v70; // rdi
  __int64 v71; // rax
  __int64 *v72; // r12
  __int64 *v73; // r15
  __int64 v74; // r10
  __int64 *v75; // r11
  unsigned __int64 v76; // r8
  __int64 *v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r8
  __m128i v80; // xmm0
  unsigned __int64 v81; // r8
  __int64 v82; // rdi
  __int64 *v83; // r14
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // r13
  void *v87; // rbx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // rsi
  char **exception; // rbx
  char **v99; // rbp
  int *v100; // [rsp+0h] [rbp-98h]
  unsigned int v101; // [rsp+0h] [rbp-98h]
  unsigned int v102; // [rsp+0h] [rbp-98h]
  unsigned int v104; // [rsp+14h] [rbp-84h]
  __int64 *v105; // [rsp+18h] [rbp-80h]
  __int64 v106; // [rsp+20h] [rbp-78h] BYREF
  __int64 v107; // [rsp+28h] [rbp-70h]
  __int64 v108; // [rsp+30h] [rbp-68h] BYREF
  __int64 v109; // [rsp+38h] [rbp-60h]
  __int64 v110; // [rsp+40h] [rbp-58h] BYREF
  __int64 v111; // [rsp+48h] [rbp-50h]
  __int64 v112; // [rsp+50h] [rbp-48h] BYREF
  __int64 v113; // [rsp+58h] [rbp-40h]

  result = *(_QWORD *)(a1 + 48);
  if ( !result
    || a2 >= *(_DWORD *)(result - 4)
    || ((v92 = *(_QWORD *)(result + 8LL * a2)) == 0 || !*(_DWORD *)(v92 - 4))
    && ((v93 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2)) == 0 || !*(_DWORD *)(v93 - 4)) )
  {
    v105 = (__int64 *)(a1 + 24);
    while ( !result || a2 >= *(_DWORD *)(result - 4) )
    {
      v110 = 0;
      v30 = *(_QWORD *)(a1 + 24);
      v111 = 0;
      v112 = 1;
      v113 = 0;
      if ( !v30 || (v31 = *(unsigned int *)(v30 - 4), (_DWORD)v31 == *(_DWORD *)(v30 - 8)) )
      {
        sub_53D790(v105);
        v30 = *(_QWORD *)(a1 + 24);
        v31 = *(unsigned int *)(v30 - 4);
      }
      v4 = v30 + 32 * v31;
      *(_DWORD *)v4 = v110;
      v5 = qword_1C7F2C0;
      v6 = qword_1C7F2C0;
      *(_BYTE *)(v4 + 4) = BYTE4(v110) & 3 | *(_BYTE *)(v4 + 4) & 0xFC;
      v7 = v111;
      v111 = 0;
      *(_QWORD *)(v4 + 8) = v7;
      *(_DWORD *)(v4 + 16) = v112;
      *(_BYTE *)(v4 + 20) = BYTE4(v112) & 3 | *(_BYTE *)(v4 + 20) & 0xFC;
      v8 = v113;
      v113 = 0;
      *(_QWORD *)(v4 + 24) = v8;
      ++*(_DWORD *)(v30 - 4);
      sub_182CBA0(v6, &v110);
      sub_182CBA0(v5, &v112);
      v9 = *(_QWORD *)(a1 + 48);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 - 4);
        if ( v10 == *(_DWORD *)(v9 - 8) )
        {
          v69 = (3 * v10 + 1) >> 1;
          v70 = 8 * v69 + 8;
          v102 = v69;
          if ( 8 * v10 + 8 >= (unsigned int)v70 || v10 >= v69 )
          {
LABEL_99:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B75C60(&v110, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v110);
            sub_233E40((__int64)&v110);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = sub_186B270(v70);
          v72 = *(__int64 **)(a1 + 48);
          v73 = (__int64 *)v71;
          v9 = v71 + 8;
          if ( v72 )
          {
            v74 = *((unsigned int *)v72 - 1);
            *(_DWORD *)(v71 + 4) = v74;
            v75 = &v72[v74];
            if ( v72 != v75 )
            {
              v76 = 8 * v74 - 8;
              v77 = v72;
              if ( v76 <= 8 || v72 < v73 + 3 && v9 < (unsigned __int64)(v72 + 2) )
              {
                v94 = v9;
                do
                {
                  v95 = *v77;
                  *v77++ = 0;
                  v94 += 8LL;
                  *(_QWORD *)(v94 - 8) = v95;
                }
                while ( v77 != v75 );
              }
              else
              {
                v78 = 0;
                v79 = (v76 >> 3) + 1;
                do
                {
                  v80 = _mm_loadu_si128((const __m128i *)&v72[v78]);
                  *(_OWORD *)&v72[v78] = 0;
                  *(__m128i *)&v73[v78 + 1] = v80;
                  v78 += 2LL;
                }
                while ( 2 * (v79 >> 1) != v78 );
                if ( (v79 & 1) != 0 )
                {
                  v81 = v79 & 0xFFFFFFFFFFFFFFFELL;
                  v82 = v72[v81];
                  v72[v81] = 0;
                  v73[v81 + 1] = v82;
                }
              }
            }
            v83 = &v72[v74];
            if ( (_DWORD)v74 )
            {
              do
              {
                while ( *v72 )
                {
                  v84 = (void *)(*v72++ - 8);
                  sub_186B220(v84);
                  if ( v83 == v72 )
                    goto LABEL_71;
                }
                ++v72;
              }
              while ( v83 != v72 );
LABEL_71:
              v72 = *(__int64 **)(a1 + 48);
            }
            sub_186B220(v72 - 1);
            v13 = (_QWORD *)(v9 + 8LL * *((unsigned int *)v73 + 1));
            v12 = *((_DWORD *)v73 + 1) + 1;
          }
          else
          {
            *(_DWORD *)(v71 + 4) = 0;
            v13 = (_QWORD *)(v71 + 8);
            v12 = 1;
          }
          *(_QWORD *)(a1 + 48) = v9;
          *(_DWORD *)v73 = v102;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = (_QWORD *)(v9 + 8 * v11);
        }
      }
      else
      {
        v90 = (_QWORD *)sub_186B270(0x18u);
        v9 = (unsigned __int64)(v90 + 1);
        *v90 = 2;
        v12 = 1;
        *(_QWORD *)(a1 + 48) = v9;
        v13 = (_QWORD *)v9;
      }
      *v13 = 0;
      *(_DWORD *)(v9 - 4) = v12;
      v14 = *(_QWORD *)(a1 + 56);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 - 4);
        if ( v15 == *(_DWORD *)(v14 - 8) )
        {
          v53 = (3 * v15 + 1) >> 1;
          v54 = 8 * v53 + 8;
          v101 = v53;
          if ( 8 * v15 + 8 >= (unsigned int)v54 || v15 >= v53 )
            goto LABEL_99;
          v55 = sub_186B270(v54);
          v56 = *(__int64 **)(a1 + 56);
          v57 = (_DWORD *)v55;
          v14 = v55 + 8;
          if ( v56 )
          {
            v58 = *((unsigned int *)v56 - 1);
            *(_DWORD *)(v55 + 4) = v58;
            v59 = &v56[v58];
            if ( v59 != v56 )
            {
              v60 = 8 * v58 - 8;
              v61 = v56;
              if ( v60 <= 8 || (unsigned __int64)v56 < v55 + 24 && v14 < (unsigned __int64)(v56 + 2) )
              {
                v96 = v55 + 8;
                do
                {
                  v97 = *v61;
                  *v61++ = 0;
                  v96 += 8;
                  *(_QWORD *)(v96 - 8) = v97;
                }
                while ( v59 != v61 );
              }
              else
              {
                v62 = 0;
                v63 = (v60 >> 3) + 1;
                do
                {
                  v64 = _mm_loadu_si128((const __m128i *)&v56[v62 / 2]);
                  *(_OWORD *)&v56[v62 / 2] = 0;
                  *(__m128i *)&v57[v62 + 2] = v64;
                  v62 += 4LL;
                }
                while ( v62 != 4 * (v63 >> 1) );
                if ( (v63 & 1) != 0 )
                {
                  v65 = 2 * (v63 & 0xFFFFFFFFFFFFFFFELL);
                  v66 = v56[v65 / 2];
                  v56[v65 / 2] = 0;
                  *(_QWORD *)&v57[v65 + 2] = v66;
                }
              }
            }
            v67 = &v56[v58];
            if ( (_DWORD)v58 )
            {
              do
              {
                while ( *v56 )
                {
                  v68 = (void *)(*v56++ - 8);
                  sub_186B220(v68);
                  if ( v56 == v67 )
                    goto LABEL_52;
                }
                ++v56;
              }
              while ( v56 != v67 );
LABEL_52:
              v56 = *(__int64 **)(a1 + 56);
            }
            sub_186B220(v56 - 1);
            v18 = (_QWORD *)(v14 + 8LL * (unsigned int)v57[1]);
            v17 = v57[1] + 1;
          }
          else
          {
            *(_DWORD *)(v55 + 4) = 0;
            v18 = (_QWORD *)(v55 + 8);
            v17 = 1;
          }
          *(_QWORD *)(a1 + 56) = v14;
          *v57 = v101;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = (_QWORD *)(v14 + 8 * v16);
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v14 = (unsigned __int64)(v91 + 1);
        *v91 = 2;
        v17 = 1;
        *(_QWORD *)(a1 + 56) = v14;
        v18 = (_QWORD *)v14;
      }
      *v18 = 0;
      *(_DWORD *)(v14 - 4) = v17;
      v19 = *(_QWORD **)(a1 + 72);
      v106 = 0;
      v107 = 0;
      v108 = 1;
      v109 = 0;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
        {
          v104 = (unsigned int)(3 * v20 + 1) >> 1;
          v37 = 32 * v104 + 8;
          if ( 32 * (int)v20 + 8 >= (unsigned int)v37 || (unsigned int)v20 >= (unsigned int)(3 * v20 + 1) >> 1 )
          {
            v99 = (char **)__cxa_allocate_exception(0x28u);
            sub_B75C60(&v110, "Overflow encountered when expanding vector");
            *v99 = (char *)off_1C63128;
            sub_2333C0(v99 + 1, &v110);
            sub_233E40((__int64)&v110);
            __cxa_throw(v99, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v38 = sub_186B270(v37);
          v39 = *(int **)(a1 + 72);
          v40 = (_DWORD *)v38;
          v19 = (_QWORD *)(v38 + 8);
          if ( v39 )
          {
            v41 = (unsigned int)*(v39 - 1);
            v42 = v38 + 8;
            *(_DWORD *)(v38 + 4) = v41;
            v43 = v39;
            v44 = &v39[8 * v41];
            if ( v44 != v39 )
            {
              do
              {
                v45 = *v43;
                v46 = *((_BYTE *)v43 + 4);
                v43 += 8;
                v42 += 32;
                *(_DWORD *)(v42 - 32) = v45;
                *(_BYTE *)(v42 - 28) = v46 & 3 | *(_BYTE *)(v42 - 28) & 0xFC;
                v47 = *((_QWORD *)v43 - 3);
                *((_QWORD *)v43 - 3) = 0;
                *(_QWORD *)(v42 - 24) = v47;
                v48 = *((_BYTE *)v43 - 12);
                *(_DWORD *)(v42 - 16) = *(v43 - 4);
                *(_BYTE *)(v42 - 12) = v48 & 3 | *(_BYTE *)(v42 - 12) & 0xFC;
                v49 = *((_QWORD *)v43 - 1);
                *((_QWORD *)v43 - 1) = 0;
                *(_QWORD *)(v42 - 8) = v49;
              }
              while ( v43 != v44 );
            }
            v50 = (unsigned int)*(v39 - 1);
            v100 = &v39[8 * v50];
            if ( (_DWORD)v50 )
            {
              do
              {
                v51 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v39);
                v52 = v39 + 4;
                v39 += 8;
                sub_182CBA0(v51, v52);
              }
              while ( v100 != v39 );
              v39 = *(int **)(a1 + 72);
            }
            sub_186B220(v39 - 2);
            v21 = &v19[4 * (unsigned int)v40[1]];
          }
          else
          {
            *(_DWORD *)(v38 + 4) = 0;
            v21 = (_QWORD *)(v38 + 8);
          }
          *(_QWORD *)(a1 + 72) = v19;
          *v40 = v104;
        }
        else
        {
          v21 = &v19[4 * v20];
        }
      }
      else
      {
        v89 = (_QWORD *)sub_186B270(0x48u);
        v19 = v89 + 1;
        *v89 = 2;
        *(_QWORD *)(a1 + 72) = v89 + 1;
        v21 = v89 + 1;
      }
      v22 = qword_1C7F2C0;
      *(_DWORD *)v21 = v106;
      *((_BYTE *)v21 + 4) = BYTE4(v106) & 3 | *((_BYTE *)v21 + 4) & 0xFC;
      v23 = v107;
      v107 = 0;
      v21[1] = v23;
      *((_DWORD *)v21 + 4) = v108;
      *((_BYTE *)v21 + 20) = BYTE4(v108) & 3 | *((_BYTE *)v21 + 20) & 0xFC;
      v24 = v109;
      v109 = 0;
      v21[3] = v24;
      ++*((_DWORD *)v19 - 1);
      sub_182CBA0(v22, &v106);
      sub_182CBA0(v22, &v108);
      v25 = *(_QWORD *)(a1 + 80);
      if ( v25 )
      {
        v26 = *(unsigned int *)(v25 - 4);
        if ( (_DWORD)v26 == *(_DWORD *)(v25 - 8) )
        {
          v32 = (unsigned int)(3 * v26 + 1) >> 1;
          v33 = v32 + 8;
          if ( (int)v26 + 8 >= (unsigned int)v33 || (unsigned int)v26 >= v32 )
            goto LABEL_99;
          v34 = (unsigned int *)sub_186B300((void *)(v25 - 8), v33);
          v35 = v34 + 2;
          *v34 = v32;
          v36 = v34[1];
          *(_QWORD *)(a1 + 80) = v35;
          v27 = (char *)v35 + v36;
        }
        else
        {
          v27 = (_BYTE *)(v26 + v25);
        }
      }
      else
      {
        v88 = (_QWORD *)sub_186B270(0xAu);
        *v88 = 2;
        v27 = v88 + 1;
        *(_QWORD *)(a1 + 80) = v88 + 1;
      }
      *v27 = 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 80) - 4LL);
      v28 = *(_QWORD *)(a1 + 88);
      if ( !v28 || (v29 = *(unsigned int *)(v28 - 4), (_DWORD)v29 == *(_DWORD *)(v28 - 8)) )
      {
        sub_313C10((unsigned int **)(a1 + 88));
        v28 = *(_QWORD *)(a1 + 88);
        v29 = *(unsigned int *)(v28 - 4);
      }
      *(_DWORD *)(v28 + 4 * v29) = -1;
      ++*(_DWORD *)(v28 - 4);
      result = *(_QWORD *)(a1 + 48);
    }
    v85 = *(_QWORD *)(a1 + 120);
    if ( !v85 || a2 >= *(_DWORD *)(v85 - 4) )
      sub_8C3430((_QWORD *)(a1 + 120), a2 + 1, 0);
    v86 = *(_QWORD *)(a1 + 24) + 32LL * a2;
    v87 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v86);
    result = sub_182CBA0(v87, v86 + 16);
    *(_BYTE *)(v86 + 20) &= ~1u;
    *(_DWORD *)(v86 + 16) = 1;
  }
  return result;
}

