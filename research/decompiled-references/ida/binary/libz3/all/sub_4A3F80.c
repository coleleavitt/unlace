_DWORD *__fastcall sub_4A3F80(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  int v5; // r12d
  __int64 v6; // rbx
  _DWORD *result; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int16 v10; // cx
  _DWORD *v11; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int *v15; // r14
  unsigned int v16; // ecx
  int v17; // edi
  int *v18; // rdx
  int v19; // esi
  __int16 v20; // ax
  __int64 v21; // r9
  _DWORD *v22; // rax
  void *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // esi
  unsigned int *v27; // r9
  bool v28; // cc
  unsigned int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // r9
  _DWORD *v36; // rax
  void *exception; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rdx
  int v42; // edi
  __int64 *v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 *v46; // rsi
  __int64 v47; // rdx
  __int64 *v48; // r11
  __int64 *i; // rax
  __int64 v50; // rdx
  void *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // r8d
  __int64 *v55; // rsi
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 *v58; // rdi
  __int64 v59; // rcx
  __int64 *v60; // r10
  __int64 *v61; // rax
  __int64 v62; // rcx
  void *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // rdx
  __int64 v67; // rdx
  unsigned int v69; // [rsp+8h] [rbp-160h]
  unsigned int v70; // [rsp+8h] [rbp-160h]
  unsigned int *v71; // [rsp+8h] [rbp-160h]
  __int64 v72; // [rsp+8h] [rbp-160h]
  __int64 v73; // [rsp+8h] [rbp-160h]
  unsigned int *v74; // [rsp+18h] [rbp-150h]
  __int64 v75; // [rsp+18h] [rbp-150h]
  _DWORD *p_ptr; // [rsp+20h] [rbp-148h]
  __int64 v77; // [rsp+28h] [rbp-140h]
  _DWORD *ptr; // [rsp+30h] [rbp-138h] BYREF
  int v79; // [rsp+38h] [rbp-130h]

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
  v79 = 0;
  v77 = 0x1000000001LL;
  for ( result = &ptr; ; v3 = *(_DWORD **)&result[4 * v9] )
  {
    while ( 1 )
    {
      v10 = *((_WORD *)v3 + 2);
      v11 = &result[4 * (unsigned int)v9];
      if ( v10 == 1 )
        goto LABEL_31;
      if ( v10 != 2 )
        break;
      v24 = v3[18];
      v25 = v11[2];
      v26 = v24 + v3[19] + 1;
      if ( v25 >= v26 )
      {
LABEL_30:
        LODWORD(v9) = v77 - 1;
LABEL_31:
        LODWORD(v77) = v9;
        if ( !(_DWORD)v9 )
          goto LABEL_35;
        goto LABEL_32;
      }
      if ( !v25 )
      {
        v27 = *((unsigned int **)v3 + 3);
        goto LABEL_41;
      }
      while ( 1 )
      {
        v40 = v25 - 1;
        if ( v24 < v25 )
          v40 = (unsigned int)v40 - v24;
        v27 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v40];
LABEL_41:
        ++v25;
        v28 = v27[2] <= 1;
        v11[2] = v25;
        if ( v28 )
          break;
        v29 = *v27;
        if ( *v27 >= *(_DWORD *)(a2 + 8) )
        {
          v74 = v27;
          v70 = *v27;
          sub_186B510(a2 + 8, v29 + 1, 0);
          v30 = *(_QWORD *)(a2 + 16);
          v27 = v74;
          v29 = v70;
LABEL_44:
          *(_DWORD *)(v30 + 4LL * (v29 >> 5)) |= 1 << v29;
          break;
        }
        v30 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v30 + 4LL * (v29 >> 5)) & (1 << v29)) == 0 )
          goto LABEL_44;
        if ( v25 >= v26 )
          goto LABEL_30;
        v24 = v3[18];
      }
      v31 = (unsigned int)v77;
      if ( (unsigned int)v77 >= HIDWORD(v77) )
      {
        v71 = v27;
        result = (_DWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v77)));
        v41 = 0;
        v27 = v71;
        v31 = (unsigned int)v77;
        if ( (_DWORD)v77 )
        {
          do
          {
            *(__m128i *)&result[v41] = _mm_loadu_si128((const __m128i *)&p_ptr[v41]);
            v41 += 4;
          }
          while ( v41 != 4LL * (unsigned int)v77 );
        }
        if ( p_ptr != (_DWORD *)&ptr && p_ptr )
        {
          v75 = (__int64)result;
          sub_186B220(p_ptr);
          v31 = (unsigned int)v77;
          result = (_DWORD *)v75;
          v27 = v71;
        }
        p_ptr = result;
        HIDWORD(v77) *= 2;
      }
      else
      {
        result = p_ptr;
      }
      v32 = &result[4 * v31];
      *(_QWORD *)v32 = v27;
      v32[2] = 0;
      v33 = (unsigned int)v77;
      v34 = v77 + 1;
LABEL_48:
      LODWORD(v77) = v34;
      LODWORD(v9) = v34 - 1;
      v3 = *(_DWORD **)&result[4 * v33];
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
            v17 = 1 << v16;
            v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v16 >> 5));
            v19 = *v18;
            if ( ((1 << v16) & *v18) != 0 )
              goto LABEL_21;
          }
          else
          {
            v69 = *v15;
            sub_186B510(a2 + 8, v16 + 1, 0);
            v17 = 1 << v69;
            v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v69 >> 5));
            v19 = *v18;
          }
          *v18 = v19 | v17;
        }
        v20 = *((_WORD *)v15 + 2);
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            v38 = (unsigned int)v77;
            if ( (unsigned int)v77 >= HIDWORD(v77) )
            {
              result = (_DWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v77)));
              v52 = 0;
              v38 = (unsigned int)v77;
              if ( (_DWORD)v77 )
              {
                do
                {
                  *(__m128i *)&result[v52] = _mm_loadu_si128((const __m128i *)&p_ptr[v52]);
                  v52 += 4;
                }
                while ( v52 != 4LL * (unsigned int)v77 );
              }
              if ( p_ptr != (_DWORD *)&ptr && p_ptr )
              {
                v72 = (__int64)result;
                sub_186B220(p_ptr);
                v38 = (unsigned int)v77;
                result = (_DWORD *)v72;
              }
              p_ptr = result;
              HIDWORD(v77) *= 2;
            }
            else
            {
              result = p_ptr;
            }
            v39 = &result[4 * v38];
            *(_QWORD *)v39 = v15;
            v39[2] = 0;
            v33 = (unsigned int)v77;
            v34 = v77 + 1;
            goto LABEL_48;
          }
          if ( v20 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v15[6] )
          {
            v65 = (unsigned int)v77;
            if ( (unsigned int)v77 >= HIDWORD(v77) )
            {
              result = (_DWORD *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v77)));
              v67 = 0;
              v65 = (unsigned int)v77;
              if ( (_DWORD)v77 )
              {
                do
                {
                  *(__m128i *)&result[v67] = _mm_loadu_si128((const __m128i *)&p_ptr[v67]);
                  v67 += 4;
                }
                while ( v67 != 4LL * (unsigned int)v77 );
              }
              if ( p_ptr != (_DWORD *)&ptr && p_ptr )
              {
                v73 = (__int64)result;
                sub_186B220(p_ptr);
                v65 = (unsigned int)v77;
                result = (_DWORD *)v73;
              }
              p_ptr = result;
              HIDWORD(v77) *= 2;
            }
            else
            {
              result = p_ptr;
            }
            v66 = &result[4 * v65];
            v66[2] = 0;
            v33 = (unsigned int)v77;
            *(_QWORD *)v66 = v15;
            v34 = v77 + 1;
            goto LABEL_48;
          }
          v35 = *((_QWORD *)v15 + 2);
          v36 = *(_DWORD **)(v35 + 24);
          if ( v36 && *v36 != -1 )
          {
            if ( *v36 == *(_DWORD *)(a1 + 8) && v36[1] == 3 )
            {
              exception = __cxa_allocate_exception(1u);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::is_pure_expr_proc::non_pure, nullptr);
            }
            goto LABEL_20;
          }
          v42 = *(_DWORD *)(v35 + 12);
          v43 = **(__int64 ***)a1;
          v44 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
          v45 = v44 - 1;
          v44 *= 8;
          v46 = (__int64 *)((char *)v43 + v44);
          v47 = 8LL * (v42 & v45);
          v48 = &v43[(unsigned __int64)v47 / 8];
          if ( v47 != v44 )
          {
            for ( i = &v43[(unsigned __int64)v47 / 8]; v46 != i; ++i )
            {
              v50 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v50 + 12) == v42 && v35 == v50 )
                  goto LABEL_20;
              }
              else if ( !v50 )
              {
                goto LABEL_77;
              }
            }
          }
          if ( v43 == v48 )
            goto LABEL_77;
          v53 = *v43;
          if ( (unsigned __int64)*v43 <= 1 )
          {
LABEL_90:
            if ( !v53 )
              goto LABEL_77;
            goto LABEL_88;
          }
          while ( *(_DWORD *)(v53 + 12) != v42 || v35 != v53 )
          {
LABEL_88:
            if ( v48 == ++v43 )
            {
LABEL_77:
              v51 = __cxa_allocate_exception(1u);
              __cxa_throw(v51, (struct type_info *)&`typeinfo for'spacer::is_pure_expr_proc::non_pure, nullptr);
            }
            v53 = *v43;
            if ( (unsigned __int64)*v43 <= 1 )
              goto LABEL_90;
          }
        }
LABEL_20:
        v13 = v11[2];
LABEL_21:
        if ( v13 >= v12 )
        {
          LODWORD(v9) = v77 - 1;
          break;
        }
      }
    }
    v21 = *((_QWORD *)v3 + 2);
    LODWORD(v77) = v9;
    v22 = *(_DWORD **)(v21 + 24);
    if ( !v22 || *v22 == -1 )
    {
      v54 = *(_DWORD *)(v21 + 12);
      v55 = **(__int64 ***)a1;
      v56 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
      v57 = v56 - 1;
      v56 *= 8;
      v58 = (__int64 *)((char *)v55 + v56);
      v59 = 8LL * (v54 & v57);
      v60 = &v55[(unsigned __int64)v59 / 8];
      if ( v59 == v56 )
      {
LABEL_100:
        while ( v60 != v55 )
        {
          v64 = *v55;
          if ( (unsigned __int64)*v55 > 1 )
          {
            if ( *(_DWORD *)(v64 + 12) == v54 && v21 == v64 )
              goto LABEL_34;
          }
          else if ( !v64 )
          {
            break;
          }
          ++v55;
        }
LABEL_99:
        v63 = __cxa_allocate_exception(1u);
        __cxa_throw(v63, (struct type_info *)&`typeinfo for'spacer::is_pure_expr_proc::non_pure, nullptr);
      }
      v61 = &v55[(unsigned __int64)v59 / 8];
      while ( 1 )
      {
        v62 = *v61;
        if ( (unsigned __int64)*v61 > 1 )
        {
          if ( *(_DWORD *)(v62 + 12) == v54 && v21 == v62 )
            goto LABEL_34;
        }
        else if ( !v62 )
        {
          goto LABEL_99;
        }
        if ( v58 == ++v61 )
          goto LABEL_100;
      }
    }
    if ( *v22 == *(_DWORD *)(a1 + 8) && v22[1] == 3 )
    {
      v23 = __cxa_allocate_exception(1u);
      __cxa_throw(v23, (struct type_info *)&`typeinfo for'spacer::is_pure_expr_proc::non_pure, nullptr);
    }
LABEL_34:
    result = p_ptr;
    if ( !(_DWORD)v9 )
      break;
LABEL_32:
    v9 = (unsigned int)(v9 - 1);
  }
LABEL_35:
  if ( result )
  {
    if ( result != (_DWORD *)&ptr )
      return (_DWORD *)sub_186B220(result);
  }
  return result;
}

