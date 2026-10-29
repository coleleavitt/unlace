int *__fastcall sub_CDBF20(int ****a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  int v5; // r12d
  __int64 v6; // rbx
  int *result; // rax
  int v8; // edx
  __int64 *p_ptr; // r14
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 *v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // rdx
  int *v16; // r15
  unsigned int v17; // ecx
  int v18; // edi
  int *v19; // rdx
  int v20; // esi
  __int16 v21; // ax
  int ***v22; // rdi
  int **v23; // rax
  int **v24; // rcx
  int **v25; // rax
  int **v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // esi
  bool v30; // cc
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rcx
  int v36; // edx
  int **v37; // rax
  int **v38; // rdx
  unsigned int **v39; // rcx
  unsigned int *v40; // rdx
  unsigned int *v41; // rdi
  unsigned int v42; // eax
  unsigned int *v43; // rsi
  int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 *v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  unsigned int v54; // r11d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ecx
  __int64 *v59; // rdx
  _QWORD *v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 *v63; // rdi
  unsigned __int64 v64; // rdx
  __int64 v65; // rsi
  char **exception; // rbp
  unsigned int v68; // [rsp+10h] [rbp-178h]
  unsigned int v69; // [rsp+10h] [rbp-178h]
  int ***v70; // [rsp+10h] [rbp-178h]
  unsigned int **v71; // [rsp+10h] [rbp-178h]
  unsigned int v72; // [rsp+1Ch] [rbp-16Ch]
  __int64 v73[4]; // [rsp+20h] [rbp-168h] BYREF
  void *v74; // [rsp+40h] [rbp-148h]
  __int64 v75; // [rsp+48h] [rbp-140h]
  __int64 ptr; // [rsp+50h] [rbp-138h] BYREF
  int v77; // [rsp+58h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
    }
    else
    {
      result = (int *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
      if ( (v5 & *result) != 0 )
        return result;
    }
    *result = v5 | v8;
  }
  p_ptr = &ptr;
  ptr = v3;
  LODWORD(v10) = 0;
  v74 = &ptr;
  v77 = 0;
  v75 = 0x1000000001LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_WORD *)(v3 + 4);
      v12 = &p_ptr[2 * (unsigned int)v10];
      if ( v11 == 1 )
        goto LABEL_36;
      if ( v11 != 2 )
        break;
      v27 = *(_DWORD *)(v3 + 72);
      v28 = *((_DWORD *)v12 + 2);
      v29 = v27 + *(_DWORD *)(v3 + 76) + 1;
      if ( v28 >= v29 )
      {
LABEL_35:
        LODWORD(v10) = v75 - 1;
LABEL_36:
        LODWORD(v75) = v10;
        if ( !(_DWORD)v10 )
          goto LABEL_40;
        goto LABEL_37;
      }
      if ( !v28 )
      {
        v16 = *(int **)(v3 + 24);
        goto LABEL_46;
      }
      while ( 1 )
      {
        v50 = v28 - 1;
        if ( v27 < v28 )
          v50 = (unsigned int)v50 - v27;
        v16 = *(int **)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v50 + 80);
LABEL_46:
        ++v28;
        v30 = (unsigned int)v16[2] <= 1;
        *((_DWORD *)v12 + 2) = v28;
        if ( v30 )
          break;
        v31 = *v16;
        if ( (unsigned int)*v16 >= *(_DWORD *)(a2 + 8) )
        {
          v69 = *v16;
          sub_186B510(a2 + 8, v31 + 1, 0);
          v32 = *(_QWORD *)(a2 + 16);
          v31 = v69;
LABEL_49:
          *(_DWORD *)(v32 + 4LL * (v31 >> 5)) |= 1 << v31;
          break;
        }
        v32 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v32 + 4LL * (v31 >> 5)) & (1 << v31)) == 0 )
          goto LABEL_49;
        if ( v28 >= v29 )
          goto LABEL_35;
        v27 = *(_DWORD *)(v3 + 72);
      }
      v33 = (unsigned int)v75;
      if ( (unsigned int)v75 >= HIDWORD(v75) )
      {
        v45 = (unsigned int)(2 * HIDWORD(v75));
        v51 = sub_186B270(16 * v45);
        v47 = (__int64 *)v74;
        p_ptr = (__int64 *)v51;
        v52 = 0;
        v33 = (unsigned int)v75;
        v53 = 16LL * (unsigned int)v75;
        if ( (_DWORD)v75 )
        {
          do
          {
            *(__m128i *)(v51 + v52) = _mm_loadu_si128((const __m128i *)&v47[v52 / 8]);
            v52 += 16LL;
          }
          while ( v52 != v53 );
        }
        goto LABEL_71;
      }
LABEL_51:
      p_ptr = (__int64 *)v74;
LABEL_52:
      v34 = &p_ptr[2 * v33];
      *v34 = (__int64)v16;
      *((_DWORD *)v34 + 2) = 0;
      v35 = (unsigned int)v75;
      v36 = v75 + 1;
LABEL_53:
      LODWORD(v75) = v36;
      LODWORD(v10) = v36 - 1;
      v3 = p_ptr[2 * v35];
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = *(_DWORD *)(v3 + 24);
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(int **)(v3 + 8 * v15 + 32);
        *((_DWORD *)v12 + 2) = v14;
        if ( (unsigned int)v16[2] > 1 )
        {
          v17 = *v16;
          if ( (unsigned int)*v16 < *(_DWORD *)(a2 + 8) )
          {
            v18 = 1 << v17;
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
            if ( ((1 << v17) & *v19) != 0 )
              goto LABEL_21;
          }
          else
          {
            v68 = *v16;
            sub_186B510(a2 + 8, v17 + 1, 0);
            v18 = 1 << v68;
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v68 >> 5));
            v20 = *v19;
          }
          *v19 = v20 | v18;
        }
        v21 = *((_WORD *)v16 + 2);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v33 = (unsigned int)v75;
            if ( (unsigned int)v75 < HIDWORD(v75) )
              goto LABEL_51;
            v45 = (unsigned int)(2 * HIDWORD(v75));
            v46 = sub_186B270(16 * v45);
            v47 = (__int64 *)v74;
            p_ptr = (__int64 *)v46;
            v48 = 0;
            v33 = (unsigned int)v75;
            v49 = 16LL * (unsigned int)v75;
            if ( (_DWORD)v75 )
            {
              do
              {
                *(__m128i *)(v46 + v48) = _mm_loadu_si128((const __m128i *)&v47[v48 / 8]);
                v48 += 16LL;
              }
              while ( v48 != v49 );
            }
LABEL_71:
            if ( v47 != &ptr && v47 )
            {
              sub_186B220(v47);
              v33 = (unsigned int)v75;
            }
            v74 = p_ptr;
            HIDWORD(v75) = v45;
            goto LABEL_52;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v16[6] )
          {
            v58 = v75;
            if ( (unsigned int)v75 >= HIDWORD(v75) )
            {
              v61 = (unsigned int)(2 * HIDWORD(v75));
              v62 = sub_186B270(16 * v61);
              v63 = (__int64 *)v74;
              p_ptr = (__int64 *)v62;
              v64 = 0;
              v58 = v75;
              v65 = 16LL * (unsigned int)v75;
              if ( (_DWORD)v75 )
              {
                do
                {
                  *(__m128i *)(v62 + v64) = _mm_loadu_si128((const __m128i *)&v63[v64 / 8]);
                  v64 += 16LL;
                }
                while ( v65 != v64 );
              }
              if ( v63 != &ptr && v63 )
              {
                sub_186B220(v63);
                v58 = v75;
              }
              v74 = p_ptr;
              HIDWORD(v75) = v61;
            }
            else
            {
              p_ptr = (__int64 *)v74;
            }
            v59 = &p_ptr[2 * v58];
            *((_DWORD *)v59 + 2) = 0;
            v35 = (unsigned int)v75;
            *v59 = (__int64)v16;
            v36 = v35 + 1;
            goto LABEL_53;
          }
          v37 = **a1;
          if ( v37 )
          {
            v38 = &v37[*((unsigned int *)v37 - 1)];
            if ( v37 != v38 )
            {
              while ( v16 != *v37 )
              {
                if ( v38 == ++v37 )
                  goto LABEL_20;
              }
              v39 = (unsigned int **)a1[1];
              v40 = *v39;
              if ( !*v39 )
              {
                v71 = (unsigned int **)a1[1];
                v60 = (_QWORD *)sub_186B270(0x18u);
                *v60 = 2;
                v44 = 1;
                v40 = (unsigned int *)(v60 + 1);
                *v71 = v40;
                v41 = v40;
LABEL_67:
                *(_QWORD *)v41 = v16;
                *(v40 - 1) = v44;
                v14 = *((_DWORD *)v12 + 2);
                goto LABEL_21;
              }
              v41 = &v40[2 * *(v40 - 1)];
              v42 = *(v40 - 1);
              if ( v40 == v41 )
              {
LABEL_65:
                if ( v42 == *(v40 - 2) )
                {
                  v54 = (3 * v42 + 1) >> 1;
                  v55 = 8 * v54 + 8;
                  if ( 8 * v42 + 8 >= (unsigned int)v55 || v42 >= v54 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_CD6E90(v73, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v73);
                    sub_233E40((__int64)v73);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v72 = (3 * v42 + 1) >> 1;
                  v70 = a1[1];
                  v56 = (unsigned int *)sub_186B300(v40 - 2, v55);
                  v40 = v56 + 2;
                  *v70 = (int **)(v56 + 2);
                  v57 = v56[1];
                  *v56 = v72;
                  v41 = &v56[2 * v57 + 2];
                  v44 = v57 + 1;
                }
                else
                {
                  v44 = v42 + 1;
                }
                goto LABEL_67;
              }
              v43 = *v39;
              while ( v16 != *(int **)v43 )
              {
                v43 += 2;
                if ( v43 == v41 )
                  goto LABEL_65;
              }
            }
          }
        }
LABEL_20:
        v14 = *((_DWORD *)v12 + 2);
LABEL_21:
        if ( v14 >= v13 )
        {
          LODWORD(v10) = v75 - 1;
          break;
        }
      }
    }
    LODWORD(v75) = v10;
    v73[0] = v3;
    v22 = a1[1];
    v23 = **a1;
    if ( v23 )
    {
      v24 = &v23[*((unsigned int *)v23 - 1)];
      if ( v23 != v24 )
      {
        while ( *v23 != (int *)v3 )
        {
          if ( v24 == ++v23 )
            goto LABEL_39;
        }
        v25 = *v22;
        if ( !*v22 || (v26 = &v25[*((unsigned int *)v25 - 1)], v25 == v26) )
        {
LABEL_32:
          sub_CD7720(v22, v73);
          LODWORD(v10) = v75;
        }
        else
        {
          while ( *v25 != (int *)v3 )
          {
            if ( v26 == ++v25 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_39:
    p_ptr = (__int64 *)v74;
    if ( !(_DWORD)v10 )
      break;
LABEL_37:
    v10 = (unsigned int)(v10 - 1);
    v3 = p_ptr[2 * v10];
  }
LABEL_40:
  result = (int *)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return (int *)sub_186B220(p_ptr);
  }
  return result;
}

