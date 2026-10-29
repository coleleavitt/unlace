__int64 __fastcall sub_8CFF60(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  void *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned int v9; // edx
  _QWORD *v10; // rdi
  int v11; // esi
  unsigned __int64 v12; // r14
  unsigned int v13; // edx
  _QWORD *v14; // rdi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  void *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  _DWORD *v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // r15d
  size_t v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // rbx
  _DWORD *v40; // r15
  __int64 v41; // r10
  __int64 *v42; // r9
  unsigned __int64 v43; // rsi
  __int64 *v44; // rdi
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  __m128i v47; // xmm0
  unsigned __int64 v48; // rsi
  __int64 *v49; // rdi
  __int64 v50; // r9
  __int64 *v51; // rbp
  void *v52; // rdi
  unsigned int v53; // r15d
  size_t v54; // rdi
  __int64 v55; // rax
  __int64 *v56; // rbx
  _DWORD *v57; // r15
  __int64 v58; // r10
  __int64 *v59; // r9
  unsigned __int64 v60; // rsi
  __int64 *v61; // rdi
  __int64 v62; // rdi
  unsigned __int64 v63; // rsi
  __m128i v64; // xmm0
  unsigned __int64 v65; // rsi
  __int64 v66; // r9
  __int64 *v67; // rbp
  void *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rbx
  void *v71; // rbp
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  char **exception; // rbx
  __int64 v83; // rdx
  unsigned int v85; // [rsp+Ch] [rbp-7Ch]
  unsigned int v86; // [rsp+Ch] [rbp-7Ch]
  __int64 *v87; // [rsp+10h] [rbp-78h]
  __int64 v88; // [rsp+20h] [rbp-68h] BYREF
  __int64 v89; // [rsp+28h] [rbp-60h]
  __int64 v90; // [rsp+30h] [rbp-58h] BYREF
  __int64 v91; // [rsp+38h] [rbp-50h]
  int v92; // [rsp+40h] [rbp-48h]

  result = *(_QWORD *)(a1 + 48);
  if ( !result
    || a2 >= *(_DWORD *)(result - 4)
    || ((v75 = a2, (v76 = *(_QWORD *)(result + 8LL * a2)) == 0) || !*(_DWORD *)(v76 - 4))
    && ((v77 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v75)) == 0 || !*(_DWORD *)(v77 - 4)) )
  {
    v87 = (__int64 *)(a1 + 24);
    while ( !result || a2 >= *(_DWORD *)(result - 4) )
    {
      v28 = *(_QWORD *)(a1 + 24);
      v88 = 0;
      v89 = 0;
      v90 = 1;
      v91 = 0;
      v92 = 0;
      if ( !v28 || (v29 = *(unsigned int *)(v28 - 4), v30 = 0, (_DWORD)v29 == *(_DWORD *)(v28 - 8)) )
      {
        sub_8CF310(v87);
        v28 = *(_QWORD *)(a1 + 24);
        v30 = v92;
        v29 = *(unsigned int *)(v28 - 4);
      }
      v4 = v28 + 40 * v29;
      *(_DWORD *)v4 = v88;
      *(_BYTE *)(v4 + 4) = BYTE4(v88) & 3 | *(_BYTE *)(v4 + 4) & 0xFC;
      v5 = v89;
      v89 = 0;
      *(_QWORD *)(v4 + 8) = v5;
      *(_DWORD *)(v4 + 16) = v90;
      *(_BYTE *)(v4 + 20) = BYTE4(v90) & 3 | *(_BYTE *)(v4 + 20) & 0xFC;
      v6 = v91;
      v91 = 0;
      *(_QWORD *)(v4 + 24) = v6;
      *(_DWORD *)(v4 + 32) = v30;
      ++*(_DWORD *)(v28 - 4);
      v7 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v88);
      sub_182CBA0(v7, &v90);
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 - 4);
        if ( v9 == *(_DWORD *)(v8 - 8) )
        {
          v53 = (3 * v9 + 1) >> 1;
          v54 = 8 * v53 + 8;
          v86 = v53;
          if ( 8 * v9 + 8 >= (unsigned int)v54 || v9 >= v53 )
          {
LABEL_89:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(&v88, "Overflow encountered when expanding vector", v83);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v88);
            sub_233E40((__int64)&v88);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = sub_186B270(v54);
          v56 = *(__int64 **)(a1 + 48);
          v57 = (_DWORD *)v55;
          v8 = v55 + 8;
          if ( v56 )
          {
            v58 = *((unsigned int *)v56 - 1);
            *(_DWORD *)(v55 + 4) = v58;
            v59 = &v56[v58];
            if ( v59 != v56 )
            {
              v60 = 8 * v58 - 8;
              v61 = v56;
              if ( v60 <= 8 || v8 < (unsigned __int64)(v56 + 2) && (unsigned __int64)v56 < v55 + 24 )
              {
                v78 = v55 + 8;
                do
                {
                  v79 = *v61;
                  *v61++ = 0;
                  v78 += 8;
                  *(_QWORD *)(v78 - 8) = v79;
                }
                while ( v61 != v59 );
              }
              else
              {
                v62 = 0;
                v63 = (v60 >> 3) + 1;
                do
                {
                  v64 = _mm_loadu_si128((const __m128i *)&v56[v62]);
                  *(_OWORD *)&v56[v62] = 0;
                  *(__m128i *)(v55 + v62 * 8 + 8) = v64;
                  v62 += 2;
                }
                while ( v62 != 2 * (v63 >> 1) );
                if ( (v63 & 1) != 0 )
                {
                  v65 = v63 & 0xFFFFFFFFFFFFFFFELL;
                  v66 = v56[v65];
                  v56[v65] = 0;
                  *(_QWORD *)(v55 + v65 * 8 + 8) = v66;
                }
              }
            }
            if ( (_DWORD)v58 )
            {
              v67 = &v56[v58];
              do
              {
                while ( *v56 )
                {
                  v68 = (void *)(*v56++ - 8);
                  sub_186B220(v68);
                  if ( v56 == v67 )
                    goto LABEL_63;
                }
                ++v56;
              }
              while ( v56 != v67 );
LABEL_63:
              v56 = *(__int64 **)(a1 + 48);
            }
            sub_186B220(v56 - 1);
            v10 = (_QWORD *)(v8 + 8LL * (unsigned int)v57[1]);
            v11 = v57[1] + 1;
          }
          else
          {
            *(_DWORD *)(v55 + 4) = 0;
            v10 = (_QWORD *)(v55 + 8);
            v11 = 1;
          }
          *(_QWORD *)(a1 + 48) = v8;
          *v57 = v86;
        }
        else
        {
          v10 = (_QWORD *)(v8 + 8LL * v9);
          v11 = v9 + 1;
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        v11 = 1;
        v8 = (unsigned __int64)(v73 + 1);
        *v73 = 2;
        *(_QWORD *)(a1 + 48) = v73 + 1;
        v10 = v73 + 1;
      }
      *v10 = 0;
      *(_DWORD *)(v8 - 4) = v11;
      v12 = *(_QWORD *)(a1 + 56);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 - 4);
        if ( v13 == *(_DWORD *)(v12 - 8) )
        {
          v36 = (3 * v13 + 1) >> 1;
          v37 = 8 * v36 + 8;
          v85 = v36;
          if ( 8 * v13 + 8 >= (unsigned int)v37 || v13 >= v36 )
            goto LABEL_89;
          v38 = sub_186B270(v37);
          v39 = *(__int64 **)(a1 + 56);
          v40 = (_DWORD *)v38;
          v12 = v38 + 8;
          if ( v39 )
          {
            v41 = *((unsigned int *)v39 - 1);
            *(_DWORD *)(v38 + 4) = v41;
            v42 = &v39[v41];
            if ( v42 != v39 )
            {
              v43 = 8 * v41 - 8;
              v44 = v39;
              if ( v43 <= 8 || v12 < (unsigned __int64)(v39 + 2) && (unsigned __int64)v39 < v38 + 24 )
              {
                v80 = v38 + 8;
                do
                {
                  v81 = *v44;
                  *v44++ = 0;
                  v80 += 8;
                  *(_QWORD *)(v80 - 8) = v81;
                }
                while ( v44 != v42 );
              }
              else
              {
                v45 = 0;
                v46 = (v43 >> 3) + 1;
                do
                {
                  v47 = _mm_loadu_si128((const __m128i *)&v39[v45]);
                  *(_OWORD *)&v39[v45] = 0;
                  *(__m128i *)(v38 + v45 * 8 + 8) = v47;
                  v45 += 2;
                }
                while ( 2 * (v46 >> 1) != v45 );
                if ( (v46 & 1) != 0 )
                {
                  v48 = v46 & 0xFFFFFFFFFFFFFFFELL;
                  v49 = &v39[v48];
                  v50 = *v49;
                  *v49 = 0;
                  *(_QWORD *)(v12 + 8 * v48) = v50;
                }
              }
            }
            if ( (_DWORD)v41 )
            {
              v51 = &v39[v41];
              do
              {
                while ( *v39 )
                {
                  v52 = (void *)(*v39++ - 8);
                  sub_186B220(v52);
                  if ( v39 == v51 )
                    goto LABEL_43;
                }
                ++v39;
              }
              while ( v39 != v51 );
LABEL_43:
              v39 = *(__int64 **)(a1 + 56);
            }
            sub_186B220(v39 - 1);
            v14 = (_QWORD *)(v12 + 8LL * (unsigned int)v40[1]);
            v15 = v40[1] + 1;
          }
          else
          {
            *(_DWORD *)(v38 + 4) = 0;
            v14 = (_QWORD *)(v38 + 8);
            v15 = 1;
          }
          *(_QWORD *)(a1 + 56) = v12;
          *v40 = v85;
        }
        else
        {
          v14 = (_QWORD *)(v12 + 8LL * v13);
          v15 = v13 + 1;
        }
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x18u);
        v15 = 1;
        v12 = (unsigned __int64)(v74 + 1);
        *v74 = 2;
        *(_QWORD *)(a1 + 56) = v74 + 1;
        v14 = v74 + 1;
      }
      v16 = *(_QWORD *)(a1 + 72);
      *v14 = 0;
      *(_DWORD *)(v12 - 4) = v15;
      v88 = 0;
      v89 = 0;
      v90 = 1;
      v91 = 0;
      v92 = 0;
      if ( !v16 || (v17 = *(unsigned int *)(v16 - 4), v18 = 0, (_DWORD)v17 == *(_DWORD *)(v16 - 8)) )
      {
        sub_8CF310((__int64 *)(a1 + 72));
        v16 = *(_QWORD *)(a1 + 72);
        v18 = v92;
        v17 = *(unsigned int *)(v16 - 4);
      }
      v19 = v16 + 40 * v17;
      *(_DWORD *)v19 = v88;
      *(_BYTE *)(v19 + 4) = BYTE4(v88) & 3 | *(_BYTE *)(v19 + 4) & 0xFC;
      v20 = v89;
      v89 = 0;
      *(_QWORD *)(v19 + 8) = v20;
      *(_DWORD *)(v19 + 16) = v90;
      *(_BYTE *)(v19 + 20) = BYTE4(v90) & 3 | *(_BYTE *)(v19 + 20) & 0xFC;
      v21 = v91;
      v91 = 0;
      *(_QWORD *)(v19 + 24) = v21;
      *(_DWORD *)(v19 + 32) = v18;
      ++*(_DWORD *)(v16 - 4);
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v88);
      sub_182CBA0(v22, &v90);
      v23 = *(_QWORD *)(a1 + 80);
      if ( v23 )
      {
        v24 = *(unsigned int *)(v23 - 4);
        if ( (_DWORD)v24 == *(_DWORD *)(v23 - 8) )
        {
          v31 = (unsigned int)(3 * v24 + 1) >> 1;
          v32 = v31 + 8;
          if ( (int)v24 + 8 >= (unsigned int)v32 || (unsigned int)v24 >= v31 )
            goto LABEL_89;
          v33 = (unsigned int *)sub_186B300((void *)(v23 - 8), v32);
          v34 = v33 + 2;
          *v33 = v31;
          v35 = v33[1];
          *(_QWORD *)(a1 + 80) = v34;
          v25 = (char *)v34 + v35;
        }
        else
        {
          v25 = (_BYTE *)(v24 + v23);
        }
      }
      else
      {
        v72 = (_QWORD *)sub_186B270(0xAu);
        *v72 = 2;
        v25 = v72 + 1;
        *(_QWORD *)(a1 + 80) = v72 + 1;
      }
      *v25 = 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 80) - 4LL);
      v26 = *(_QWORD *)(a1 + 88);
      if ( !v26 || (v27 = *(unsigned int *)(v26 - 4), (_DWORD)v27 == *(_DWORD *)(v26 - 8)) )
      {
        sub_313C10((unsigned int **)(a1 + 88));
        v26 = *(_QWORD *)(a1 + 88);
        v27 = *(unsigned int *)(v26 - 4);
      }
      *(_DWORD *)(v26 + 4 * v27) = -1;
      ++*(_DWORD *)(v26 - 4);
      result = *(_QWORD *)(a1 + 48);
    }
    v69 = *(_QWORD *)(a1 + 120);
    if ( !v69 || a2 >= *(_DWORD *)(v69 - 4) )
      sub_8C3430((_QWORD *)(a1 + 120), a2 + 1, 0);
    v70 = *(_QWORD *)(a1 + 24) + 40LL * a2;
    v71 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v70);
    result = sub_182CBA0(v71, v70 + 16);
    *(_BYTE *)(v70 + 20) &= ~1u;
    *(_DWORD *)(v70 + 16) = 1;
    *(_DWORD *)(v70 + 32) = 0;
  }
  return result;
}

