/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FE3C
// Address: 0x000000000005FE3C

//----- (000000000005FE3C) ----------------------------------------------------
void __fastcall sub_5FE3C(pthread_mutex_t *a1, __int64 a2)
{
  __int64 v4; // x8
  unsigned __int8 *v5; // x1
  int v6; // w2
  __int64 v7; // x0
  __int64 v8; // x11
  int *v9; // x21
  size_t v10; // x20
  __int64 v11; // x24
  unsigned __int64 v12; // x22
  _BYTE *align; // x0
  __int64 v14; // x8
  size_t v15; // x21
  __int64 v16; // x9
  __int64 v17; // x24
  __int64 v18; // x22
  _BYTE *v19; // x0
  void *ptr; // [xsp+0h] [xbp-60h] BYREF
  __int64 v21; // [xsp+8h] [xbp-58h]
  __int64 v22; // [xsp+10h] [xbp-50h]
  __int64 v23; // [xsp+18h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a2 + 40) )
  {
    v21 = 0;
    v22 = 0;
    ptr = nullptr;
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
      v5 = *(unsigned __int8 **)a2;
    else
      v5 = (unsigned __int8 *)&byte_F154B;
    if ( v4 )
      v6 = v4 - 1;
    else
      v6 = 0;
    v7 = utf8_utf16(&ptr, v5, v6);
    if ( (v7 & 1) == 0 )
    {
      if ( !under_debugger )
        v7 = (__int64)interr(274);
      __break(1u);
      sub_39134((void *)v7);
    }
    v8 = *(&a1->__align + 1);
    if ( v21 )
      v9 = (int *)ptr;
    else
      v9 = &dword_1030F4;
    if ( v21 )
      v10 = 2 * v21 - 2;
    else
      v10 = 0;
    if ( v8 )
      v11 = v8 - 1;
    else
      v11 = 0;
    v12 = v11 + v10 + 1;
    if ( *(&a1->__align + 2) >= v12 )
    {
      align = (_BYTE *)a1->__align;
    }
    else
    {
      align = qvector_reserve(a1, (void *)a1->__align, v11 + v10 + 1, 1u);
      a1->__align = (__int64)align;
    }
    *(&a1->__align + 1) = v12;
    align[v11 + v10] = 0;
    memmove((void *)(a1->__align + v11), v9, v10);
    if ( ptr )
    {
      v21 = 0;
      qfree(ptr);
      ptr = nullptr;
      v22 = 0;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a2 + 8);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v14 != 1 )
      {
        v16 = *(&a1->__align + 1);
        if ( v16 )
          v17 = v16 - 1;
        else
          v17 = 0;
        v18 = v17 + v14;
        if ( *(&a1->__align + 2) >= (unsigned __int64)(v17 + v14) )
        {
          v19 = (_BYTE *)a1->__align;
        }
        else
        {
          v19 = qvector_reserve(a1, (void *)a1->__align, v17 + v14, 1u);
          a1->__align = (__int64)v19;
        }
        *(&a1->__align + 1) = v18;
        v19[v17 + v15] = 0;
        memcpy((void *)(a1->__align + v17), *(const void **)a2, v15);
      }
    }
  }
}
// F154B: using guessed type char byte_F154B;
// 1030F4: using guessed type int dword_1030F4;
// 168DF0: using guessed type char under_debugger;
