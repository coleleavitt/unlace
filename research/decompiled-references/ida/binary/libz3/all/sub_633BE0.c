__int64 __fastcall sub_633BE0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  char *v9; // rbp
  __int64 *p_ptr; // rbp
  __int64 v11; // r10
  __int64 *v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // si
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 v19; // rsi
  __int16 v20; // ax
  void *v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edi
  char v25; // si
  __int64 v26; // r10
  __int64 v27; // rcx
  int v28; // ebx
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // r10d
  unsigned int v32; // ecx
  unsigned int v33; // ebx
  char *v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rdi
  void *exception; // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  char *v41; // rdi
  __int64 v42; // r10
  __int64 v43; // rbx
  __int64 v44; // rax
  char *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // rbx
  __int64 v50; // rax
  char *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-160h]
  __int64 v58; // [rsp+8h] [rbp-160h]
  __int64 v59; // [rsp+8h] [rbp-160h]
  __int64 v60; // [rsp+8h] [rbp-160h]
  __int64 v61; // [rsp+8h] [rbp-160h]
  __int64 v62; // [rsp+8h] [rbp-160h]
  __int64 *v63; // [rsp+20h] [rbp-148h]
  __int64 v64; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v66; // [rsp+38h] [rbp-130h]

  v4 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    if ( v7 >= v8 )
    {
      v49 = 2 * v8;
      v50 = sub_186B270(8 * v49);
      v7 = *((_DWORD *)a2 + 2);
      v51 = (char *)*a2;
      v9 = (char *)v50;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (char *)v50 == v51 + 8 )
        {
          v56 = 0;
          do
          {
            *(_QWORD *)&v9[v56] = *(_QWORD *)&v51[v56];
            v56 += 8;
          }
          while ( 8LL * v7 != v56 );
        }
        else
        {
          v52 = 0;
          do
          {
            *(__m128i *)&v9[v52] = _mm_loadu_si128((const __m128i *)&v51[v52]);
            v52 += 16;
          }
          while ( v52 != 16LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            *(_QWORD *)&v9[8 * (v7 & 0xFFFFFFFE)] = *(_QWORD *)&v51[8 * (v7 & 0xFFFFFFFE)];
        }
      }
      if ( v51 != (char *)(a2 + 2) && v51 )
      {
        sub_186B220(v51);
        v7 = *((_DWORD *)a2 + 2);
      }
      *a2 = (__int64)v9;
      *((_DWORD *)a2 + 3) = v49;
    }
    else
    {
      v9 = (char *)*a2;
    }
    *(_QWORD *)&v9[8 * v7] = v4;
    *((_DWORD *)a2 + 2) = v7 + 1;
  }
  p_ptr = &ptr;
  ptr = v4;
  LODWORD(v11) = 0;
  v64 = 0x1000000001LL;
  v63 = &ptr;
  v66 = 0;
LABEL_8:
  while ( 2 )
  {
    result = *(unsigned __int16 *)(v4 + 4);
    v12 = &p_ptr[2 * (unsigned int)v11];
    if ( (_WORD)result == 1 )
      goto LABEL_28;
    if ( (_WORD)result == 2 )
    {
      v22 = *(_DWORD *)(v4 + 72);
      v23 = *((_DWORD *)v12 + 2);
      v24 = v22 + *(_DWORD *)(v4 + 76) + 1;
      if ( v23 < v24 )
      {
        if ( !v23 )
        {
          v15 = *(_QWORD *)(v4 + 24);
          v23 = 1;
          *((_DWORD *)v12 + 2) = 1;
          if ( *(_DWORD *)(v15 + 8) > 1u )
            goto LABEL_33;
LABEL_39:
          v27 = (unsigned int)v64;
          v28 = HIDWORD(v64);
          if ( (unsigned int)v64 < HIDWORD(v64) )
          {
LABEL_40:
            p_ptr = v63;
            goto LABEL_41;
          }
LABEL_51:
          v57 = v15;
          v35 = (unsigned int)(2 * v28);
          p_ptr = (__int64 *)sub_186B270(16 * v35);
          v36 = 0;
          v37 = v63;
          v15 = v57;
          v27 = (unsigned int)v64;
          if ( (_DWORD)v64 )
          {
            do
            {
              *(__m128i *)&p_ptr[v36] = _mm_loadu_si128((const __m128i *)&v63[v36]);
              v36 += 2;
            }
            while ( 2LL * (unsigned int)v64 != v36 );
          }
          goto LABEL_53;
        }
        while ( 1 )
        {
          v26 = v23 - 1;
          if ( v22 < v23 )
            v26 = (unsigned int)v26 - v22;
          ++v23;
          v15 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v26 + 80);
          *((_DWORD *)v12 + 2) = v23;
          if ( *(_DWORD *)(v15 + 8) <= 1u )
            goto LABEL_39;
LABEL_33:
          v25 = *(_BYTE *)(v15 + 6);
          if ( (v25 & 1) == 0 )
            break;
          if ( v23 >= v24 )
            goto LABEL_27;
          v22 = *(_DWORD *)(v4 + 72);
        }
        *(_BYTE *)(v15 + 6) = v25 | 1;
        v32 = *((_DWORD *)a2 + 2);
        v33 = *((_DWORD *)a2 + 3);
        if ( v32 < v33 )
        {
          v34 = (char *)*a2;
          goto LABEL_50;
        }
        v61 = v15;
        v43 = 2 * v33;
        v44 = sub_186B270(8 * v43);
        v32 = *((_DWORD *)a2 + 2);
        v45 = (char *)*a2;
        v34 = (char *)v44;
        v15 = v61;
        if ( v32 )
        {
          if ( v32 - 1 <= 2 || (char *)v44 == v45 + 8 )
          {
            v47 = 0;
            do
            {
              *(_QWORD *)&v34[v47] = *(_QWORD *)&v45[v47];
              v47 += 8;
            }
            while ( 8LL * v32 != v47 );
            if ( v45 != (char *)(a2 + 2) )
            {
LABEL_83:
              if ( v45 )
              {
                sub_186B220(v45);
                v32 = *((_DWORD *)a2 + 2);
                v15 = v61;
              }
            }
LABEL_85:
            *a2 = (__int64)v34;
            *((_DWORD *)a2 + 3) = v43;
LABEL_50:
            v28 = HIDWORD(v64);
            *(_QWORD *)&v34[8 * v32] = v15;
            *((_DWORD *)a2 + 2) = v32 + 1;
            v27 = (unsigned int)v64;
            if ( (unsigned int)v64 < HIDWORD(v64) )
              goto LABEL_40;
            goto LABEL_51;
          }
          v46 = 0;
          do
          {
            *(__m128i *)&v34[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
            v46 += 16;
          }
          while ( v46 != 16LL * (v32 >> 1) );
          if ( (v32 & 1) != 0 )
            *(_QWORD *)&v34[8 * (v32 & 0xFFFFFFFE)] = *(_QWORD *)&v45[8 * (v32 & 0xFFFFFFFE)];
        }
        if ( v45 != (char *)(a2 + 2) )
          goto LABEL_83;
        goto LABEL_85;
      }
LABEL_27:
      result = (unsigned int)v64;
      LODWORD(v11) = v64 - 1;
LABEL_28:
      LODWORD(v64) = v11;
      if ( !(_DWORD)v11 )
        break;
      goto LABEL_29;
    }
    if ( (_WORD)result )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = *(_DWORD *)(v4 + 24);
    result = *((unsigned int *)v12 + 2);
    if ( (unsigned int)result < v13 )
    {
      while ( 1 )
      {
        v14 = (unsigned int)result;
        LODWORD(result) = result + 1;
        v15 = *(_QWORD *)(v4 + 8 * v14 + 32);
        *((_DWORD *)v12 + 2) = result;
        if ( *(_DWORD *)(v15 + 8) > 1u )
        {
          v16 = *(_BYTE *)(v15 + 6);
          if ( (v16 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v15 + 6) = v16 | 1;
          v17 = *((_DWORD *)a2 + 2);
          v18 = *((_DWORD *)a2 + 3);
          if ( v17 >= v18 )
          {
            v60 = v15;
            v40 = 2 * v18;
            v19 = sub_186B270(8 * v40);
            v17 = *((_DWORD *)a2 + 2);
            v41 = (char *)*a2;
            v15 = v60;
            if ( v17 )
            {
              if ( v17 - 1 <= 2 || (char *)v19 == v41 + 8 )
              {
                v48 = 0;
                do
                {
                  *(_QWORD *)(v19 + v48) = *(_QWORD *)&v41[v48];
                  v48 += 8;
                }
                while ( v48 != 8LL * v17 );
              }
              else
              {
                v42 = 0;
                do
                {
                  *(__m128i *)(v19 + v42) = _mm_loadu_si128((const __m128i *)&v41[v42]);
                  v42 += 16;
                }
                while ( 16LL * (v17 >> 1) != v42 );
                if ( (v17 & 1) != 0 )
                  *(_QWORD *)(v19 + 8LL * (v17 & 0xFFFFFFFE)) = *(_QWORD *)&v41[8 * (v17 & 0xFFFFFFFE)];
              }
            }
            if ( v41 != (char *)(a2 + 2) && v41 )
            {
              sub_186B220(v41);
              v17 = *((_DWORD *)a2 + 2);
              v15 = v60;
            }
            *a2 = v19;
            *((_DWORD *)a2 + 3) = v40;
          }
          else
          {
            v19 = *a2;
          }
          *(_QWORD *)(v19 + 8LL * v17) = v15;
          *((_DWORD *)a2 + 2) = v17 + 1;
        }
        v20 = *(_WORD *)(v15 + 4);
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            v27 = (unsigned int)v64;
            if ( (unsigned int)v64 < HIDWORD(v64) )
              goto LABEL_40;
            v59 = v15;
            v35 = (unsigned int)(2 * HIDWORD(v64));
            p_ptr = (__int64 *)sub_186B270(16 * v35);
            v39 = 0;
            v37 = v63;
            v15 = v59;
            v27 = (unsigned int)v64;
            if ( (_DWORD)v64 )
            {
              do
              {
                *(__m128i *)&p_ptr[v39] = _mm_loadu_si128((const __m128i *)&v63[v39]);
                v39 += 2;
              }
              while ( v39 != 2LL * (unsigned int)v64 );
            }
LABEL_53:
            if ( v37 != &ptr && v37 )
            {
              v58 = v15;
              sub_186B220(v37);
              v27 = (unsigned int)v64;
              v15 = v58;
            }
            v63 = p_ptr;
            HIDWORD(v64) = v35;
LABEL_41:
            v29 = &p_ptr[2 * v27];
            *((_DWORD *)v29 + 2) = 0;
            v30 = (unsigned int)v64;
            *v29 = v15;
            v31 = v64 + 1;
LABEL_42:
            LODWORD(v64) = v31;
            LODWORD(v11) = v31 - 1;
            v4 = p_ptr[2 * v30];
            goto LABEL_8;
          }
          if ( v20 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v15 + 24) )
          {
            v53 = (unsigned int)v64;
            if ( (unsigned int)v64 >= HIDWORD(v64) )
            {
              v62 = v15;
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v64)));
              v55 = 0;
              v15 = v62;
              v53 = (unsigned int)v64;
              if ( (_DWORD)v64 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v55] = _mm_loadu_si128((const __m128i *)&v63[v55]);
                  v55 += 2;
                }
                while ( 2LL * (unsigned int)v64 != v55 );
              }
              if ( v63 != &ptr && v63 )
              {
                sub_186B220(v63);
                v53 = (unsigned int)v64;
                v15 = v62;
              }
              v63 = p_ptr;
              HIDWORD(v64) *= 2;
            }
            else
            {
              p_ptr = v63;
            }
            v54 = &p_ptr[2 * v53];
            *v54 = v15;
            *((_DWORD *)v54 + 2) = 0;
            v30 = (unsigned int)v64;
            v31 = v64 + 1;
            goto LABEL_42;
          }
          if ( sub_629E80(
                 *(_QWORD **)(*(_QWORD *)a1 + 2288LL),
                 *(_DWORD *)(*(_QWORD *)a1 + 2296LL),
                 *(_QWORD *)(v15 + 16)) )
          {
            exception = __cxa_allocate_exception(1u);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'datalog::contains_predicate_proc::found, nullptr);
          }
        }
        LODWORD(result) = *((_DWORD *)v12 + 2);
LABEL_22:
        if ( (unsigned int)result >= v13 )
        {
          result = (unsigned int)v64;
          LODWORD(v11) = v64 - 1;
          break;
        }
      }
    }
    LODWORD(v64) = v11;
    if ( !*(_WORD *)(v4 + 4) )
    {
      result = (__int64)sub_629E80(
                          *(_QWORD **)(*(_QWORD *)a1 + 2288LL),
                          *(_DWORD *)(*(_QWORD *)a1 + 2296LL),
                          *(_QWORD *)(v4 + 16));
      if ( result )
      {
        v21 = __cxa_allocate_exception(1u);
        __cxa_throw(v21, (struct type_info *)&`typeinfo for'datalog::contains_predicate_proc::found, nullptr);
      }
    }
    p_ptr = v63;
    if ( (_DWORD)v11 )
    {
LABEL_29:
      v11 = (unsigned int)(v11 - 1);
      v4 = p_ptr[2 * v11];
      continue;
    }
    break;
  }
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

