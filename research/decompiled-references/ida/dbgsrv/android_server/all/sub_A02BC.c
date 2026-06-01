/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A02BC
// Address: 0x00000000000A02BC

//----- (00000000000A02BC) ----------------------------------------------------
void __fastcall sub_A02BC(__int64 *a1, pthread_mutex_t *a2, __int64 *a3, unsigned __int64 *a4)
{
  int v7; // w0
  unsigned __int64 v8; // x8
  size_t v9; // x22
  char *align; // x0
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x9
  void *v13; // x0
  const void *v14; // x1
  int v15; // w0
  unsigned __int64 v16; // x8
  size_t v17; // x22
  void **p_next; // x23
  struct __pthread_internal_list *v19; // x0
  const void *v20; // x1
  unsigned __int64 v21; // x8
  void *v22; // x0
  char v23[4]; // [xsp+0h] [xbp-50h] BYREF
  char v24[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-48h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_A009C(a1, 1, a4);
  v7 = unpack_dd(a4, a4[1]);
  v8 = *(&a2->__align + 1);
  v9 = v7;
  if ( v8 >= v7 )
  {
    if ( v8 != v7 )
    {
      v23[0] = 0;
      sub_5BBF4(a2, v7, v23);
    }
  }
  else
  {
    if ( *(&a2->__align + 2) >= (unsigned __int64)v7 )
    {
      align = (char *)a2->__align;
    }
    else
    {
      align = (char *)qvector_reserve(a2, (void *)a2->__align, v7, 1u);
      v8 = *(&a2->__align + 1);
      a2->__align = (__int64)align;
    }
    memset(&align[v8], 0, v9 - v8);
    *(&a2->__align + 1) = v9;
  }
  v11 = a4[1];
  v12 = *a4 + v9;
  if ( v12 >= *a4 && v12 <= v11 )
  {
    v13 = (void *)a2->__align;
    v14 = (const void *)*a4;
    *a4 = v12;
    memcpy(v13, v14, v9);
    v11 = a4[1];
  }
  a2->__list.__prev = (struct __pthread_internal_list *)(unpack_dq(a4, v11) - 1);
  v15 = unpack_dd(a4, a4[1]);
  v16 = a2[1].__align;
  v17 = v15;
  p_next = (void **)&a2->__list.__next;
  if ( v16 >= v15 )
  {
    if ( v16 != v15 )
    {
      v24[0] = 0;
      sub_5BBF4((pthread_mutex_t *)(&a2->__align + 4), v15, v24);
    }
  }
  else
  {
    if ( *(&a2[1].__align + 1) >= (unsigned __int64)v15 )
    {
      v19 = (struct __pthread_internal_list *)*p_next;
    }
    else
    {
      v19 = (struct __pthread_internal_list *)qvector_reserve(
                                                (pthread_mutex_t *)(&a2->__align + 4),
                                                a2->__list.__next,
                                                v15,
                                                1u);
      v16 = a2[1].__align;
      a2->__list.__next = v19;
    }
    memset((char *)v19 + v16, 0, v17 - v16);
    a2[1].__align = v17;
  }
  v20 = (const void *)*a4;
  v21 = *a4 + v17;
  if ( v21 >= *a4 && v21 <= a4[1] )
  {
    v22 = *p_next;
    *a4 = v21;
    memcpy(v22, v20, v17);
  }
  if ( a3 )
    sub_A009C(a3, 0, a4);
}
