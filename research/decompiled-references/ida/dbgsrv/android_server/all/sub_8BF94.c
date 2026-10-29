/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF94
// Address: 0x000000000008BF94

//----- (000000000008BF94) ----------------------------------------------------
__int64 __fastcall sub_8BF94(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // x20
  __int64 v6; // x24
  __int64 v7; // t1
  _QWORD *v8; // x22
  const char *v9; // x21
  const char *v10; // x0
  int v11; // w0
  const char *v12; // x1
  unsigned int v13; // w20
  unsigned __int64 v14; // x21
  const void *v15; // x22
  void *v16; // x0
  void *v17; // x0
  void *ptr; // [xsp+60h] [xbp-60h] BYREF
  __int64 v20; // [xsp+68h] [xbp-58h]
  __int64 v21; // [xsp+70h] [xbp-50h]
  __int64 v22; // [xsp+78h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr = nullptr;
  v20 = 0;
  v21 = 0;
  sub_8BA38(a3, (__int64)&ptr);
  v7 = *(_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a1 + 8);
  v6 = v7;
  if ( !v7 )
  {
    v13 = 0;
LABEL_22:
    v17 = ptr;
    if ( !ptr )
      return v13;
LABEL_23:
    v20 = 0;
    qfree(v17);
    ptr = nullptr;
    v21 = 0;
    return v13;
  }
  v8 = v5;
  if ( v20 )
    v9 = (const char *)ptr;
  else
    v9 = &byte_F154B;
  do
  {
    if ( *(_QWORD *)(v6 + 40) )
      v10 = *(const char **)(v6 + 32);
    else
      v10 = &byte_F154B;
    v11 = strcmp(v10, v9);
    if ( v11 >= 0 )
      v8 = (_QWORD *)v6;
    v6 = *(_QWORD *)(v6 + 8LL * (v11 < 0));
  }
  while ( v6 );
  if ( v8 == v5 )
  {
    v13 = 0;
    v17 = ptr;
    if ( !ptr )
      return v13;
    goto LABEL_23;
  }
  if ( v8[5] )
    v12 = (const char *)v8[4];
  else
    v12 = &byte_F154B;
  v13 = 0;
  if ( strcmp(v9, v12) < 0 || !a2 )
    goto LABEL_22;
  if ( v8 + 7 != (_QWORD *)a2 )
  {
    v14 = v8[8];
    if ( v14 < 2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    else
    {
      v15 = (const void *)v8[7];
      if ( *(_QWORD *)(a2 + 16) >= v14 )
      {
        v16 = *(void **)a2;
      }
      else
      {
        v16 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v14, 1u);
        *(_QWORD *)a2 = v16;
      }
      *(_QWORD *)(a2 + 8) = v14;
      memmove(v16, v15, v14 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v14 - 1) = 0;
    }
  }
  v13 = 1;
  v17 = ptr;
  if ( ptr )
    goto LABEL_23;
  return v13;
}
// F154B: using guessed type char byte_F154B;
