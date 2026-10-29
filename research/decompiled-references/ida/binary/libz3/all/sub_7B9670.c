size_t __fastcall sub_7B9670(__int64 a1, _DWORD *a2, __m128i a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  char **v5; // rbp
  __int64 v6; // rdx
  _QWORD *v9; // r13
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int v20; // r14d
  unsigned int i; // r13d
  int v22; // eax
  __int64 v23; // rsi
  int v24; // r15d
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned int *v27; // rsi
  unsigned int *v28; // r10
  unsigned int *v29; // r11
  unsigned int *v30; // rdx
  unsigned int *v31; // rdi
  unsigned int v32; // ecx
  unsigned int *v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int *v36; // rcx
  __int64 v37; // rdi
  unsigned int *v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r13
  unsigned int *v41; // rax
  unsigned int v42; // r15d
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  size_t result; // rax
  unsigned int v46; // r14d
  size_t v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  _DWORD *v50; // r10
  __int64 v51; // r11
  unsigned __int64 v52; // rax
  __int64 v53; // r11
  unsigned int *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int *v59; // [rsp+8h] [rbp-90h]
  unsigned int *v60; // [rsp+8h] [rbp-90h]
  unsigned int v61; // [rsp+14h] [rbp-84h]
  unsigned int v62; // [rsp+14h] [rbp-84h]
  __int64 v63; // [rsp+18h] [rbp-80h]
  _DWORD *v64; // [rsp+20h] [rbp-78h]
  unsigned int *v65; // [rsp+38h] [rbp-60h] BYREF
  __int64 v66[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = *(_QWORD **)(a1 + 976);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( !v10 )
  {
    if ( !v9 )
      goto LABEL_11;
    v11 = 0;
    goto LABEL_45;
  }
  v11 = 2 * *(_DWORD *)(v10 - 4);
  if ( v9 )
  {
    v12 = *((unsigned int *)v9 - 1);
    if ( (unsigned int)v12 >= v11 )
    {
LABEL_45:
      *((_DWORD *)v9 - 1) = v11;
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v11 )
      goto LABEL_11;
    v12 = 0;
    v57 = (_QWORD *)sub_186B270(0x10u);
    v9 = v57 + 1;
    *v57 = 2;
    *(_QWORD *)(a1 + 976) = v57 + 1;
  }
  while ( 1 )
  {
    v16 = *((_DWORD *)v9 - 2);
    if ( v16 >= v11 )
      break;
    v13 = (3 * v16 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C(v66, "Overflow encountered when expanding vector", v4);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v66);
      sub_233E40((__int64)v66);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v9 - 1, v14);
    v9 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a1 + 976) = v15 + 2;
  }
  v17 = 4 * v12;
  *((_DWORD *)v9 - 1) = v11;
  v18 = 4LL * v11;
  if ( v17 != v18 )
    memset((char *)v9 + v17, 0, v18 - v17);
LABEL_11:
  v19 = a2[15];
  v20 = a2[4] ^ 1;
  *((_DWORD *)v9 + v20) = v19;
  for ( i = 0; i < a2[8]; *(_DWORD *)(*(_QWORD *)(a1 + 976) + 4LL * v25) += v24 )
  {
    v22 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i);
    v23 = i++;
    v24 = v22;
    v25 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v23);
  }
  (*(void (__fastcall **)(unsigned int **, _DWORD *))(*(_QWORD *)a2 + 72LL))(&v65, a2);
  LODWORD(v66[0]) = v20;
  sub_7B5E20(&v65, (unsigned int *)v66);
  v27 = v65;
  if ( v65 )
  {
    v28 = &v65[*(v65 - 1)];
    if ( v65 != v28 )
    {
      v26 = *(_QWORD *)(a1 + 976);
      v29 = v65;
      v30 = v65;
      do
      {
        v31 = (unsigned int *)(v26 + 4LL * *v30);
        v32 = *v31;
        v33 = (unsigned int *)(v26 + 4LL * (*v30 ^ 1));
        v34 = *v33;
        if ( *v31 >= *v33 )
        {
          if ( v34 >= v19 )
          {
            v54 = &v27[*(v27 - 1)];
            if ( v27 != v54 )
            {
              do
              {
                v55 = *v29++;
                *(_DWORD *)(v26 + 4 * v55) = 0;
              }
              while ( v29 != v54 );
            }
            return sub_186B220(v27 - 2);
          }
          *v33 = 0;
          v19 -= v34;
          *v31 = v32 - v34;
        }
        ++v30;
      }
      while ( v28 != v30 );
      v35 = *(_QWORD *)(a1 + 984);
      if ( !v35 )
        goto LABEL_22;
      goto LABEL_21;
    }
    v35 = *(_QWORD *)(a1 + 984);
    if ( v35 )
    {
LABEL_21:
      *(_DWORD *)(v35 - 4) = 0;
LABEL_22:
      v36 = &v27[*(v27 - 1)];
      if ( v27 != v36 )
      {
        v37 = *(_QWORD *)(a1 + 976);
        v38 = v27;
        do
        {
          while ( 1 )
          {
            v39 = *v38;
            v40 = 4 * v39;
            v41 = (unsigned int *)(v37 + 4 * v39);
            v42 = *v41;
            if ( *v41 )
              break;
            ++v38;
            *v41 = 0;
            if ( v36 == v38 )
              goto LABEL_30;
          }
          v26 = *(_QWORD *)(a1 + 984);
          if ( v26 )
          {
            v43 = *(unsigned int *)(v26 - 4);
            if ( (_DWORD)v43 == *(_DWORD *)(v26 - 8) )
            {
              v46 = (unsigned int)(3 * v43 + 1) >> 1;
              v47 = 8 * v46 + 8;
              if ( 8 * (int)v43 + 8 >= (unsigned int)v47 || (unsigned int)v43 >= v46 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v66, "Overflow encountered when expanding vector", v6);
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v66);
                sub_233E40((__int64)v66);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v61 = *v38;
              v59 = v36;
              v48 = sub_186B270(v47);
              v49 = *(_QWORD *)(a1 + 984);
              v36 = v59;
              v50 = (_DWORD *)v48;
              v26 = v48 + 8;
              LODWORD(v39) = v61;
              if ( v49 )
              {
                v51 = *(unsigned int *)(v49 - 4);
                *(_DWORD *)(v48 + 4) = v51;
                v52 = 0;
                v53 = 8 * v51;
                if ( v53 )
                {
                  do
                  {
                    *(_QWORD *)&v50[v52 / 4 + 2] = *(_QWORD *)(v49 + v52);
                    v52 += 8LL;
                  }
                  while ( v53 != v52 );
                }
                v64 = v50;
                v63 = v26;
                sub_186B220((void *)(v49 - 8));
                v50 = v64;
                v26 = v63;
                v36 = v59;
                LODWORD(v39) = v61;
                v44 = (_QWORD *)(v63 + 8LL * (unsigned int)v64[1]);
              }
              else
              {
                *(_DWORD *)(v48 + 4) = 0;
                v44 = (_QWORD *)(v48 + 8);
              }
              v37 = *(_QWORD *)(a1 + 976);
              *(_QWORD *)(a1 + 984) = v26;
              *v50 = v46;
              v41 = (unsigned int *)(v37 + v40);
            }
            else
            {
              v44 = (_QWORD *)(v26 + 8 * v43);
            }
          }
          else
          {
            v62 = *v38;
            v60 = v36;
            v58 = (_QWORD *)sub_186B270(0x18u);
            v37 = *(_QWORD *)(a1 + 976);
            v26 = (__int64)(v58 + 1);
            v36 = v60;
            *v58 = 2;
            *(_QWORD *)(a1 + 984) = v58 + 1;
            LODWORD(v39) = v62;
            v44 = v58 + 1;
            v41 = (unsigned int *)(v37 + v40);
          }
          ++v38;
          a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v42), _mm_cvtsi32_si128(v39));
          *v44 = a3.m128i_i64[0];
          ++*(_DWORD *)(v26 - 4);
          *v41 = 0;
        }
        while ( v36 != v38 );
      }
    }
  }
  else
  {
    v56 = *(_QWORD *)(a1 + 984);
    if ( v56 )
      *(_DWORD *)(v56 - 4) = 0;
  }
LABEL_30:
  result = sub_7B8DC0(a1, 0xFFFFFFFE, (int **)(a1 + 984), v19, 0, v26, a3);
  if ( v65 )
    return sub_186B220(v65 - 2);
  return result;
}

