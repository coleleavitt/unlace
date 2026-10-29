__int64 __fastcall sub_C29960(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int v7; // edx
  unsigned int v8; // ebx
  _QWORD *v9; // rbp
  __int64 *p_ptr; // rbp
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  char v17; // di
  unsigned int v18; // edx
  unsigned int v19; // ebp
  _QWORD *v20; // r10
  __int16 v21; // ax
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // ebx
  _QWORD *v30; // rbp
  __int64 v31; // rdx
  __int64 *v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // edx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 k; // rax
  _DWORD *v47; // rdx
  int v48; // edx
  __int64 v49; // rbx
  __int64 v50; // rax
  _QWORD *v51; // rdi
  __int64 v52; // rax
  __int64 j; // rax
  __int64 i; // rax
  __int64 v55; // rax
  _QWORD *v56; // [rsp+18h] [rbp-150h]
  __int64 *v57; // [rsp+20h] [rbp-148h]
  __int64 v58; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v60; // [rsp+38h] [rbp-130h]

  result = *(unsigned __int8 *)(a3 + 6);
  if ( (result & 1) != 0 )
    return result;
  v5 = a3;
  *(_BYTE *)(a3 + 6) = result | 1;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 12);
  if ( v7 >= v8 )
  {
    v49 = 2 * v8;
    v50 = sub_186B270(8 * v49);
    v7 = *(_DWORD *)(a2 + 8);
    v51 = *(_QWORD **)a2;
    v9 = (_QWORD *)v50;
    if ( v7 )
    {
      if ( v7 - 1 <= 2 || (_QWORD *)v50 == v51 + 1 )
      {
        for ( i = 0; i != v7; ++i )
          v9[i] = v51[i];
      }
      else
      {
        v52 = 0;
        do
        {
          *(__m128i *)&v9[v52] = _mm_loadu_si128((const __m128i *)&v51[v52]);
          v52 += 2;
        }
        while ( 2LL * (v7 >> 1) != v52 );
        if ( (v7 & 1) != 0 )
          v9[v7 & 0xFFFFFFFE] = v51[v7 & 0xFFFFFFFE];
      }
    }
    if ( v51 != (_QWORD *)(a2 + 16) && v51 )
    {
      sub_186B220(v51);
      v7 = *(_DWORD *)(a2 + 8);
    }
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 12) = v49;
  }
  else
  {
    v9 = *(_QWORD **)a2;
  }
  v9[v7] = v5;
  p_ptr = &ptr;
  *(_DWORD *)(a2 + 8) = v7 + 1;
  v57 = &ptr;
  ptr = v5;
  v60 = 0;
  v58 = 0x1000000001LL;
  result = 0;
  while ( 1 )
  {
    v11 = *(_WORD *)(v5 + 4);
    v12 = &p_ptr[2 * (unsigned int)result];
    if ( v11 == 1 )
      goto LABEL_21;
    if ( v11 != 2 )
      break;
    if ( *((_DWORD *)v12 + 2)
      || (v22 = *(_QWORD *)(v5 + 24), *((_DWORD *)v12 + 2) = 1, v23 = *(_BYTE *)(v22 + 6), (v23 & 1) != 0) )
    {
      result = (unsigned int)(v58 - 1);
LABEL_21:
      LODWORD(v58) = result;
      if ( !(_DWORD)result )
        goto LABEL_25;
LABEL_22:
      result = (unsigned int)(result - 1);
      v5 = p_ptr[2 * result];
    }
    else
    {
      *(_BYTE *)(v22 + 6) = v23 | 1;
      v28 = *(_DWORD *)(a2 + 8);
      v29 = *(_DWORD *)(a2 + 12);
      if ( v28 >= v29 )
      {
        v40 = 2 * v29;
        v41 = sub_186B270(8 * v40);
        v28 = *(_DWORD *)(a2 + 8);
        v42 = *(_QWORD **)a2;
        v30 = (_QWORD *)v41;
        if ( v28 )
        {
          if ( v28 - 1 <= 2 || (_QWORD *)v41 == v42 + 1 )
          {
            for ( j = 0; j != v28; ++j )
              v30[j] = v42[j];
          }
          else
          {
            v43 = 0;
            do
            {
              *(__m128i *)&v30[v43] = _mm_loadu_si128((const __m128i *)&v42[v43]);
              v43 += 2;
            }
            while ( v43 != 2LL * (v28 >> 1) );
            if ( (v28 & 1) != 0 )
              v30[v28 & 0xFFFFFFFE] = v42[v28 & 0xFFFFFFFE];
          }
        }
        if ( v42 && v42 != (_QWORD *)(a2 + 16) )
        {
          sub_186B220(v42);
          v28 = *(_DWORD *)(a2 + 8);
        }
        *(_QWORD *)a2 = v30;
        *(_DWORD *)(a2 + 12) = v40;
      }
      else
      {
        v30 = *(_QWORD **)a2;
      }
      v30[v28] = v22;
      *(_DWORD *)(a2 + 8) = v28 + 1;
      v31 = (unsigned int)v58;
      if ( (unsigned int)v58 >= HIDWORD(v58) )
      {
        p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v58)));
        v39 = 0;
        v31 = (unsigned int)v58;
        if ( (_DWORD)v58 )
        {
          do
          {
            *(__m128i *)&p_ptr[v39] = _mm_loadu_si128((const __m128i *)&v57[v39]);
            v39 += 2;
          }
          while ( v39 != 2LL * (unsigned int)v58 );
        }
        if ( v57 != &ptr && v57 )
        {
          sub_186B220(v57);
          v31 = (unsigned int)v58;
        }
        v57 = p_ptr;
        HIDWORD(v58) *= 2;
      }
      else
      {
        p_ptr = v57;
      }
      v32 = &p_ptr[2 * v31];
      *v32 = v22;
      *((_DWORD *)v32 + 2) = 0;
      v33 = (unsigned int)v58;
      v34 = v58 + 1;
LABEL_45:
      LODWORD(v58) = v34;
      result = (unsigned int)(v34 - 1);
      v5 = p_ptr[2 * v33];
    }
  }
  if ( v11 )
  {
    sub_1872CE0("");
    sub_1873130(114, 100);
  }
  v13 = *(_DWORD *)(v5 + 24);
LABEL_9:
  v14 = *((unsigned int *)v12 + 2);
  v15 = v5 + 8 * v14;
  while ( (unsigned int)v14 < v13 )
  {
    v16 = *(_QWORD *)(v15 + 32);
    LODWORD(v14) = v14 + 1;
    v15 += 8;
    *((_DWORD *)v12 + 2) = v14;
    v17 = *(_BYTE *)(v16 + 6);
    if ( (v17 & 1) == 0 )
    {
      *(_BYTE *)(v16 + 6) = v17 | 1;
      v18 = *(_DWORD *)(a2 + 8);
      v19 = *(_DWORD *)(a2 + 12);
      if ( v18 >= v19 )
      {
        v24 = 2 * v19;
        v25 = sub_186B270(8 * v24);
        v18 = *(_DWORD *)(a2 + 8);
        v26 = *(_QWORD **)a2;
        v20 = (_QWORD *)v25;
        if ( v18 )
        {
          if ( v18 - 1 <= 2 || (_QWORD *)v25 == v26 + 1 )
          {
            for ( k = 0; k != v18; ++k )
              v20[k] = v26[k];
          }
          else
          {
            v27 = 0;
            do
            {
              *(__m128i *)&v20[v27] = _mm_loadu_si128((const __m128i *)&v26[v27]);
              v27 += 2;
            }
            while ( v27 != 2LL * (v18 >> 1) );
            if ( (v18 & 1) != 0 )
              v20[v18 & 0xFFFFFFFE] = v26[v18 & 0xFFFFFFFE];
          }
        }
        if ( v26 != (_QWORD *)(a2 + 16) && v26 )
        {
          v56 = v20;
          sub_186B220(v26);
          v18 = *(_DWORD *)(a2 + 8);
          v20 = v56;
        }
        *(_QWORD *)a2 = v20;
        *(_DWORD *)(a2 + 12) = v24;
      }
      else
      {
        v20 = *(_QWORD **)a2;
      }
      v20[v18] = v16;
      *(_DWORD *)(a2 + 8) = v18 + 1;
      v21 = *(_WORD *)(v16 + 4);
      if ( v21 != 1 )
      {
        if ( v21 == 2 )
        {
          v37 = (unsigned int)v58;
          if ( (unsigned int)v58 >= HIDWORD(v58) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v58)));
            v44 = 0;
            v37 = (unsigned int)v58;
            if ( (_DWORD)v58 )
            {
              do
              {
                *(__m128i *)&p_ptr[v44] = _mm_loadu_si128((const __m128i *)&v57[v44]);
                v44 += 2;
              }
              while ( v44 != 2LL * (unsigned int)v58 );
            }
            if ( v57 && v57 != &ptr )
            {
              sub_186B220(v57);
              v37 = (unsigned int)v58;
            }
            v57 = p_ptr;
            HIDWORD(v58) *= 2;
          }
          else
          {
            p_ptr = v57;
          }
          v38 = &p_ptr[2 * v37];
          *v38 = v16;
          *((_DWORD *)v38 + 2) = 0;
          v33 = (unsigned int)v58;
          v34 = v58 + 1;
          goto LABEL_45;
        }
        if ( v21 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          v35 = v58;
          if ( (unsigned int)v58 >= HIDWORD(v58) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v58)));
            v55 = 0;
            v35 = v58;
            if ( (_DWORD)v58 )
            {
              do
              {
                *(__m128i *)&p_ptr[v55] = _mm_loadu_si128((const __m128i *)&v57[v55]);
                v55 += 2;
              }
              while ( v55 != 2LL * (unsigned int)v58 );
            }
            if ( v57 != &ptr )
            {
              if ( v57 )
              {
                sub_186B220(v57);
                v35 = v58;
              }
            }
            v57 = p_ptr;
            HIDWORD(v58) *= 2;
          }
          else
          {
            p_ptr = v57;
          }
          v36 = &p_ptr[2 * v35];
          *((_DWORD *)v36 + 2) = 0;
          v33 = (unsigned int)v58;
          *v36 = v16;
          v34 = v58 + 1;
          goto LABEL_45;
        }
      }
      goto LABEL_9;
    }
  }
  result = (unsigned int)(v58 - 1);
  LODWORD(v58) = v58 - 1;
  if ( *(_WORD *)(v5 + 4)
    || (v47 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
    || *v47 != 5
    || (v48 = v47[1], v48 != 24) && v48 != 25 )
  {
    v45 = 0;
    if ( *(_DWORD *)(v5 + 24) )
    {
      do
        sub_15D0A90(*a1 + 24LL, *(_QWORD *)(v5 + 8LL * v45++ + 32), 1);
      while ( v45 < *(_DWORD *)(v5 + 24) );
      result = (unsigned int)v58;
    }
  }
  p_ptr = v57;
  if ( (_DWORD)result )
    goto LABEL_22;
LABEL_25:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

