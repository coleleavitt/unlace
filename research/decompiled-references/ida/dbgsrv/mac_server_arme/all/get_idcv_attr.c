/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x00000001000340A8

//----- (00000001000340A8) ----------------------------------------------------
__int64 __fastcall get_idcv_attr(unsigned __int8 *a1, __int64 a2, char *a3, int a4)
{
  __int64 v8; // x0
  __int64 v9; // x27
  size_t v10; // x23
  void *v11; // x0
  __int64 v12; // x21
  unsigned __int8 *idc_gvar; // x0
  __int128 v14; // q0
  __int128 v15; // q1
  __int128 v16; // q3
  void *v17; // x0
  __int64 v18; // x19
  int v19; // w0
  char *v20; // x23
  _DWORD *v21; // x22
  __int64 v22; // x21
  __int64 v23; // x27
  __int64 v24; // t1
  const char *v25; // x24
  __int64 v26; // x26
  const char *v27; // x0
  int v28; // w0
  const char *v29; // x1
  __int128 v30; // q0
  __int128 v31; // q1
  __int128 v32; // q3
  __int64 v33; // x0
  __int64 v34; // x26
  size_t v35; // x23
  void *v36; // x0
  int v37; // w8
  int v38; // w19
  int v39; // w23
  int v40; // w8
  size_t v41; // x20
  void *v42; // x0
  char v44; // w20
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  char *v52; // x8
  int v53; // [xsp+1Ch] [xbp-164h]
  void *v54; // [xsp+20h] [xbp-160h] BYREF
  size_t v55; // [xsp+28h] [xbp-158h]
  __int64 v56; // [xsp+30h] [xbp-150h]
  unsigned __int8 *v57; // [xsp+38h] [xbp-148h] BYREF
  void *v58[2]; // [xsp+40h] [xbp-140h] BYREF
  __int128 v59; // [xsp+50h] [xbp-130h]

  v57 = a1;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v8 = sub_10002D1C4();
  if ( !a2 )
  {
    v12 = v8;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(a3);
    if ( idc_gvar )
    {
      if ( !a1 )
      {
LABEL_71:
        qmutex_unlock((pthread_mutex_t *)qword_1000A57C0);
        return 0;
      }
      LOBYTE(v58[0]) = 2;
      v59 = 0u;
      v58[1] = nullptr;
      copy_idcv((unsigned __int8 *)v58, idc_gvar);
      v15 = *(_OWORD *)a1;
      v14 = *((_OWORD *)a1 + 1);
      v16 = v59;
      *(_OWORD *)a1 = *(_OWORD *)v58;
      *((_OWORD *)a1 + 1) = v16;
      *(_OWORD *)v58 = v15;
      v59 = v14;
      if ( (unsigned __int8)v15 != 5 )
      {
        if ( (unsigned __int8)v15 != 7 )
          goto LABEL_71;
        v17 = v58[1];
        if ( !v58[1] )
          goto LABEL_71;
LABEL_11:
        *(_QWORD *)&v59 = 0;
        qfree(v17);
        goto LABEL_71;
      }
LABEL_51:
      sub_10003307C((__int64)v58[1], (unsigned __int8 *)v58);
      goto LABEL_71;
    }
    v19 = sub_10002F988(v12, a3);
    if ( v19 == 0x7FFFFFFF )
    {
      set_error_string(0);
      v18 = 1538;
      goto LABEL_13;
    }
    if ( !a1 )
      goto LABEL_71;
    v37 = *a1;
    if ( v37 == 5 )
    {
      v38 = v19;
      sub_10003307C(*((_QWORD *)a1 + 1), a1);
    }
    else
    {
      if ( v37 != 7 )
      {
LABEL_70:
        *((_QWORD *)a1 + 1) = 0;
        *a1 = 6;
        *((_DWORD *)a1 + 2) = v19;
        goto LABEL_71;
      }
      v38 = v19;
      sub_100006678((_QWORD *)a1 + 1);
    }
    v19 = v38;
    goto LABEL_70;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v18 = 1532;
LABEL_13:
    qmutex_unlock((pthread_mutex_t *)qword_1000A57C0);
    set_qerrno();
    return v18;
  }
  v53 = a4;
  v9 = *(_QWORD *)(a2 + 8);
  v58[0] = nullptr;
  v58[1] = nullptr;
  *(_QWORD *)&v59 = 0;
  if ( a3 )
  {
    v10 = strlen(a3);
    if ( v10 == -1 )
    {
      v11 = nullptr;
    }
    else
    {
      v11 = qvector_reserve(v58, nullptr, v10 + 1, 1u);
      v58[0] = v11;
    }
    v58[1] = (void *)(v10 + 1);
    memmove(v11, a3, v10);
    *((_BYTE *)v58[0] + v10) = 0;
    v20 = (char *)v58[0];
  }
  else
  {
    v20 = nullptr;
  }
  v21 = (_DWORD *)v9;
  v24 = *(_QWORD *)(v9 + 8);
  v23 = v9 + 8;
  v22 = v24;
  if ( !v24 )
    goto LABEL_35;
  v25 = v58[1] ? v20 : &byte_10007AE40;
  v26 = v23;
  do
  {
    if ( *(_QWORD *)(v22 + 40) )
      v27 = *(const char **)(v22 + 32);
    else
      v27 = &byte_10007AE40;
    v28 = strcmp(v27, v25);
    if ( v28 >= 0 )
      v26 = v22;
    v22 = *(_QWORD *)(v22 + (((unsigned int)v28 >> 28) & 8));
  }
  while ( v22 );
  if ( v26 == v23
    || (*(_QWORD *)(v26 + 40) ? (v29 = *(const char **)(v26 + 32)) : (v29 = &byte_10007AE40), strcmp(v25, v29) < 0) )
  {
LABEL_35:
    v26 = v23;
  }
  if ( v20 )
  {
    v58[1] = nullptr;
    qfree(v20);
  }
  if ( v26 != v23 )
  {
    if ( !a1 )
      goto LABEL_71;
    LOBYTE(v58[0]) = 2;
    v59 = 0u;
    v58[1] = nullptr;
    copy_idcv((unsigned __int8 *)v58, (unsigned __int8 *)(v26 + 56));
    v31 = *(_OWORD *)a1;
    v30 = *((_OWORD *)a1 + 1);
    v32 = v59;
    *(_OWORD *)a1 = *(_OWORD *)v58;
    *((_OWORD *)a1 + 1) = v32;
    *(_OWORD *)v58 = v31;
    v59 = v30;
    if ( (unsigned __int8)v31 != 5 )
    {
      if ( (unsigned __int8)v31 != 7 )
        goto LABEL_71;
      v17 = v58[1];
      if ( !v58[1] )
        goto LABEL_71;
      goto LABEL_11;
    }
    goto LABEL_51;
  }
  v33 = sub_10002F0C0((int)v21[7]);
  v58[0] = nullptr;
  v58[1] = nullptr;
  *(_QWORD *)&v59 = 0;
  if ( a3 )
  {
    v34 = v33;
    v35 = strlen(a3);
    if ( v35 == -1 )
    {
      v36 = nullptr;
    }
    else
    {
      v36 = qvector_reserve(v58, nullptr, v35 + 1, 1u);
      v58[0] = v36;
    }
    v58[1] = (void *)(v35 + 1);
    memmove(v36, a3, v35);
    *((_BYTE *)v58[0] + v35) = 0;
    v33 = v34;
  }
  v39 = sub_1000360A8(v33, v58);
  if ( v58[0] )
  {
    v58[1] = nullptr;
    qfree(v58[0]);
  }
  if ( v39 != -1 )
  {
    if ( a1 )
    {
      v40 = *a1;
      if ( v40 == 5 )
      {
        sub_10003307C(*((_QWORD *)a1 + 1), a1);
      }
      else if ( v40 == 7 )
      {
        sub_100006678((_QWORD *)a1 + 1);
      }
      *((_QWORD *)a1 + 1) = 0;
      *a1 = 6;
      *((_DWORD *)a1 + 2) = v39;
    }
    goto LABEL_71;
  }
  qmutex_unlock((pthread_mutex_t *)qword_1000A57C0);
  if ( v53 )
  {
    v54 = nullptr;
    v55 = 0;
    v56 = 0;
    if ( a3 )
    {
      v41 = strlen(a3);
      if ( v41 == -1 )
      {
        v42 = nullptr;
      }
      else
      {
        v42 = qvector_reserve(&v54, nullptr, v41 + 1, 1u);
        v54 = v42;
      }
      v55 = v41 + 1;
      memmove(v42, a3, v41);
      *((_BYTE *)v54 + v41) = 0;
    }
    sub_100038FB0((__int64)v58, 0, 1);
    v44 = sub_10003617C(v58, v21, (__int64)&v54, &v57);
    sub_100039190((__int64)v58);
    if ( v54 )
    {
      v55 = 0;
      qfree(v54);
    }
    if ( (v44 & 1) != 0 )
      return 0;
  }
  v58[0] = nullptr;
  v58[1] = nullptr;
  *(_QWORD *)&v59 = 0;
  v45 = sub_10002F0C0((int)v21[7]);
  if ( *(_QWORD *)(v45 + 40) )
    v52 = *(char **)(v45 + 32);
  else
    v52 = &byte_10007AE40;
  sub_10000295C((char **)v58, "%s.%s", v46, v47, v48, v49, v50, v51, (char)v52);
  set_error_string(0);
  v18 = set_qerrno();
  if ( v58[0] )
  {
    v58[1] = nullptr;
    qfree(v58[0]);
  }
  return v18;
}
// 10003458C: variable 'v46' is possibly undefined
// 10003458C: variable 'v47' is possibly undefined
// 10003458C: variable 'v48' is possibly undefined
// 10003458C: variable 'v49' is possibly undefined
// 10003458C: variable 'v50' is possibly undefined
// 10003458C: variable 'v51' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
