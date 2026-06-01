/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56C9C
// Address: 0x0000000000056C9C

//----- (0000000000056C9C) ----------------------------------------------------
__int64 __fastcall sub_56C9C(__int64 a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x12
  __int64 v8; // x9
  unsigned int v9; // w11
  unsigned int v10; // w13
  unsigned __int64 v11; // x23
  unsigned __int64 v12; // x11
  unsigned int v13; // w12
  unsigned int v14; // w13
  size_t v15; // x21
  __int64 v16; // x24
  unsigned int v17; // w19
  unsigned int v19; // w8
  unsigned int v22; // w9
  unsigned int v23; // w27
  unsigned __int64 v24; // x28
  struct __pthread_internal_list *prev; // x0
  struct __pthread_internal_list *next; // x23
  char *v27; // x22
  struct __pthread_internal_list *v28; // x24
  void *v29; // x0
  void **v30; // x24
  __int64 v31; // x23
  __int64 v32; // x22
  const void *align; // x25
  void *v34; // x0
  pthread_mutex_t dest; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v36; // [xsp+28h] [xbp-78h]
  char v37[4]; // [xsp+34h] [xbp-6Ch] BYREF
  __int64 v38; // [xsp+38h] [xbp-68h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  if ( (unsigned __int64)*a2 > 0xFFFFFFFFFFFFFFFBLL )
    return 0;
  v5 = a3[1];
  v6 = v4 + 4;
  if ( v4 + 4 > v5 )
    return 0;
  v8 = *a3;
  v9 = *(_DWORD *)(*a3 + v4);
  v10 = bswap32(v9);
  v11 = (a4 & 1) != 0 ? v10 : v9;
  if ( v6 > 0xFFFFFFFFFFFFFFFBLL )
    return 0;
  v12 = v4 + 8;
  if ( v4 + 8 > v5 )
    return 0;
  v13 = *(_DWORD *)(v8 + v6);
  v14 = bswap32(v13);
  v15 = (a4 & 1) != 0 ? v14 : v13;
  if ( v12 > 0xFFFFFFFFFFFFFFFBLL )
    return 0;
  v16 = v4 + 12;
  if ( v4 + 12 > v5 )
    return 0;
  v19 = *(_DWORD *)(v8 + v12);
  v22 = bswap32(v19);
  if ( (a4 & 1) != 0 )
    v23 = v22;
  else
    v23 = v19;
  *(_OWORD *)(&dest.__align + 3) = 0u;
  v36 = 0;
  if ( (sub_56B2C((__int64)&dest.__list, a3, v16, v11, 1) & 1) == 0
    || (v24 = ((v11 + 3) & 0x1FFFFFFFCLL) + v16, memset(&dest, 0, 24), ~v24 < v15)
    || v24 + v15 > a3[1] )
  {
    v17 = 0;
    prev = dest.__list.__prev;
    if ( !dest.__list.__prev )
      return v17;
LABEL_22:
    dest.__list.__next = nullptr;
    qfree(prev);
    dest.__list.__prev = nullptr;
    v36 = 0;
    return v17;
  }
  *(&dest.__align + 1) = 0;
  v37[0] = 0;
  sub_5C6B0(&dest, v15 + 1, v37);
  *(_BYTE *)(dest.__align + v15) = 0;
  memcpy((void *)dest.__align, (const void *)(*a3 + v24), v15);
  if ( a1 )
  {
    if ( (__int64 *)a1 != &dest.__align + 3 )
    {
      next = dest.__list.__next;
      if ( !dest.__list.__next
        || (v27 = (char *)&dest.__list.__next[-1].__next + 7,
            dest.__list.__next == (struct __pthread_internal_list *)((char *)&dword_0 + 1)) )
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
      else
      {
        v28 = dest.__list.__prev;
        if ( (struct __pthread_internal_list *)*(_QWORD *)(a1 + 16) >= dest.__list.__next )
        {
          v29 = *(void **)a1;
        }
        else
        {
          v29 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, (unsigned __int64)dest.__list.__next, 1u);
          *(_QWORD *)a1 = v29;
        }
        *(_QWORD *)(a1 + 8) = next;
        memmove(v29, v28, (size_t)&next[-1].__next + 7);
        v27[*(_QWORD *)a1] = 0;
      }
    }
    v30 = (void **)(a1 + 24);
    if ( (pthread_mutex_t *)(a1 + 24) != &dest )
    {
      v31 = *(&dest.__align + 1);
      if ( !*(&dest.__align + 1) || (v32 = *(&dest.__align + 1) - 1, *(&dest.__align + 1) == 1) )
      {
        *(_QWORD *)(a1 + 32) = 0;
      }
      else
      {
        align = (const void *)dest.__align;
        if ( *(_QWORD *)(a1 + 40) >= *(&dest.__align + 1) )
        {
          v34 = *v30;
        }
        else
        {
          v34 = qvector_reserve((pthread_mutex_t *)(a1 + 24), *v30, *((unsigned __int64 *)&dest.__align + 1), 1u);
          *v30 = v34;
        }
        *(_QWORD *)(a1 + 32) = v31;
        memmove(v34, align, v31 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v32) = 0;
      }
    }
    *(_DWORD *)(a1 + 48) = v23;
  }
  *a2 = ((v15 + 3) & 0x1FFFFFFFCLL) + v24;
  if ( dest.__align )
  {
    *(&dest.__align + 1) = 0;
    qfree((void *)dest.__align);
    dest.__align = 0;
    *(&dest.__align + 2) = 0;
  }
  v17 = 1;
  prev = dest.__list.__prev;
  if ( dest.__list.__prev )
    goto LABEL_22;
  return v17;
}
// 0: using guessed type int dword_0;
