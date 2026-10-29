/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B6B4
// Address: 0x000000000003B6B4

//----- (000000000003B6B4) ----------------------------------------------------
__int64 __fastcall sub_3B6B4(__int64 align, int a2, int a3)
{
  _QWORD *v3; // x26
  __int64 v4; // x19
  _QWORD *v5; // x22
  unsigned int *v8; // x29
  _QWORD *v9; // x8
  unsigned int v10; // w24
  int *v11; // x0
  int *v12; // x23
  int v13; // w0
  __int64 v14; // x8
  unsigned int v15; // w23
  struct __pthread_internal_list *prev; // x1
  struct __pthread_internal_list *next; // x8
  char *v18; // x2
  unsigned int v19; // w23
  char *v20; // x0
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x9
  _QWORD *v24; // t1
  signed int v25; // w1
  __int64 v26; // x9
  struct __pthread_internal_list *v27; // x20
  char *v28; // x8
  struct __pthread_internal_list *v29; // x10
  _DWORD *v30; // x0
  unsigned __int64 v31; // x8
  int v32; // w20
  unsigned int *v34; // [xsp+0h] [xbp-A0h] BYREF
  pthread_mutex_t ptr; // [xsp+8h] [xbp-98h] BYREF
  unsigned __int64 v36; // [xsp+30h] [xbp-70h]
  __int64 v37; // [xsp+38h] [xbp-68h]

  v3 = (_QWORD *)(align + 1744);
  v4 = align;
  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v36 = 0;
  memset(&ptr, 0, sizeof(ptr));
  v5 = *(_QWORD **)(align + 1736);
  if ( v5 == (_QWORD *)(align + 1744) )
    goto LABEL_49;
  do
  {
    while ( 1 )
    {
      if ( (((*((_DWORD *)v5 + 8) != a2) ^ a3) & 1) != 0 )
        goto LABEL_7;
      if ( *((_DWORD *)v5 + 15) )
        goto LABEL_6;
      if ( *((_BYTE *)v5 + 64) )
        goto LABEL_6;
      v8 = (unsigned int *)(v5 + 5);
      if ( *((_BYTE *)v5 + 65) )
        goto LABEL_6;
      v10 = *v8;
      v11 = (int *)__errno(align);
      *v11 = 0;
      v12 = v11;
      if ( (byte_166A38 & 1) == 0 )
      {
        align = syscall(130, v10, 19);
        if ( (_DWORD)align && *v12 == 38 )
        {
          *v12 = 0;
          byte_166A38 = 1;
        }
        else if ( byte_166A38 != 1 )
        {
          goto LABEL_16;
        }
      }
      align = kill(v10, 19);
LABEL_16:
      if ( !(_DWORD)align )
      {
        next = ptr.__list.__next;
        prev = ptr.__list.__prev;
        v34 = (unsigned int *)(v5 + 5);
        v18 = (char *)&ptr.__list.__next->__prev + 1;
        if ( ptr.__list.__prev > (struct __pthread_internal_list *)&v34
          || (char *)ptr.__list.__prev + 8 * v36 <= (char *)&v34 )
        {
          if ( v36 < (unsigned __int64)v18 )
          {
            align = (__int64)qvector_reserve(
                               (pthread_mutex_t *)(&ptr.__align + 3),
                               ptr.__list.__prev,
                               (unsigned __int64)v18,
                               8u);
            prev = (struct __pthread_internal_list *)align;
            next = ptr.__list.__next;
            v8 = v34;
            goto LABEL_27;
          }
        }
        else if ( v36 < (unsigned __int64)v18 )
        {
          align = (__int64)qvector_reserve(
                             (pthread_mutex_t *)(&ptr.__align + 3),
                             ptr.__list.__prev,
                             (unsigned __int64)v18,
                             8u);
          prev = (struct __pthread_internal_list *)align;
          next = ptr.__list.__next;
LABEL_27:
          ptr.__list.__prev = prev;
        }
        *((_QWORD *)&prev->__prev + (_QWORD)next) = v8;
        ++ptr.__list.__next;
        *((_BYTE *)v5 + 64) = 1;
LABEL_6:
        ++*((_DWORD *)v5 + 11);
        goto LABEL_7;
      }
      v13 = *v12;
      if ( *v12 == 3 )
        break;
      v19 = *v8;
      v20 = strerror(v13);
      align = sub_3A0D8(v4, "failed to send SIGSTOP to thread %d: %s\n", v19, v20);
LABEL_7:
      v9 = (_QWORD *)v5[1];
      if ( !v9 )
        goto LABEL_31;
      do
      {
LABEL_8:
        v5 = v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
LABEL_33:
      if ( v5 == v3 )
        goto LABEL_36;
    }
    v14 = *(&ptr.__align + 1);
    v15 = *v8;
    if ( *(&ptr.__align + 2) >= (unsigned __int64)(*(&ptr.__align + 1) + 1) )
    {
      align = ptr.__align;
    }
    else
    {
      align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, *(&ptr.__align + 1) + 1, 4u);
      v14 = *(&ptr.__align + 1);
      ptr.__align = align;
    }
    *(_DWORD *)(align + 4 * v14) = v15;
    ++*(&ptr.__align + 1);
    v9 = (_QWORD *)v5[1];
    if ( v9 )
      goto LABEL_8;
LABEL_31:
    v21 = (__int64)(v5 + 2);
    v22 = (_QWORD *)v5[2];
    if ( (_QWORD *)*v22 != v5 )
    {
      do
      {
        v23 = *(_QWORD *)v21;
        v24 = *(_QWORD **)(*(_QWORD *)v21 + 16LL);
        v21 = *(_QWORD *)v21 + 16LL;
        v5 = v24;
      }
      while ( *v24 != v23 );
      goto LABEL_33;
    }
    v5 = (_QWORD *)v5[2];
  }
  while ( v22 != v3 );
LABEL_36:
  while ( ptr.__list.__next )
  {
    while ( 1 )
    {
      LODWORD(v34) = 0;
      v25 = sub_4B230(v4, (int)&v34, -1);
      if ( v25 >= 1 )
        break;
LABEL_43:
      if ( !ptr.__list.__next )
        goto LABEL_49;
    }
    v26 = 8 * (__int64)ptr.__list.__next;
    if ( !(8 * (__int64)ptr.__list.__next) )
    {
LABEL_42:
      sub_3D474(v4, v25, (int)v34);
      goto LABEL_43;
    }
    v27 = ptr.__list.__prev;
    v28 = (char *)ptr.__list.__prev + v26;
    while ( 1 )
    {
      v29 = v27->__prev;
      if ( LODWORD(v27->__prev->__prev) == v25 )
        break;
      v26 -= 8;
      v27 = (struct __pthread_internal_list *)((char *)v27 + 8);
      if ( !v26 )
        goto LABEL_42;
    }
    if ( ((unsigned __int16)v34 & 0xFF7F) == 0x137F )
    {
      LOBYTE(v29[1].__next) = 0;
      HIDWORD(v29[1].__prev) = 1;
    }
    else
    {
      sub_3D474(v4, v25, (int)v34);
      v28 = (char *)ptr.__list.__prev + 8 * (__int64)ptr.__list.__next;
    }
    memmove(v27, &v27->__next, (unsigned __int64)&v28[-8LL - (_QWORD)v27] & 0xFFFFFFFFFFFFFFF8LL);
    --ptr.__list.__next;
  }
LABEL_49:
  v30 = (_DWORD *)ptr.__align;
  if ( *(&ptr.__align + 1) )
  {
    v31 = 0;
    v32 = 1;
    do
    {
      sub_3AFD0(v4, v30[v31], 3);
      v30 = (_DWORD *)ptr.__align;
      v31 = v32++;
    }
    while ( *(&ptr.__align + 1) > v31 );
  }
  if ( v30 )
  {
    *(&ptr.__align + 1) = 0;
    qfree(v30);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  if ( ptr.__list.__prev )
  {
    ptr.__list.__next = nullptr;
    qfree(ptr.__list.__prev);
    ptr.__list.__prev = nullptr;
    v36 = 0;
  }
  return 1;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 166A38: using guessed type char byte_166A38;
