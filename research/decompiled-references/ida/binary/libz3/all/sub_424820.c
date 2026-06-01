_DWORD *__fastcall sub_424820(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  int v5; // r12d
  __int64 v6; // rbp
  _DWORD *result; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int16 v10; // cx
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int *v15; // r15
  unsigned int v16; // ecx
  int v17; // edx
  int *v18; // rsi
  int v19; // edi
  __int16 v20; // ax
  __int64 v21; // rbp
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // esi
  unsigned int *v30; // r10
  bool v31; // cc
  unsigned int v32; // ebp
  __int64 v33; // rdi
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  unsigned int **v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // r10
  __int64 v47; // rbp
  unsigned __int64 v48; // rdx
  char *v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rbp
  char *v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  unsigned int v55; // r11d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _DWORD *v61; // rdx
  unsigned int v62; // ecx
  size_t v63; // rsi
  unsigned int v64; // r13d
  unsigned int *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rbp
  char *v69; // rdi
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  char **v72; // rbp
  char **exception; // rbp
  unsigned int v75; // [rsp+10h] [rbp-188h]
  unsigned int *v76; // [rsp+10h] [rbp-188h]
  unsigned int *v77; // [rsp+10h] [rbp-188h]
  _DWORD *v78; // [rsp+10h] [rbp-188h]
  unsigned int v79; // [rsp+10h] [rbp-188h]
  __int64 v80; // [rsp+10h] [rbp-188h]
  _DWORD *v81; // [rsp+10h] [rbp-188h]
  _DWORD *v82; // [rsp+18h] [rbp-180h]
  __int64 v83; // [rsp+18h] [rbp-180h]
  int v84; // [rsp+2Ch] [rbp-16Ch] BYREF
  __int64 v85[4]; // [rsp+30h] [rbp-168h] BYREF
  void *p_ptr; // [rsp+50h] [rbp-148h]
  __int64 v87; // [rsp+58h] [rbp-140h]
  _DWORD *ptr; // [rsp+60h] [rbp-138h] BYREF
  int v89; // [rsp+68h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = (_DWORD *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
    }
    else
    {
      result = (_DWORD *)(v6 + *(_QWORD *)(a2 + 16));
      v8 = *result;
      if ( (v5 & *result) != 0 )
        return result;
    }
    *result = v5 | v8;
  }
  ptr = v3;
  LODWORD(v9) = 0;
  p_ptr = &ptr;
  v89 = 0;
  v87 = 0x1000000001LL;
  for ( result = &ptr; ; v3 = *(_DWORD **)&result[4 * v9] )
  {
    while ( 1 )
    {
      v10 = *((_WORD *)v3 + 2);
      v11 = &result[4 * (unsigned int)v9];
      if ( v10 == 1 )
        goto LABEL_32;
      if ( v10 != 2 )
        break;
      v27 = v3[18];
      v28 = v11[2];
      v29 = v27 + v3[19] + 1;
      if ( v28 >= v29 )
      {
LABEL_31:
        LODWORD(v9) = v87 - 1;
LABEL_32:
        LODWORD(v87) = v9;
        if ( !(_DWORD)v9 )
          goto LABEL_36;
        goto LABEL_33;
      }
      if ( !v28 )
      {
        v30 = *((unsigned int **)v3 + 3);
        goto LABEL_42;
      }
      while ( 1 )
      {
        v46 = v28 - 1;
        if ( v27 < v28 )
          v46 = (unsigned int)v46 - v27;
        v30 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v46];
LABEL_42:
        ++v28;
        v31 = v30[2] <= 1;
        v11[2] = v28;
        if ( v31 )
          break;
        v32 = *v30;
        if ( *v30 >= *(_DWORD *)(a2 + 8) )
        {
          v76 = v30;
          sub_186B510(a2 + 8, v32 + 1, 0);
          v33 = *(_QWORD *)(a2 + 16);
          v30 = v76;
LABEL_45:
          *(_DWORD *)(v33 + 4LL * (v32 >> 5)) |= 1 << v32;
          break;
        }
        v33 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v33 + 4LL * (v32 >> 5)) & (1 << v32)) == 0 )
          goto LABEL_45;
        if ( v28 >= v29 )
          goto LABEL_31;
        v27 = v3[18];
      }
      v34 = (unsigned int)v87;
      if ( (unsigned int)v87 >= HIDWORD(v87) )
      {
        v77 = v30;
        v47 = (unsigned int)(2 * HIDWORD(v87));
        result = (_DWORD *)sub_186B270(16 * v47);
        v48 = 0;
        v49 = (char *)p_ptr;
        v30 = v77;
        v34 = (unsigned int)v87;
        v50 = 16LL * (unsigned int)v87;
        if ( (_DWORD)v87 )
        {
          do
          {
            *(__m128i *)&result[v48 / 4] = _mm_loadu_si128((const __m128i *)&v49[v48]);
            v48 += 16LL;
          }
          while ( v48 != v50 );
        }
        if ( v49 != (char *)&ptr && v49 )
        {
          v82 = result;
          sub_186B220(v49);
          v34 = (unsigned int)v87;
          result = v82;
          v30 = v77;
        }
        p_ptr = result;
        HIDWORD(v87) = v47;
      }
      else
      {
        result = p_ptr;
      }
      v35 = &result[4 * v34];
      *(_QWORD *)v35 = v30;
      v35[2] = 0;
      v36 = (unsigned int)v87;
      v37 = v87 + 1;
LABEL_49:
      LODWORD(v87) = v37;
      LODWORD(v9) = v37 - 1;
      v3 = *(_DWORD **)&result[4 * v36];
    }
    if ( v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v12 = v3[6];
    v13 = v11[2];
    if ( v13 < v12 )
    {
      while ( 1 )
      {
        v14 = v13++;
        v15 = *(unsigned int **)&v3[2 * v14 + 8];
        v11[2] = v13;
        if ( v15[2] > 1 )
        {
          v16 = *v15;
          if ( *v15 < *(_DWORD *)(a2 + 8) )
          {
            v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v16 >> 5));
            v19 = *v18;
            v17 = 1 << v16;
            if ( ((1 << v16) & *v18) != 0 )
              goto LABEL_21;
          }
          else
          {
            v75 = *v15;
            sub_186B510(a2 + 8, v16 + 1, 0);
            v17 = 1 << v75;
            v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v75 >> 5));
            v19 = *v18;
          }
          *v18 = v19 | v17;
        }
        v20 = *((_WORD *)v15 + 2);
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            v44 = (unsigned int)v87;
            if ( (unsigned int)v87 >= HIDWORD(v87) )
            {
              v51 = (unsigned int)(2 * HIDWORD(v87));
              result = (_DWORD *)sub_186B270(16 * v51);
              v52 = (char *)p_ptr;
              v53 = 0;
              v44 = (unsigned int)v87;
              v54 = 16LL * (unsigned int)v87;
              if ( (_DWORD)v87 )
              {
                do
                {
                  *(__m128i *)&result[v53 / 4] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                  v53 += 16LL;
                }
                while ( v53 != v54 );
              }
              if ( v52 != (char *)&ptr && v52 )
              {
                v78 = result;
                sub_186B220(v52);
                v44 = (unsigned int)v87;
                result = v78;
              }
              p_ptr = result;
              HIDWORD(v87) = v51;
            }
            else
            {
              result = p_ptr;
            }
            v45 = &result[4 * v44];
            *(_QWORD *)v45 = v15;
            v45[2] = 0;
            v36 = (unsigned int)v87;
            v37 = v87 + 1;
            goto LABEL_49;
          }
          if ( v20 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v15[6] )
          {
            v60 = (unsigned int)v87;
            if ( (unsigned int)v87 >= HIDWORD(v87) )
            {
              v68 = (unsigned int)(2 * HIDWORD(v87));
              result = (_DWORD *)sub_186B270(16 * v68);
              v69 = (char *)p_ptr;
              v70 = 0;
              v60 = (unsigned int)v87;
              v71 = 16LL * (unsigned int)v87;
              if ( (_DWORD)v87 )
              {
                do
                {
                  *(__m128i *)&result[v70 / 4] = _mm_loadu_si128((const __m128i *)&v69[v70]);
                  v70 += 16LL;
                }
                while ( v70 != v71 );
              }
              if ( v69 != (char *)&ptr && v69 )
              {
                v81 = result;
                sub_186B220(v69);
                v60 = (unsigned int)v87;
                result = v81;
              }
              p_ptr = result;
              HIDWORD(v87) = v68;
            }
            else
            {
              result = p_ptr;
            }
            v61 = &result[4 * v60];
            v61[2] = 0;
            v36 = (unsigned int)v87;
            *(_QWORD *)v61 = v15;
            v37 = v36 + 1;
            goto LABEL_49;
          }
          if ( (unsigned __int8)sub_421A10(v15, &v84) )
          {
            v38 = *(_QWORD *)(a1 + 8);
            ++v15[2];
            v39 = *(_QWORD **)(v38 + 8);
            if ( v39 )
            {
              v40 = *((_DWORD *)v39 - 1);
              if ( v40 == *((_DWORD *)v39 - 2) )
              {
                v55 = (3 * v40 + 1) >> 1;
                v56 = 8 * v55 + 8;
                if ( 8 * v40 + 8 >= (unsigned int)v56 || v40 >= v55 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v85, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v85);
                  sub_233E40((__int64)v85);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v83 = v38;
                v79 = (3 * v40 + 1) >> 1;
                v57 = (unsigned int *)sub_186B300(v39 - 1, v56);
                v39 = v57 + 2;
                *(_QWORD *)(v83 + 8) = v57 + 2;
                v58 = v57[1];
                *v57 = v79;
                LODWORD(v57) = v58;
                v43 = (unsigned int **)&v39[v58];
                v42 = (_DWORD)v57 + 1;
              }
              else
              {
                v41 = v40;
                v42 = v40 + 1;
                v43 = (unsigned int **)&v39[v41];
              }
            }
            else
            {
              v80 = v38;
              v59 = (_QWORD *)sub_186B270(0x18u);
              v39 = v59 + 1;
              *v59 = 2;
              v42 = 1;
              *(_QWORD *)(v80 + 8) = v39;
              v43 = (unsigned int **)v39;
            }
            *v43 = v15;
            *((_DWORD *)v39 - 1) = v42;
            if ( *(_DWORD *)a1 < v84 )
              *(_DWORD *)a1 = v84;
          }
        }
        v13 = v11[2];
LABEL_21:
        if ( v13 >= v12 )
        {
          LODWORD(v9) = v87 - 1;
          break;
        }
      }
    }
    LODWORD(v87) = v9;
    if ( (unsigned __int8)sub_421A10(v3, &v84) )
    {
      v21 = *(_QWORD *)(a1 + 8);
      ++v3[2];
      v22 = *(_QWORD **)(v21 + 8);
      if ( v22 )
      {
        v23 = *((_DWORD *)v22 - 1);
        if ( v23 == *((_DWORD *)v22 - 2) )
        {
          v62 = (3 * v23 + 1) >> 1;
          v63 = 8 * v62 + 8;
          v64 = v62;
          if ( 8 * v23 + 8 >= (unsigned int)v63 || v23 >= v62 )
          {
            v72 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v85, "Overflow encountered when expanding vector");
            *v72 = (char *)off_1C63128;
            sub_2333C0(v72 + 1, v85);
            sub_233E40((__int64)v85);
            __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v22 - 1, v63);
          v66 = v65[1];
          v22 = v65 + 2;
          *(_QWORD *)(v21 + 8) = v65 + 2;
          *v65 = v64;
          LODWORD(v65) = v66;
          v26 = &v22[v66];
          v25 = (_DWORD)v65 + 1;
        }
        else
        {
          v24 = v23;
          v25 = v23 + 1;
          v26 = &v22[v24];
        }
      }
      else
      {
        v67 = (_QWORD *)sub_186B270(0x18u);
        *v67 = 2;
        v25 = 1;
        v22 = v67 + 1;
        *(_QWORD *)(v21 + 8) = v22;
        v26 = v22;
      }
      *v26 = v3;
      *((_DWORD *)v22 - 1) = v25;
      if ( *(_DWORD *)a1 < v84 )
        *(_DWORD *)a1 = v84;
    }
    LODWORD(v9) = v87;
    result = p_ptr;
    if ( !(_DWORD)v87 )
      break;
LABEL_33:
    v9 = (unsigned int)(v9 - 1);
  }
LABEL_36:
  if ( result != (_DWORD *)&ptr )
  {
    if ( result )
      return (_DWORD *)sub_186B220(result);
  }
  return result;
}

