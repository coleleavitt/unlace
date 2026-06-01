/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A6C
// Address: 0x0000000000049A6C

//----- (0000000000049A6C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_49A6C(
        pthread_mutex_t *a1,
        const void *a2,
        char *a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // x24
  pthread_mutex_t *v8; // x27
  unsigned __int64 v10; // x28
  __int64 v11; // x21
  pthread_mutex_t *v12; // x26
  struct __pthread_internal_list **p_next; // x22
  __int64 *p_align; // x8
  __int64 align; // x8
  unsigned __int64 v16; // x9
  pthread_mutex_t *v17; // x0
  struct __pthread_internal_list *v18; // x0
  pthread_mutex_t *v19; // x0
  __int64 v20; // x24
  unsigned __int64 *v21; // x21
  struct __pthread_internal_list *v22; // x27
  unsigned __int64 v23; // x2
  _QWORD *v24; // x0
  _QWORD *v25; // x28
  pthread_mutex_t *v26; // x29
  const void *v27; // x19
  size_t v28; // x0
  void *v29; // x1
  unsigned __int64 *v30; // x23
  unsigned __int64 v31; // x21
  size_t v32; // x20
  char *v33; // x27
  char *v34; // x8
  struct __pthread_internal_list *v35; // x23
  unsigned __int64 v36; // x2
  struct __pthread_internal_list *v37; // x0
  struct __pthread_internal_list *prev; // x25
  char **v39; // x26
  size_t v40; // x0
  char *v41; // x1
  char v42; // w22
  unsigned __int64 v43; // x20
  size_t v44; // x19
  __int64 v45; // x8
  unsigned __int64 v46; // x2
  pthread_mutex_t *result; // x0
  char *v48; // x9
  char *v49; // x8
  pthread_mutex_t *v50; // [xsp+0h] [xbp-B0h]
  int v52; // [xsp+14h] [xbp-9Ch]
  __int64 *v56; // [xsp+30h] [xbp-80h]
  __int64 v57; // [xsp+38h] [xbp-78h]
  _QWORD v58[2]; // [xsp+40h] [xbp-70h] BYREF

  v7 = a7;
  v8 = a1;
  v58[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v52 = (int)a3;
  if ( !a6 )
  {
    v11 = 0;
    v12 = (pthread_mutex_t *)(&a1->__align + 3);
    p_next = &a1->__list.__next;
    p_align = &a1[1].__align;
LABEL_31:
    v35 = *p_next;
    v36 = (unsigned __int64)&(*p_next)->__prev + 1;
    if ( *p_align >= v36 )
    {
      prev = v8->__list.__prev;
    }
    else
    {
      v37 = (struct __pthread_internal_list *)qvector_reserve(v12, (void *)v12->__align, v36, 0x18u);
      v12->__align = (__int64)v37;
      v35 = *p_next;
      prev = v37;
    }
    v39 = (char **)prev + 3 * (_QWORD)v35;
    v39[1] = nullptr;
    v39[2] = nullptr;
    *v39 = nullptr;
    *p_next = (struct __pthread_internal_list *)((char *)*p_next + 1);
    if ( a2 && (v40 = strlen((const char *)a2)) != 0 )
    {
      v41 = *v39;
      v42 = a5;
      v43 = v40 + 1;
      v44 = v40;
      if ( *((_QWORD *)&prev[1].__prev + 3 * (_QWORD)v35) < v40 + 1 )
      {
        v41 = (char *)qvector_reserve((pthread_mutex_t *)((char *)prev + 24 * (_QWORD)v35), v41, v43, 1u);
        *v39 = v41;
      }
      *((_QWORD *)&prev->__next + 3 * (_QWORD)v35) = v43;
      memmove(v41, a2, v44);
      (*v39)[v44] = 0;
    }
    else
    {
      v42 = a5;
      *((_QWORD *)&prev->__next + 3 * (_QWORD)v35) = 0;
    }
    v45 = *(&v8->__align + 1);
    v46 = v45 + 1;
    if ( *(&v8->__align + 2) >= (unsigned __int64)(v45 + 1) )
    {
      result = (pthread_mutex_t *)v8->__align;
    }
    else
    {
      result = (pthread_mutex_t *)qvector_reserve(v8, (void *)v8->__align, v46, 0x20u);
      v45 = *(&v8->__align + 1);
      v8->__align = (__int64)result;
      v46 = v45 + 1;
    }
    *(&v8->__align + 1) = v46;
    if ( *((_QWORD *)&prev->__next + 3 * (_QWORD)v35) )
      v48 = *v39;
    else
      v48 = &byte_F154B;
    v49 = (char *)result + 32 * v45;
    *(_QWORD *)v49 = v48;
    *((_DWORD *)v49 + 2) = v52;
    v49[12] = v42;
    v49[13] = a4;
    *((_QWORD *)v49 + 2) = v11;
    *((_QWORD *)v49 + 3) = v7;
    return result;
  }
  if ( ((unsigned __int16)a3 & 0x100) != 0 )
  {
    v10 = 1;
    goto LABEL_11;
  }
  switch ( a4 )
  {
    case 1:
      v10 = 16;
LABEL_11:
      align = a1[2].__align;
      v16 = *(&a1[2].__align + 1);
      v17 = (pthread_mutex_t *)((char *)a1 + 72);
      if ( v16 >= align + 1 )
      {
        v18 = (struct __pthread_internal_list *)v17->__align;
      }
      else
      {
        v18 = (struct __pthread_internal_list *)qvector_reserve(v17, v8[1].__list.__next, align + 1, 0x18u);
        align = v8[2].__align;
        v8[1].__list.__next = v18;
      }
      v19 = (pthread_mutex_t *)((char *)v18 + 24 * align);
      *(&v19->__align + 1) = 0;
      *(&v19->__align + 2) = 0;
      v19->__align = 0;
      v56 = &v19->__align;
      ++v8[2].__align;
      v58[0] = 0;
      sub_49E5C(v19, v10, (char *)v58);
      v20 = 0;
      v12 = (pthread_mutex_t *)(&v8->__align + 3);
      p_next = &v8->__list.__next;
      v21 = (unsigned __int64 *)&v8[1];
      v50 = v8;
      v57 = 8 * v10;
      do
      {
        if ( *(_QWORD *)(a6 + v20) )
        {
          v22 = *p_next;
          v23 = (unsigned __int64)&(*p_next)->__prev + 1;
          if ( *v21 >= v23 )
          {
            v25 = (_QWORD *)v12->__align;
          }
          else
          {
            v24 = qvector_reserve(v12, (void *)v12->__align, v23, 0x18u);
            v12->__align = (__int64)v24;
            v22 = *p_next;
            v25 = v24;
          }
          v26 = (pthread_mutex_t *)&v25[3 * (_QWORD)v22];
          *(&v26->__align + 1) = 0;
          *(&v26->__align + 2) = 0;
          v26->__align = 0;
          *p_next = (struct __pthread_internal_list *)((char *)*p_next + 1);
          v27 = *(const void **)(a6 + v20);
          if ( v27 && (v28 = strlen(*(const char **)(a6 + v20))) != 0 )
          {
            v29 = (void *)v26->__align;
            v30 = v21;
            v31 = v28 + 1;
            v32 = v28;
            if ( v25[3 * (_QWORD)v22 + 2] < v28 + 1 )
            {
              v29 = qvector_reserve(v26, v29, v31, 1u);
              v26->__align = (__int64)v29;
            }
            v33 = (char *)&v25[3 * (_QWORD)v22];
            *((_QWORD *)v33 + 1) = v31;
            memmove(v29, v27, v32);
            *(_BYTE *)(v26->__align + v32) = 0;
            if ( *((_QWORD *)v33 + 1) )
              v34 = (char *)v26->__align;
            else
              v34 = &byte_F154B;
            v21 = v30;
          }
          else
          {
            v25[3 * (_QWORD)v22 + 1] = 0;
            v34 = &byte_F154B;
          }
          *(_QWORD *)(*v56 + v20) = v34;
        }
        v20 += 8;
      }
      while ( v57 != v20 );
      p_align = (__int64 *)v21;
      v8 = v50;
      v7 = a7;
      v11 = *v56;
      goto LABEL_31;
    case 7:
      v10 = 64;
      goto LABEL_11;
    case 2:
      v10 = 32;
      goto LABEL_11;
  }
  if ( !under_debugger )
    a1 = interr(1795);
  __break(1u);
  return sub_49E5C(a1, (unsigned __int64)a2, a3);
}
// 49E59: variable 'a2' is possibly undefined
// 49E59: variable 'a3' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
