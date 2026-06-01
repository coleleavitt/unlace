/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_635B0
// Address: 0x00000000000635B0

//----- (00000000000635B0) ----------------------------------------------------
void __fastcall sub_635B0(__int64 a1, int a2)
{
  __int64 v4; // x9
  __int64 v5; // x23
  int v6; // w24
  _DWORD *v7; // x20
  pthread_mutex_t *v8; // x0
  size_t v9; // x21
  unsigned __int64 v10; // x26
  __int64 *p_align; // x22
  unsigned __int64 v12; // x24
  const void *v13; // x23
  char *align; // x1
  char *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  unsigned int v18; // w8
  pthread_mutex_t *v19; // x20
  unsigned __int64 v20; // x21
  unsigned __int64 v21; // x8
  char *v22; // x1
  char *v23; // x0
  unsigned __int64 v24; // x8
  char v25[4]; // [xsp+0h] [xbp-60h] BYREF
  char v26[4]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-58h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 256);
  v5 = *(int *)(*(_QWORD *)(a1 + 248) + 4 * (v4 - 1));
  if ( v4 )
    *(_QWORD *)(a1 + 256) = v4 - 1;
  v6 = *(_DWORD *)(a1 + 208) - v5;
  v7 = operator new(0x20u);
  v7[6] = 0;
  *v7 = a2;
  v8 = (pthread_mutex_t *)qalloc_or_throw(24);
  v9 = v6;
  *(&v8->__align + 1) = 0;
  *(&v8->__align + 2) = 0;
  v8->__align = 0;
  *((_QWORD *)v7 + 1) = v8;
  if ( v6 )
  {
    v10 = *(&v8->__align + 1);
    p_align = &v8->__align;
    if ( __CFADD__(v10, v6) )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v12 = v10 + v6;
    v13 = (const void *)(**(_QWORD **)(a1 + 200) + v5);
    if ( v10 >= v12 )
    {
      if ( v10 != v12 )
      {
        v26[0] = 0;
        sub_5BBF4(v8, v12, v26);
      }
    }
    else
    {
      align = (char *)v8->__align;
      if ( *(&v8->__align + 2) >= v12 )
      {
        v16 = *(&v8->__align + 1);
      }
      else
      {
        v15 = (char *)qvector_reserve(v8, align, v12, 1u);
        v16 = p_align[1];
        align = v15;
        *p_align = (__int64)v15;
      }
      memset(&align[v16], 0, v12 - v16);
      p_align[1] = v12;
    }
    v8 = (pthread_mutex_t *)memcpy((void *)(*p_align + v10), v13, v9);
  }
  v17 = *(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352);
  *((_QWORD *)v7 + 2) = *(_QWORD *)(v17 - 8);
  *(_QWORD *)(v17 - 8) = v7;
  if ( !(_DWORD)v9 )
    goto LABEL_23;
  v18 = *(_DWORD *)(a1 + 208);
  if ( v18 >= (unsigned int)v9 )
  {
    v19 = *(pthread_mutex_t **)(a1 + 200);
    v20 = v18 - (unsigned int)v9;
    *(_DWORD *)(a1 + 208) = v20;
    v21 = *(&v19->__align + 1);
    if ( v21 >= v20 )
    {
      if ( v21 != v20 )
      {
        v25[0] = 0;
        sub_5BBF4(v19, v20, v25);
      }
    }
    else
    {
      v22 = (char *)v19->__align;
      if ( *(&v19->__align + 2) < v20 )
      {
        v23 = (char *)qvector_reserve(v19, v22, v20, 1u);
        v21 = *(&v19->__align + 1);
        v22 = v23;
        v19->__align = (__int64)v23;
      }
      memset(&v22[v21], 0, v20 - v21);
      *(&v19->__align + 1) = v20;
    }
LABEL_23:
    *(_BYTE *)(a1 + 212) = -87;
    return;
  }
  v24 = (unsigned __int8)under_debugger;
  if ( !under_debugger )
    v8 = interr(708);
  __break(1u);
  sub_637B8(&v8->__align, (_QWORD *)v24);
}
// 637B5: variable 'v24' is possibly undefined
// 168DF0: using guessed type char under_debugger;
