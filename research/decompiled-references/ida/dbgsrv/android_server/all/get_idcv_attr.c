/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x000000000006FEA4

//----- (000000000006FEA4) ----------------------------------------------------
__int64 __fastcall get_idcv_attr(__int64 a1, __int64 a2, char *a3, char a4)
{
  __int64 v8; // x0
  __int64 v9; // x26
  __int64 v10; // x21
  __int64 v11; // x28
  void *v12; // x23
  const char *v13; // x24
  __int64 v14; // x29
  const char *v15; // x0
  int v16; // w0
  const char *v17; // x1
  __int128 v18; // q0
  __int128 v19; // q3
  _QWORD *v20; // x23
  unsigned __int8 *idc_gvar; // x0
  __int128 v22; // q0
  __int128 v23; // q3
  unsigned int v24; // w19
  int v25; // w0
  __int64 v26; // x23
  int v27; // w23
  int v28; // w21
  char v29; // w20
  __int64 v30; // x0
  const char *v31; // x2
  const char *v33; // x1
  unsigned __int8 *v34; // [xsp+18h] [xbp-138h] BYREF
  void *v35[2]; // [xsp+20h] [xbp-130h] BYREF
  __int128 v36; // [xsp+30h] [xbp-120h]
  __int128 v37; // [xsp+C0h] [xbp-90h] BYREF
  __int128 v38; // [xsp+D0h] [xbp-80h]

  _ReadStatusReg(TPIDR_EL0);
  v34 = (unsigned __int8 *)a1;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v8 = sub_6804C();
  if ( !a2 )
  {
    v20 = (_QWORD *)v8;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(a3);
    if ( idc_gvar )
    {
      if ( a1 )
      {
        LOBYTE(v37) = 2;
        v38 = 0u;
        *((_QWORD *)&v37 + 1) = 0;
        copy_idcv((unsigned __int8 *)&v37, idc_gvar);
        v22 = *(_OWORD *)(a1 + 16);
        v23 = v38;
        *(_OWORD *)v35 = *(_OWORD *)a1;
        v36 = v22;
        *(_OWORD *)a1 = v37;
        *(_OWORD *)(a1 + 16) = v23;
        v37 = *(_OWORD *)v35;
        v38 = v36;
        if ( LOBYTE(v35[0]) == 5 )
        {
          sub_6F17C(*((__int64 *)&v37 + 1), (unsigned __int8 *)&v37);
          goto LABEL_57;
        }
        if ( LOBYTE(v35[0]) != 7 || !*((_QWORD *)&v37 + 1) )
          goto LABEL_57;
        *(_QWORD *)&v38 = 0;
        qfree(*((void **)&v37 + 1));
        goto LABEL_32;
      }
LABEL_57:
      qmutex_unlock((pthread_mutex_t *)qword_166AA8);
      return 0;
    }
    v25 = sub_6AA18(v20, a3);
    if ( v25 != 0x7FFFFFFF )
    {
      if ( a1 )
      {
        v28 = v25;
        free_idcv((__int64 *)a1);
        *(_BYTE *)a1 = 6;
        *(_DWORD *)(a1 + 8) = v28;
      }
      goto LABEL_57;
    }
    set_error_string(nullptr, a3);
    v24 = 1538;
    goto LABEL_34;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v24 = 1532;
LABEL_34:
    qmutex_unlock((pthread_mutex_t *)qword_166AA8);
    set_qerrno(v24);
    return v24;
  }
  v9 = *(_QWORD *)(a2 + 8);
  sub_39140(v35, a3);
  v11 = v9 + 8;
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    v12 = v35[0];
LABEL_38:
    v14 = v9 + 8;
    if ( v12 )
      goto LABEL_41;
    goto LABEL_20;
  }
  v12 = v35[0];
  if ( v35[1] )
    v13 = (const char *)v35[0];
  else
    v13 = &byte_F154B;
  v14 = v9 + 8;
  do
  {
    if ( *(_QWORD *)(v10 + 40) )
      v15 = *(const char **)(v10 + 32);
    else
      v15 = &byte_F154B;
    v16 = strcmp(v15, v13);
    if ( v16 >= 0 )
      v14 = v10;
    v10 = *(_QWORD *)(v10 + 8LL * (v16 < 0));
  }
  while ( v10 );
  if ( v14 != v11 )
  {
    if ( *(_QWORD *)(v14 + 40) )
      v17 = *(const char **)(v14 + 32);
    else
      v17 = &byte_F154B;
    if ( (strcmp(v13, v17) & 0x80000000) == 0 )
    {
      if ( !v12 )
        goto LABEL_20;
LABEL_41:
      v35[1] = nullptr;
      qfree(v12);
      v35[0] = nullptr;
      *(_QWORD *)&v36 = 0;
      if ( v14 != v11 )
      {
LABEL_21:
        if ( a1 )
        {
          LOBYTE(v37) = 2;
          v38 = 0u;
          *((_QWORD *)&v37 + 1) = 0;
          copy_idcv((unsigned __int8 *)&v37, (unsigned __int8 *)(v14 + 56));
          v18 = *(_OWORD *)(a1 + 16);
          v19 = v38;
          *(_OWORD *)v35 = *(_OWORD *)a1;
          v36 = v18;
          *(_OWORD *)a1 = v37;
          *(_OWORD *)(a1 + 16) = v19;
          v37 = *(_OWORD *)v35;
          v38 = v36;
          if ( LOBYTE(v35[0]) == 5 )
          {
            sub_6F17C(*((__int64 *)&v37 + 1), (unsigned __int8 *)&v37);
            goto LABEL_57;
          }
          if ( LOBYTE(v35[0]) != 7 || !*((_QWORD *)&v37 + 1) )
            goto LABEL_57;
          *(_QWORD *)&v38 = 0;
          qfree(*((void **)&v37 + 1));
LABEL_32:
          *((_QWORD *)&v37 + 1) = 0;
          *((_QWORD *)&v38 + 1) = 0;
          goto LABEL_57;
        }
        goto LABEL_57;
      }
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  v14 = v9 + 8;
  if ( v12 )
    goto LABEL_41;
LABEL_20:
  if ( v14 != v11 )
    goto LABEL_21;
LABEL_42:
  v26 = sub_6A1B0(*(int *)(v9 + 28));
  sub_39140(v35, a3);
  v27 = sub_716E8(v26, v35);
  if ( v35[0] )
  {
    v35[1] = nullptr;
    qfree(v35[0]);
    v35[0] = nullptr;
    *(_QWORD *)&v36 = 0;
  }
  if ( v27 != -1 )
  {
    if ( a1 )
    {
      free_idcv((__int64 *)a1);
      *(_BYTE *)a1 = 6;
      *(_DWORD *)(a1 + 8) = v27;
    }
    goto LABEL_57;
  }
  qmutex_unlock((pthread_mutex_t *)qword_166AA8);
  if ( (a4 & 1) != 0 )
  {
    sub_39140(&v37, a3);
    sub_7461C(v35, 0, 1);
    v29 = sub_717A8((__int64)v35, (_DWORD *)v9, (const char **)&v37, &v34);
    sub_74848((__int64)v35);
    if ( (_QWORD)v37 )
    {
      *((_QWORD *)&v37 + 1) = 0;
      qfree((void *)v37);
      *(_QWORD *)&v37 = 0;
      *(_QWORD *)&v38 = 0;
    }
    if ( (v29 & 1) != 0 )
      return 0;
  }
  v35[1] = nullptr;
  *(_QWORD *)&v36 = 0;
  v35[0] = nullptr;
  v30 = sub_6A1B0(*(int *)(v9 + 28));
  if ( *(_QWORD *)(v30 + 40) )
    v31 = *(const char **)(v30 + 32);
  else
    v31 = &byte_F154B;
  sub_3C748((__int64)v35, "%s.%s", v31, a3);
  if ( v35[1] )
    v33 = (const char *)v35[0];
  else
    v33 = &byte_F154B;
  set_error_string(nullptr, v33);
  v24 = set_qerrno(0x602u);
  if ( v35[0] )
  {
    v35[1] = nullptr;
    qfree(v35[0]);
    v35[0] = nullptr;
    *(_QWORD *)&v36 = 0;
  }
  return v24;
}
// 7461C: using guessed type __int64 __fastcall sub_7461C(_QWORD, _QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
