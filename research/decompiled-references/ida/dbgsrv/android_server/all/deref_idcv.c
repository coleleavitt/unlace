/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x000000000006DFB0

//----- (000000000006DFB0) ----------------------------------------------------
unsigned __int8 *__fastcall deref_idcv(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // x19
  __int64 v4; // x21
  __int64 v5; // x22
  unsigned __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 *v9; // x8
  __int64 *align; // x11
  void *v11; // x0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-60h] BYREF

  v2 = a1;
  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    if ( *a1 == 10 )
    {
      memset(&ptr, 0, 24);
      v4 = sub_6804C();
      v5 = (__int64)v2;
      v6 = *((int *)v2 + 4);
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_6;
LABEL_12:
      v5 = sub_6DF20(v4, ~(_DWORD)v6);
      if ( (a2 & 1) == 0 )
      {
        while ( *(_BYTE *)v5 == 10 )
        {
          v8 = 8 * *(&ptr.__align + 1);
          v9 = (__int64 *)(ptr.__align + 8 * *(&ptr.__align + 1));
          align = (__int64 *)ptr.__align;
          if ( 8 * *(&ptr.__align + 1) )
          {
            align = (__int64 *)ptr.__align;
            while ( v5 != *align )
            {
              v8 -= 8;
              ++align;
              if ( !v8 )
                goto LABEL_20;
            }
          }
          if ( align != v9 )
            goto LABEL_23;
LABEL_20:
          if ( *(&ptr.__align + 2) < (unsigned __int64)(*(&ptr.__align + 1) + 1) )
          {
            ptr.__align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, *(&ptr.__align + 1) + 1, 8u);
            v9 = (__int64 *)(ptr.__align + 8 * *(&ptr.__align + 1));
          }
          *v9 = v5;
          ++*(&ptr.__align + 1);
          v6 = *(int *)(v5 + 16);
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_12;
LABEL_6:
          v7 = *(_QWORD *)(v5 + 8);
          if ( !v7
            || *(_DWORD *)v7 != 289621065
            || *(_QWORD *)(v7 + 32) <= v6
            || (v5 = *(_QWORD *)(v7 + 24) + 32 * v6) == 0 )
          {
LABEL_23:
            set_qerrno(0x61Bu);
            goto LABEL_24;
          }
          if ( (a2 & 1) != 0 )
            break;
        }
      }
      if ( (a2 & 2) == 0 )
      {
        v2 = (unsigned __int8 *)v5;
        v11 = (void *)ptr.__align;
        if ( !ptr.__align )
          return v2;
        goto LABEL_26;
      }
      *v2 = 2;
      if ( (unsigned int)copy_idcv(v2, (unsigned __int8 *)v5) )
LABEL_24:
        v2 = nullptr;
      v11 = (void *)ptr.__align;
      if ( ptr.__align )
      {
LABEL_26:
        *(&ptr.__align + 1) = 0;
        qfree(v11);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
    }
  }
  else
  {
    set_qerrno(0x61Bu);
  }
  return v2;
}
