/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: quote_cmdline_arg
// Address: 0x00000000000AE188

//----- (00000000000AE188) ----------------------------------------------------
__int64 __fastcall quote_cmdline_arg(char **a1)
{
  char *v2; // x21
  char *v3; // x20
  char v4; // w23
  unsigned __int64 v5; // x2
  char *v6; // x1
  unsigned __int64 v7; // x8
  __int64 v8; // x26
  char *v9; // x8
  int v10; // w27
  __int64 align; // x1
  __int64 v12; // x26
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  char *v16; // x0
  __int64 v17; // x9
  __int64 v18; // x10
  unsigned __int8 *v20; // x8
  int v21; // t1
  pthread_mutex_t ptr; // [xsp+0h] [xbp-70h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a1;
    v4 = **a1;
    if ( v4 && !strpbrk(*a1, " \t?*[]()<>;&$|^#") )
    {
      v20 = (unsigned __int8 *)(v3 + 1);
      while ( v4 != 39 && v4 != 34 )
      {
        v21 = *v20++;
        v4 = v21;
        if ( !v21 )
          return 0;
      }
    }
  }
  else
  {
    v3 = &byte_F154B;
  }
  if ( v2 )
    v5 = (unsigned __int64)(v2 + 1);
  else
    v5 = 2;
  memset(&ptr, 0, 24);
  if ( !v5 )
  {
    v7 = 0;
    v6 = nullptr;
    goto LABEL_13;
  }
  v6 = (char *)qvector_reserve(&ptr, nullptr, v5, 1u);
  v7 = *(&ptr.__align + 2);
  ptr.__align = (__int64)v6;
  if ( !*(&ptr.__align + 1) )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v8 = *(&ptr.__align + 1) - 1;
LABEL_14:
  if ( v7 < v8 + 2 )
  {
    v6 = (char *)qvector_reserve(&ptr, v6, v8 + 2, 1u);
    ptr.__align = (__int64)v6;
  }
  v9 = &v6[v8];
  LOBYTE(v10) = 39;
  *(&ptr.__align + 1) = v8 + 2;
  while ( 1 )
  {
    *v9 = v10;
    *(_BYTE *)(ptr.__align + v8 + 1) = 0;
    v10 = (unsigned __int8)*v3;
    if ( (unsigned int)(v10 - 34) > 0x3A || ((1LL << ((unsigned __int8)v10 - 34)) & 0x400000000000021LL) == 0 )
      break;
    align = ptr.__align;
    if ( *(&ptr.__align + 1) )
      v12 = *(&ptr.__align + 1) - 1;
    else
      v12 = 0;
    if ( *(&ptr.__align + 2) < (unsigned __int64)(v12 + 2) )
    {
      align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v12 + 2, 1u);
      ptr.__align = align;
    }
    *(&ptr.__align + 1) = v12 + 2;
    *(_BYTE *)(align + v12) = 92;
    *(_BYTE *)(ptr.__align + v12 + 1) = 0;
    LOBYTE(v10) = *v3;
LABEL_27:
    v13 = ptr.__align;
    if ( *(&ptr.__align + 1) )
      v8 = *(&ptr.__align + 1) - 1;
    else
      v8 = 0;
    if ( *(&ptr.__align + 2) < (unsigned __int64)(v8 + 2) )
    {
      v13 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v8 + 2, 1u);
      ptr.__align = v13;
    }
    ++v3;
    *(&ptr.__align + 1) = v8 + 2;
    v9 = (char *)(v13 + v8);
  }
  if ( *v3 )
    goto LABEL_27;
  v14 = ptr.__align;
  if ( *(&ptr.__align + 1) )
    v15 = *(&ptr.__align + 1) - 1;
  else
    v15 = 0;
  if ( *(&ptr.__align + 2) < (unsigned __int64)(v15 + 2) )
  {
    v14 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v15 + 2, 1u);
    ptr.__align = v14;
  }
  *(&ptr.__align + 1) = v15 + 2;
  *(_BYTE *)(v14 + v15) = 39;
  *(_BYTE *)(ptr.__align + v15 + 1) = 0;
  v16 = *a1;
  v17 = (__int64)a1[1];
  v18 = (__int64)a1[2];
  *(_OWORD *)a1 = *(_OWORD *)&ptr.__lock;
  a1[2] = (char *)*(&ptr.__align + 2);
  ptr.__align = (__int64)v16;
  *(&ptr.__align + 1) = v17;
  *(&ptr.__align + 2) = v18;
  if ( v16 )
  {
    *(&ptr.__align + 1) = 0;
    qfree(v16);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return 1;
}
// F154B: using guessed type char byte_F154B;
