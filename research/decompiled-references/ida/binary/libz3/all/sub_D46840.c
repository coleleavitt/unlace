__int64 __fastcall sub_D46840(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char v5; // al
  unsigned int v6; // r14d
  _DWORD *v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // r13d
  __int64 v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // r13d
  _QWORD *v14; // r12
  __int16 v15; // ax
  _DWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  _DWORD *v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 j; // rax
  _QWORD *v42; // rax
  unsigned int v43; // r12d
  unsigned int v44; // ecx
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 i; // rax
  __int64 v49[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_BYTE *)(a2 + 6);
  v6 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    if ( !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( (!v8 || *v8 == -1) && (v5 & 2) == 0 )
      {
        *(_BYTE *)(a2 + 6) |= 2u;
        v9 = *(_DWORD *)(a1 + 152);
        v10 = *(_DWORD *)(a1 + 156);
        if ( v9 >= v10 )
        {
          v37 = 2 * v10;
          v38 = sub_186B270(8 * v37);
          v9 = *(_DWORD *)(a1 + 152);
          v39 = *(_QWORD **)(a1 + 144);
          v11 = v38;
          if ( v9 )
          {
            if ( v9 - 1 <= 2 || (_QWORD *)v38 == v39 + 1 )
            {
              for ( i = 0; i != v9; ++i )
                *(_QWORD *)(v11 + i * 8) = v39[i];
            }
            else
            {
              v40 = 0;
              do
              {
                *(__m128i *)(v11 + v40 * 8) = _mm_loadu_si128((const __m128i *)&v39[v40]);
                v40 += 2;
              }
              while ( v40 != 2LL * (v9 >> 1) );
              if ( (v9 & 1) != 0 )
                *(_QWORD *)(v11 + 8LL * (v9 & 0xFFFFFFFE)) = v39[v9 & 0xFFFFFFFE];
            }
          }
          if ( v39 != (_QWORD *)(a1 + 160) && v39 )
          {
            sub_186B220(v39);
            v9 = *(_DWORD *)(a1 + 152);
          }
          *(_QWORD *)(a1 + 144) = v11;
          *(_DWORD *)(a1 + 156) = v37;
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 144);
        }
        *(_QWORD *)(v11 + 8LL * v9) = a2;
        *(_DWORD *)(a1 + 152) = v9 + 1;
      }
    }
    return 1;
  }
  *(_BYTE *)(a2 + 6) = v5 | 1;
  v12 = *(_DWORD *)(a1 + 8);
  v13 = *(_DWORD *)(a1 + 12);
  if ( v12 >= v13 )
  {
    v33 = 2 * v13;
    v34 = sub_186B270(8 * v33);
    v12 = *(_DWORD *)(a1 + 8);
    v35 = *(_QWORD **)a1;
    v14 = (_QWORD *)v34;
    if ( v12 )
    {
      if ( v12 - 1 <= 2 || (_QWORD *)v34 == v35 + 1 )
      {
        for ( j = 0; j != v12; ++j )
          v14[j] = v35[j];
      }
      else
      {
        v36 = 0;
        do
        {
          *(__m128i *)&v14[v36] = _mm_loadu_si128((const __m128i *)&v35[v36]);
          v36 += 2;
        }
        while ( v36 != 2LL * (v12 >> 1) );
        if ( (v12 & 1) != 0 )
          v14[v12 & 0xFFFFFFFE] = v35[v12 & 0xFFFFFFFE];
      }
    }
    if ( v35 && v35 != (_QWORD *)(a1 + 16) )
    {
      sub_186B220(v35);
      v12 = *(_DWORD *)(a1 + 8);
    }
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v33;
  }
  else
  {
    v14 = *(_QWORD **)a1;
  }
  v14[v12] = a2;
  *(_DWORD *)(a1 + 8) = v12 + 1;
  v15 = *(_WORD *)(a2 + 4);
  if ( v15 )
  {
    if ( v15 == 1 )
      return 1;
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
    v16 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v16 || *v16 == -1 )
    {
      v17 = *(_QWORD **)(a1 + 296);
      if ( v17 )
      {
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
        {
          v43 = (3 * v18 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v18 + 8 >= v44 || v18 >= v43 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(v17 - 1, v44);
          v46 = v45[1];
          v17 = v45 + 2;
          *v45 = v43;
          *(_QWORD *)(a1 + 296) = v45 + 2;
          LODWORD(v45) = v46;
          v21 = &v17[v46];
          v20 = (_DWORD)v45 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v17[v19];
        }
      }
      else
      {
        v47 = (_QWORD *)sub_186B270(0x18u);
        *v47 = 2;
        v20 = 1;
        v17 = v47 + 1;
        *(_QWORD *)(a1 + 296) = v17;
        v21 = v17;
      }
      *v21 = a2;
      *((_DWORD *)v17 - 1) = v20;
    }
    return 1;
  }
  v22 = *(_QWORD **)(a1 + 288);
  if ( v22 )
  {
    v23 = *((unsigned int *)v22 - 1);
    if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
    {
      v25 = (unsigned int)(3 * v23 + 1) >> 1;
      v26 = 16 * v25 + 8;
      if ( 16 * (int)v23 + 8 >= (unsigned int)v26 || (unsigned int)v23 >= v25 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = sub_186B270(v26);
      v28 = *(_QWORD *)(a1 + 288);
      v29 = (_DWORD *)v27;
      v22 = (_QWORD *)(v27 + 8);
      if ( v28 )
      {
        v30 = *(unsigned int *)(v28 - 4);
        *(_DWORD *)(v27 + 4) = v30;
        v31 = 0;
        v32 = 16 * v30;
        if ( v32 )
        {
          do
          {
            *(__m128i *)&v29[v31 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v28 + v31));
            v31 += 16LL;
          }
          while ( v32 != v31 );
        }
        sub_186B220((void *)(v28 - 8));
        v24 = &v22[2 * (unsigned int)v29[1]];
      }
      else
      {
        *(_DWORD *)(v27 + 4) = 0;
        v24 = (_QWORD *)(v27 + 8);
      }
      *(_QWORD *)(a1 + 288) = v22;
      *v29 = v25;
    }
    else
    {
      v24 = &v22[2 * v23];
    }
  }
  else
  {
    v42 = (_QWORD *)sub_186B270(0x28u);
    v22 = v42 + 1;
    *v42 = 2;
    *(_QWORD *)(a1 + 288) = v42 + 1;
    v24 = v42 + 1;
  }
  *v24 = a2;
  *((_DWORD *)v24 + 2) = 0;
  ++*((_DWORD *)v22 - 1);
  return v6;
}

