/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A88B4
// Address: 0x00000000000A88B4

//----- (00000000000A88B4) ----------------------------------------------------
__int64 __fastcall sub_A88B4(__int128 *a1, __int64 a2, char a3)
{
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  unsigned int v8; // w19
  struct __pthread_internal_list *prev; // x0
  struct __pthread_internal_list *next; // x20
  __int64 v11; // x21
  unsigned __int64 v12; // x22
  struct __pthread_internal_list *v13; // x8
  _QWORD *v14; // x23
  __int64 v16; // x26
  struct __pthread_internal_list *v17; // x28
  char *v18; // x20
  char **v19; // x27
  char *v20; // x22
  int v21; // w20
  void **v22; // x0
  char *v23; // x0
  unsigned __int64 v24; // x23
  void *v25; // x21
  __int128 v26; // q0
  char *v27; // x8
  unsigned __int64 v28; // x9
  __int64 v29; // x22
  char *v30; // x0
  unsigned __int64 v31; // x29
  char *v32; // x24
  __int16 v33; // w0
  char *v34; // x8
  __int16 v35; // w23
  char *v36; // x24
  char *v37; // x8
  char *v38; // x22
  void *v39; // x0
  __int64 align; // x8
  __int128 v41; // q0
  __int64 v42; // x10
  __int64 v43; // x8
  __int128 v44; // q0
  __int64 v45; // x10
  unsigned __int64 v46; // x21
  __int64 v47; // x22
  unsigned __int64 v48; // x23
  void *v49; // x8
  void **v50; // x24
  _BYTE *v51; // x0
  void *v52; // x0
  pthread_mutex_t *v53; // x8
  __int128 v54; // q0
  __int64 v55; // x10
  __int64 v56; // [xsp+0h] [xbp-D0h]
  char *endptr; // [xsp+18h] [xbp-B8h] BYREF
  __int128 v58; // [xsp+20h] [xbp-B0h]
  pthread_mutex_t v59; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v60; // [xsp+58h] [xbp-78h]
  char v61[4]; // [xsp+64h] [xbp-6Ch] BYREF
  __int64 v62; // [xsp+68h] [xbp-68h]

  v62 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a3 & 1) == 0 )
  {
    v5 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *((_QWORD *)a1 + 1) = 0;
      qfree(v5);
      *(_QWORD *)a1 = 0;
      *((_QWORD *)a1 + 2) = 0;
    }
    v6 = *((void **)a1 + 4);
    *((_WORD *)a1 + 12) = 0;
    if ( v6 )
    {
      *((_QWORD *)a1 + 5) = 0;
      qfree(v6);
      *((_QWORD *)a1 + 4) = 0;
      *((_QWORD *)a1 + 6) = 0;
    }
    v7 = *((void **)a1 + 7);
    if ( v7 )
    {
      *((_QWORD *)a1 + 8) = 0;
      qfree(v7);
      *((_QWORD *)a1 + 7) = 0;
      *((_QWORD *)a1 + 9) = 0;
    }
  }
  if ( *(_QWORD *)(a2 + 8) < 2u )
    return 0;
  *(_OWORD *)(&v59.__align + 3) = 0u;
  v60 = 0;
  sub_A8F9C(a2, (pthread_mutex_t *)(&v59.__align + 3), byte_107BB4, 0);
  if ( v59.__list.__next >= (struct __pthread_internal_list *)((char *)&dword_0 + 3) )
    goto LABEL_11;
  if ( v59.__list.__next != (struct __pthread_internal_list *)((char *)&dword_0 + 2) )
  {
    v16 = 0;
    goto LABEL_26;
  }
  prev = v59.__list.__prev;
  if ( v59.__list.__prev->__next < (struct __pthread_internal_list *)((char *)&dword_0 + 2) )
  {
    v8 = 0;
    if ( !v59.__list.__prev )
      return v8;
    goto LABEL_13;
  }
  memset(&v59, 0, 24);
  sub_A8F9C((__int64)v59.__list.__prev, &v59, ":", 0);
  if ( *(&v59.__align + 1) < 3uLL )
  {
    align = v59.__align;
    v41 = a1[2];
    v42 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 4) = *(_QWORD *)v59.__align;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(align + 8);
    *((_QWORD *)a1 + 6) = *(_QWORD *)(align + 16);
    *(_OWORD *)align = v41;
    *(_QWORD *)(align + 16) = v42;
    if ( *(&v59.__align + 1) == 2 )
    {
      v43 = v59.__align;
      v44 = *(__int128 *)((char *)a1 + 56);
      v45 = *((_QWORD *)a1 + 9);
      v21 = 0;
      *((_QWORD *)a1 + 7) = *(_QWORD *)(v59.__align + 24);
      *((_QWORD *)a1 + 8) = *(_QWORD *)(v43 + 32);
      *((_QWORD *)a1 + 9) = *(_QWORD *)(v43 + 40);
      *(_OWORD *)(v43 + 24) = v44;
      *(_QWORD *)(v43 + 40) = v45;
    }
    else
    {
      v21 = 0;
    }
    v16 = 1;
    v22 = (void **)v59.__align;
    if ( !v59.__align )
      goto LABEL_69;
  }
  else
  {
    v16 = 0;
    v21 = 1;
    v22 = (void **)v59.__align;
    if ( !v59.__align )
      goto LABEL_69;
  }
  v46 = *(&v59.__align + 1);
  if ( *(&v59.__align + 1) )
  {
    v47 = 0;
    v48 = 1;
    v49 = *v22;
    if ( !*v22 )
      goto LABEL_66;
    while ( 1 )
    {
      v50 = &v22[v47];
      v22[v47 + 1] = nullptr;
      qfree(v49);
      *v50 = nullptr;
      v50[2] = nullptr;
      if ( v48 >= v46 )
        break;
      while ( 1 )
      {
        v22 = (void **)v59.__align;
        ++v48;
        v47 += 3;
        v49 = *(void **)(v59.__align + v47 * 8);
        if ( v49 )
          break;
LABEL_66:
        if ( v48 >= v46 )
          goto LABEL_67;
      }
    }
LABEL_67:
    v22 = (void **)v59.__align;
  }
  *(&v59.__align + 1) = 0;
  qfree(v22);
  v59.__align = 0;
  *(&v59.__align + 2) = 0;
LABEL_69:
  if ( v21 )
    goto LABEL_11;
LABEL_26:
  v17 = v59.__list.__prev;
  memset(&v59, 0, 24);
  v18 = (char *)v59.__list.__prev + 24 * v16;
  v19 = (char **)(v18 + 8);
  if ( *((_QWORD *)v18 + 1) )
    v20 = *(char **)v18;
  else
    v20 = &byte_F154B;
  if ( *v20 != 91 )
  {
    if ( !strncasecmp(v20, "::ffff:", 7u) && strchr(v20, 46) )
      v20 += 7;
    v30 = strchr(v20, 58);
    v25 = nullptr;
    v31 = 0;
LABEL_45:
    if ( !v30 )
      goto LABEL_89;
    v32 = v30 + 1;
    v33 = strtoul(v30 + 1, &endptr, 10);
    v34 = endptr;
    if ( v32 != endptr )
    {
      v35 = v33;
      while ( *v34 == 32 )
        ++v34;
      if ( !*v34 )
      {
        v36 = &v32[~(unsigned __int64)v20];
        endptr = v34;
        if ( v36 )
        {
          v37 = *v19;
          v38 = v36 + 1;
          if ( *v19 >= v36 + 1 )
          {
            if ( *v19 != v36 + 1 )
            {
              v61[0] = 0;
              sub_5C6B0((pthread_mutex_t *)v18, (unsigned __int64)(v36 + 1), v61);
            }
          }
          else
          {
            if ( *((_QWORD *)&v17[1].__prev + 3 * v16) >= (unsigned __int64)v38 )
            {
              v39 = *(void **)v18;
            }
            else
            {
              v39 = qvector_reserve((pthread_mutex_t *)v18, *(void **)v18, (unsigned __int64)(v36 + 1), 1u);
              *(_QWORD *)v18 = v39;
              v37 = *v19;
            }
            memset(&v37[(_QWORD)v39], 0, v38 - v37);
            *v19 = v38;
          }
          v36[*(_QWORD *)v18] = 0;
        }
        else
        {
          v52 = *(void **)v18;
          if ( *(_QWORD *)v18 )
          {
            *v19 = nullptr;
            qfree(v52);
            *(_QWORD *)v18 = 0;
            *((_QWORD *)&v17[1].__prev + 3 * v16) = 0;
          }
        }
        *((_WORD *)a1 + 12) = v35;
        goto LABEL_89;
      }
      endptr = v34;
    }
    v8 = 0;
    if ( v25 )
      goto LABEL_92;
LABEL_12:
    prev = v59.__list.__prev;
    if ( !v59.__list.__prev )
      return v8;
    goto LABEL_13;
  }
  v23 = strchr(v20, 93);
  if ( !v23 || v23 == v20 + 1 )
  {
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  v24 = v23 - v20;
  sub_4968C((pthread_mutex_t *)&endptr, v20 + 1, v23 - v20 - 1);
  v25 = endptr;
  v26 = v58;
  endptr = nullptr;
  *(_QWORD *)&v58 = 0;
  v59.__align = (__int64)v25;
  *(_OWORD *)(&v59.__align + 1) = v26;
  v27 = *v19;
  v28 = (unsigned __int64)(*v19 - 1);
  if ( !*v19 )
    v28 = 0;
  if ( v24 && v28 )
  {
    v29 = v28 - v24;
    v56 = v26;
    if ( v28 <= v24 )
    {
      v29 = 0;
    }
    else
    {
      memmove(*(void **)v18, (const void *)(*(_QWORD *)v18 + v24), v28 - v24);
      *(_QWORD *)&v26 = v56;
    }
    if ( *((_QWORD *)&v17[1].__prev + 3 * v16) >= (unsigned __int64)(v29 + 1) )
    {
      v51 = *(_BYTE **)v18;
    }
    else
    {
      v51 = qvector_reserve((pthread_mutex_t *)v18, *(void **)v18, v29 + 1, 1u);
      *(_QWORD *)&v26 = v56;
      *(_QWORD *)v18 = v51;
    }
    *v19 = (char *)(v29 + 1);
    v51[v29] = 0;
    v27 = *v19;
  }
  if ( v27 )
    v20 = *(char **)v18;
  else
    v20 = &byte_F154B;
  v31 = v26;
  v30 = v20;
  if ( *v20 == 58 )
    goto LABEL_45;
LABEL_89:
  v53 = &v59;
  if ( v31 < 2 )
    v53 = (pthread_mutex_t *)v18;
  v54 = *a1;
  v55 = *((_QWORD *)a1 + 2);
  *(_QWORD *)a1 = v53->__align;
  *((_QWORD *)a1 + 1) = *(&v53->__align + 1);
  *((_QWORD *)a1 + 2) = *(&v53->__align + 2);
  *(_OWORD *)&v53->__lock = v54;
  *(&v53->__align + 2) = v55;
  v25 = (void *)v59.__align;
  v8 = 1;
  if ( !v59.__align )
    goto LABEL_12;
LABEL_92:
  *(&v59.__align + 1) = 0;
  qfree(v25);
  v59.__align = 0;
  *(&v59.__align + 2) = 0;
  prev = v59.__list.__prev;
  if ( !v59.__list.__prev )
    return v8;
LABEL_13:
  next = v59.__list.__next;
  if ( v59.__list.__next )
  {
    v11 = 0;
    v12 = 1;
    v13 = prev->__prev;
    if ( !prev->__prev )
      goto LABEL_17;
    while ( 1 )
    {
      v14 = (struct __pthread_internal_list **)((char *)&prev->__prev + v11);
      *(struct __pthread_internal_list **)((char *)&prev->__next + v11) = nullptr;
      qfree(v13);
      *v14 = 0;
      v14[2] = 0;
      if ( v12 >= (unsigned __int64)next )
        break;
      while ( 1 )
      {
        prev = v59.__list.__prev;
        ++v12;
        v11 += 24;
        v13 = *(struct __pthread_internal_list **)((char *)&v59.__list.__prev->__prev + v11);
        if ( v13 )
          break;
LABEL_17:
        if ( v12 >= (unsigned __int64)next )
          goto LABEL_18;
      }
    }
LABEL_18:
    prev = v59.__list.__prev;
  }
  v59.__list.__next = nullptr;
  qfree(prev);
  v59.__list.__prev = nullptr;
  v60 = 0;
  return v8;
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
