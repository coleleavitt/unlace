/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5518C
// Address: 0x000000000005518C

//----- (000000000005518C) ----------------------------------------------------
__int64 __fastcall sub_5518C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x25
  int v4; // w10
  _WORD *v5; // x23
  int v6; // w9
  int v7; // w8
  __int64 *v10; // x26
  __int64 v12; // x9
  __int64 v13; // kr18_8
  __int64 v14; // x8
  _WORD *v15; // x9
  unsigned __int64 v16; // x11
  unsigned __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x10
  int v20; // w12
  unsigned __int64 v21; // x13
  bool v22; // cc
  __int64 v23; // x22
  int v24; // w8
  unsigned __int64 v25; // x11
  unsigned __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x10
  int v29; // w12
  unsigned __int64 v30; // x13
  __int64 v31; // x22
  __int64 v32; // x8
  __int64 align; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x2
  int v36; // w2
  int v37; // w8
  __int64 v38; // x1
  __int64 v39; // x8
  unsigned __int64 v40; // x2
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x9
  __int64 v43; // x11
  __int64 v44; // x13
  unsigned __int64 v45; // x10
  int v46; // w12
  unsigned __int64 v47; // x13
  unsigned __int64 v48; // x13
  unsigned __int64 *v49; // x9
  unsigned __int64 *v50; // x9
  unsigned int v51; // w19
  void *v52; // x0
  unsigned __int64 v54; // x10
  __int64 v55; // x12
  __int64 v56; // x14
  unsigned __int64 v57; // x11
  int v58; // w13
  unsigned __int64 v59; // x14
  unsigned __int64 v60; // x14
  unsigned __int64 v61; // x9
  unsigned __int64 v62; // x10
  __int64 v63; // x11
  __int64 v64; // x13
  int v65; // w12
  unsigned __int64 v66; // x13
  unsigned __int64 v67; // x13
  unsigned __int64 v68; // x9
  unsigned __int64 v69; // x10
  __int64 v70; // x11
  __int64 v71; // x13
  int v72; // w12
  unsigned __int64 v73; // x13
  unsigned __int64 v74; // x13
  unsigned __int64 v75; // x9
  unsigned __int64 v76; // x10
  __int64 v77; // x11
  __int64 v78; // x13
  int v79; // w12
  unsigned __int64 v80; // x13
  unsigned __int64 v81; // x13
  unsigned __int64 v82; // x10
  unsigned __int64 v83; // x11
  __int64 v84; // x12
  __int64 v85; // x14
  int v86; // w13
  unsigned __int64 v87; // x14
  unsigned __int64 v88; // x14
  _WORD *v89; // [xsp+10h] [xbp-A0h]
  _WORD *v90; // [xsp+18h] [xbp-98h]
  __int64 v91; // [xsp+28h] [xbp-88h] BYREF
  pthread_mutex_t ptr; // [xsp+30h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(unsigned __int16 *)(a1 + 396);
  *(_WORD *)(a2 + 56) = v4;
  v5 = (_WORD *)(a2 + 56);
  v6 = *(_DWORD *)(a1 + 416);
  *(_WORD *)(a2 + 88) = v6;
  v7 = *(_DWORD *)(a1 + 420);
  *(_WORD *)(a2 + 120) = v7;
  if ( !v4 || !(_WORD)v6 || !(_WORD)v7 )
  {
    if ( !under_debugger )
      interr(20037);
    __break(1u);
  }
  memset(&ptr, 0, 24);
  if ( !(16LL * *(_QWORD *)(a3 + 8)) )
  {
    *(_QWORD *)(a2 + 48) = -1;
    goto LABEL_107;
  }
  v90 = (_WORD *)(a2 + 88);
  v10 = *(__int64 **)a3;
  v89 = (_WORD *)(a2 + 120);
  do
  {
    v12 = *v10;
    if ( *v10 > 1610612750 )
    {
      v32 = 12;
      switch ( v12 )
      {
        case 1879048176LL:
          v3 = 14;
          v25 = *(_QWORD *)(a1 + 584);
          if ( v25 )
            goto LABEL_19;
          goto LABEL_23;
        case 1879048177LL:
        case 1879048178LL:
        case 1879048179LL:
        case 1879048180LL:
        case 1879048181LL:
        case 1879048182LL:
        case 1879048183LL:
        case 1879048184LL:
        case 1879048185LL:
        case 1879048186LL:
        case 1879048187LL:
          goto LABEL_89;
        case 1879048188LL:
          v3 = 12;
          v25 = *(_QWORD *)(a1 + 584);
          if ( !v25 )
            goto LABEL_23;
          goto LABEL_19;
        case 1879048189LL:
          goto LABEL_44;
        case 1879048190LL:
          v3 = 13;
          v25 = *(_QWORD *)(a1 + 584);
          if ( !v25 )
            goto LABEL_23;
LABEL_19:
          v26 = v10[1];
          v27 = *(_QWORD *)(a1 + 576);
          v28 = 0;
          v29 = 1;
          break;
        case 1879048191LL:
          v32 = 13;
LABEL_44:
          *(_DWORD *)(a2 + 32 * v32 + 28) = v10[1];
          goto LABEL_89;
        default:
          switch ( v12 )
          {
            case 1610612751LL:
              v24 = *(unsigned __int16 *)(a1 + 522);
              if ( v24 == 40 )
              {
                v3 = 4;
                v25 = *(_QWORD *)(a1 + 584);
                if ( v25 )
                  goto LABEL_19;
                goto LABEL_23;
              }
              v3 = 4;
              if ( v24 == 183 )
                goto LABEL_18;
              goto LABEL_89;
            case 1610612752LL:
              v14 = 4;
              goto LABEL_79;
            case 1610612753LL:
              v37 = *(unsigned __int16 *)(a1 + 522);
              if ( v37 != 183 )
              {
                v3 = 5;
                if ( v37 != 40 )
                  goto LABEL_89;
LABEL_18:
                v25 = *(_QWORD *)(a1 + 584);
                if ( !v25 )
                  goto LABEL_23;
                goto LABEL_19;
              }
              v3 = 5;
              v25 = *(_QWORD *)(a1 + 584);
              if ( v25 )
                goto LABEL_19;
              break;
            case 1610612754LL:
              v14 = 5;
LABEL_79:
              *(_QWORD *)(a2 + 32 * v14 + 16) = v10[1];
              goto LABEL_89;
            default:
              if ( v12 != 1879047925 )
                goto LABEL_89;
              v3 = 8;
              v25 = *(_QWORD *)(a1 + 584);
              if ( !v25 )
                goto LABEL_23;
              goto LABEL_19;
          }
          goto LABEL_23;
      }
      while ( 1 )
      {
        v30 = *(_QWORD *)(v27 + 24 * v28 + 16);
        if ( v26 >= v30 && *(_QWORD *)(v27 + 24 * v28 + 8) + v30 > v26 )
          break;
        v28 = v29;
        v22 = v25 > v29++;
        if ( !v22 )
        {
LABEL_23:
          v31 = -1;
          goto LABEL_28;
        }
      }
      v31 = *(_QWORD *)(v27 + 24 * v28) + (unsigned int)(v26 - v30);
LABEL_28:
      *(_QWORD *)(a2 + 32 * v3) = v31;
      v34 = *(&ptr.__align + 1);
      align = ptr.__align;
      v91 = v31;
      v35 = *(&ptr.__align + 1) + 1;
      if ( ptr.__align > (unsigned __int64)&v91 || ptr.__align + 8 * *(&ptr.__align + 2) <= (unsigned __int64)&v91 )
      {
        if ( *(&ptr.__align + 2) < v35 )
        {
          align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v35, 8u);
          v34 = *(&ptr.__align + 1);
          v31 = v91;
          goto LABEL_34;
        }
      }
      else if ( *(&ptr.__align + 2) < v35 )
      {
        align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v35, 8u);
        v34 = *(&ptr.__align + 1);
LABEL_34:
        ptr.__align = align;
      }
      *(_QWORD *)(align + 8 * v34) = v31;
      ++*(&ptr.__align + 1);
      *(_QWORD *)(a2 + 32 * v3 + 8) = v10[1];
      goto LABEL_89;
    }
    v13 = v3;
    v3 = 0;
    v14 = 0;
    v15 = v5;
    switch ( *v10 )
    {
      case 0LL:
        goto LABEL_95;
      case 2LL:
        v14 = 6;
        goto LABEL_79;
      case 3LL:
      case 12LL:
      case 13LL:
        v16 = *(_QWORD *)(a1 + 584);
        if ( !v16 )
          goto LABEL_13;
        v17 = v10[1];
        v18 = *(_QWORD *)(a1 + 576);
        v19 = 0;
        v20 = 1;
        break;
      case 4LL:
        v3 = 7;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 5LL:
        goto LABEL_18;
      case 6LL:
        v3 = 1;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 7LL:
        v3 = 3;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 8LL:
        v14 = 3;
        goto LABEL_79;
      case 9LL:
        v15 = v89;
        goto LABEL_70;
      case 10LL:
        goto LABEL_79;
      case 11LL:
        goto LABEL_70;
      case 17LL:
        v3 = 2;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 18LL:
        v14 = 2;
        goto LABEL_79;
      case 19LL:
        v15 = v90;
LABEL_70:
        *v15 = v10[1];
        goto LABEL_89;
      case 20LL:
        v36 = *((_DWORD *)v10 + 2);
        *(_DWORD *)(a2 + 480) = v36;
        if ( v36 == 7 || v36 == 17 || ((*(__int64 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 15) & 1) != 0 )
          goto LABEL_89;
        v51 = 0;
        v52 = (void *)ptr.__align;
        if ( !ptr.__align )
          return v51;
        goto LABEL_110;
      case 23LL:
        v3 = 6;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 25LL:
        v3 = 10;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 26LL:
        v3 = 11;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 27LL:
        v14 = 10;
        goto LABEL_79;
      case 28LL:
        v14 = 11;
        goto LABEL_79;
      case 32LL:
        v3 = 9;
        v25 = *(_QWORD *)(a1 + 584);
        if ( !v25 )
          goto LABEL_23;
        goto LABEL_19;
      case 33LL:
        v14 = 9;
        goto LABEL_79;
      default:
        v3 = v13;
        goto LABEL_89;
    }
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 24 * v19 + 16);
      if ( v17 >= v21 && *(_QWORD *)(v18 + 24 * v19 + 8) + v21 > v17 )
        break;
      v19 = v20;
      v22 = v16 > v20++;
      if ( !v22 )
      {
LABEL_13:
        v23 = -1;
        goto LABEL_81;
      }
    }
    v23 = *(_QWORD *)(v18 + 24 * v19) + (unsigned int)(v17 - v21);
LABEL_81:
    v39 = *(&ptr.__align + 1);
    v38 = ptr.__align;
    v91 = v23;
    v40 = *(&ptr.__align + 1) + 1;
    if ( ptr.__align > (unsigned __int64)&v91 || ptr.__align + 8 * *(&ptr.__align + 2) <= (unsigned __int64)&v91 )
    {
      if ( *(&ptr.__align + 2) < v40 )
      {
        v38 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v40, 8u);
        v39 = *(&ptr.__align + 1);
        v23 = v91;
        goto LABEL_87;
      }
    }
    else if ( *(&ptr.__align + 2) < v40 )
    {
      v38 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v40, 8u);
      v39 = *(&ptr.__align + 1);
LABEL_87:
      ptr.__align = v38;
    }
    *(_QWORD *)(v38 + 8 * v39) = v23;
    ++*(&ptr.__align + 1);
LABEL_89:
    v10 += 2;
  }
  while ( v10 != (__int64 *)(*(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8)) );
LABEL_95:
  v41 = *(&ptr.__align + 1);
  *(_QWORD *)(a2 + 48) = -1;
  if ( !v41 )
  {
LABEL_107:
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 240) = -1;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    v50 = (unsigned __int64 *)(a2 + 464);
    *(_QWORD *)(a2 + 464) = -1;
    goto LABEL_108;
  }
  v42 = *(_QWORD *)(a2 + 32);
  v43 = ptr.__align;
  v44 = 0;
  v45 = -1;
  v46 = 1;
  do
  {
    if ( v42 )
    {
      v47 = *(_QWORD *)(v43 + 8 * v44);
      v22 = v47 > v42;
      v48 = v47 - v42;
      if ( v22 )
      {
        if ( v45 >= v48 )
          v45 = v48;
        *(_QWORD *)(a2 + 48) = v45;
      }
    }
    v44 = v46;
    v22 = v41 > v46++;
  }
  while ( v22 );
  *(_QWORD *)(a2 + 240) = -1;
  v49 = (unsigned __int64 *)(a2 + 240);
  if ( v45 == -1 )
    *(_QWORD *)(a2 + 48) = 0;
  v54 = *(_QWORD *)(a2 + 224);
  v55 = ptr.__align;
  v56 = 0;
  v57 = -1;
  v58 = 1;
  do
  {
    if ( v54 )
    {
      v59 = *(_QWORD *)(v55 + 8 * v56);
      v22 = v59 > v54;
      v60 = v59 - v54;
      if ( v22 )
      {
        if ( v57 >= v60 )
          v57 = v60;
        *v49 = v57;
      }
    }
    v56 = v58;
    v22 = v41 > v58++;
  }
  while ( v22 );
  if ( v57 == -1 )
    *v49 = 0;
  v61 = -1;
  *(_QWORD *)(a2 + 272) = -1;
  v62 = *(_QWORD *)(a2 + 256);
  v63 = ptr.__align;
  v64 = 0;
  v65 = 1;
  do
  {
    if ( v62 )
    {
      v66 = *(_QWORD *)(v63 + 8 * v64);
      v22 = v66 > v62;
      v67 = v66 - v62;
      if ( v22 )
      {
        if ( v61 >= v67 )
          v61 = v67;
        *(_QWORD *)(a2 + 272) = v61;
      }
    }
    v64 = v65;
    v22 = v41 > v65++;
  }
  while ( v22 );
  if ( v61 == -1 )
    *(_QWORD *)(a2 + 272) = 0;
  v68 = -1;
  *(_QWORD *)(a2 + 400) = -1;
  v69 = *(_QWORD *)(a2 + 384);
  v70 = ptr.__align;
  v71 = 0;
  v72 = 1;
  do
  {
    if ( v69 )
    {
      v73 = *(_QWORD *)(v70 + 8 * v71);
      v22 = v73 > v69;
      v74 = v73 - v69;
      if ( v22 )
      {
        if ( v68 >= v74 )
          v68 = v74;
        *(_QWORD *)(a2 + 400) = v68;
      }
    }
    v71 = v72;
    v22 = v41 > v72++;
  }
  while ( v22 );
  if ( v68 == -1 )
    *(_QWORD *)(a2 + 400) = 0;
  v75 = -1;
  *(_QWORD *)(a2 + 432) = -1;
  v76 = *(_QWORD *)(a2 + 416);
  v77 = ptr.__align;
  v78 = 0;
  v79 = 1;
  do
  {
    if ( v76 )
    {
      v80 = *(_QWORD *)(v77 + 8 * v78);
      v22 = v80 > v76;
      v81 = v80 - v76;
      if ( v22 )
      {
        if ( v75 >= v81 )
          v75 = v81;
        *(_QWORD *)(a2 + 432) = v75;
      }
    }
    v78 = v79;
    v22 = v41 > v79++;
  }
  while ( v22 );
  if ( v75 == -1 )
    *(_QWORD *)(a2 + 432) = 0;
  v82 = -1;
  *(_QWORD *)(a2 + 464) = -1;
  v83 = *(_QWORD *)(a2 + 448);
  v84 = ptr.__align;
  v85 = 0;
  v50 = (unsigned __int64 *)(a2 + 464);
  v86 = 1;
  do
  {
    if ( v83 )
    {
      v87 = *(_QWORD *)(v84 + 8 * v85);
      v22 = v87 > v83;
      v88 = v87 - v83;
      if ( v22 )
      {
        if ( v82 >= v88 )
          v82 = v88;
        *v50 = v82;
      }
    }
    v85 = v86;
    v22 = v41 > v86++;
  }
  while ( v22 );
  if ( v82 == -1 )
LABEL_108:
    *v50 = 0;
  v51 = 1;
  v52 = (void *)ptr.__align;
  if ( ptr.__align )
  {
LABEL_110:
    *(&ptr.__align + 1) = 0;
    qfree(v52);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v51;
}
// 556DC: conditional instruction was optimized away because x8.8!=0
// 55774: conditional instruction was optimized away because x8.8!=0
// 55244: variable 'v3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
