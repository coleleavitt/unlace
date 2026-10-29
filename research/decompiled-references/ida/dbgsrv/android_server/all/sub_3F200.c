/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F200
// Address: 0x000000000003F200

//----- (000000000003F200) ----------------------------------------------------
void __fastcall sub_3F200(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 i; // x24
  __int64 v4; // x27
  unsigned __int64 *v5; // x21
  const char *v6; // x22
  unsigned __int64 v7; // x20
  __int64 align; // x29
  __int64 v9; // x28
  int v10; // w23
  const char *v11; // x0
  bool v12; // cc
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x11
  unsigned __int64 v15; // x10
  __int64 v16; // x9
  unsigned __int64 *v17; // x9
  unsigned __int64 v18; // x12
  unsigned __int64 v19; // t1
  unsigned __int64 v20; // x11
  __int64 *v21; // x21
  __int64 *v22; // x27
  char *v23; // x23
  unsigned __int64 v24; // x24
  __int64 v25; // x26
  __int64 v26; // x25
  int v27; // w29
  const char *v28; // x0
  __int64 *v29; // x8
  size_t v30; // x0
  void *v31; // x1
  unsigned __int64 v32; // x25
  size_t v33; // x24
  unsigned __int64 v34; // x9
  __int64 v35; // x12
  __int64 *v36; // x8
  __int64 v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  int64x2_t v40; // q0
  __int64 *v41; // x8
  __int64 *v42; // x23
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 *v45; // t1
  __int64 *v46; // x0
  __int64 v47; // x8
  __int64 **v48; // x9
  __int64 v49; // x9
  __int64 *v50; // t1
  __int64 v51; // x22
  __int64 owner; // x23
  __int64 v53; // x20
  const char *v54; // x1
  __int64 *v55; // x9
  const char *v56; // x20
  __int64 *v57; // x8
  unsigned __int64 v58; // x10
  bool v59; // cf
  _BOOL4 v60; // w10
  char *v61; // x21
  pthread_mutex_t *v62; // x0
  pthread_mutex_t *v63; // x2
  double v64; // d0
  char *v65; // x4
  unsigned __int64 v66; // [xsp+18h] [xbp-118h]
  void *ptr; // [xsp+38h] [xbp-F8h] BYREF
  __int64 v69; // [xsp+40h] [xbp-F0h]
  __int64 v70; // [xsp+48h] [xbp-E8h]
  pthread_mutex_t v71; // [xsp+50h] [xbp-E0h] BYREF
  __int64 v72; // [xsp+78h] [xbp-B8h]
  _BYTE v73[36]; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v74; // [xsp+A4h] [xbp-8Ch]
  int v75; // [xsp+B4h] [xbp-7Ch]
  __int64 v76; // [xsp+B8h] [xbp-78h]

  v76 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&v71, 0, 24);
  v66 = a2[1];
  if ( v66 )
  {
    for ( i = 0; i < v66; ++i )
    {
      v4 = *a2;
      v5 = (unsigned __int64 *)(*a2 + 80 * i);
      if ( v5[3] )
      {
        v6 = *(const char **)(v4 + 80 * i + 16);
        v7 = *(&v71.__align + 1);
        if ( !*(&v71.__align + 1) )
          goto LABEL_23;
      }
      else
      {
        v6 = &byte_F154B;
        v7 = *(&v71.__align + 1);
        if ( !*(&v71.__align + 1) )
          goto LABEL_23;
      }
      align = v71.__align;
      v9 = 0;
      v10 = 1;
      while ( 1 )
      {
        v11 = *(_QWORD *)(align + 80 * v9 + 24) ? *(const char **)(align + 80 * v9 + 16) : &byte_F154B;
        if ( !strcmp(v11, v6) )
          break;
        v9 = v10;
        v12 = v7 > v10++;
        if ( !v12 )
          goto LABEL_23;
      }
      v13 = (unsigned __int64 *)(align + 80 * v9);
      if ( v13 )
      {
        v14 = *v5;
        v15 = *v13;
        if ( *v13 > *v5 )
        {
          v15 = *v5;
          *v13 = v14;
        }
        v16 = align + 80 * v9;
        v19 = *(_QWORD *)(v16 + 8);
        v17 = (unsigned __int64 *)(v16 + 8);
        v18 = v19;
        if ( v19 < v14 )
        {
          v18 = v14;
          *v17 = v14;
        }
        v20 = *(_QWORD *)(v4 + 80 * i + 8);
        if ( v15 > v20 )
          *v13 = v20;
        if ( v18 < v20 )
          *v17 = v20;
        continue;
      }
LABEL_23:
      sub_46E38(&v71, (__int64)v5);
    }
  }
  v21 = *(__int64 **)(a1 + 1712);
  v22 = (__int64 *)(a1 + 1720);
  if ( (__int64 *)(a1 + 1720) != v21 )
  {
    do
    {
      while ( 1 )
      {
        if ( v21[8] )
        {
          v23 = (char *)v21[7];
          v24 = *(&v71.__align + 1);
          if ( !*(&v71.__align + 1) )
            goto LABEL_41;
        }
        else
        {
          v23 = &byte_F154B;
          v24 = *(&v71.__align + 1);
          if ( !*(&v71.__align + 1) )
            goto LABEL_41;
        }
        v25 = v71.__align;
        v26 = 0;
        v27 = 1;
        while ( 1 )
        {
          v28 = *(_QWORD *)(v25 + 80 * v26 + 24) ? *(const char **)(v25 + 80 * v26 + 16) : &byte_F154B;
          if ( !strcmp(v28, v23) )
            break;
          v26 = v27;
          v12 = v24 > v27++;
          if ( !v12 )
            goto LABEL_41;
        }
        if ( !(v25 + 80 * v26) )
        {
LABEL_41:
          if ( ((unsigned __int8)sub_3D988((pthread_mutex_t *)a1, byte_8, v23) & 1) == 0 )
          {
            v71.__list.__next = (struct __pthread_internal_list *)0xFFFFFFFFLL;
            v72 = -1;
            v73[0] = 0;
            v74 = 0u;
            memset(&v73[4], 0, 32);
            v75 = 0;
            set_debug_event_code((__int64)&v71.__list.__next, 9);
            if ( (*(_DWORD *)&v73[4] & 0xFFFFFFFu) - 9 >= 2 && (*(_DWORD *)&v73[4] & 0xFFFFFFF) != 3 )
            {
              if ( !under_debugger )
                interr(3297);
              __break(1u);
            }
            if ( v23 && (v30 = strlen(v23)) != 0 )
            {
              v31 = *(void **)&v73[8];
              v32 = v30 + 1;
              v33 = v30;
              if ( *(_QWORD *)&v73[24] < v30 + 1 )
              {
                v31 = qvector_reserve((pthread_mutex_t *)&v73[8], *(void **)&v73[8], v32, 1u);
                *(_QWORD *)&v73[8] = v31;
              }
              *(_QWORD *)&v73[16] = v32;
              memmove(v31, v23, v33);
              *(_BYTE *)(*(_QWORD *)&v73[8] + v33) = 0;
            }
            else
            {
              *(_QWORD *)&v73[16] = 0;
            }
            *((_DWORD *)&v71.__align + 8) = *(_DWORD *)(a1 + 1844);
            *((_DWORD *)&v71.__align + 9) = *((_DWORD *)&v71.__align + 8);
            v72 = -1;
            v73[0] = 1;
            if ( (*(_DWORD *)&v73[4] & 0xFFFFFFF) != 0 )
            {
              v34 = *(_QWORD *)(a1 + 152);
              if ( !v34 )
              {
                sub_477B4(a1 + 120);
                v34 = *(_QWORD *)(a1 + 152);
              }
              v35 = *(_QWORD *)(a1 + 128);
              v36 = (__int64 *)(v35 + 8 * (v34 / 0x38));
              v37 = *v36;
              if ( *(_QWORD *)(a1 + 136) == v35 )
              {
                v38 = 0;
                if ( !v37 )
LABEL_55:
                  v38 = *(v36 - 1) + 4032;
              }
              else
              {
                v38 = v37 + 72 * (v34 % 0x38);
                if ( v38 == v37 )
                  goto LABEL_55;
              }
              *(_QWORD *)(v38 - 72) = 0xFFFFFFFFLL;
              v39 = v38 - 72;
              *(_QWORD *)(v39 + 8) = -1;
              *(_BYTE *)(v39 + 16) = 0;
              *(_DWORD *)(v39 + 20) = 0;
              copy_debug_event(v39, (__int64)&v71.__list.__next);
              v40 = *(int64x2_t *)(a1 + 152);
              *(_BYTE *)(a1 + 1932) = 0;
              *(int64x2_t *)(a1 + 152) = vaddq_s64(v40, (int64x2_t)xmmword_F17F0);
            }
            free_debug_event((__int64)&v71.__list.__next);
          }
          v41 = (__int64 *)v21[1];
          if ( v41 )
          {
            do
            {
              v42 = v41;
              v41 = (__int64 *)*v41;
            }
            while ( v41 );
          }
          else
          {
            v43 = (__int64)(v21 + 2);
            v42 = (__int64 *)v21[2];
            if ( (__int64 *)*v42 != v21 )
            {
              do
              {
                v44 = *(_QWORD *)v43;
                v45 = *(__int64 **)(*(_QWORD *)v43 + 16LL);
                v43 = *(_QWORD *)v43 + 16LL;
                v42 = v45;
              }
              while ( *v45 != v44 );
            }
          }
          if ( *(__int64 **)(a1 + 1712) == v21 )
            *(_QWORD *)(a1 + 1712) = v42;
          v46 = *(__int64 **)(a1 + 1720);
          --*(_QWORD *)(a1 + 1728);
          sub_4AD74(v46, v21);
          sub_41960((__int64)(v21 + 5));
          operator delete(v21);
          v21 = v42;
          goto LABEL_66;
        }
        v29 = (__int64 *)v21[1];
        if ( !v29 )
          break;
        do
        {
          v21 = v29;
          v29 = (__int64 *)*v29;
        }
        while ( v29 );
LABEL_66:
        if ( v22 == v21 )
          goto LABEL_74;
      }
      v47 = (__int64)(v21 + 2);
      v48 = (__int64 **)v21[2];
      if ( *v48 != v21 )
      {
        do
        {
          v49 = *(_QWORD *)v47;
          v50 = *(__int64 **)(*(_QWORD *)v47 + 16LL);
          v47 = *(_QWORD *)v47 + 16LL;
          v21 = v50;
        }
        while ( *v50 != v49 );
        goto LABEL_66;
      }
      v21 = (__int64 *)v21[2];
    }
    while ( v22 != (__int64 *)v48 );
  }
LABEL_74:
  if ( v71.__owner >= 1 )
  {
    v51 = 0;
    owner = v71.__owner;
    do
    {
      v53 = v71.__align;
      if ( *(_QWORD *)(v71.__align + 80 * v51 + 24) >= 2u )
      {
        if ( *(_BYTE *)(a1 + 733)
          || (*(_QWORD *)(a1 + 488) ? (v54 = *(const char **)(a1 + 480)) : (v54 = &byte_F154B),
              strcmp(*(const char **)(v71.__align + 80 * v51 + 16), v54)) )
        {
          v55 = (__int64 *)*v22;
          v56 = *(const char **)(v53 + 80 * v51);
          if ( !*v22 )
            goto LABEL_109;
          v57 = (__int64 *)(a1 + 1720);
          do
          {
            v58 = v55[4];
            v59 = v58 >= (unsigned __int64)v56;
            v60 = v58 < (unsigned __int64)v56;
            if ( v59 )
              v57 = v55;
            v55 = (__int64 *)v55[v60];
          }
          while ( v55 );
          if ( v57 == v22 || (unsigned __int64)v56 < v57[4] )
          {
LABEL_109:
            if ( (unsigned int)sub_3E500(
                                 a1,
                                 0xFFFFFFFF,
                                 (__int64)v56,
                                 (unsigned __int64 *)((char *)&v71.__align + 28),
                                 4,
                                 0) == 4
              && *((_DWORD *)&v71.__align + 7) == 1179403647 )
            {
              v69 = 0;
              v70 = 0;
              ptr = nullptr;
              v61 = *(_QWORD *)(v71.__align + 80 * v51 + 24) ? *(char **)(v71.__align + 80 * v51 + 16) : &byte_F154B;
              LODWORD(v72) = 4;
              v71.__list.__next = (struct __pthread_internal_list *)off_156700;
              *(_QWORD *)v73 = &ptr;
              v62 = (pthread_mutex_t *)sub_5991C(v61, (_DWORD *)&v71.__align + 8, 0);
              v63 = sub_4322C(v62, &v71, (_QWORD *)(v71.__align + 80 * v51));
              v65 = v69 ? (char *)ptr : &byte_F154B;
              sub_412AC(a1, v56, (__int64)v63, v61, v65, v64);
              if ( ptr )
              {
                v69 = 0;
                qfree(ptr);
                ptr = nullptr;
                v70 = 0;
              }
            }
          }
        }
      }
      ++v51;
    }
    while ( v51 < owner );
  }
  sub_3D084(a1);
  if ( v71.__align )
  {
    sub_3967C(&v71.__align, 0);
    qfree((void *)v71.__align);
    v71.__align = 0;
    *(&v71.__align + 2) = 0;
  }
}
// 3F7DC: variable 'v64' is possibly undefined
// F154B: using guessed type char byte_F154B;
// F17F0: using guessed type __int128 xmmword_F17F0;
// 156700: using guessed type __int64 (__fastcall *off_156700[3])();
// 168DF0: using guessed type char under_debugger;
