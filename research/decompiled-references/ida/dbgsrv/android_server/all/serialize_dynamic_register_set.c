/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x00000000000AFA48

//----- (00000000000AFA48) ----------------------------------------------------
void __fastcall serialize_dynamic_register_set(pthread_mutex_t *a1, __int64 *a2)
{
  unsigned __int64 v2; // x21
  __int64 v3; // x26
  __int64 v4; // x20
  pthread_mutex_t *v6; // x0
  __int64 v7; // x23
  pthread_mutex_t *v9; // x0
  __int64 v10; // x24
  __int64 v11; // x25
  char *v12; // x23
  size_t v13; // x0
  unsigned __int64 v14; // x20
  __int64 v15; // x23
  unsigned __int64 v16; // x25
  __int64 **v17; // x29
  __int64 **v18; // x28
  __int64 *v19; // x8
  __int64 *v20; // x1
  pthread_mutex_t *v21; // x0
  unsigned __int64 i; // x25
  __int64 v23; // x20
  unsigned __int64 v24; // x8
  __int64 *v25; // x20
  unsigned __int64 v26; // t1
  __int64 **v27; // x24
  __int64 **v28; // x23
  __int64 *v29; // x9
  __int64 *v30; // x1
  __int64 v31; // x8
  __int64 v32; // x8
  int v33; // w8
  unsigned __int64 v34; // x23
  pthread_mutex_t *v35; // x0
  unsigned __int64 j; // x27
  char *v37; // x24
  size_t v38; // x0
  pthread_mutex_t *v39; // x0
  unsigned __int64 k; // x20
  unsigned __int64 v41; // x2
  char *v42; // x24
  size_t v43; // x0
  pthread_mutex_t *v44; // x0
  pthread_mutex_t *v45; // x0
  pthread_mutex_t *v46; // x0
  __int64 *v47; // x10
  unsigned __int64 v48; // x9
  __int64 **v49; // x8
  unsigned __int64 v50; // x11
  bool v51; // cf
  _BOOL4 v52; // w11
  pthread_mutex_t *v53; // x0
  pthread_mutex_t *v54; // x0
  pthread_mutex_t *v55; // x0
  __int64 **v57; // [xsp+18h] [xbp-A8h] BYREF
  __int64 **v58; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v59; // [xsp+28h] [xbp-98h]
  __int64 **v60; // [xsp+30h] [xbp-90h] BYREF
  __int64 **v61; // [xsp+38h] [xbp-88h] BYREF
  __int64 v62; // [xsp+40h] [xbp-80h]
  pthread_mutex_t src; // [xsp+4Ch] [xbp-74h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a2[1];
  if ( !v2 )
    return;
  v3 = *a2;
  if ( !*a2 )
    return;
  v4 = a2[6];
  if ( !v4 )
    return;
  v6 = pack_dd(&src, (unsigned __int64)&src.__align + 5, 0xFFFFFF01);
  sub_545E8(a1, &src, (char *)v6 - (char *)&src);
  v7 = 0;
  while ( *(_QWORD *)(v4 + 8 * v7++) )
    ;
  v9 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v7 - 1);
  sub_545E8(a1, &src, (char *)v9 - (char *)&src);
  v10 = v7 - 1;
  if ( v7 != 1 )
  {
    v11 = 0;
    do
    {
      if ( *(_QWORD *)(v4 + 8 * v11) )
        v12 = *(char **)(v4 + 8 * v11);
      else
        v12 = "";
      v13 = strlen(v12);
      sub_545E8(a1, v12, v13 + 1);
      ++v11;
    }
    while ( v10 != v11 );
  }
  v14 = 0;
  v15 = 0;
  v61 = nullptr;
  v62 = 0;
  v60 = (__int64 **)&v61;
  do
  {
    v16 = *(_QWORD *)(v3 + 32 * v14 + 16);
    if ( !v16 )
      goto LABEL_29;
    if ( v61 )
    {
      v17 = v61;
      v18 = (__int64 **)&v61;
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = v17[4];
          if ( (unsigned __int64)v19 > v16 )
            break;
          if ( (unsigned __int64)v19 >= v16 )
            goto LABEL_24;
          v18 = v17 + 1;
          if ( !v17[1] )
            goto LABEL_24;
          v17 = (__int64 **)v17[1];
        }
        if ( !*v17 )
          break;
        v18 = v17;
        v17 = (__int64 **)*v17;
      }
      v18 = v17;
      if ( !*v17 )
      {
LABEL_25:
        v20 = (__int64 *)operator new(0x30u);
        v20[4] = v16;
        v20[5] = v15;
        *v20 = 0;
        v20[1] = 0;
        v20[2] = (__int64)v17;
        *v18 = v20;
        if ( *v60 )
        {
          v60 = (__int64 **)*v60;
          v20 = *v18;
        }
        sub_48ED8((__int64 *)v61, v20);
        ++v15;
        ++v62;
      }
    }
    else
    {
      v17 = (__int64 **)&v61;
      v18 = (__int64 **)&v61;
LABEL_24:
      if ( !*v18 )
        goto LABEL_25;
    }
LABEL_29:
    ++v14;
  }
  while ( v14 < v2 );
  v58 = nullptr;
  v59 = 0;
  v57 = (__int64 **)&v58;
  v21 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v15);
  sub_545E8(a1, &src, (char *)v21 - (char *)&src);
  for ( i = 0; i < v2; ++i )
  {
    v23 = v3 + 32 * i;
    v26 = *(_QWORD *)(v23 + 16);
    v25 = (__int64 *)(v23 + 16);
    v24 = v26;
    if ( !v26 )
      continue;
    v27 = v58;
    if ( v58 )
    {
      v28 = (__int64 **)&v58;
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = v27[4];
          if ( v24 < (unsigned __int64)v29 )
            break;
          if ( (unsigned __int64)v29 >= v24 )
            goto LABEL_42;
          v28 = v27 + 1;
          if ( !v27[1] )
            goto LABEL_42;
          v27 = (__int64 **)v27[1];
        }
        if ( !*v27 )
          break;
        v28 = v27;
        v27 = (__int64 **)*v27;
      }
      v28 = v27;
      if ( !*v27 )
      {
LABEL_43:
        v30 = (__int64 *)operator new(0x28u);
        v31 = *v25;
        *v30 = 0;
        v30[1] = 0;
        v30[2] = (__int64)v27;
        v30[4] = v31;
        *v28 = v30;
        if ( *v57 )
        {
          v57 = (__int64 **)*v57;
          v30 = *v28;
        }
        sub_48ED8((__int64 *)v58, v30);
        ++v59;
        v32 = v3 + 32 * i;
        if ( (*(_BYTE *)(v32 + 9) & 1) != 0 )
        {
          v34 = 1;
        }
        else
        {
          v33 = *(unsigned __int8 *)(v32 + 13);
          if ( v33 == 1 )
          {
            v34 = 16;
          }
          else
          {
            if ( v33 != 2 )
            {
              if ( !under_debugger )
                interr(1783);
              __break(1u);
            }
            v34 = 32;
          }
        }
        v35 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v34);
        sub_545E8(a1, &src, (char *)v35 - (char *)&src);
        for ( j = 0; j < v34; ++j )
        {
          if ( *(_QWORD *)(*v25 + 8 * j) )
            v37 = *(char **)(*v25 + 8 * j);
          else
            v37 = "";
          v38 = strlen(v37);
          sub_545E8(a1, v37, v38 + 1);
        }
        continue;
      }
    }
    else
    {
      v27 = (__int64 **)&v58;
      v28 = (__int64 **)&v58;
LABEL_42:
      if ( !*v28 )
        goto LABEL_43;
    }
  }
  v39 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v2);
  sub_545E8(a1, &src, (char *)v39 - (char *)&src);
  for ( k = 0; k < v2; ++k )
  {
    if ( *(_QWORD *)(v3 + 32 * k) )
      v42 = *(char **)(v3 + 32 * k);
    else
      v42 = "";
    v43 = strlen(v42);
    sub_545E8(a1, v42, v43 + 1);
    v44 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned int *)(v3 + 32 * k + 8));
    sub_545E8(a1, &src, (char *)v44 - (char *)&src);
    v45 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned __int8 *)(v3 + 32 * k + 12));
    sub_545E8(a1, &src, (char *)v45 - (char *)&src);
    v46 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned __int8 *)(v3 + 32 * k + 13));
    sub_545E8(a1, &src, (char *)v46 - (char *)&src);
    v47 = (__int64 *)v61;
    if ( !v61 )
      goto LABEL_72;
    v48 = *(_QWORD *)(v3 + 32 * k + 16);
    v49 = (__int64 **)&v61;
    do
    {
      v50 = v47[4];
      v51 = v50 >= v48;
      v52 = v50 < v48;
      if ( v51 )
        v49 = (__int64 **)v47;
      v47 = (__int64 *)v47[v52];
    }
    while ( v47 );
    if ( v49 != (__int64 **)&v61 && v48 >= (unsigned __int64)v49[4] )
      v41 = (unsigned __int64)v49[5] + 1;
    else
LABEL_72:
      v41 = 0;
    v53 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v41);
    sub_545E8(a1, &src, (char *)v53 - (char *)&src);
    v54 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v3 + 32 * k + 24) + 1LL);
    sub_545E8(a1, &src, (char *)v54 - (char *)&src);
  }
  v55 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *((unsigned int *)a2 + 24));
  sub_545E8(a1, &src, (char *)v55 - (char *)&src);
  sub_B1450((__int64)&v57, v58);
  sub_B148C((__int64)&v60, v61);
}
// 168DF0: using guessed type char under_debugger;
