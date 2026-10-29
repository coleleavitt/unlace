__int64 __fastcall sub_A83040(__int64 *a1, unsigned int *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _DWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // r12d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 *v34; // r14
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 *v37; // r10
  unsigned __int64 v38; // rsi
  __int64 *v39; // r9
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  __m128i v42; // xmm0
  unsigned __int64 v43; // rsi
  __int64 *v44; // rax
  __int64 v45; // r9
  __int64 *v46; // r13
  void *v47; // rdi
  _QWORD *v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  unsigned int v51; // r12d
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  char **exception; // rbp
  unsigned int v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  char *v60[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 16);
  v5 = *(_QWORD *)(v4 + 8656);
  if ( !v5 || (v6 = *a2, (unsigned int)v6 >= *(_DWORD *)(v5 - 4)) || !*(_QWORD *)(v5 + 8 * v6) )
  {
    sub_B6F780(v4);
    v3 = *a1;
    v6 = *a2;
    v5 = *(_QWORD *)(*(_QWORD *)(*a1 + 16) + 8656LL);
  }
  v7 = *(_QWORD *)(v5 + 8 * v6);
  v59 = v7;
  v8 = sub_B39350(v7, *(unsigned int *)(v3 + 8));
  v9 = *a1;
  if ( v8 != -1 && v7 == *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v8) )
    return sub_B39350(v7, *(unsigned int *)(v9 + 8));
  v10 = **(__int64 (__fastcall ***)(__int64, __int64))v9;
  if ( v10 == sub_902EE0 )
  {
    v11 = *(_QWORD **)(v9 + 32);
    if ( v11 )
    {
      v12 = *((_DWORD *)v11 - 1);
      v58 = v12;
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v51 = (3 * v12 + 1) >> 1;
        v52 = 8 * v12 + 8;
        v53 = 8 * v51 + 8;
        if ( v52 >= v53 || *((_DWORD *)v11 - 1) >= v51 )
        {
LABEL_55:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v60);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v11 - 1, v53);
        v55 = v54[1];
        v11 = v54 + 2;
        *(_QWORD *)(v9 + 32) = v54 + 2;
        *v54 = v51;
        LODWORD(v54) = v55;
        v13 = &v11[v55];
        v14 = (_DWORD)v54 + 1;
      }
      else
      {
        v13 = &v11[v12];
        v14 = v12 + 1;
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v58 = 0;
      v11 = v56 + 1;
      *v56 = 2;
      v14 = 1;
      *(_QWORD *)(v9 + 32) = v11;
      v13 = v11;
    }
    *v13 = v7;
    *((_DWORD *)v11 - 1) = v14;
  }
  else
  {
    v58 = v10(*a1, v7);
  }
  v15 = a1[30];
  if ( !v15 )
    goto LABEL_24;
LABEL_12:
  v16 = *(_DWORD *)(v15 - 4);
  if ( v58 >= v16 )
  {
LABEL_13:
    if ( v16 != *(_DWORD *)(v15 - 8) )
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = (_QWORD *)(v15 + 8 * v17);
      goto LABEL_15;
    }
    v30 = (3 * v16 + 1) >> 1;
    v31 = 8 * v30 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v31 || v16 >= v30 )
      goto LABEL_55;
    v32 = sub_186B270(v31);
    v33 = (__int64 *)a1[30];
    v34 = (__int64 *)v32;
    v15 = v32 + 8;
    if ( v33 )
    {
      v35 = *((unsigned int *)v33 - 1);
      *(_DWORD *)(v32 + 4) = v35;
      v36 = 8 * v35;
      v37 = &v33[v35];
      if ( v33 != v37 )
      {
        v38 = v36 - 8;
        v39 = v33;
        if ( (unsigned __int64)(v36 - 8) <= 8 || v15 < (unsigned __int64)(v33 + 2) && v33 < v34 + 3 )
        {
          v49 = v15;
          do
          {
            v50 = *v39;
            *v39++ = 0;
            v49 += 8LL;
            *(_QWORD *)(v49 - 8) = v50;
          }
          while ( v39 != v37 );
        }
        else
        {
          v40 = 0;
          v41 = (v38 >> 3) + 1;
          do
          {
            v42 = _mm_loadu_si128((const __m128i *)&v33[v40]);
            *(_OWORD *)&v33[v40] = 0;
            *(__m128i *)&v34[v40 + 1] = v42;
            v40 += 2LL;
          }
          while ( v40 != 2 * (v41 >> 1) );
          if ( (v41 & 1) != 0 )
          {
            v43 = v41 & 0xFFFFFFFFFFFFFFFELL;
            v44 = &v33[v43];
            v45 = *v44;
            *v44 = 0;
            *(_QWORD *)(v15 + 8 * v43) = v45;
          }
        }
      }
      v46 = &v33[v35];
      if ( (_DWORD)v35 )
      {
        do
        {
          while ( *v33 )
          {
            v47 = (void *)(*v33++ - 8);
            sub_186B220(v47);
            if ( v33 == v46 )
              goto LABEL_39;
          }
          ++v33;
        }
        while ( v33 != v46 );
LABEL_39:
        v33 = (__int64 *)a1[30];
      }
      sub_186B220(v33 - 1);
      v19 = (_QWORD *)(v15 + 8LL * *((unsigned int *)v34 + 1));
      v18 = *((_DWORD *)v34 + 1) + 1;
    }
    else
    {
      *(_DWORD *)(v32 + 4) = 0;
      v19 = (_QWORD *)(v32 + 8);
      v18 = 1;
    }
    a1[30] = v15;
    *(_DWORD *)v34 = v30;
    while ( 1 )
    {
LABEL_15:
      v20 = a1[31];
      *v19 = 0;
      *(_DWORD *)(v15 - 4) = v18;
      if ( v20 )
      {
        v21 = *(unsigned int *)(v20 - 4);
        if ( (_DWORD)v21 != *(_DWORD *)(v20 - 8) )
        {
          *(_DWORD *)(v20 + 4 * v21) = 0;
          ++*(_DWORD *)(v20 - 4);
          v16 = *(_DWORD *)(v15 - 4);
          if ( v58 < v16 )
            break;
          goto LABEL_13;
        }
        v23 = (unsigned int)(3 * v21 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * (int)v21 + 8 >= (unsigned int)v24 || (unsigned int)v21 >= v23 )
          goto LABEL_55;
        v25 = (unsigned int *)sub_186B300((void *)(v20 - 8), v24);
        v15 = a1[30];
        v26 = v25 + 2;
        *v25 = v23;
        v27 = v25[1];
        a1[31] = (__int64)v26;
        v28 = (_DWORD *)v26 + v27;
      }
      else
      {
        v48 = (_QWORD *)sub_186B270(0x10u);
        v15 = a1[30];
        v26 = v48 + 1;
        *v48 = 2;
        a1[31] = (__int64)(v48 + 1);
        v28 = v48 + 1;
      }
      *v28 = 0;
      ++*((_DWORD *)v26 - 1);
      if ( v15 )
        goto LABEL_12;
LABEL_24:
      v29 = (_QWORD *)sub_186B270(0x18u);
      v15 = (unsigned __int64)(v29 + 1);
      *v29 = 2;
      v19 = (_QWORD *)v15;
      v18 = 1;
      a1[30] = v15;
    }
  }
  sub_B66EF0(*(_QWORD *)(*a1 + 16), v59, *a1, v58);
  return v58;
}

