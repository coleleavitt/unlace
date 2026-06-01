/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58DE8
// Address: 0x0000000000058DE8

//----- (0000000000058DE8) ----------------------------------------------------
struct __pthread_internal_list *__fastcall sub_58DE8(pthread_mutex_t *a1, int a2)
{
  __int64 v2; // x30
  __int64 v4; // x8
  __int64 v5; // x8
  unsigned __int64 v6; // x8
  __int64 *p_align; // x19
  unsigned __int64 v8; // x9
  __int64 align; // x0
  __int64 v10; // x20
  void *v11[2]; // [xsp+0h] [xbp-A8h] BYREF
  void *ptr[2]; // [xsp+10h] [xbp-98h]
  __int128 v13; // [xsp+20h] [xbp-88h]
  __int128 v14; // [xsp+30h] [xbp-78h]
  __int128 v15; // [xsp+40h] [xbp-68h]
  _BYTE v16[15]; // [xsp+50h] [xbp-58h] BYREF
  __int64 v17; // [xsp+60h] [xbp-48h]
  __int64 v18; // [xsp+80h] [xbp-28h]
  __int64 v19; // [xsp+88h] [xbp-20h]
  __int64 v20; // [xsp+98h] [xbp-10h]

  if ( (unsigned int)(a2 - 1) < 3 )
  {
    if ( a2 == 2 )
      return a1->__list.__prev;
    else
      return nullptr;
  }
  if ( !under_debugger )
  {
    v20 = v2;
    a1 = interr(20098);
  }
  __break(1u);
  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !under_debugger )
    {
      v19 = v2;
      a1 = interr(20098);
    }
    __break(1u);
    v18 = v2;
    v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (unsigned int)(a2 - 1) >= 3 )
    {
      if ( !under_debugger )
        interr(20098);
    }
    else
    {
      v5 = 8;
      if ( a2 == 1 )
        v5 = 24;
      v6 = *(_QWORD *)&a1->__size[v5];
      p_align = &a1->__align;
      if ( a2 == 1 )
        ++a1->__list.__prev;
      v8 = *(&a1->__align + 1);
      if ( v6 == v8 )
      {
        if ( *(&a1->__align + 2) >= v6 + 1 )
        {
          align = a1->__align;
        }
        else
        {
          align = (__int64)qvector_reserve(a1, (void *)a1->__align, v6 + 1, 0x60u);
          v6 = p_align[1];
          *p_align = align;
        }
        v10 = align + 96 * v6;
        *(_QWORD *)(v10 + 87) = 0;
        *(_QWORD *)(v10 + 80) = 0;
        *(_OWORD *)(v10 + 48) = 0u;
        *(_OWORD *)(v10 + 64) = 0u;
        *(_OWORD *)(v10 + 16) = 0u;
        *(_OWORD *)(v10 + 32) = 0u;
        *(_OWORD *)v10 = 0u;
        ++p_align[1];
        return (struct __pthread_internal_list *)v10;
      }
      if ( v6 <= v8 )
      {
        v10 = a1->__align + 96 * v6;
        memset(v16, 0, sizeof(v16));
        v15 = 0u;
        v14 = 0u;
        v13 = 0u;
        *(_OWORD *)ptr = 0u;
        *(_OWORD *)v11 = 0u;
        sub_59048((__int64)a1, v10, (__int64)v11);
        if ( ptr[1] )
        {
          *(_QWORD *)&v13 = 0;
          qfree(ptr[1]);
          ptr[1] = nullptr;
          *((_QWORD *)&v13 + 1) = 0;
        }
        if ( v11[0] )
        {
          v11[1] = nullptr;
          qfree(v11[0]);
          v11[0] = nullptr;
          ptr[0] = nullptr;
        }
        return (struct __pthread_internal_list *)v10;
      }
      if ( !under_debugger )
        a1 = interr(20133);
    }
    __break(1u);
    sub_39134(a1);
  }
  v4 = 8;
  if ( a2 == 1 )
    v4 = 24;
  return *(struct __pthread_internal_list **)&a1->__size[v4];
}
// 58E1C: variable 'v2' is possibly undefined
// 58E2C: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
