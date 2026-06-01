/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x000451BC

//----- (000451BC) --------------------------------------------------------
int __fastcall get_idcv_attr(int a1, int a2, char *a3, int a4)
{
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r4
  unsigned __int8 *v9; // r2
  int v10; // r7
  const char *v11; // r5
  unsigned __int8 *v12; // r4
  const char *v13; // r0
  int v14; // r0
  int *v15; // r1
  const char *v16; // r1
  _DWORD *v17; // r5
  unsigned __int8 *idc_gvar; // r0
  int v19; // r5
  void *v20; // r0
  bool v21; // nf
  _DWORD *v22; // r4
  int v23; // r4
  int v24; // r4
  int v25; // r0
  const char *v26; // r2
  const char *v28; // r1
  void *v29; // [sp+8h] [bp-90h]
  _DWORD *v30; // [sp+Ch] [bp-8Ch]
  unsigned __int8 *v31; // [sp+10h] [bp-88h]
  unsigned __int8 *v34; // [sp+28h] [bp-70h] BYREF
  void *v35[20]; // [sp+2Ch] [bp-6Ch] BYREF
  const char *v36[6]; // [sp+7Ch] [bp-1Ch] BYREF

  v34 = (unsigned __int8 *)a1;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v6 = sub_3F7BC();
  if ( !a2 )
  {
    v17 = (_DWORD *)v6;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(a3);
    if ( idc_gvar )
    {
      if ( !a1 )
      {
LABEL_55:
        qmutex_unlock((pthread_mutex_t *)dword_DE374);
        return 0;
      }
      LOBYTE(v36[0]) = 2;
      memset(&v36[2], 0, 16);
      copy_idcv((unsigned __int8 *)v36, idc_gvar);
      qmemcpy(v35, (const void *)a1, 0x18u);
      qmemcpy((void *)a1, v36, 0x18u);
      v36[0] = (const char *)v35[0];
      v36[1] = (const char *)v35[1];
      v36[2] = (const char *)v35[2];
      v36[3] = (const char *)v35[3];
      v36[4] = (const char *)v35[4];
      v36[5] = (const char *)v35[5];
      if ( LOBYTE(v35[0]) != 5 )
      {
        if ( LOBYTE(v35[0]) != 7 || !v36[2] )
          goto LABEL_55;
LABEL_23:
        v36[3] = nullptr;
        qfree((void *)v36[2]);
        v36[4] = nullptr;
        v36[2] = nullptr;
        goto LABEL_55;
      }
LABEL_54:
      sub_448A0((int)v36[2], (unsigned __int8 *)v36);
      goto LABEL_55;
    }
    v19 = sub_41550(v17, a3);
    if ( v19 != 0x7FFFFFFF )
    {
      if ( a1 )
      {
        free_idcv((unsigned __int8 *)a1);
        *(_DWORD *)(a1 + 8) = v19;
        *(_BYTE *)a1 = 6;
      }
      goto LABEL_55;
    }
    set_error_string(0, a3);
    v7 = 1538;
    goto LABEL_26;
  }
  v7 = 1532;
  if ( *(_BYTE *)a2 != 5 )
  {
LABEL_26:
    qmutex_unlock((pthread_mutex_t *)dword_DE374);
    set_qerrno(v7);
    return v7;
  }
  v8 = *(_DWORD **)(a2 + 8);
  sub_1B09C((int)v35, a3);
  v9 = (unsigned __int8 *)(v8 + 1);
  v30 = v8;
  v10 = v8[1];
  v31 = (unsigned __int8 *)(v8 + 1);
  if ( v10 )
  {
    v11 = &byte_B3CBE;
    if ( v35[1] )
      v11 = (const char *)v35[0];
    v29 = v35[0];
    v12 = (unsigned __int8 *)(v8 + 1);
    do
    {
      v13 = &byte_B3CBE;
      if ( *(_DWORD *)(v10 + 20) )
        v13 = *(const char **)(v10 + 16);
      v14 = strcmp(v13, v11);
      if ( v14 >= 0 )
        v12 = (unsigned __int8 *)v10;
      v15 = (int *)(v10 + 4);
      if ( v14 >= 0 )
        v15 = (int *)v10;
      v10 = *v15;
    }
    while ( *v15 );
    v9 = v31;
    if ( v12 == v31 )
    {
      v20 = v29;
    }
    else
    {
      if ( *((_DWORD *)v12 + 5) )
        v16 = *((const char **)v12 + 4);
      else
        v16 = &byte_B3CBE;
      v21 = strcmp(v11, v16) < 0;
      v9 = v31;
      v20 = v29;
      if ( !v21 )
        goto LABEL_34;
    }
  }
  else
  {
    v20 = v35[0];
  }
  v12 = v9;
LABEL_34:
  if ( v20 )
  {
    v35[1] = nullptr;
    qfree(v20);
    v35[2] = nullptr;
    v35[0] = nullptr;
    v9 = v31;
  }
  if ( v12 != v9 )
  {
    if ( !a1 )
      goto LABEL_55;
    LOBYTE(v36[0]) = 2;
    memset(&v36[2], 0, 16);
    copy_idcv((unsigned __int8 *)v36, v12 + 32);
    qmemcpy(v35, (const void *)a1, 0x18u);
    qmemcpy((void *)a1, v36, 0x18u);
    v36[0] = (const char *)v35[0];
    v36[1] = (const char *)v35[1];
    v36[2] = (const char *)v35[2];
    v36[3] = (const char *)v35[3];
    v36[4] = (const char *)v35[4];
    v36[5] = (const char *)v35[5];
    if ( LOBYTE(v35[0]) != 5 )
    {
      if ( LOBYTE(v35[0]) != 7 || !v36[2] )
        goto LABEL_55;
      goto LABEL_23;
    }
    goto LABEL_54;
  }
  v22 = (_DWORD *)sub_40F30(v30[4]);
  sub_1B09C((int)v35, a3);
  v23 = sub_463A8(v22, (int)v35);
  if ( v35[0] )
  {
    v35[1] = nullptr;
    qfree(v35[0]);
    v35[2] = nullptr;
    v35[0] = nullptr;
  }
  if ( v23 != -1 )
  {
    if ( a1 )
    {
      free_idcv((unsigned __int8 *)a1);
      *(_DWORD *)(a1 + 8) = v23;
      *(_BYTE *)a1 = 6;
    }
    goto LABEL_55;
  }
  qmutex_unlock((pthread_mutex_t *)dword_DE374);
  if ( !a4 )
    goto LABEL_52;
  sub_1B09C((int)v36, a3);
  v7 = 0;
  ((void (__fastcall *)(void **, _DWORD, int))loc_48528)(v35, 0, 1);
  v24 = sub_46444(v35, v30, v36, &v34);
  sub_486C4((int)v35);
  if ( v36[0] )
  {
    v36[1] = nullptr;
    qfree((void *)v36[0]);
    v36[2] = nullptr;
    v36[0] = nullptr;
  }
  if ( !v24 )
  {
LABEL_52:
    memset(v35, 0, 12);
    v25 = sub_40F30(v30[4]);
    if ( *(_DWORD *)(v25 + 24) )
      v26 = *(const char **)(v25 + 20);
    else
      v26 = &byte_B3CBE;
    sub_1DA58((int)v35, "%s.%s", v26, a3);
    if ( v35[1] )
      v28 = (const char *)v35[0];
    else
      v28 = &byte_B3CBE;
    set_error_string(0, v28);
    v7 = set_qerrno(1538);
    if ( v35[0] )
    {
      v35[1] = nullptr;
      qfree(v35[0]);
      v35[2] = nullptr;
      v35[0] = nullptr;
    }
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
