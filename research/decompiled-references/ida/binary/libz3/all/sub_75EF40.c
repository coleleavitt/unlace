_QWORD *__fastcall sub_75EF40(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned int v7; // r9d
  int *v8; // rdx
  int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // r9d
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  _BYTE *v14; // r14
  __int64 v15; // rbp
  unsigned int v16; // ecx
  __int64 v17; // rax
  _QWORD *v18; // r13
  _BYTE *v19; // rax
  char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  _BYTE *v27; // rdi
  _QWORD *result; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rsi
  unsigned int v35; // esi
  __int64 v36; // rdx
  __int64 i; // rdx
  _QWORD *v40; // [rsp+18h] [rbp-860h]
  _QWORD *v41; // [rsp+20h] [rbp-858h]
  unsigned int v42; // [rsp+28h] [rbp-850h]
  _QWORD v43[128]; // [rsp+30h] [rbp-848h] BYREF
  void *ptr; // [rsp+430h] [rbp-448h]
  __int64 v45; // [rsp+438h] [rbp-440h]
  _BYTE v46[1080]; // [rsp+440h] [rbp-438h] BYREF

  v41 = v43;
  if ( !*(_WORD *)(a3 + 4)
    && (v5 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
    && *(_DWORD *)(a1 + 8) == *v5
    && v5[1] == 37 )
  {
    v30 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v30 )
    {
      v31 = a3 + 8 * v30;
      v32 = a3;
      v6 = v43;
      v7 = 0;
      LODWORD(v33) = 128;
      while ( 1 )
      {
        v34 = *(_QWORD *)(v32 + 32);
        v32 += 8;
        v6[v7] = v34;
        v35 = v7 + 1;
        v42 = v7 + 1;
        if ( v31 == v32 )
          break;
        if ( v35 >= (unsigned int)v33 )
        {
          v33 = (unsigned int)(2 * v33);
          v6 = (_QWORD *)sub_186B270(8 * v33);
          v35 = v42;
          if ( v42 )
          {
            if ( v42 - 1 <= 2 || v6 == v41 + 1 )
            {
              for ( i = 0; i != v42; ++i )
                v6[i] = v41[i];
            }
            else
            {
              v36 = 0;
              do
              {
                *(__m128i *)&v6[v36] = _mm_loadu_si128((const __m128i *)&v41[v36]);
                v36 += 2;
              }
              while ( v36 != 2LL * (v42 >> 1) );
              if ( (v42 & 1) != 0 )
                v6[v42 & 0xFFFFFFFE] = v41[v42 & 0xFFFFFFFE];
            }
          }
          if ( v41 != v43 && v41 )
          {
            v40 = v6;
            sub_186B220(v41);
            v35 = v42;
            v6 = v40;
          }
          v41 = v6;
        }
        v7 = v35;
      }
    }
    else
    {
      v6 = v43;
      v7 = -1;
    }
  }
  else
  {
    v43[0] = a3;
    v6 = v43;
    v7 = 0;
  }
  v8 = *(int **)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( *((_BYTE *)v8 + 8) )
    sub_DBF6E(0);
  v9 = *v8;
  if ( *((_BYTE *)v8 + 24) )
    sub_DBF6E(0);
  v10 = v7;
  v11 = v7 - v8[4];
  v45 = 0x8000000000LL;
  v12 = v10 - v9;
  ptr = v46;
  v13 = v11;
  v14 = v46;
  if ( v11 >= v12 )
  {
    LODWORD(v15) = 128;
    v16 = 0;
    while ( 1 )
    {
      v18 = &v6[v12];
      if ( v16 >= (unsigned int)v15 )
      {
        v15 = (unsigned int)(2 * v15);
        v19 = (_BYTE *)sub_186B270(8 * v15);
        v16 = v45;
        v20 = (char *)ptr;
        v14 = v19;
        if ( (_DWORD)v45 )
        {
          if ( (unsigned int)(v45 - 1) <= 2 || v19 == (char *)ptr + 8 )
          {
            v29 = 0;
            do
            {
              *(_QWORD *)&v14[v29] = *(_QWORD *)&v20[v29];
              v29 += 8;
            }
            while ( 8LL * v16 != v29 );
          }
          else
          {
            v21 = 0;
            do
            {
              *(__m128i *)&v14[v21] = _mm_loadu_si128((const __m128i *)&v20[v21]);
              v21 += 16;
            }
            while ( v21 != 16LL * (v16 >> 1) );
            if ( (v16 & 1) != 0 )
              *(_QWORD *)&v14[8 * (v16 & 0xFFFFFFFE)] = *(_QWORD *)&v20[8 * (v16 & 0xFFFFFFFE)];
          }
        }
        if ( v20 != v46 && v20 )
        {
          sub_186B220(v20);
          v16 = v45;
        }
        ptr = v14;
        HIDWORD(v45) = v15;
      }
      v17 = v16;
      ++v12;
      ++v16;
      *(_QWORD *)&v14[8 * v17] = *v18;
      LODWORD(v45) = v16;
      if ( v13 < v12 )
        break;
      v6 = v41;
    }
  }
  v22 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v24 = *a4;
  if ( *a4 )
  {
    v25 = a4[1];
    if ( (*(_DWORD *)(v24 + 8))-- == 1 )
      sub_15D7BC0(v25, v24);
  }
  v27 = ptr;
  *a4 = v23;
  if ( v27 && v27 != v46 )
    sub_186B220(v27);
  result = v43;
  if ( v41 != v43 )
  {
    if ( v41 )
      return (_QWORD *)sub_186B220(v41);
  }
  return result;
}

