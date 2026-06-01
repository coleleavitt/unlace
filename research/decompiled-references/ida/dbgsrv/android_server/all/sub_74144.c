/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74144
// Address: 0x0000000000074144

//----- (0000000000074144) ----------------------------------------------------
__int64 __fastcall sub_74144(__int64 a1, _DWORD *a2, unsigned __int8 **a3)
{
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x0
  int v9; // w0
  struct __pthread_internal_list *prev; // x0
  __int64 v12; // x0
  size_t v13; // x19
  __int64 v14; // x20
  unsigned __int64 v15; // x8
  void *align; // x1
  size_t v17; // x20
  char *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x21
  char *v21; // x20
  const char *v22; // x1
  pthread_mutex_t v23; // [xsp+8h] [xbp-68h] BYREF
  __int64 v24; // [xsp+30h] [xbp-40h]
  __int64 v25; // [xsp+38h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a2 = -1;
  *(_OWORD *)(&v23.__align + 3) = 0u;
  v24 = 0;
  v6 = sub_730A4(a1, (__int128 *)(&v23.__align + 3));
  v7 = v6;
  if ( v6 )
  {
    v8 = sub_6A1B0(*(int *)(v6 + 28));
    v9 = sub_716E8(v8, &v23.__list.__prev);
    if ( v9 == -1 )
    {
      if ( (sub_73EF8(a1, v7, (__int64)&v23.__list, a3) & 1) == 0 )
      {
        set_qerrno(0x58u);
        v12 = sub_6A1B0(*(int *)(v7 + 28));
        memset(&v23, 0, 24);
        v13 = *(_QWORD *)(v12 + 40);
        v14 = v12;
        if ( v13 )
        {
          v23.__align = (__int64)qalloc_or_throw(*(_QWORD *)(v12 + 40));
          *(&v23.__align + 2) = v13;
          memcpy((void *)v23.__align, *(const void **)(v14 + 32), v13);
          v15 = v13;
          align = (void *)v23.__align;
          *(&v23.__align + 1) = v13;
          v17 = v13 - 1;
        }
        else
        {
          v15 = 0;
          align = nullptr;
          v17 = 0;
        }
        if ( v15 < v17 + 2 )
        {
          align = qvector_reserve(&v23, align, v17 + 2, 1u);
          v23.__align = (__int64)align;
        }
        *(&v23.__align + 1) = v17 + 2;
        *((_BYTE *)align + v17) = 46;
        *(_BYTE *)(v23.__align + v17 + 1) = 0;
        if ( v23.__list.__next )
        {
          v18 = (char *)&v23.__list.__next[-1].__next + 7;
          if ( v23.__list.__next != (struct __pthread_internal_list *)((char *)&dword_0 + 1) )
          {
            v19 = v23.__align;
            if ( *(&v23.__align + 1) )
              v20 = *(&v23.__align + 1) - 1;
            else
              v20 = 0;
            v21 = (char *)v23.__list.__next + v20;
            if ( *(&v23.__align + 2) < (unsigned __int64)v23.__list.__next + v20 )
            {
              v19 = (__int64)qvector_reserve(&v23, (void *)v23.__align, (unsigned __int64)v23.__list.__next + v20, 1u);
              v23.__align = v19;
            }
            *(&v23.__align + 1) = (__int64)v21;
            v18[v20 + v19] = 0;
            memcpy((void *)(v23.__align + v20), v23.__list.__prev, (size_t)v18);
          }
        }
        if ( *(&v23.__align + 1) )
          v22 = (const char *)v23.__align;
        else
          v22 = &byte_F154B;
        set_error_string(nullptr, v22);
        if ( v23.__align )
        {
          *(&v23.__align + 1) = 0;
          qfree((void *)v23.__align);
          v23.__align = 0;
          *(&v23.__align + 2) = 0;
        }
        LODWORD(v7) = 0;
        prev = v23.__list.__prev;
        if ( v23.__list.__prev )
          goto LABEL_7;
        return (unsigned int)v7;
      }
    }
    else
    {
      *a2 = v9;
    }
    LODWORD(v7) = 1;
  }
  prev = v23.__list.__prev;
  if ( v23.__list.__prev )
  {
LABEL_7:
    v23.__list.__next = nullptr;
    qfree(prev);
    v23.__list.__prev = nullptr;
    v24 = 0;
  }
  return (unsigned int)v7;
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
