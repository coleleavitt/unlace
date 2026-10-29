__int64 __fastcall sub_5EB5E0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  _QWORD *v15; // r13
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // r13
  _QWORD *v23; // rax
  int v24; // eax
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 result; // rax
  unsigned int v30; // r13d
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rsi
  int v39; // eax
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 *v44; // r14
  __int64 v45; // rsi
  int v46; // ecx
  __int64 v47; // rsi
  unsigned int v48; // r8d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+0h] [rbp-78h]
  __int64 v54; // [rsp+0h] [rbp-78h]
  __int64 v55; // [rsp+0h] [rbp-78h]
  __int64 v56; // [rsp+0h] [rbp-78h]
  unsigned int v57; // [rsp+Ch] [rbp-6Ch]
  __int64 v58; // [rsp+18h] [rbp-60h] BYREF
  __int64 v59[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = (_QWORD *)a3[1];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *a3;
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_8;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_8:
    v10 = (_QWORD *)a3[1];
    if ( v10 )
LABEL_9:
      *((_DWORD *)v10 - 1) = 0;
  }
  v15 = (_QWORD *)a4[1];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *a4;
          v14 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_17;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_17:
    v15 = (_QWORD *)a4[1];
    if ( v15 )
LABEL_18:
      *((_DWORD *)v15 - 1) = 0;
  }
  v19 = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)v19 )
  {
    v20 = a2 + 8 * v19;
    v21 = (unsigned __int64 *)a3[1];
    v22 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a2 + 80) > 7u )
      ++*(_DWORD *)(v22 + 8);
    if ( v21 )
      goto LABEL_27;
    v23 = (_QWORD *)sub_186B270(0x18u);
    v21 = v23 + 1;
    *v23 = 2;
    v24 = 1;
    a3[1] = (__int64)v21;
    v25 = v21;
    while ( 1 )
    {
      a2 += 8;
      *v25 = v22;
      *((_DWORD *)v21 - 1) = v24;
      if ( a2 == v20 )
        break;
      while ( 1 )
      {
        v26 = *(_QWORD *)(a2 + 80);
        v22 = 0;
        if ( v26 > 7 )
        {
          v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v27 + 8);
          v22 = v27;
        }
LABEL_27:
        v28 = *((_DWORD *)v21 - 1);
        if ( v28 == *((_DWORD *)v21 - 2) )
          break;
        a2 += 8;
        v21[v28] = v22;
        *((_DWORD *)v21 - 1) = v28 + 1;
        if ( a2 == v20 )
          goto LABEL_29;
      }
      v31 = (3 * v28 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v32 || v28 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (3 * v28 + 1) >> 1;
      v33 = (unsigned int *)sub_186B300(v21 - 1, v32);
      v21 = (unsigned __int64 *)(v33 + 2);
      *v33 = v53;
      v34 = v33[1];
      a3[1] = (__int64)(v33 + 2);
      LODWORD(v33) = v34;
      v25 = &v21[v34];
      v24 = (_DWORD)v33 + 1;
    }
  }
LABEL_29:
  sub_15EE300(a3);
  result = a3[1];
  if ( result )
  {
    v30 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v30 >= *(_DWORD *)(result - 4) )
          return result;
        if ( (unsigned __int8)sub_62A0B0(*(_QWORD *)(a1 + 24), *(_QWORD *)(result + 8LL * v30), &v58) )
          break;
        result = a3[1];
        ++v30;
LABEL_34:
        if ( !result )
          return result;
      }
      v35 = v58;
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v36 = (_QWORD *)a4[1];
      if ( v36 )
      {
        v37 = *((_DWORD *)v36 - 1);
        if ( v37 == *((_DWORD *)v36 - 2) )
        {
          v48 = (3 * v37 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v49 || v37 >= v48 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v59, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v59);
            sub_233E40((__int64)v59);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (3 * v37 + 1) >> 1;
          v54 = v35;
          v50 = (unsigned int *)sub_186B300(v36 - 1, v49);
          v35 = v54;
          v51 = v50[1];
          v36 = v50 + 2;
          *v50 = v57;
          LODWORD(v50) = v51;
          a4[1] = (__int64)v36;
          v40 = &v36[v51];
          v39 = (_DWORD)v50 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = &v36[v38];
        }
      }
      else
      {
        v56 = v35;
        v52 = (_QWORD *)sub_186B270(0x18u);
        v35 = v56;
        v36 = v52 + 1;
        *v52 = 2;
        v39 = 1;
        a4[1] = (__int64)v36;
        v40 = v36;
      }
      *v40 = v35;
      *((_DWORD *)v36 - 1) = v39;
      result = a3[1];
      v41 = 0x7FFFFFFF8LL;
      if ( result )
        v41 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v42 = *(_QWORD *)(result + v41);
      v43 = *a3;
      v44 = (__int64 *)(result + 8LL * v30);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v45 = *v44;
      if ( *v44 )
      {
        v14 = (*(_DWORD *)(v45 + 8))-- == 1;
        if ( v14 )
        {
          v55 = v42;
          sub_15D7BC0(v43, v45);
          result = a3[1];
          v43 = *a3;
          v42 = v55;
        }
      }
      v46 = *(_DWORD *)(result - 4);
      *v44 = v42;
      v47 = *(_QWORD *)(result + 8LL * (unsigned int)(v46 - 1));
      *(_DWORD *)(result - 4) = v46 - 1;
      if ( v47 )
      {
        v14 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v14 )
        {
          sub_15D7BC0(v43, v47);
          result = a3[1];
          goto LABEL_34;
        }
      }
    }
  }
  return result;
}

