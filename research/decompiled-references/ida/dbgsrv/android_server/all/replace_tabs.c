/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: replace_tabs
// Address: 0x00000000000C0BA8

//----- (00000000000C0BA8) ----------------------------------------------------
__int64 __fastcall replace_tabs(pthread_mutex_t *a1, char *s, unsigned int a3)
{
  const char *v4; // x20
  __int64 v6; // x8
  char v7; // w23
  __int64 v8; // x27
  char *v9; // x0
  void *align; // x1
  __int64 v11; // x8
  size_t v12; // x23
  char *v13; // x22
  __int64 v14; // x29
  unsigned __int64 v15; // x24
  __int64 v16; // x9
  unsigned __int64 v17; // x8
  __int64 v18; // x9
  unsigned __int64 v19; // x22
  size_t v21; // x0
  __int64 v22; // x8
  size_t v23; // x21
  __int64 v24; // x24
  size_t v25; // x26
  unsigned __int64 v26; // x22
  _BYTE *v27; // x0
  char v28[4]; // [xsp+14h] [xbp-6Ch] BYREF
  __int64 v29; // [xsp+18h] [xbp-68h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !s )
    return 0;
  v4 = s;
  if ( a3 )
  {
    v6 = *(&a1->__align + 1);
    v7 = 0;
    if ( v6 )
      v8 = v6 - 1;
    else
      v8 = 0;
    while ( 1 )
    {
      v9 = strchr(v4, 9);
      if ( !v9 )
        break;
      align = (void *)a1->__align;
      v11 = *(&a1->__align + 1);
      v12 = v9 - v4;
      v13 = v9;
      if ( v11 )
        v14 = v11 - 1;
      else
        v14 = 0;
      v15 = v14 + v12 + 1;
      if ( *(&a1->__align + 2) < v15 )
      {
        align = qvector_reserve(a1, align, v14 + v12 + 1, 1u);
        a1->__align = (__int64)align;
      }
      *(&a1->__align + 1) = v15;
      *((_BYTE *)align + v14 + v12) = 0;
      memmove((void *)(a1->__align + v14), v4, v12);
      v16 = *(&a1->__align + 1);
      v4 = v13 + 1;
      v28[0] = 32;
      v17 = v16 - 1;
      if ( v16 )
        v18 = v16 - 1;
      else
        v18 = 0;
      v19 = v18 + (int)(a3 + v8 - v18 + (v18 - v8) / (unsigned __int64)a3 * a3);
      if ( v17 < v19 )
        *(_BYTE *)(a1->__align + v17) = 32;
      sub_5C6B0(a1, v19 + 1, v28);
      v7 = 1;
      *(_BYTE *)(a1->__align + v19) = 0;
    }
    if ( !v4 )
      return v7 & 1;
  }
  else
  {
    v7 = 0;
  }
  v21 = strlen(v4);
  v22 = *(&a1->__align + 1);
  v23 = v21;
  if ( v22 )
    v24 = v22 - 1;
  else
    v24 = 0;
  v25 = v24 + v21;
  v26 = v24 + v21 + 1;
  if ( *(&a1->__align + 2) >= v26 )
  {
    v27 = (_BYTE *)a1->__align;
  }
  else
  {
    v27 = qvector_reserve(a1, (void *)a1->__align, v26, 1u);
    a1->__align = (__int64)v27;
  }
  *(&a1->__align + 1) = v26;
  v27[v25] = 0;
  memmove((void *)(a1->__align + v24), v4, v23);
  return v7 & 1;
}
