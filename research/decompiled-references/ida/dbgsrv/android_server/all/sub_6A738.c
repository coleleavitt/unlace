/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A738
// Address: 0x000000000006A738

//----- (000000000006A738) ----------------------------------------------------
__int64 __fastcall sub_6A738(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // x24
  __int64 v6; // x27
  __int64 v8; // x23
  const char *v9; // x22
  const char *v10; // x0
  int v11; // w0
  const char *v12; // x1
  size_t v13; // x23
  void *align; // x22
  size_t v15; // x26
  __int64 v16; // x8
  size_t v17; // x22
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x23
  char *v21; // x1
  int v22; // w0
  struct __pthread_internal_list *v23; // x22
  int v24; // w21
  __int64 v26; // x20
  __int64 v27; // x8
  __int64 v28; // x19
  pthread_mutex_t v29; // [xsp+0h] [xbp-90h] BYREF
  struct __pthread_internal_list *v30; // [xsp+28h] [xbp-68h]
  int v31; // [xsp+30h] [xbp-60h]
  __int64 v32; // [xsp+38h] [xbp-58h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1 + 8;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
    goto LABEL_16;
  v8 = a1 + 8;
  v9 = *(_QWORD *)(a3 + 8) ? *(const char **)a3 : &byte_F154B;
  do
  {
    if ( *(_QWORD *)(v6 + 40) )
      v10 = *(const char **)(v6 + 32);
    else
      v10 = &byte_F154B;
    v11 = strcmp(v10, v9);
    if ( v11 >= 0 )
      v8 = v6;
    v6 = *(_QWORD *)(v6 + 8LL * (v11 < 0));
  }
  while ( v6 );
  if ( v8 == v5 || (*(_QWORD *)(v8 + 40) ? (v12 = *(const char **)(v8 + 32)) : (v12 = &byte_F154B), strcmp(v9, v12) < 0) )
  {
LABEL_16:
    memset(&v29, 0, 24);
    v13 = *(_QWORD *)(a1 + 40);
    if ( v13 )
    {
      v29.__align = (__int64)qalloc_or_throw(*(_QWORD *)(a1 + 40));
      *(&v29.__align + 2) = v13;
      align = (void *)v29.__align;
      memcpy((void *)v29.__align, *(const void **)(a1 + 32), v13);
      *(&v29.__align + 1) = v13;
      v15 = v13 - 1;
    }
    else
    {
      align = nullptr;
      v15 = 0;
    }
    if ( v13 < v15 + 2 )
    {
      align = qvector_reserve(&v29, align, v15 + 2, 1u);
      v29.__align = (__int64)align;
    }
    *(&v29.__align + 1) = v15 + 2;
    *((_BYTE *)align + v15) = 46;
    *(_BYTE *)(v29.__align + v15 + 1) = 0;
    v16 = *(_QWORD *)(a3 + 8);
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v16 != 1 )
      {
        v18 = v29.__align;
        if ( *(&v29.__align + 1) )
          v19 = *(&v29.__align + 1) - 1;
        else
          v19 = 0;
        v20 = v19 + v16;
        if ( *(&v29.__align + 2) < (unsigned __int64)(v19 + v16) )
        {
          v18 = (__int64)qvector_reserve(&v29, (void *)v29.__align, v19 + v16, 1u);
          v29.__align = v18;
        }
        *(&v29.__align + 1) = v20;
        *(_BYTE *)(v18 + v19 + v17) = 0;
        memcpy((void *)(v29.__align + v19), *(const void **)a3, v17);
      }
    }
    if ( *(&v29.__align + 1) )
      v21 = (char *)v29.__align;
    else
      v21 = &byte_F154B;
    v22 = sub_69A70((__int64)a2, v21);
    v30 = nullptr;
    *(_OWORD *)(&v29.__align + 3) = 0u;
    v23 = *(struct __pthread_internal_list **)(a3 + 8);
    v24 = v22;
    if ( v23 )
    {
      v29.__list.__prev = (struct __pthread_internal_list *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
      v30 = v23;
      memcpy(v29.__list.__prev, *(const void **)a3, (size_t)v23);
      v29.__list.__next = v23;
    }
    v31 = v24;
    sub_6CA64((__int64 **)a1, (__int64)&v29.__list, (__int128 *)(&v29.__align + 3));
    if ( v29.__list.__prev )
    {
      v29.__list.__next = nullptr;
      qfree(v29.__list.__prev);
      v29.__list.__prev = nullptr;
      v30 = nullptr;
    }
    if ( v29.__align )
    {
      *(&v29.__align + 1) = 0;
      qfree((void *)v29.__align);
      v29.__align = 0;
      *(&v29.__align + 2) = 0;
    }
  }
  else
  {
    v26 = *(int *)(v8 + 56);
    v27 = *a2;
    v24 = -1;
    v28 = *(_QWORD *)(v27 + 8 * v26);
    if ( !*(_DWORD *)(v28 + 136) )
    {
      sub_69BE8(v28);
      *(_DWORD *)(v28 + 136) = -1;
      return (int)v26;
    }
  }
  return v24;
}
// F154B: using guessed type char byte_F154B;
