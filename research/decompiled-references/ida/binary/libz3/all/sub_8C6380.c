__int64 __fastcall sub_8C6380(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rdx
  unsigned int v4; // ebp
  __int64 **v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // ebx
  size_t v31; // rsi
  unsigned int *v32; // rax
  _DWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // ebx
  size_t v37; // rsi
  unsigned int *v38; // rax
  _DWORD *v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // ebx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r14d
  size_t v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 *v49; // r12
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 *v52; // r10
  unsigned __int64 v53; // rsi
  __int64 *v54; // r9
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __m128i v57; // xmm0
  unsigned __int64 v58; // rsi
  __int64 *v59; // rax
  __int64 v60; // r9
  __int64 *v61; // r14
  void *v62; // rdi
  unsigned int v63; // r14d
  size_t v64; // rdi
  __int64 v65; // rax
  __int64 *v66; // rbx
  __int64 *v67; // r12
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 *v70; // r10
  unsigned __int64 v71; // rsi
  __int64 *v72; // r9
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rsi
  __m128i v75; // xmm0
  unsigned __int64 v76; // rsi
  __int64 *v77; // rax
  __int64 v78; // r9
  __int64 *v79; // r14
  void *v80; // rdi
  __int64 v81; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // rsi
  unsigned int v91; // ebx
  unsigned int v92; // eax
  unsigned int *v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  char **exception; // rbp
  __int64 v97; // rdx
  unsigned int v99; // [rsp+8h] [rbp-60h]
  unsigned int v100; // [rsp+8h] [rbp-60h]
  unsigned int v101; // [rsp+Ch] [rbp-5Ch]
  __int64 v102[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 32);
  if ( v3 )
  {
    v4 = *((_DWORD *)v3 - 1);
    v101 = v4;
    if ( v4 == *((_DWORD *)v3 - 2) )
    {
      v91 = (3 * v4 + 1) >> 1;
      v92 = 8 * v91 + 8;
      if ( 8 * v4 + 8 >= v92 || v4 >= v91 )
      {
LABEL_101:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v102, "Overflow encountered when expanding vector", v97);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (unsigned int *)sub_186B300(v3 - 1, v92);
      v94 = v93[1];
      v3 = v93 + 2;
      *v93 = v91;
      *(_QWORD *)(a1 + 32) = v93 + 2;
      LODWORD(v93) = v94;
      v5 = (__int64 **)&v3[v94];
      v6 = (_DWORD)v93 + 1;
    }
    else
    {
      v5 = (__int64 **)&v3[v4];
      v6 = v4 + 1;
    }
  }
  else
  {
    v4 = 0;
    v95 = (_QWORD *)sub_186B270(0x18u);
    v101 = 0;
    v3 = v95 + 1;
    *v95 = 2;
    v6 = 1;
    *(_QWORD *)(a1 + 32) = v3;
    v5 = (__int64 **)v3;
  }
  v7 = *(_QWORD *)(a1 + 232);
  *v5 = a2;
  *((_DWORD *)v3 - 1) = v6;
  if ( !v7
    || v4 >= *(_DWORD *)(v7 - 4)
    || ((v8 = *(_QWORD *)(v7 + 8LL * v4)) == 0 || !*(_DWORD *)(v8 - 4))
    && ((v9 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL * v4)) == 0 || !*(_DWORD *)(v9 - 4)) )
  {
    while ( 1 )
    {
      if ( v7 && v4 < *(_DWORD *)(v7 - 4) )
      {
        v81 = *(_QWORD *)(a1 + 304);
        if ( !v81 || v4 >= *(_DWORD *)(v81 - 4) )
          sub_8C3430((_QWORD *)(a1 + 304), v101 + 1, 0);
        *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * v4) = 0;
        goto LABEL_83;
      }
      v28 = *(_QWORD **)(a1 + 208);
      if ( !v28 )
        break;
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 != *((_DWORD *)v28 - 2) )
      {
        v10 = (_DWORD *)v28 + v29;
        goto LABEL_12;
      }
      v30 = (unsigned int)(3 * v29 + 1) >> 1;
      v31 = 4 * v30 + 8;
      if ( 4 * (int)v29 + 8 >= (unsigned int)v31 || (unsigned int)v29 >= v30 )
        goto LABEL_101;
      v32 = (unsigned int *)sub_186B300(v28 - 1, v31);
      v7 = *(_QWORD *)(a1 + 232);
      v33 = v32 + 2;
      *v32 = v30;
      v34 = v32[1];
      *(_QWORD *)(a1 + 208) = v33;
      v33[v34] = 0;
      ++*(v33 - 1);
      if ( !v7 )
      {
LABEL_34:
        v35 = (_QWORD *)sub_186B270(0x18u);
        v7 = (unsigned __int64)(v35 + 1);
        *v35 = 2;
        v13 = 1;
        *(_QWORD *)(a1 + 232) = v7;
        v14 = (_QWORD *)v7;
        goto LABEL_15;
      }
LABEL_13:
      v11 = *(_DWORD *)(v7 - 4);
      if ( v11 == *(_DWORD *)(v7 - 8) )
      {
        v63 = (3 * v11 + 1) >> 1;
        v64 = 8 * v63 + 8;
        v100 = v63;
        if ( 8 * v11 + 8 >= (unsigned int)v64 || v11 >= v63 )
          goto LABEL_101;
        v65 = sub_186B270(v64);
        v66 = *(__int64 **)(a1 + 232);
        v67 = (__int64 *)v65;
        v7 = v65 + 8;
        if ( v66 )
        {
          v68 = *((unsigned int *)v66 - 1);
          *(_DWORD *)(v65 + 4) = v68;
          v69 = 8 * v68;
          v70 = &v66[v68];
          if ( v66 != v70 )
          {
            v71 = v69 - 8;
            v72 = v66;
            if ( (unsigned __int64)(v69 - 8) <= 8 || v7 < (unsigned __int64)(v66 + 2) && v66 < v67 + 3 )
            {
              v87 = v7;
              do
              {
                v88 = *v72;
                *v72++ = 0;
                v87 += 8LL;
                *(_QWORD *)(v87 - 8) = v88;
              }
              while ( v72 != v70 );
            }
            else
            {
              v73 = 0;
              v74 = (v71 >> 3) + 1;
              do
              {
                v75 = _mm_loadu_si128((const __m128i *)&v66[v73]);
                *(_OWORD *)&v66[v73] = 0;
                *(__m128i *)&v67[v73 + 1] = v75;
                v73 += 2LL;
              }
              while ( v73 != 2 * (v74 >> 1) );
              if ( (v74 & 1) != 0 )
              {
                v76 = v74 & 0xFFFFFFFFFFFFFFFELL;
                v77 = &v66[v76];
                v78 = *v77;
                *v77 = 0;
                *(_QWORD *)(v7 + 8 * v76) = v78;
              }
            }
          }
          v79 = &v66[v68];
          if ( (_DWORD)v68 )
          {
            do
            {
              while ( *v66 )
              {
                v80 = (void *)(*v66++ - 8);
                sub_186B220(v80);
                if ( v66 == v79 )
                  goto LABEL_75;
              }
              ++v66;
            }
            while ( v66 != v79 );
LABEL_75:
            v66 = *(__int64 **)(a1 + 232);
          }
          sub_186B220(v66 - 1);
          v14 = (_QWORD *)(v7 + 8LL * *((unsigned int *)v67 + 1));
          v13 = *((_DWORD *)v67 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v65 + 4) = 0;
          v14 = (_QWORD *)(v65 + 8);
          v13 = 1;
        }
        *(_QWORD *)(a1 + 232) = v7;
        *(_DWORD *)v67 = v100;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = (_QWORD *)(v7 + 8 * v12);
      }
LABEL_15:
      *v14 = 0;
      *(_DWORD *)(v7 - 4) = v13;
      v15 = *(_QWORD *)(a1 + 240);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 - 4);
        if ( v16 == *(_DWORD *)(v15 - 8) )
        {
          v45 = (3 * v16 + 1) >> 1;
          v46 = 8 * v45 + 8;
          v99 = v45;
          if ( 8 * v16 + 8 >= (unsigned int)v46 || v16 >= v45 )
            goto LABEL_101;
          v47 = sub_186B270(v46);
          v48 = *(__int64 **)(a1 + 240);
          v49 = (__int64 *)v47;
          v15 = v47 + 8;
          if ( v48 )
          {
            v50 = *((unsigned int *)v48 - 1);
            *(_DWORD *)(v47 + 4) = v50;
            v51 = 8 * v50;
            v52 = &v48[v50];
            if ( v48 != v52 )
            {
              v53 = v51 - 8;
              v54 = v48;
              if ( (unsigned __int64)(v51 - 8) <= 8 || v15 < (unsigned __int64)(v48 + 2) && v48 < v49 + 3 )
              {
                v89 = v15;
                do
                {
                  v90 = *v54;
                  *v54++ = 0;
                  v89 += 8LL;
                  *(_QWORD *)(v89 - 8) = v90;
                }
                while ( v52 != v54 );
              }
              else
              {
                v55 = 0;
                v56 = (v53 >> 3) + 1;
                do
                {
                  v57 = _mm_loadu_si128((const __m128i *)&v48[v55]);
                  *(_OWORD *)&v48[v55] = 0;
                  *(__m128i *)&v49[v55 + 1] = v57;
                  v55 += 2LL;
                }
                while ( 2 * (v56 >> 1) != v55 );
                if ( (v56 & 1) != 0 )
                {
                  v58 = v56 & 0xFFFFFFFFFFFFFFFELL;
                  v59 = &v48[v58];
                  v60 = *v59;
                  *v59 = 0;
                  *(_QWORD *)(v15 + 8 * v58) = v60;
                }
              }
            }
            v61 = &v48[v50];
            if ( (_DWORD)v50 )
            {
              do
              {
                while ( *v48 )
                {
                  v62 = (void *)(*v48++ - 8);
                  sub_186B220(v62);
                  if ( v48 == v61 )
                    goto LABEL_56;
                }
                ++v48;
              }
              while ( v48 != v61 );
LABEL_56:
              v48 = *(__int64 **)(a1 + 240);
            }
            sub_186B220(v48 - 1);
            v19 = (_QWORD *)(v15 + 8LL * *((unsigned int *)v49 + 1));
            v18 = *((_DWORD *)v49 + 1) + 1;
          }
          else
          {
            *(_DWORD *)(v47 + 4) = 0;
            v19 = (_QWORD *)(v47 + 8);
            v18 = 1;
          }
          *(_QWORD *)(a1 + 240) = v15;
          *(_DWORD *)v49 = v99;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = (_QWORD *)(v15 + 8 * v17);
        }
      }
      else
      {
        v86 = (_QWORD *)sub_186B270(0x18u);
        v15 = (unsigned __int64)(v86 + 1);
        *v86 = 2;
        v18 = 1;
        *(_QWORD *)(a1 + 240) = v15;
        v19 = (_QWORD *)v15;
      }
      v20 = *(_QWORD **)(a1 + 256);
      *v19 = 0;
      *(_DWORD *)(v15 - 4) = v18;
      if ( v20 )
      {
        v21 = *((unsigned int *)v20 - 1);
        if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
        {
          v41 = (unsigned int)(3 * v21 + 1) >> 1;
          v42 = 4 * v41 + 8;
          if ( 4 * (int)v21 + 8 >= (unsigned int)v42 || (unsigned int)v21 >= v41 )
            goto LABEL_101;
          v43 = (unsigned int *)sub_186B300(v20 - 1, v42);
          v20 = v43 + 2;
          *v43 = v41;
          v44 = v43[1];
          *(_QWORD *)(a1 + 256) = v20;
          v22 = (_DWORD *)v20 + v44;
        }
        else
        {
          v22 = (_DWORD *)v20 + v21;
        }
      }
      else
      {
        v85 = (_QWORD *)sub_186B270(0x10u);
        v20 = v85 + 1;
        *v85 = 2;
        *(_QWORD *)(a1 + 256) = v85 + 1;
        v22 = v85 + 1;
      }
      *v22 = 0;
      ++*((_DWORD *)v20 - 1);
      v23 = *(_QWORD *)(a1 + 264);
      if ( v23 )
      {
        v24 = *(unsigned int *)(v23 - 4);
        if ( (_DWORD)v24 == *(_DWORD *)(v23 - 8) )
        {
          v36 = (unsigned int)(3 * v24 + 1) >> 1;
          v37 = v36 + 8;
          if ( (int)v24 + 8 >= (unsigned int)v37 || (unsigned int)v24 >= v36 )
            goto LABEL_101;
          v38 = (unsigned int *)sub_186B300((void *)(v23 - 8), v37);
          v39 = v38 + 2;
          *v38 = v36;
          v40 = v38[1];
          *(_QWORD *)(a1 + 264) = v39;
          v25 = (char *)v39 + v40;
        }
        else
        {
          v25 = (_BYTE *)(v24 + v23);
        }
      }
      else
      {
        v84 = (_QWORD *)sub_186B270(0xAu);
        *v84 = 2;
        v25 = v84 + 1;
        *(_QWORD *)(a1 + 264) = v84 + 1;
      }
      *v25 = 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 264) - 4LL);
      v26 = *(_QWORD *)(a1 + 272);
      if ( !v26 || (v27 = *(unsigned int *)(v26 - 4), (_DWORD)v27 == *(_DWORD *)(v26 - 8)) )
      {
        sub_313C10((unsigned int **)(a1 + 272));
        v26 = *(_QWORD *)(a1 + 272);
        v27 = *(unsigned int *)(v26 - 4);
      }
      *(_DWORD *)(v26 + 4 * v27) = -1;
      v7 = *(_QWORD *)(a1 + 232);
      ++*(_DWORD *)(v26 - 4);
    }
    v83 = (_QWORD *)sub_186B270(0x10u);
    v7 = *(_QWORD *)(a1 + 232);
    v28 = v83 + 1;
    *v83 = 2;
    *(_QWORD *)(a1 + 208) = v83 + 1;
    v10 = v83 + 1;
LABEL_12:
    *v10 = 0;
    ++*((_DWORD *)v28 - 1);
    if ( !v7 )
      goto LABEL_34;
    goto LABEL_13;
  }
LABEL_83:
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v101);
  sub_89C350(a1, *a2);
  return v101;
}

