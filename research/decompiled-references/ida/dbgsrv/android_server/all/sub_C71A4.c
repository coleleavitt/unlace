/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C71A4
// Address: 0x00000000000C71A4

//----- (00000000000C71A4) ----------------------------------------------------
__int64 __fastcall sub_C71A4(unsigned __int64 *a1, pthread_mutex_t *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // x23
  struct __pthread_internal_list *v8; // x23
  struct __pthread_internal_list *next; // x8
  struct __pthread_internal_list *prev; // x0
  unsigned __int64 v11; // x8
  int owner; // w2
  unsigned int v13; // w23
  unsigned __int64 v14; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x9
  unsigned __int64 v17; // x4
  int v18; // w25
  int v19; // w20
  __int64 v20; // x8
  __int64 align; // x1
  int v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  const char *v25; // x0
  void *v26; // x0
  const char *v27; // x0
  int v30; // [xsp+14h] [xbp-BCh] BYREF
  pthread_mutex_t buf; // [xsp+18h] [xbp-B8h] BYREF
  unsigned __int64 v32; // [xsp+40h] [xbp-90h]
  pthread_mutex_t v33; // [xsp+48h] [xbp-88h] BYREF

  v33.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&v33, 0, 24);
  v32 = 0;
  *(_OWORD *)(&buf.__align + 3) = 0u;
  v7 = a1[1];
  if ( v7 )
  {
    v33.__align = (__int64)qvector_reserve(&v33, nullptr, v7, 4u);
    memset((void *)(v33.__align + 4 * *(&v33.__align + 1)), 0, 4 * (v7 - *(&v33.__align + 1)));
    *(&v33.__align + 1) = v7;
  }
  v8 = (struct __pthread_internal_list *)a1[1];
  next = buf.__list.__next;
  if ( buf.__list.__next >= v8 )
  {
    if ( buf.__list.__next != v8 )
    {
      buf.__align = 0;
      sub_C7D14((pthread_mutex_t *)(&buf.__align + 3), (unsigned __int64)v8, (char *)&buf);
    }
  }
  else
  {
    if ( v32 >= (unsigned __int64)v8 )
    {
      prev = buf.__list.__prev;
    }
    else
    {
      prev = (struct __pthread_internal_list *)qvector_reserve(
                                                 (pthread_mutex_t *)(&buf.__align + 3),
                                                 buf.__list.__prev,
                                                 a1[1],
                                                 8u);
      next = buf.__list.__next;
      buf.__list.__prev = prev;
    }
    memset((char *)prev + 8 * (_QWORD)next, 0, 8 * ((char *)v8 - (char *)next));
    buf.__list.__next = v8;
  }
  if ( a1[1] )
  {
    v11 = 0;
    do
    {
      *(_DWORD *)(v33.__align + 4 * v11) = *(_DWORD *)(a1[2] + 4 * v11);
      *((_QWORD *)&buf.__list.__prev->__prev + v11) = v11;
      ++v11;
    }
    while ( v11 < a1[1] );
  }
  owner = v33.__owner;
  v13 = 0;
  memset(&buf, 0, 24);
  if ( *(&v33.__align + 1) )
  {
    do
    {
      if ( (*(_DWORD *)a3 & 0x80000000) != 0 )
      {
        LODWORD(v17) = *(_DWORD *)(a3 + 24);
      }
      else
      {
        v14 = qtime64();
        v15 = *(_QWORD *)(a3 + 16);
        v16 = 1000000 * HIDWORD(v14) + (unsigned int)v14;
        if ( v16 + 10 >= v15 )
          goto LABEL_43;
        v17 = (999 - v16 + v15) / 0x3E8;
        *(_DWORD *)(a3 + 24) = v17;
        owner = v33.__owner;
      }
      v18 = qwait_for_handles(&v30, (int *)v33.__align, owner, 0, v17);
      if ( v18 < 0 )
      {
        v27 = (const char *)winerr(v18);
        sub_C36AC(a2, "Could not wait for data: %s", v27);
        v13 = 1;
        goto LABEL_42;
      }
      v19 = v30;
      if ( !v18 && v30 == -1 )
      {
        v13 = 2;
        goto LABEL_42;
      }
      v20 = *(&buf.__align + 1);
      if ( *(&buf.__align + 1) >= a4 )
      {
        if ( *(&buf.__align + 1) != a4 )
        {
          v33.__size[28] = 0;
          sub_5BBF4(&buf, a4, &v33.__size[28]);
        }
      }
      else
      {
        align = buf.__align;
        if ( *(&buf.__align + 2) < a4 )
        {
          align = (__int64)qvector_reserve(&buf, (void *)buf.__align, a4, 1u);
          v20 = *(&buf.__align + 1);
          buf.__align = align;
        }
        memset((void *)(align + v20), 0, a4 - v20);
        *(&buf.__align + 1) = a4;
      }
      v22 = read(*(_DWORD *)(v33.__align + 4LL * v19), (void *)buf.__align, a4);
      v18 = v22;
      if ( v22 <= 0 )
      {
        if ( v22 < 0 )
        {
          v18 = -v22;
          v25 = (const char *)winerr(-v22);
          sub_C36AC(a2, "Could not read from a pipe: %s", v25);
          v13 = 1;
        }
        else
        {
          v18 = 0;
        }
        memmove(
          (void *)(v33.__align + 4LL * v19),
          (const void *)(v33.__align + 4LL * v19 + 4),
          (-4 - 4LL * v19 + 4 * *(&v33.__align + 1)) & 0xFFFFFFFFFFFFFFFCLL);
        --*(&v33.__align + 1);
        memmove(
          (char *)buf.__list.__prev + 8 * v19,
          &buf.__list.__prev->__next + v19,
          (-8 - 8LL * v19 + 8 * (__int64)buf.__list.__next--) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v23 = *(&buf.__align + 1);
        if ( *(&buf.__align + 1) >= (unsigned __int64)v22 )
        {
          if ( *(&buf.__align + 1) != v22 )
          {
            v33.__size[28] = 0;
            sub_5BBF4(&buf, v22, &v33.__size[28]);
          }
        }
        else
        {
          v24 = buf.__align;
          if ( *(&buf.__align + 2) < (unsigned __int64)v22 )
          {
            v24 = (__int64)qvector_reserve(&buf, (void *)buf.__align, v22, 1u);
            v23 = *(&buf.__align + 1);
            buf.__align = v24;
          }
          memset((void *)(v24 + v23), 0, v18 - v23);
          *(&buf.__align + 1) = v18;
        }
        if ( ((*(__int64 (__fastcall **)(unsigned __int64 *, _QWORD, pthread_mutex_t *))(*a1 + 16))(
                a1,
                *((_QWORD *)&buf.__list.__prev->__prev + v19),
                &buf)
            & 1) == 0 )
        {
          v13 = 3;
          goto LABEL_42;
        }
      }
      owner = v33.__owner;
    }
    while ( *(&v33.__align + 1) );
    if ( !v13 )
      goto LABEL_51;
LABEL_42:
    if ( v13 == 2 )
    {
LABEL_43:
      v13 = -1;
      v26 = (void *)buf.__align;
      if ( buf.__align )
        goto LABEL_52;
      goto LABEL_53;
    }
    if ( v13 == 3 )
      v13 = -2;
    else
      v13 = v18;
    v26 = (void *)buf.__align;
    if ( buf.__align )
      goto LABEL_52;
  }
  else
  {
LABEL_51:
    v26 = (void *)buf.__align;
    if ( buf.__align )
    {
LABEL_52:
      *(&buf.__align + 1) = 0;
      qfree(v26);
      buf.__align = 0;
      *(&buf.__align + 2) = 0;
    }
  }
LABEL_53:
  if ( buf.__list.__prev )
  {
    buf.__list.__next = nullptr;
    qfree(buf.__list.__prev);
    buf.__list.__prev = nullptr;
    v32 = 0;
  }
  if ( v33.__align )
  {
    *(&v33.__align + 1) = 0;
    qfree((void *)v33.__align);
    v33.__align = 0;
    *(&v33.__align + 2) = 0;
  }
  return v13;
}
