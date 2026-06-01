__int64 __fastcall sub_460A00(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // rbp
  char **v7; // rbp
  unsigned int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *v18; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // ebp
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r14d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v51; // [rsp+0h] [rbp-68h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  int v53; // [rsp+10h] [rbp-58h]
  int v54; // [rsp+18h] [rbp-50h]
  __int64 v55; // [rsp+20h] [rbp-48h] BYREF
  char v56; // [rsp+28h] [rbp-40h]
  int v57; // [rsp+30h] [rbp-38h]
  int v58; // [rsp+38h] [rbp-30h]
  int v59; // [rsp+40h] [rbp-28h]
  void *v60; // [rsp+48h] [rbp-20h]

  v10 = *((_DWORD *)a3 + 2);
  if ( v10 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*a3 + v11);
      if ( *(_QWORD *)(v12 + 8LL * (unsigned int)(*(_DWORD *)(v12 + 24) - 1) + 32) == *(_QWORD *)(*a1 + 864LL) )
        break;
      v11 += 8;
      if ( v11 == 8LL * v10 )
        goto LABEL_9;
    }
    v13 = (_QWORD *)a1[3];
    ++*(_DWORD *)(v12 + 8);
    if ( v13 )
    {
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        v42 = (3 * v14 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v43 || v14 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v55);
          sub_233E40((__int64)&v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v13 - 1, v43);
        v45 = *a3;
        v13 = v44 + 2;
        *v44 = v42;
        v16 = *(_QWORD *)(v45 + v11);
        v46 = v44[1];
        a1[3] = v44 + 2;
        LODWORD(v44) = v46;
        v18 = &v13[v46];
        v17 = (_DWORD)v44 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v12;
        v17 = v14 + 1;
        v18 = &v13[v15];
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v13 = v48 + 1;
      *v48 = 2;
      v49 = *a3;
      a1[3] = v13;
      v18 = v13;
      v16 = *(_QWORD *)(v49 + v11);
      v17 = 1;
    }
    *v18 = v12;
    *((_DWORD *)v13 - 1) = v17;
    return v16;
  }
  else
  {
LABEL_9:
    v20 = *((_DWORD *)a3 + 3);
    v21 = *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1) + 32);
    if ( v10 >= v20 )
    {
      v34 = 2 * v20;
      v35 = sub_186B270(8 * v34);
      v10 = *((_DWORD *)a3 + 2);
      v36 = (__int64 *)*a3;
      v22 = v35;
      if ( v10 )
      {
        if ( v10 - 1 <= 2 || (__int64 *)v35 == v36 + 1 )
        {
          v50 = 0;
          a5 = 8LL * v10;
          do
          {
            *(_QWORD *)(v22 + v50) = v36[v50 / 8];
            v50 += 8LL;
          }
          while ( v50 != a5 );
        }
        else
        {
          v37 = 0;
          do
          {
            *(__m128i *)(v22 + v37 * 8) = _mm_loadu_si128((const __m128i *)&v36[v37]);
            v37 += 2;
          }
          while ( v37 != 2LL * (v10 >> 1) );
          if ( (v10 & 1) != 0 )
            *(_QWORD *)(v22 + 8LL * (v10 & 0xFFFFFFFE)) = v36[v10 & 0xFFFFFFFE];
        }
      }
      if ( v36 != a3 + 2 && v36 )
      {
        v52 = v22;
        sub_186B220(v36);
        v10 = *((_DWORD *)a3 + 2);
        v22 = v52;
      }
      *a3 = v22;
      *((_DWORD *)a3 + 3) = v34;
    }
    else
    {
      v22 = *a3;
    }
    v23 = v10;
    v24 = v10 + 1;
    v25 = *(_QWORD *)(a2 + 16);
    v26 = *a1;
    *(_QWORD *)(v22 + 8 * v23) = v21;
    *((_DWORD *)a3 + 2) = v24;
    v27 = sub_15DC610(v26, v25, v24, v22, a5, a6, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60);
    v28 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v29 = (_QWORD *)a1[3];
    if ( v29 )
    {
      v30 = *((_DWORD *)v29 - 1);
      if ( v30 == *((_DWORD *)v29 - 2) )
      {
        v38 = (3 * v30 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v39 || v30 >= v38 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v55, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v55);
          sub_233E40((__int64)&v55);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = (unsigned int *)sub_186B300(v29 - 1, v39);
        v41 = v40[1];
        v29 = v40 + 2;
        *v40 = v38;
        a1[3] = v40 + 2;
        LODWORD(v40) = v41;
        v33 = &v29[v41];
        v32 = (_DWORD)v40 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v29[v31];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v29 = v47 + 1;
      *v47 = 2;
      v32 = 1;
      a1[3] = v29;
      v33 = v29;
    }
    *v33 = v28;
    *((_DWORD *)v29 - 1) = v32;
    return v28;
  }
}

