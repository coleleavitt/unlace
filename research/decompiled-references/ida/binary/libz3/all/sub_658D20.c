__int64 __fastcall sub_658D20(__int64 a1, char **a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  char *v9; // rbp
  __int64 *p_ptr; // rbp
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // al
  unsigned int v18; // esi
  unsigned int v19; // ebp
  char *v20; // r10
  __int16 v21; // ax
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  void *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // r15
  char v29; // si
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // ebx
  __int64 *v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ebx
  char *v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  _DWORD *v42; // rax
  void *exception; // rax
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rax
  char *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  char *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  char *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp+8h] [rbp-160h]
  __int64 v66; // [rsp+8h] [rbp-160h]
  __int64 v67; // [rsp+8h] [rbp-160h]
  char *v68; // [rsp+18h] [rbp-150h]
  __int64 *v69; // [rsp+20h] [rbp-148h]
  __int64 v70; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v72; // [rsp+38h] [rbp-130h]

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
      v57 = 2 * v8;
      v58 = sub_186B270(8 * v57);
      v7 = *((_DWORD *)a2 + 2);
      v59 = *a2;
      v9 = (char *)v58;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (char *)v58 == v59 + 8 )
        {
          v64 = 0;
          do
          {
            *(_QWORD *)&v9[v64] = *(_QWORD *)&v59[v64];
            v64 += 8;
          }
          while ( v64 != 8LL * v7 );
        }
        else
        {
          v60 = 0;
          do
          {
            *(__m128i *)&v9[v60] = _mm_loadu_si128((const __m128i *)&v59[v60]);
            v60 += 16;
          }
          while ( v60 != 16LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            *(_QWORD *)&v9[8 * (v7 & 0xFFFFFFFE)] = *(_QWORD *)&v59[8 * (v7 & 0xFFFFFFFE)];
        }
      }
      if ( v59 != (char *)(a2 + 2) && v59 )
      {
        sub_186B220(v59);
        v7 = *((_DWORD *)a2 + 2);
      }
      *a2 = v9;
      *((_DWORD *)a2 + 3) = v57;
    }
    else
    {
      v9 = *a2;
    }
    *(_QWORD *)&v9[8 * v7] = v4;
    *((_DWORD *)a2 + 2) = v7 + 1;
  }
  p_ptr = &ptr;
  ptr = v4;
  v69 = &ptr;
  v72 = 0;
  v70 = 0x1000000001LL;
  result = 0;
LABEL_8:
  while ( 2 )
  {
    v11 = *(_WORD *)(v4 + 4);
    v12 = &p_ptr[2 * (unsigned int)result];
    if ( v11 == 1 )
      goto LABEL_30;
    if ( v11 == 2 )
    {
      v25 = *(_DWORD *)(v4 + 72);
      v26 = *((_DWORD *)v12 + 2);
      v27 = v25 + *(_DWORD *)(v4 + 76) + 1;
      if ( v26 < v27 )
      {
        if ( !v26 )
        {
          v28 = *(_QWORD *)(v4 + 24);
          v26 = 1;
          *((_DWORD *)v12 + 2) = 1;
          if ( *(_DWORD *)(v28 + 8) > 1u )
            goto LABEL_35;
LABEL_41:
          v31 = (unsigned int)v70;
          v32 = HIDWORD(v70);
          if ( (unsigned int)v70 < HIDWORD(v70) )
            goto LABEL_42;
          goto LABEL_53;
        }
        while ( 1 )
        {
          v30 = v26 - 1;
          if ( v25 < v26 )
            v30 = (unsigned int)v30 - v25;
          ++v26;
          v28 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v30 + 80);
          *((_DWORD *)v12 + 2) = v26;
          if ( *(_DWORD *)(v28 + 8) <= 1u )
            goto LABEL_41;
LABEL_35:
          v29 = *(_BYTE *)(v28 + 6);
          if ( (v29 & 1) == 0 )
            break;
          if ( v26 >= v27 )
            goto LABEL_29;
          v25 = *(_DWORD *)(v4 + 72);
        }
        *(_BYTE *)(v28 + 6) = v29 | 1;
        v36 = *((_DWORD *)a2 + 2);
        v37 = *((_DWORD *)a2 + 3);
        if ( v36 < v37 )
        {
          v38 = *a2;
          goto LABEL_52;
        }
        v50 = 2 * v37;
        v51 = sub_186B270(8 * v50);
        v36 = *((_DWORD *)a2 + 2);
        v52 = *a2;
        v38 = (char *)v51;
        if ( v36 )
        {
          if ( v36 - 1 <= 2 || (char *)v51 == v52 + 8 )
          {
            v55 = 0;
            do
            {
              *(_QWORD *)&v38[v55] = *(_QWORD *)&v52[v55];
              v55 += 8;
            }
            while ( 8LL * v36 != v55 );
            if ( v52 )
            {
LABEL_86:
              if ( v52 != (char *)(a2 + 2) )
              {
                sub_186B220(v52);
                v36 = *((_DWORD *)a2 + 2);
              }
            }
LABEL_88:
            *a2 = v38;
            *((_DWORD *)a2 + 3) = v50;
LABEL_52:
            v32 = HIDWORD(v70);
            *(_QWORD *)&v38[8 * v36] = v28;
            *((_DWORD *)a2 + 2) = v36 + 1;
            v31 = (unsigned int)v70;
            if ( (unsigned int)v70 < HIDWORD(v70) )
            {
LABEL_42:
              p_ptr = v69;
LABEL_43:
              v33 = &p_ptr[2 * v31];
              *((_DWORD *)v33 + 2) = 0;
              v34 = (unsigned int)v70;
              *v33 = v28;
              v35 = v70 + 1;
              goto LABEL_44;
            }
LABEL_53:
            v39 = (unsigned int)(2 * v32);
            p_ptr = (__int64 *)sub_186B270(16 * v39);
            v40 = 0;
            v31 = (unsigned int)v70;
            if ( (_DWORD)v70 )
            {
              do
              {
                *(__m128i *)&p_ptr[v40] = _mm_loadu_si128((const __m128i *)&v69[v40]);
                v40 += 2;
              }
              while ( 2LL * (unsigned int)v70 != v40 );
            }
            if ( v69 != &ptr && v69 )
            {
              sub_186B220(v69);
              v31 = (unsigned int)v70;
            }
            v69 = p_ptr;
            HIDWORD(v70) = v39;
            goto LABEL_43;
          }
          v53 = 0;
          do
          {
            *(__m128i *)&v38[v53] = _mm_loadu_si128((const __m128i *)&v52[v53]);
            v53 += 16;
          }
          while ( v53 != 16LL * (v36 >> 1) );
          if ( (v36 & 1) != 0 )
            *(_QWORD *)&v38[8 * (v36 & 0xFFFFFFFE)] = *(_QWORD *)&v52[8 * (v36 & 0xFFFFFFFE)];
        }
        if ( v52 )
          goto LABEL_86;
        goto LABEL_88;
      }
LABEL_29:
      result = (unsigned int)(v70 - 1);
LABEL_30:
      LODWORD(v70) = result;
      if ( !(_DWORD)result )
        break;
      goto LABEL_31;
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = *(_DWORD *)(v4 + 24);
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(_QWORD *)(v4 + 8 * v15 + 32);
        *((_DWORD *)v12 + 2) = v14;
        if ( *(_DWORD *)(v16 + 8) > 1u )
        {
          v17 = *(_BYTE *)(v16 + 6);
          if ( (v17 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v16 + 6) = v17 | 1;
          v18 = *((_DWORD *)a2 + 2);
          v19 = *((_DWORD *)a2 + 3);
          if ( v18 >= v19 )
          {
            v65 = v16;
            v46 = 2 * v19;
            v47 = sub_186B270(8 * v46);
            v18 = *((_DWORD *)a2 + 2);
            v48 = *a2;
            v20 = (char *)v47;
            v16 = v65;
            if ( v18 )
            {
              if ( v18 - 1 <= 2 || (char *)v47 == v48 + 8 )
              {
                v56 = 0;
                do
                {
                  *(_QWORD *)&v20[v56] = *(_QWORD *)&v48[v56];
                  v56 += 8;
                }
                while ( v56 != 8LL * v18 );
              }
              else
              {
                v49 = 0;
                do
                {
                  *(__m128i *)&v20[v49] = _mm_loadu_si128((const __m128i *)&v48[v49]);
                  v49 += 16;
                }
                while ( 16LL * (v18 >> 1) != v49 );
                if ( (v18 & 1) != 0 )
                  *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v48[8 * (v18 & 0xFFFFFFFE)];
              }
            }
            if ( v48 != (char *)(a2 + 2) && v48 )
            {
              v68 = v20;
              sub_186B220(v48);
              v18 = *((_DWORD *)a2 + 2);
              v20 = v68;
              v16 = v65;
            }
            *a2 = v20;
            *((_DWORD *)a2 + 3) = v46;
          }
          else
          {
            v20 = *a2;
          }
          *(_QWORD *)&v20[8 * v18] = v16;
          *((_DWORD *)a2 + 2) = v18 + 1;
        }
        v21 = *(_WORD *)(v16 + 4);
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v44 = (unsigned int)v70;
            if ( (unsigned int)v70 >= HIDWORD(v70) )
            {
              v66 = v16;
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v70)));
              v54 = 0;
              v16 = v66;
              v44 = (unsigned int)v70;
              if ( (_DWORD)v70 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v54] = _mm_loadu_si128((const __m128i *)&v69[v54]);
                  v54 += 2;
                }
                while ( v54 != 2LL * (unsigned int)v70 );
              }
              if ( v69 != &ptr && v69 )
              {
                sub_186B220(v69);
                v44 = (unsigned int)v70;
                v16 = v66;
              }
              v69 = p_ptr;
              HIDWORD(v70) *= 2;
            }
            else
            {
              p_ptr = v69;
            }
            v45 = &p_ptr[2 * v44];
            *v45 = v16;
            *((_DWORD *)v45 + 2) = 0;
            v34 = (unsigned int)v70;
            v35 = v70 + 1;
LABEL_44:
            LODWORD(v70) = v35;
            result = (unsigned int)(v35 - 1);
            v4 = p_ptr[2 * v34];
            goto LABEL_8;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v16 + 24) )
          {
            v61 = (unsigned int)v70;
            if ( (unsigned int)v70 >= HIDWORD(v70) )
            {
              v67 = v16;
              p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v70)));
              v63 = 0;
              v16 = v67;
              v61 = (unsigned int)v70;
              if ( (_DWORD)v70 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v63] = _mm_loadu_si128((const __m128i *)&v69[v63]);
                  v63 += 2;
                }
                while ( 2LL * (unsigned int)v70 != v63 );
              }
              if ( v69 && v69 != &ptr )
              {
                sub_186B220(v69);
                v61 = (unsigned int)v70;
                v16 = v67;
              }
              v69 = p_ptr;
              HIDWORD(v70) *= 2;
            }
            else
            {
              p_ptr = v69;
            }
            v62 = &p_ptr[2 * v61];
            *v62 = v16;
            *((_DWORD *)v62 + 2) = 0;
            v34 = (unsigned int)v70;
            v35 = v70 + 1;
            goto LABEL_44;
          }
          v41 = *(_QWORD *)(v16 + 16);
          if ( *(_QWORD *)(v41 + 40) == *(_QWORD *)(**(_QWORD **)a1 + 840LL) )
          {
            v42 = *(_DWORD **)(v41 + 24);
            if ( !v42 || *v42 == -1 )
            {
              exception = __cxa_allocate_exception(1u);
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'hnf::imp::contains_predicate_proc::found,
                nullptr);
            }
          }
        }
        v14 = *((_DWORD *)v12 + 2);
LABEL_22:
        if ( v14 >= v13 )
        {
          result = (unsigned int)(v70 - 1);
          break;
        }
      }
    }
    LODWORD(v70) = result;
    if ( !*(_WORD *)(v4 + 4) )
    {
      v22 = *(_QWORD *)(v4 + 16);
      if ( *(_QWORD *)(v22 + 40) == *(_QWORD *)(**(_QWORD **)a1 + 840LL) )
      {
        v23 = *(_DWORD **)(v22 + 24);
        if ( !v23 || *v23 == -1 )
        {
          v24 = __cxa_allocate_exception(1u);
          __cxa_throw(v24, (struct type_info *)&`typeinfo for'hnf::imp::contains_predicate_proc::found, nullptr);
        }
      }
    }
    p_ptr = v69;
    if ( (_DWORD)result )
    {
LABEL_31:
      result = (unsigned int)(result - 1);
      v4 = p_ptr[2 * result];
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

