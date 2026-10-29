__int64 __fastcall sub_455180(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v11; // ebp
  _DWORD *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // r14
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rdi
  __m128 **v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 *v30; // rbx
  int i; // eax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38; // esi
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int *v41; // rax
  __int64 v42; // rax
  __int64 result; // rax
  __int64 v44; // rsi
  __int64 *v45; // rbp
  unsigned __int64 v46; // r12
  __int64 v47; // rsi
  unsigned int v48; // r14d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  char **exception; // r12
  char **v55; // r13
  int v56; // [rsp+0h] [rbp-98h]
  __int64 v57; // [rsp+0h] [rbp-98h]
  int v58; // [rsp+8h] [rbp-90h]
  __int64 v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+10h] [rbp-88h]
  int v61; // [rsp+10h] [rbp-88h]
  int v62; // [rsp+18h] [rbp-80h]
  int v63; // [rsp+20h] [rbp-78h]
  int v64; // [rsp+20h] [rbp-78h]
  char v65; // [rsp+28h] [rbp-70h]
  char v66; // [rsp+28h] [rbp-70h]
  int v67; // [rsp+30h] [rbp-68h]
  int v68; // [rsp+30h] [rbp-68h]
  int v69; // [rsp+38h] [rbp-60h]
  int v70; // [rsp+38h] [rbp-60h]
  __int64 v71; // [rsp+40h] [rbp-58h] BYREF
  void *v72; // [rsp+48h] [rbp-50h]

  v8 = *a4;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  v9 = a4[1];
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = a2;
  if ( v9 )
  {
    v11 = 0;
    v12 = nullptr;
    while ( v11 < *(_DWORD *)(v9 - 4) )
    {
      v13 = *(_QWORD *)(v9 + 8LL * v11);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( v12 )
      {
        v14 = *(v12 - 1);
        if ( v14 == *(v12 - 2) )
        {
          v48 = (3 * v14 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v49 || v14 >= v48 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v71, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v71);
            sub_233E40((__int64)&v71);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v50 = (unsigned int *)sub_186B300(v12 - 2, v49);
          v51 = v50[1];
          v12 = v50 + 2;
          *v50 = v48;
          *(_QWORD *)(a1 + 24) = v50 + 2;
          LODWORD(v50) = v51;
          v17 = &v12[2 * v51];
          v9 = a4[1];
          v16 = (_DWORD)v50 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v12[2 * v15];
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        v17 = v53 + 1;
        *v53 = 2;
        v9 = a4[1];
        v16 = 1;
        *(_QWORD *)(a1 + 24) = v17;
        v12 = v17;
      }
      *v17 = v13;
      ++v11;
      *(v12 - 1) = v16;
      if ( !v9 )
      {
        v18 = a3[1];
        v19 = *(_QWORD **)(a1 + 8);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        v20 = *a3;
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 56) = v18;
        *(_DWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 72) = v18;
        *(_QWORD *)(a1 + 80) = 0;
LABEL_11:
        v21 = *(v12 - 1);
        goto LABEL_12;
      }
    }
    v18 = a3[1];
    v19 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    v20 = *a3;
    *(_QWORD *)(a1 + 40) = v18;
    *(_QWORD *)(a1 + 56) = v18;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = v18;
    *(_QWORD *)(a1 + 80) = 0;
    if ( v12 )
      goto LABEL_11;
    v21 = 0;
  }
  else
  {
    v18 = a3[1];
    *(_DWORD *)(a1 + 64) = 0;
    v19 = a3;
    LODWORD(v12) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    v20 = *a3;
    v21 = 0;
    *(_QWORD *)(a1 + 40) = v18;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = v18;
    *(_QWORD *)(a1 + 72) = v18;
    *(_QWORD *)(a1 + 80) = 0;
  }
LABEL_12:
  v22 = sub_15DC610(v18, v19[3], v21, (int)v12, a5, a6, v56, v58, v60, (int)a1 + 16, v63, v65, v67, v69, v71, v72);
  v23 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v24 = *(_QWORD *)(a1 + 48);
  if ( v24 )
  {
    v25 = (*(_DWORD *)(v24 + 8))-- == 1;
    v26 = *(_QWORD *)(a1 + 56);
    if ( v25 )
      sub_15D7BC0(v26, v24);
  }
  v27 = (__m128 **)a3[6];
  *(_QWORD *)(a1 + 48) = v23;
  v68 = v18;
  if ( v27 )
  {
    v28 = *((unsigned int *)v27 - 1);
    if ( (_DWORD)v28 )
    {
      v29 = 0;
      v30 = nullptr;
      LODWORD(v57) = 8 * v28;
      LODWORD(v59) = v20 + 8;
      for ( i = sub_439010(v20 + 8, *v27, 1, 0); ; i = sub_439010(v59, *(__m128 **)(a3[6] + v29), 1, 0) )
      {
        sub_15DC610(v18, i, 0, 0, v32, v33, v57, v59, v61, v62, v64, v66, v68, v70, v71, v72);
        v36 = sub_15E1B70(v18);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        if ( !v30 )
          break;
        v38 = *((_DWORD *)v30 - 1);
        if ( v38 != *((_DWORD *)v30 - 2) )
        {
          v34 = v38;
          v28 = v38 + 1;
          v35 = &v30[v34];
          goto LABEL_21;
        }
        v39 = (3 * v38 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v38 + 8 >= v40 || v38 >= v39 )
        {
          v55 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v71, "Overflow encountered when expanding vector");
          *v55 = (char *)off_1C63128;
          sub_2333C0(v55 + 1, &v71);
          sub_233E40((__int64)&v71);
          __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v30 - 1, v40);
        v30 = (__int64 *)(v41 + 2);
        v29 += 8;
        *v41 = (3 * v38 + 1) >> 1;
        v42 = v41[1];
        v28 = (unsigned int)(v42 + 1);
        v30[v42] = v37;
        *((_DWORD *)v30 - 1) = v28;
        if ( v57 == v29 )
          goto LABEL_30;
LABEL_22:
        ;
      }
      v52 = (_QWORD *)sub_186B270(0x18u);
      *v52 = 2;
      v35 = v52 + 1;
      v28 = 1;
      v30 = v35;
LABEL_21:
      *v35 = v37;
      v29 += 8;
      *((_DWORD *)v30 - 1) = v28;
      if ( v57 == v29 )
        goto LABEL_30;
      goto LABEL_22;
    }
    v30 = nullptr;
  }
  else
  {
    v30 = nullptr;
    v28 = 0;
  }
LABEL_30:
  result = sub_15EC1C0(v18, v28);
  if ( result )
    ++*(_DWORD *)(result + 8);
  v44 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = result;
  if ( v44 )
  {
    v25 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v18, v44);
  }
  if ( v30 )
  {
    v45 = v30;
    v46 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    if ( (unsigned __int64)v30 < v46 )
    {
      do
      {
        while ( 1 )
        {
          v47 = *v45;
          if ( *v45 )
          {
            v25 = (*(_DWORD *)(v47 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v45 >= v46 )
            return sub_186B220(v30 - 1);
        }
        ++v45;
        sub_15D7BC0(v18, v47);
      }
      while ( (unsigned __int64)v45 < v46 );
    }
    return sub_186B220(v30 - 1);
  }
  return result;
}

