__int64 __fastcall sub_D9A4C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  unsigned int v7; // edx
  unsigned int v8; // ebx
  _QWORD *v9; // r12
  __int64 *p_ptr; // r12
  __int16 v11; // dx
  __int64 *v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // si
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int16 v21; // ax
  __int64 v22; // r14
  char v23; // al
  __int64 v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // edx
  unsigned int v28; // ebx
  _QWORD *v29; // r12
  __int64 v30; // rdx
  __int64 *v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int **v43; // r12
  unsigned int **v44; // r13
  unsigned int v45; // ecx
  _DWORD *v46; // rdx
  unsigned int **v47; // r12
  unsigned int **m; // rbx
  unsigned int v49; // r13d
  __int64 k; // rsi
  __int64 v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  __int64 j; // rax
  unsigned int v56; // edx
  __int64 *v57; // rax
  __int64 i; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-168h]
  __int64 v61; // [rsp+0h] [rbp-168h]
  unsigned int v62; // [rsp+0h] [rbp-168h]
  __int64 v63; // [rsp+0h] [rbp-168h]
  __int64 v64; // [rsp+10h] [rbp-158h]
  __int64 *v65; // [rsp+20h] [rbp-148h]
  __int64 v66; // [rsp+28h] [rbp-140h]
  __int64 ptr; // [rsp+30h] [rbp-138h] BYREF
  int v68; // [rsp+38h] [rbp-130h]

  result = *(unsigned __int8 *)(a3 + 6);
  if ( (result & 1) != 0 )
    return result;
  v5 = a3;
  *(_BYTE *)(a3 + 6) = result | 1;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 12);
  if ( v7 >= v8 )
  {
    v51 = 2 * v8;
    v52 = sub_186B270(8 * v51);
    v7 = *(_DWORD *)(a2 + 8);
    v53 = *(_QWORD **)a2;
    v9 = (_QWORD *)v52;
    if ( v7 )
    {
      if ( v7 - 1 <= 2 || (_QWORD *)v52 == v53 + 1 )
      {
        for ( i = 0; i != v7; ++i )
          v9[i] = v53[i];
      }
      else
      {
        v54 = 0;
        do
        {
          *(__m128i *)&v9[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
          v54 += 2;
        }
        while ( 2LL * (v7 >> 1) != v54 );
        if ( (v7 & 1) != 0 )
          v9[v7 & 0xFFFFFFFE] = v53[v7 & 0xFFFFFFFE];
      }
    }
    if ( v53 != (_QWORD *)(a2 + 16) && v53 )
    {
      sub_186B220(v53);
      v7 = *(_DWORD *)(a2 + 8);
    }
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 12) = v51;
  }
  else
  {
    v9 = *(_QWORD **)a2;
  }
  v9[v7] = v5;
  p_ptr = &ptr;
  *(_DWORD *)(a2 + 8) = v7 + 1;
  v65 = &ptr;
  ptr = v5;
  v68 = 0;
  v66 = 0x1000000001LL;
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
      result = (unsigned int)(v66 - 1);
LABEL_21:
      LODWORD(v66) = result;
      if ( !(_DWORD)result )
        goto LABEL_25;
LABEL_22:
      result = (unsigned int)(result - 1);
      v5 = p_ptr[2 * result];
    }
    else
    {
      *(_BYTE *)(v22 + 6) = v23 | 1;
      v27 = *(_DWORD *)(a2 + 8);
      v28 = *(_DWORD *)(a2 + 12);
      if ( v27 >= v28 )
      {
        v37 = 2 * v28;
        v38 = sub_186B270(8 * v37);
        v27 = *(_DWORD *)(a2 + 8);
        v39 = *(_QWORD **)a2;
        v29 = (_QWORD *)v38;
        if ( v27 )
        {
          if ( v27 - 1 <= 2 || (_QWORD *)v38 == v39 + 1 )
          {
            for ( j = 0; j != v27; ++j )
              v29[j] = v39[j];
          }
          else
          {
            v40 = 0;
            do
            {
              *(__m128i *)&v29[v40] = _mm_loadu_si128((const __m128i *)&v39[v40]);
              v40 += 2;
            }
            while ( 2LL * (v27 >> 1) != v40 );
            if ( (v27 & 1) != 0 )
              v29[v27 & 0xFFFFFFFE] = v39[v27 & 0xFFFFFFFE];
          }
        }
        if ( v39 && v39 != (_QWORD *)(a2 + 16) )
        {
          sub_186B220(v39);
          v27 = *(_DWORD *)(a2 + 8);
        }
        *(_QWORD *)a2 = v29;
        *(_DWORD *)(a2 + 12) = v37;
      }
      else
      {
        v29 = *(_QWORD **)a2;
      }
      v29[v27] = v22;
      *(_DWORD *)(a2 + 8) = v27 + 1;
      v30 = (unsigned int)v66;
      if ( (unsigned int)v66 >= HIDWORD(v66) )
      {
        p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v66)));
        v36 = 0;
        v30 = (unsigned int)v66;
        if ( (_DWORD)v66 )
        {
          do
          {
            *(__m128i *)&p_ptr[v36] = _mm_loadu_si128((const __m128i *)&v65[v36]);
            v36 += 2;
          }
          while ( v36 != 2LL * (unsigned int)v66 );
        }
        if ( v65 && v65 != &ptr )
        {
          sub_186B220(v65);
          v30 = (unsigned int)v66;
        }
        v65 = p_ptr;
        HIDWORD(v66) *= 2;
      }
      else
      {
        p_ptr = v65;
      }
      v31 = &p_ptr[2 * v30];
      *v31 = v22;
      *((_DWORD *)v31 + 2) = 0;
      v32 = (unsigned int)v66;
      v33 = v66 + 1;
LABEL_45:
      LODWORD(v66) = v33;
      result = (unsigned int)(v33 - 1);
      v5 = p_ptr[2 * v32];
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
        v60 = v16;
        v24 = 2 * v19;
        v20 = sub_186B270(8 * v24);
        v18 = *(_DWORD *)(a2 + 8);
        v25 = *(_QWORD **)a2;
        v16 = v60;
        if ( v18 )
        {
          if ( v18 - 1 <= 2 || (_QWORD *)v20 == v25 + 1 )
          {
            for ( k = 0; k != v18; ++k )
              *(_QWORD *)(v20 + k * 8) = v25[k];
          }
          else
          {
            v26 = 0;
            do
            {
              *(__m128i *)(v20 + v26 * 8) = _mm_loadu_si128((const __m128i *)&v25[v26]);
              v26 += 2;
            }
            while ( 2LL * (v18 >> 1) != v26 );
            if ( (v18 & 1) != 0 )
              *(_QWORD *)(v20 + 8LL * (v18 & 0xFFFFFFFE)) = v25[v18 & 0xFFFFFFFE];
          }
        }
        if ( v25 && v25 != (_QWORD *)(a2 + 16) )
        {
          v64 = v20;
          sub_186B220(v25);
          v18 = *(_DWORD *)(a2 + 8);
          v20 = v64;
          v16 = v60;
        }
        *(_QWORD *)a2 = v20;
        *(_DWORD *)(a2 + 12) = v24;
      }
      else
      {
        v20 = *(_QWORD *)a2;
      }
      *(_QWORD *)(v20 + 8LL * v18) = v16;
      *(_DWORD *)(a2 + 8) = v18 + 1;
      v21 = *(_WORD *)(v16 + 4);
      if ( v21 == 1 )
        goto LABEL_9;
      if ( v21 == 2 )
      {
        v34 = (unsigned int)v66;
        if ( (unsigned int)v66 >= HIDWORD(v66) )
        {
          v61 = v16;
          p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v66)));
          v41 = 0;
          v16 = v61;
          v34 = (unsigned int)v66;
          if ( (_DWORD)v66 )
          {
            do
            {
              *(__m128i *)&p_ptr[v41] = _mm_loadu_si128((const __m128i *)&v65[v41]);
              v41 += 2;
            }
            while ( v41 != 2LL * (unsigned int)v66 );
          }
          if ( v65 && v65 != &ptr )
          {
            sub_186B220(v65);
            v34 = (unsigned int)v66;
            v16 = v61;
          }
          v65 = p_ptr;
          HIDWORD(v66) *= 2;
        }
        else
        {
          p_ptr = v65;
        }
        v35 = &p_ptr[2 * v34];
        *v35 = v16;
        *((_DWORD *)v35 + 2) = 0;
        v32 = (unsigned int)v66;
        v33 = v66 + 1;
      }
      else
      {
        if ( v21 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( !*(_DWORD *)(v16 + 24) )
        {
          sub_D99420(a1 + 56, (void **)(a1 + 8), (void **)(a1 + 32), v16);
          goto LABEL_9;
        }
        v56 = v66;
        if ( (unsigned int)v66 >= HIDWORD(v66) )
        {
          v63 = v16;
          p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v66)));
          v59 = 0;
          v16 = v63;
          v56 = v66;
          if ( (_DWORD)v66 )
          {
            do
            {
              *(__m128i *)&p_ptr[v59] = _mm_loadu_si128((const __m128i *)&v65[v59]);
              v59 += 2;
            }
            while ( v59 != 2LL * (unsigned int)v66 );
          }
          if ( v65 )
          {
            if ( v65 != &ptr )
            {
              sub_186B220(v65);
              v56 = v66;
              v16 = v63;
            }
          }
          v65 = p_ptr;
          HIDWORD(v66) *= 2;
        }
        else
        {
          p_ptr = v65;
        }
        v57 = &p_ptr[2 * v56];
        *((_DWORD *)v57 + 2) = 0;
        v32 = (unsigned int)v66;
        *v57 = v16;
        v33 = v66 + 1;
      }
      goto LABEL_45;
    }
  }
  LODWORD(v66) = v66 - 1;
  v42 = 8LL * *(unsigned int *)(v5 + 24);
  if ( !*(_WORD *)(v5 + 4)
    && (v46 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) != nullptr
    && *(_DWORD *)(a1 + 80) == *v46
    && v46[1] == 1 )
  {
    v47 = (unsigned int **)(v5 + 32 + v42);
    if ( v42 )
    {
      for ( m = (unsigned int **)(v5 + 40); v47 != m; *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * (v49 >> 5)) |= 1 << v49 )
      {
        v49 = **m;
        if ( v49 >= *(_DWORD *)(a1 + 104) )
          sub_186B510(a1 + 104, v49 + 1, 0);
        ++m;
      }
    }
  }
  else
  {
    v43 = (unsigned int **)(v5 + 32 + v42);
    v44 = (unsigned int **)(v5 + 32);
    if ( v42 )
    {
      do
      {
        v45 = **v44;
        if ( v45 >= *(_DWORD *)(a1 + 104) )
        {
          v62 = **v44;
          sub_186B510(a1 + 104, v45 + 1, 0);
          v45 = v62;
        }
        ++v44;
        *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * (v45 >> 5)) |= 1 << v45;
      }
      while ( v43 != v44 );
    }
  }
  sub_D99420(a1 + 56, (void **)(a1 + 8), (void **)(a1 + 32), v5);
  result = (unsigned int)v66;
  p_ptr = v65;
  if ( (_DWORD)v66 )
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

