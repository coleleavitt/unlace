/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_563A4
// Address: 0x00000000000563A4

//----- (00000000000563A4) ----------------------------------------------------
bool __fastcall sub_563A4(__int64 *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v6; // x0
  unsigned __int64 v7; // x21
  _BOOL4 v8; // w20
  unsigned int v9; // w8
  unsigned int v10; // w10
  unsigned __int64 v11; // x23
  char v12; // w25
  void *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x26
  pthread_mutex_t ptr; // [xsp+0h] [xbp-70h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = sub_55A34((__int64)a1, 1, ".gnu_debuglink");
  if ( v6 )
  {
    memset(&ptr, 0, 24);
    sub_511B8(a1, &ptr, (__int64)v6);
    v7 = *(&ptr.__align + 1) - 4;
    v8 = *(&ptr.__align + 1) > 4uLL;
    if ( *(&ptr.__align + 1) >= 5uLL )
    {
      if ( a3 )
      {
        v9 = *(_DWORD *)(ptr.__align + v7);
        v10 = bswap32(v9);
        if ( *(_BYTE *)(a1[20] + 509) == 2 )
          v9 = v10;
        *a3 = v9;
      }
      if ( a2 )
      {
        if ( *(_QWORD *)(a2 + 16) < v7 )
          *(_QWORD *)a2 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v7, 1u);
        v11 = 0;
        do
        {
          v12 = *(_BYTE *)(ptr.__align + v11);
          if ( !v12 )
            break;
          v13 = *(void **)a2;
          v14 = *(_QWORD *)(a2 + 8);
          if ( v14 )
            v15 = v14 - 1;
          else
            v15 = 0;
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v15 + 2) )
          {
            v13 = qvector_reserve((pthread_mutex_t *)a2, v13, v15 + 2, 1u);
            *(_QWORD *)a2 = v13;
          }
          *(_QWORD *)(a2 + 8) = v15 + 2;
          *((_BYTE *)v13 + v15) = v12;
          ++v11;
          *(_BYTE *)(*(_QWORD *)a2 + v15 + 1) = 0;
        }
        while ( v11 < v7 );
      }
    }
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
