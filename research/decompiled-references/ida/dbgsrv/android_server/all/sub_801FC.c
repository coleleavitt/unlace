/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_801FC
// Address: 0x00000000000801FC

//----- (00000000000801FC) ----------------------------------------------------
__int64 __fastcall sub_801FC(__int64 a1, __int64 a2, _BYTE *a3)
{
  const char *v3; // x23
  char *v6; // x22
  __int64 **v7; // x0
  __int64 **v8; // x21
  int v9; // w25
  __int64 v10; // x26
  __int64 v11; // x28
  size_t v12; // x0
  unsigned __int64 v13; // x8
  __int64 v14; // x8
  pthread_mutex_t *v15; // x0
  char *v16; // x0
  int v17; // w20
  void **align; // x0
  unsigned __int64 v19; // x19
  __int64 v20; // x21
  unsigned __int64 v21; // x22
  void *v22; // x8
  void **v23; // x25
  char *v24; // x8
  __int64 v25; // x10
  __int64 v26; // x10
  int v27; // w9
  __int128 v28; // q0
  __int64 v29; // x9
  char *v30; // x8
  char v32[4]; // [xsp+Ch] [xbp-84h] BYREF
  pthread_mutex_t ptr; // [xsp+10h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(char **)a2;
  else
    v6 = &byte_F154B;
  v7 = sub_7DB0C(a1, v6);
  *a3 = 0;
  if ( !v7 )
    goto LABEL_41;
  v8 = v7;
  v9 = *(_DWORD *)(a1 + 64) - 1;
  if ( v9 >= 0 )
  {
    v10 = 56LL * v9;
    do
    {
      v11 = *(_QWORD *)(a1 + 56);
      if ( *(__int64 ***)(v11 + v10 + 40) == v8 )
      {
        if ( !*((_BYTE *)v8 + 25) )
          goto LABEL_41;
        v3 = v8[1] ? (const char *)*v8 : &byte_F154B;
        v12 = strlen(v3);
        v13 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v3 <= v13 && v13 <= (unsigned __int64)&v3[v12] )
          goto LABEL_41;
        if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v11 + v10 + 48) )
          goto LABEL_41;
      }
      --v9;
      v10 -= 56;
    }
    while ( (v9 & 0x80000000) == 0 );
  }
  memset(&ptr, 0, 24);
  if ( *((_BYTE *)v8 + 25) )
  {
    LODWORD(v3) = sub_7FB58(a1, &ptr, v32);
    if ( !(_DWORD)v3 && v32[0] )
    {
      if ( *(&ptr.__align + 1) == *((unsigned __int8 *)v8 + 24) )
        goto LABEL_20;
      set_error_string(nullptr, v6);
      LODWORD(v3) = set_qerrno(0x27u);
    }
    v17 = 1;
    align = (void **)ptr.__align;
    if ( !ptr.__align )
      goto LABEL_40;
LABEL_25:
    v19 = *(&ptr.__align + 1);
    if ( *(&ptr.__align + 1) )
    {
      v20 = 0;
      v21 = 1;
      v22 = *align;
      if ( *align )
        goto LABEL_29;
      while ( v21 < v19 )
      {
        align = (void **)ptr.__align;
        ++v21;
        v20 += 3;
        v22 = *(void **)(ptr.__align + v20 * 8);
        if ( v22 )
        {
LABEL_29:
          v23 = &align[v20];
          align[v20 + 1] = nullptr;
          qfree(v22);
          *v23 = nullptr;
          v23[2] = nullptr;
        }
      }
      align = (void **)ptr.__align;
    }
    *(&ptr.__align + 1) = 0;
    qfree(align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
    if ( !v17 )
      goto LABEL_41;
    return (unsigned int)v3;
  }
LABEL_20:
  if ( (unsigned __int64)v8[1] >= 2 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    v15 = (pthread_mutex_t *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 72) >= (unsigned __int64)(v14 + 1) )
    {
      v16 = (char *)v15->__align;
    }
    else
    {
      v16 = (char *)qvector_reserve(v15, (void *)v15->__align, v14 + 1, 0x38u);
      v14 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = v16;
    }
    v24 = &v16[56 * v14];
    *((_QWORD *)v24 + 1) = 0;
    *((_QWORD *)v24 + 2) = 0;
    *(_QWORD *)v24 = 0;
    v25 = *(_QWORD *)a1;
    ++*(_QWORD *)(a1 + 64);
    *((_QWORD *)v24 + 3) = v25;
    v26 = *(_QWORD *)v24;
    *((_QWORD *)v24 + 4) = *(_QWORD *)(a1 + 8);
    v27 = *(_DWORD *)(a1 + 80);
    *((_QWORD *)v24 + 5) = v8;
    *((_DWORD *)v24 + 12) = v27;
    v28 = *(_OWORD *)&ptr.__lock;
    ptr.__align = v26;
    v29 = *(&ptr.__align + 2);
    *(_OWORD *)(&ptr.__align + 1) = *(_OWORD *)(v24 + 8);
    *(_OWORD *)v24 = v28;
    *((_QWORD *)v24 + 2) = v29;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 64) - 1;
    if ( v8[1] )
      v30 = (char *)*v8;
    else
      v30 = &byte_F154B;
    *(_QWORD *)a1 = v30;
    *(_QWORD *)(a1 + 8) = v30;
  }
  v17 = 0;
  *a3 = 1;
  align = (void **)ptr.__align;
  if ( ptr.__align )
    goto LABEL_25;
LABEL_40:
  if ( !v17 )
LABEL_41:
    LODWORD(v3) = 0;
  return (unsigned int)v3;
}
// 804A8: variable 'v3' is possibly undefined
// F154B: using guessed type char byte_F154B;
