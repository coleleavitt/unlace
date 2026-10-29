int *__fastcall sub_6F3480(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  int v5; // r12d
  __int64 v6; // rbx
  int *result; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int16 v10; // cx
  int *v11; // rbx
  unsigned int v12; // r14d
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int *v15; // r15
  unsigned int v16; // ecx
  int v17; // r10d
  int *v18; // rdx
  int v19; // edi
  __int16 v20; // dx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // esi
  unsigned int *v29; // r14
  bool v30; // cc
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 v33; // rcx
  int *v34; // rcx
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rcx
  int *v38; // rdx
  __int64 v39; // rcx
  int *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rbx
  char *v43; // rdi
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rbx
  char *v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  _QWORD *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // r13
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rbx
  char *v57; // rdi
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  unsigned int v60; // [rsp+8h] [rbp-180h]
  unsigned int v61; // [rsp+8h] [rbp-180h]
  __int64 v62; // [rsp+8h] [rbp-180h]
  __int64 v63; // [rsp+8h] [rbp-180h]
  _QWORD *v64; // [rsp+8h] [rbp-180h]
  __int64 v65; // [rsp+8h] [rbp-180h]
  __int64 v67; // [rsp+28h] [rbp-160h] BYREF
  __int64 v68; // [rsp+30h] [rbp-158h] BYREF
  __int64 v69; // [rsp+38h] [rbp-150h] BYREF
  void *p_ptr; // [rsp+40h] [rbp-148h]
  __int64 v71; // [rsp+48h] [rbp-140h]
  _DWORD *ptr; // [rsp+50h] [rbp-138h] BYREF
  int v73; // [rsp+58h] [rbp-130h]

  v3 = a3;
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
  ptr = v3;
  LODWORD(v9) = 0;
  p_ptr = &ptr;
  v73 = 0;
  v71 = 0x1000000001LL;
  result = (int *)&ptr;
  while ( 1 )
  {
    v10 = *((_WORD *)v3 + 2);
    v11 = &result[4 * (unsigned int)v9];
    if ( v10 == 1 )
      goto LABEL_37;
    if ( v10 != 2 )
      break;
    v26 = v3[18];
    v27 = v11[2];
    v28 = v26 + v3[19] + 1;
    if ( v27 >= v28 )
    {
LABEL_36:
      LODWORD(v9) = v71 - 1;
LABEL_37:
      LODWORD(v71) = v9;
      if ( !(_DWORD)v9 )
        goto LABEL_42;
LABEL_38:
      v9 = (unsigned int)(v9 - 1);
      v3 = *(_DWORD **)&result[4 * v9];
    }
    else
    {
      if ( !v27 )
      {
        v29 = *((unsigned int **)v3 + 3);
        goto LABEL_48;
      }
      while ( 1 )
      {
        v41 = v27 - 1;
        if ( v26 < v27 )
          v41 = (unsigned int)v41 - v26;
        v29 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v41];
LABEL_48:
        ++v27;
        v30 = v29[2] <= 1;
        v11[2] = v27;
        if ( v30 )
          break;
        v31 = *v29;
        if ( *v29 >= *(_DWORD *)(a2 + 8) )
        {
          v61 = *v29;
          sub_186B510(a2 + 8, v31 + 1, 0);
          v32 = *(_QWORD *)(a2 + 16);
          v31 = v61;
LABEL_51:
          *(_DWORD *)(v32 + 4LL * (v31 >> 5)) |= 1 << v31;
          break;
        }
        v32 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v32 + 4LL * (v31 >> 5)) & (1 << v31)) == 0 )
          goto LABEL_51;
        if ( v27 >= v28 )
          goto LABEL_36;
        v26 = v3[18];
      }
      v33 = (unsigned int)v71;
      if ( (unsigned int)v71 >= HIDWORD(v71) )
      {
        v42 = (unsigned int)(2 * HIDWORD(v71));
        result = (int *)sub_186B270(16 * v42);
        v43 = (char *)p_ptr;
        v44 = 0;
        v33 = (unsigned int)v71;
        v45 = 16LL * (unsigned int)v71;
        if ( (_DWORD)v71 )
        {
          do
          {
            *(__m128i *)&result[v44 / 4] = _mm_loadu_si128((const __m128i *)&v43[v44]);
            v44 += 16LL;
          }
          while ( v44 != v45 );
        }
        if ( v43 && v43 != (char *)&ptr )
        {
          v62 = (__int64)result;
          sub_186B220(v43);
          v33 = (unsigned int)v71;
          result = (int *)v62;
        }
        p_ptr = result;
        HIDWORD(v71) = v42;
      }
      else
      {
        result = (int *)p_ptr;
      }
      v34 = &result[4 * v33];
      *(_QWORD *)v34 = v29;
      v34[2] = 0;
      v35 = (unsigned int)v71;
      v36 = v71 + 1;
LABEL_55:
      LODWORD(v71) = v36;
      LODWORD(v9) = v36 - 1;
      v3 = *(_DWORD **)&result[4 * v35];
    }
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
          v60 = *v15;
          sub_186B510(a2 + 8, v16 + 1, 0);
          v17 = 1 << v60;
          v18 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v60 >> 5));
          v19 = *v18;
        }
        *v18 = v19 | v17;
      }
      v20 = *((_WORD *)v15 + 2);
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
        {
          v39 = (unsigned int)v71;
          if ( (unsigned int)v71 >= HIDWORD(v71) )
          {
            v46 = (unsigned int)(2 * HIDWORD(v71));
            result = (int *)sub_186B270(16 * v46);
            v47 = (char *)p_ptr;
            v48 = 0;
            v39 = (unsigned int)v71;
            v49 = 16LL * (unsigned int)v71;
            if ( (_DWORD)v71 )
            {
              do
              {
                *(__m128i *)&result[v48 / 4] = _mm_loadu_si128((const __m128i *)&v47[v48]);
                v48 += 16LL;
              }
              while ( v48 != v49 );
            }
            if ( v47 != (char *)&ptr && v47 )
            {
              v63 = (__int64)result;
              sub_186B220(v47);
              v39 = (unsigned int)v71;
              result = (int *)v63;
            }
            p_ptr = result;
            HIDWORD(v71) = v46;
          }
          else
          {
            result = (int *)p_ptr;
          }
          v40 = &result[4 * v39];
          *(_QWORD *)v40 = v15;
          v40[2] = 0;
          v35 = (unsigned int)v71;
          v36 = v71 + 1;
          goto LABEL_55;
        }
        if ( v20 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v15[6] )
        {
          v37 = (unsigned int)v71;
          if ( (unsigned int)v71 >= HIDWORD(v71) )
          {
            v56 = (unsigned int)(2 * HIDWORD(v71));
            result = (int *)sub_186B270(16 * v56);
            v57 = (char *)p_ptr;
            v58 = 0;
            v37 = (unsigned int)v71;
            v59 = 16LL * (unsigned int)v71;
            if ( (_DWORD)v71 )
            {
              do
              {
                *(__m128i *)&result[v58 / 4] = _mm_loadu_si128((const __m128i *)&v57[v58]);
                v58 += 16LL;
              }
              while ( v58 != v59 );
            }
            if ( v57 )
            {
              if ( v57 != (char *)&ptr )
              {
                v65 = (__int64)result;
                sub_186B220(v57);
                v37 = (unsigned int)v71;
                result = (int *)v65;
              }
            }
            p_ptr = result;
            HIDWORD(v71) = v56;
          }
          else
          {
            result = (int *)p_ptr;
          }
          v38 = &result[4 * v37];
          v38[2] = 0;
          v35 = (unsigned int)v71;
          *(_QWORD *)v38 = v15;
          v36 = v35 + 1;
          goto LABEL_55;
        }
      }
      v13 = v11[2];
LABEL_21:
      if ( v13 >= v12 )
      {
        LODWORD(v9) = v71 - 1;
        break;
      }
    }
  }
  LODWORD(v71) = v9;
  if ( !*((_WORD *)v3 + 2) )
  {
    v21 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
    if ( v21 )
    {
      if ( *(_DWORD *)(a1 + 8) == *v21 && v21[1] == 1 )
      {
        v50 = v3 + 8;
        v51 = 2LL * (unsigned int)v3[6];
        v64 = &v3[v51 + 8];
        if ( !(v51 * 4) )
          goto LABEL_41;
        do
        {
          v52 = *v50;
          v53 = sub_15D1F10(*v50);
          if ( v53 == sub_15D1F10(*(_QWORD *)(a1 + 24)) && v52 != *(_QWORD *)(a1 + 24) )
          {
            v54 = *(_QWORD *)(a1 + 40);
            ++*(_DWORD *)(v52 + 8);
            v69 = v52;
            sub_6EFE70((_QWORD *)(v54 + 8), &v69);
          }
          ++v50;
        }
        while ( v64 != v50 );
LABEL_40:
        LODWORD(v9) = v71;
        goto LABEL_41;
      }
      if ( !*v21 && v21[1] == 2 && v3[6] == 2 )
      {
        v22 = *((_QWORD *)v3 + 4);
        v23 = *((_QWORD *)v3 + 5);
        v24 = *(_QWORD *)(a1 + 24);
        if ( v24 == v22 )
        {
          v68 = *((_QWORD *)v3 + 5);
          v55 = *(_QWORD *)(a1 + 40);
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          sub_6EFE70((_QWORD *)(v55 + 8), &v68);
        }
        else
        {
          if ( v24 != v23 )
            goto LABEL_41;
          v67 = *((_QWORD *)v3 + 4);
          v25 = *(_QWORD *)(a1 + 40);
          if ( v22 )
            ++*(_DWORD *)(v22 + 8);
          sub_6EFE70((_QWORD *)(v25 + 8), &v67);
        }
        goto LABEL_40;
      }
    }
  }
LABEL_41:
  result = (int *)p_ptr;
  if ( (_DWORD)v9 )
    goto LABEL_38;
LABEL_42:
  if ( result != (int *)&ptr && result )
    return (int *)sub_186B220(result);
  return result;
}

