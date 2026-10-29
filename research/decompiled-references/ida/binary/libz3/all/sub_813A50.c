__int64 __fastcall sub_813A50(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  char **v3; // rbx
  char **v4; // r13
  char **exception; // rbx
  __int64 v6; // rcx
  __int64 **v7; // r12
  unsigned int v8; // edi
  _QWORD *v11; // rbp
  int v12; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // r13d
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  _QWORD *v20; // rdx
  unsigned __int8 v21; // cl
  int v22; // esi
  __int64 *v23; // r12
  __int64 *v24; // r13
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r15d
  size_t v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r14
  __int64 v35; // rdx
  char *v36; // rdi
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // eax
  __int64 v41; // r14
  __int64 v42; // rdx
  char *v43; // rdi
  unsigned int v44; // r14d
  size_t v45; // rsi
  unsigned int *v46; // rax
  _QWORD *i; // rsi
  unsigned __int8 v48; // dl
  int v49; // ecx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = a1[77];
  v7 = (__int64 **)(v6 + 8LL * a3);
  if ( !*v7 || !*((_DWORD *)*v7 - 1) )
    return 1;
  v11 = (_QWORD *)(v6 + 8LL * a2);
  v12 = sub_86B310();
  v13 = (_QWORD *)a1[96];
  v14 = v12 + 1;
  if ( v13 )
  {
    v15 = *((unsigned int *)v13 - 1);
    if ( (unsigned int)v15 >= v14 )
    {
LABEL_7:
      v16 = (_QWORD *)a1[97];
      if ( v16 )
        goto LABEL_8;
      if ( !v14 )
        goto LABEL_9;
      goto LABEL_48;
    }
  }
  else
  {
    if ( v12 == -1 )
      goto LABEL_9;
    v15 = 0;
    v50 = (_QWORD *)sub_186B270(0x10u);
    v13 = v50 + 1;
    *v50 = 2;
    a1[96] = v50 + 1;
  }
  while ( 1 )
  {
    v33 = *((_DWORD *)v13 - 2);
    if ( v33 >= v14 )
      break;
    v30 = (3 * v33 + 1) >> 1;
    v31 = 4 * v30 + 8;
    if ( 4 * v33 + 8 >= (unsigned int)v31 || v33 >= v30 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v53, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v32 = (unsigned int *)sub_186B300(v13 - 1, v31);
    v13 = v32 + 2;
    *v32 = v30;
    a1[96] = v32 + 2;
  }
  v34 = 4 * v15;
  *((_DWORD *)v13 - 1) = v14;
  v35 = 4LL * v14;
  v36 = (char *)v13 + v34;
  if ( v34 != v35 )
  {
    memset(v36, 255, v35 - v34);
    goto LABEL_7;
  }
  v16 = (_QWORD *)a1[97];
  if ( v16 )
  {
LABEL_8:
    v17 = *((unsigned int *)v16 - 1);
    if ( (unsigned int)v17 >= v14 )
      goto LABEL_9;
    goto LABEL_31;
  }
LABEL_48:
  v17 = 0;
  v51 = (_QWORD *)sub_186B270(0x10u);
  v16 = v51 + 1;
  *v51 = 2;
  a1[97] = v51 + 1;
LABEL_31:
  while ( 1 )
  {
    v40 = *((_DWORD *)v16 - 2);
    if ( v40 >= v14 )
      break;
    v37 = (3 * v40 + 1) >> 1;
    v38 = 4 * v37 + 8;
    if ( 4 * v40 + 8 >= (unsigned int)v38 || v40 >= v37 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v53, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v16 - 1, v38);
    v16 = v39 + 2;
    *v39 = v37;
    a1[97] = v39 + 2;
  }
  v41 = 4 * v17;
  *((_DWORD *)v16 - 1) = v14;
  v42 = 4LL * v14;
  v43 = (char *)v16 + v41;
  if ( v41 != v42 )
    memset(v43, 255, v42 - v41);
LABEL_9:
  v18 = (_QWORD *)*v11;
  if ( !*v11 )
  {
    v23 = *v7;
    if ( v23 )
    {
      v24 = &v23[*((unsigned int *)v23 - 1)];
      if ( v23 != v24 )
        goto LABEL_16;
    }
    return 1;
  }
  v19 = &v18[*((unsigned int *)v18 - 1)];
  v20 = (_QWORD *)*v11;
  if ( v19 == v18 )
  {
    v23 = *v7;
    if ( !v23 )
      return 1;
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v24 != v23 )
      goto LABEL_16;
    goto LABEL_54;
  }
  do
  {
    v21 = *((_BYTE *)v20 + 7);
    v22 = *((_DWORD *)v20++ + 1);
    *(_DWORD *)(a1[(v21 >> 7) + 96] + 4LL * (v22 & 0x7FFFFFFF)) = *((_DWORD *)v20 - 2);
  }
  while ( v20 != v19 );
  v23 = *v7;
  if ( !v23 || (v24 = &v23[*((unsigned int *)v23 - 1)], v23 == v24) )
  {
LABEL_54:
    v8 = 1;
LABEL_39:
    for ( i = &v18[*((unsigned int *)v18 - 1)]; i != v18; *(_DWORD *)(a1[(v48 >> 7) + 96] + 4LL * (v49 & 0x7FFFFFFF)) = -1 )
    {
      v48 = *((_BYTE *)v18 + 7);
      v49 = *((_DWORD *)v18++ + 1);
    }
    return v8;
  }
LABEL_16:
  while ( 1 )
  {
    v25 = *((_DWORD *)v23 + 1) & 0x7FFFFFFF;
    if ( *(_DWORD *)(a1[(*((char *)v23 + 7) >= 0) + 96] + 4 * v25) != -1 )
      break;
    if ( *(_DWORD *)(a1[(*((_BYTE *)v23 + 7) >> 7) + 96] + 4 * v25) == -1 )
    {
      v26 = (_QWORD *)*v11;
      if ( *v11 )
      {
        v27 = *((unsigned int *)v26 - 1);
        v28 = (unsigned int *)&v26[v27];
        if ( (_DWORD)v27 == *((_DWORD *)v26 - 2) )
        {
          v44 = (unsigned int)(3 * v27 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * (int)v27 + 8 >= (unsigned int)v45 || (unsigned int)v27 >= v44 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v26 - 1, v45);
          v26 = v46 + 2;
          *v11 = v46 + 2;
          *v46 = v44;
          v28 = &v46[2 * v46[1] + 2];
        }
      }
      else
      {
        v52 = (_QWORD *)sub_186B270(0x18u);
        v26 = v52 + 1;
        *v52 = 2;
        v28 = (unsigned int *)(v52 + 1);
        *v11 = v52 + 1;
      }
      v29 = *v23++;
      *(_QWORD *)v28 = v29;
      ++*((_DWORD *)v26 - 1);
      if ( v24 == v23 )
      {
LABEL_21:
        v18 = (_QWORD *)*v11;
        v8 = 1;
        goto LABEL_38;
      }
    }
    else if ( v24 == ++v23 )
    {
      goto LABEL_21;
    }
  }
  sub_80EE70((__int64)a1);
  v18 = (_QWORD *)*v11;
  v8 = 0;
LABEL_38:
  if ( v18 )
    goto LABEL_39;
  return v8;
}

