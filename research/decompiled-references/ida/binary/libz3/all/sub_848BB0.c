__int64 __fastcall sub_848BB0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v16; // si
  _DWORD *v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rbx
  void *v22; // rdi
  __int64 *v23; // rbx
  unsigned __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned int v30; // r14d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  _DWORD *v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // r9
  _QWORD *v38; // rax
  int v39; // [rsp+0h] [rbp-144h]
  int v40; // [rsp+0h] [rbp-144h]
  __int64 v41; // [rsp+4h] [rbp-140h]
  __int64 v42; // [rsp+4h] [rbp-140h]
  _DWORD *v43; // [rsp+14h] [rbp-130h]
  __m128 v44; // [rsp+2Ch] [rbp-118h] BYREF
  __int64 v45[4]; // [rsp+3Ch] [rbp-108h] BYREF
  char v46[8]; // [rsp+5Ch] [rbp-E8h] BYREF
  __int64 v47; // [rsp+64h] [rbp-E0h]
  __int64 *v48; // [rsp+6Ch] [rbp-D8h]
  __int64 v49; // [rsp+7Ch] [rbp-C8h]
  char v50[8]; // [rsp+8Ch] [rbp-B8h] BYREF
  __int64 v51; // [rsp+94h] [rbp-B0h]
  void *v52; // [rsp+B4h] [rbp-90h]
  char v53[8]; // [rsp+CCh] [rbp-78h] BYREF
  __int64 v54; // [rsp+D4h] [rbp-70h]
  void *ptr; // [rsp+F4h] [rbp-50h]

  v44 = _mm_loadh_ps((const double *)(a1 + 16));
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_167EE60(v46, &v44, 0, 0, 0);
  sub_167F5F0(v50, v46);
  sub_167F5B0(v53, v46);
  while ( 1 )
  {
    result = sub_167E490(v50, v53);
    if ( !(_BYTE)result )
      break;
    v6 = sub_167E460(v50);
    v7 = v6;
    if ( !*(_WORD *)(v6 + 4) && (*(_BYTE *)(v6 + 30) & 1) == 0 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      if ( !v8 || *v8 == -1 )
      {
        v9 = *(unsigned int *)(v7 + 24);
        if ( (_DWORD)v9 )
        {
          v10 = v7 + 32;
          v11 = 0;
          v12 = v7 + 32 + 8 * v9;
          do
          {
            v15 = *(_QWORD *)v10;
            v16 = *(_WORD *)(*(_QWORD *)v10 + 4LL);
            if ( v16 )
            {
              if ( v16 != 1
                || (v13 = *(_QWORD *)(a3 + 16)) == 0
                || (v14 = *(unsigned int *)(v15 + 16), (unsigned int)v14 >= *(_DWORD *)(v13 - 4))
                || !*(_BYTE *)(v13 + v14) )
              {
LABEL_21:
                v18 = *(_QWORD **)(a3 + 72);
                if ( v18 )
                {
                  v19 = *((unsigned int *)v18 - 1);
                  if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
                  {
                    v30 = (unsigned int)(3 * v19 + 1) >> 1;
                    v31 = 16 * v30 + 8;
                    if ( 16 * (int)v19 + 8 >= (unsigned int)v31 || (unsigned int)v19 >= v30 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v45, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v45);
                      sub_233E40((__int64)v45);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v41 = v12;
                    v39 = v11;
                    v32 = sub_186B270(v31);
                    v33 = *(_QWORD *)(a3 + 72);
                    v11 = v39;
                    v34 = (_DWORD *)v32;
                    v18 = (_QWORD *)(v32 + 8);
                    v12 = v41;
                    if ( v33 )
                    {
                      v35 = *(unsigned int *)(v33 - 4);
                      *(_DWORD *)(v32 + 4) = v35;
                      v36 = 0;
                      v37 = 16 * v35;
                      if ( v37 )
                      {
                        do
                        {
                          *(__m128i *)&v34[v36 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v33 + v36));
                          v36 += 16LL;
                        }
                        while ( v36 != v37 );
                      }
                      v43 = v34;
                      sub_186B220((void *)(v33 - 8));
                      v34 = v43;
                      v11 = v39;
                      v12 = v41;
                      v20 = &v18[2 * (unsigned int)v43[1]];
                    }
                    else
                    {
                      *(_DWORD *)(v32 + 4) = 0;
                      v20 = (__int64 *)(v32 + 8);
                    }
                    *(_QWORD *)(a3 + 72) = v18;
                    *v34 = v30;
                  }
                  else
                  {
                    v20 = &v18[2 * v19];
                  }
                }
                else
                {
                  v42 = v12;
                  v40 = v11;
                  v38 = (_QWORD *)sub_186B270(0x28u);
                  v18 = v38 + 1;
                  *v38 = 2;
                  v11 = v40;
                  *(_QWORD *)(a3 + 72) = v38 + 1;
                  v12 = v42;
                  v20 = v38 + 1;
                }
                *v20 = v7;
                *((_DWORD *)v20 + 2) = v11;
                ++*((_DWORD *)v18 - 1);
              }
            }
            else if ( (*(_BYTE *)(v15 + 30) & 1) == 0 )
            {
              v17 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
              if ( v17 )
              {
                if ( *v17 != -1 )
                  goto LABEL_21;
              }
            }
            v10 += 8;
            ++v11;
          }
          while ( v12 != v10 );
        }
      }
    }
    sub_167EA90(v50);
  }
  if ( ptr )
    result = sub_186B220(ptr);
  if ( v54 )
    result = sub_186B220((void *)(v54 - 8));
  if ( v52 )
    result = sub_186B220(v52);
  if ( v51 )
    result = sub_186B220((void *)(v51 - 8));
  v21 = v49;
  if ( v49 )
  {
    v22 = *(void **)(v49 + 16);
    if ( v22 )
      result = (__int64)memset(v22, 0, 4LL * *(unsigned int *)(v49 + 12));
    *(_DWORD *)(v21 + 8) = 0;
  }
  v23 = v48;
  if ( v48 )
  {
    result = *((unsigned int *)v48 - 1);
    v24 = (unsigned __int64)&v48[result];
    if ( (unsigned __int64)v48 >= v24 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = v47;
          v27 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v27 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v24 )
          goto LABEL_44;
      }
      result = sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v24 );
LABEL_44:
    v23 = v48;
    if ( v48 )
LABEL_45:
      result = sub_186B220(v23 - 1);
  }
  v28 = v44.m128_u64[0];
  if ( v44.m128_u64[0] )
  {
    v29 = v44.m128_u64[1];
    v27 = (*(_DWORD *)(v44.m128_u64[0] + 8))-- == 1;
    if ( v27 )
      return sub_15D7BC0(v29, v28);
  }
  return result;
}

