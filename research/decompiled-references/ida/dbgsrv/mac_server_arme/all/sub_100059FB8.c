/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059FB8
// Address: 0x0000000100059FB8

//----- (0000000100059FB8) ----------------------------------------------------
__int64 __fastcall sub_100059FB8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 *a9,
        unsigned int a10)
{
  __int64 *v16; // x8
  __int64 **v17; // x24
  __int64 **v18; // x23
  int v19; // w8
  __int64 v20; // x8
  __int64 *v21; // x1
  void *v22; // x22
  char **v23; // x0
  int v24; // w24
  char **v25; // x28
  __int64 v26; // x8
  unsigned __int64 v27; // x23
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x26
  unsigned __int64 v31; // x1
  size_t v32; // x25
  unsigned __int64 v33; // x22
  unsigned __int64 v34; // x24
  char *v35; // x8
  size_t v36; // x25
  unsigned __int64 v37; // x22
  unsigned __int64 v38; // x24
  char *v39; // x8
  __int64 v40; // x8
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x24
  char *v43; // x8
  unsigned __int64 v44; // x8
  int v45; // w0
  __int64 v46; // x23
  _QWORD *v47; // x9
  unsigned __int64 i; // x25
  unsigned int *v49; // x26
  int v50; // w23
  __int64 v51; // x0
  unsigned int v52; // w8
  bool v53; // cc
  int v54; // w8
  bool v55; // zf
  __int64 v56; // x24
  void *v57; // x0
  size_t v58; // x2
  __int64 *v59; // x8
  __int64 **v60; // x26
  __int64 **v61; // x22
  int v62; // w8
  _DWORD *v63; // x24
  __int64 *v64; // x1
  __int64 **v65; // x0
  __int64 **v66; // x0
  __int64 *v67; // x23
  __int64 *v68; // x9
  __int64 **v69; // x8
  __int64 *v70; // x23
  __int64 v71; // x9
  int v72; // w27
  __int64 v73; // x26
  __int64 *v74; // x28
  int v75; // w22
  int nsec_stamp; // w0
  int v77; // w0
  int v78; // w8
  int v79; // w8
  __int64 v80; // x8
  __int64 *v81; // x8
  const char *v82; // x23
  size_t v83; // x0
  size_t v84; // x22
  unsigned __int64 v85; // x24
  _QWORD *v86; // x1
  __int64 v88; // x22
  unsigned __int64 v89; // x23
  int *v90; // x24
  char *v91; // x1
  _QWORD *v92; // x1
  int v93; // t1
  void *v94; // [xsp+0h] [xbp-150h]
  _QWORD *v95; // [xsp+8h] [xbp-148h]
  _QWORD *__src; // [xsp+10h] [xbp-140h]
  _QWORD *v97; // [xsp+18h] [xbp-138h]
  __int64 v100; // [xsp+38h] [xbp-118h]
  char *v101[3]; // [xsp+40h] [xbp-110h] BYREF
  void *__ptr; // [xsp+58h] [xbp-F8h] BYREF
  unsigned __int64 v103; // [xsp+60h] [xbp-F0h]
  unsigned __int64 v104; // [xsp+68h] [xbp-E8h]
  __int64 **v105; // [xsp+70h] [xbp-E0h] BYREF
  __int64 *v106; // [xsp+78h] [xbp-D8h] BYREF
  __int64 v107; // [xsp+80h] [xbp-D0h]
  __int64 v108; // [xsp+88h] [xbp-C8h] BYREF
  void *v109; // [xsp+90h] [xbp-C0h]
  _BYTE v110[56]; // [xsp+98h] [xbp-B8h] BYREF
  int v111; // [xsp+D0h] [xbp-80h] BYREF
  __int64 v112; // [xsp+D8h] [xbp-78h] BYREF
  __int64 v113; // [xsp+E0h] [xbp-70h]
  __int64 v114; // [xsp+E8h] [xbp-68h]

  v111 = -2;
  v113 = 0;
  v114 = 0;
  v112 = -1;
  v16 = *(__int64 **)(a1 + 312);
  if ( v16 )
  {
    do
    {
      while ( 1 )
      {
        v18 = (__int64 **)v16;
        v19 = *((_DWORD *)v16 + 8);
        if ( v19 <= (int)a3 )
          break;
        v16 = *v18;
        v17 = v18;
        if ( !*v18 )
          goto LABEL_9;
      }
      if ( v19 >= (int)a3 )
      {
        v22 = v18;
        goto LABEL_12;
      }
      v16 = v18[1];
    }
    while ( v16 );
    v17 = v18 + 1;
  }
  else
  {
    v17 = (__int64 **)(a1 + 312);
    v18 = (__int64 **)(a1 + 312);
  }
LABEL_9:
  v22 = operator new(0x40u);
  *((_DWORD *)v22 + 8) = a3;
  *((_QWORD *)v22 + 6) = 0;
  *((_QWORD *)v22 + 7) = 0;
  *((_QWORD *)v22 + 5) = 0;
  *(_QWORD *)v22 = 0;
  *((_QWORD *)v22 + 1) = 0;
  *((_QWORD *)v22 + 2) = v18;
  *v17 = (__int64 *)v22;
  v20 = **(_QWORD **)(a1 + 304);
  v21 = (__int64 *)v22;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 304) = v20;
    v21 = *v17;
  }
  sub_10000BD00(*(__int64 **)(a1 + 312), v21);
  ++*(_QWORD *)(a1 + 320);
LABEL_12:
  v23 = sub_10005AEBC((char ***)v22 + 5);
  v106 = nullptr;
  v107 = 0;
  v105 = &v106;
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 7 )
  {
    v24 = 11;
    goto LABEL_161;
  }
  v25 = v23;
  v26 = *(_QWORD *)(a1 + 552);
  if ( !v26 )
    LODWORD(v26) = *(_DWORD *)(a1 + 648);
  if ( v23[1] != (char *)(int)v26 )
  {
    LODWORD(v108) = -2;
    *(_OWORD *)v110 = 0u;
    v109 = (void *)-1LL;
    sub_100058034((void **)v23, (int)v26, (unsigned __int64)&v108);
    if ( (int)v108 >= -1 )
    {
      if ( v109 )
      {
        *(_QWORD *)v110 = 0;
        qfree(v109);
      }
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *v25,
         0) != 1 )
  {
    v24 = 1;
    goto LABEL_161;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)a1 + 456LL))(a1, v25);
  if ( v27 == -1 )
  {
    v24 = 2;
    goto LABEL_161;
  }
  __ptr = nullptr;
  v103 = 0;
  v104 = 0;
  v28 = *(int *)(a1 + 244);
  v29 = a6;
  v30 = (*(_QWORD *)(a6 + 8) + (int)v28 - 1) & -(int)v28;
  v31 = (v27 - (v30 + v28)) & 0xFFFFFFFFFFFFFFF0LL;
  v25[4] = (char *)(v31 + v30);
  v95 = a7;
  __src = v25 + 4;
  v97 = (_QWORD *)v29;
  v100 = v31;
  if ( (relocate_relobj(v29, v31, 0) & 1) == 0 )
  {
    v24 = 4;
    goto LABEL_157;
  }
  v32 = *(int *)(a1 + 244);
  if ( (_DWORD)v32 )
  {
    v33 = v103;
    if ( __CFADD__(v103, v32) )
      v34 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v34 = v103 + v32;
    if ( v103 >= v34 )
    {
      if ( v103 != v34 )
      {
        LOBYTE(v108) = 0;
        sub_10001B764((_QWORD **)&__ptr, v34, &v108);
      }
    }
    else
    {
      v35 = (char *)__ptr;
      if ( v104 < v34 )
      {
        v35 = (char *)qvector_reserve(&__ptr, __ptr, v34, 1u);
        __ptr = v35;
      }
      bzero(&v35[v103], v34 - v103);
      v103 = v34;
    }
    memcpy((char *)__ptr + v33, __src, v32);
  }
  v36 = v97[1];
  if ( v36 )
  {
    v94 = (void *)*v97;
    v37 = v103;
    if ( __CFADD__(v103, v36) )
      v38 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v38 = v103 + v36;
    if ( v103 >= v38 )
    {
      if ( v103 != v38 )
      {
        LOBYTE(v108) = 0;
        sub_10001B764((_QWORD **)&__ptr, v38, &v108);
      }
    }
    else
    {
      v39 = (char *)__ptr;
      if ( v104 < v38 )
      {
        v39 = (char *)qvector_reserve(&__ptr, __ptr, v38, 1u);
        __ptr = v39;
      }
      bzero(&v39[v103], v38 - v103);
      v103 = v38;
    }
    memcpy((char *)__ptr + v37, v94, v36);
  }
  v40 = *(int *)(a1 + 244);
  v41 = v103;
  v42 = v30 + v40;
  if ( v103 >= v30 + v40 )
  {
    if ( v103 != v30 + v40 )
    {
      LOBYTE(v108) = 0;
      sub_10001B764((_QWORD **)&__ptr, v30 + v40, &v108);
    }
  }
  else
  {
    v43 = (char *)__ptr;
    if ( v104 < v42 )
    {
      v43 = (char *)qvector_reserve(&__ptr, __ptr, v42, 1u);
      __ptr = v43;
      v41 = v103;
    }
    bzero(&v43[v41], v42 - v41);
    v103 = v42;
  }
  v44 = v100 - *(int *)(a1 + 244);
  v25[3] = (char *)v44;
  if ( v44 >= v27 )
  {
    v24 = 2;
    goto LABEL_157;
  }
  v45 = (*(__int64 (__fastcall **)(__int64, char **, __int64 ***, void **))(*(_QWORD *)a1 + 448LL))(
          a1,
          v25,
          &v105,
          &__ptr);
  v25[3] += v45;
  v46 = (unsigned int)(v103 - v45);
  if ( (int)v46 >= 1 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1) != v46 )
  {
    v24 = 5;
    goto LABEL_157;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 312LL))(
    a1,
    0,
    4,
    *__src,
    0xFFFFFFFFLL);
  v47 = a5;
  if ( a5[1] )
  {
    for ( i = 0; i < a5[1]; ++i )
    {
      v49 = (unsigned int *)(*v47 + 32 * i);
      v50 = *v49;
      if ( *v49 == *(_DWORD *)(a1 + 652) || v50 == *(_DWORD *)(a1 + 656) )
      {
        v24 = 3;
        goto LABEL_157;
      }
      v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, *v49);
      v52 = *(unsigned __int8 *)(v51 + 13);
      v53 = v52 > 0x12;
      v54 = (1 << v52) & 0x48038;
      v55 = v53 || v54 == 0;
      if ( v55 )
      {
        if ( *((_QWORD *)v49 + 2) <= 8u && (*(_BYTE *)(v51 + 9) & 1) == 0 )
        {
          sub_10005AFB4((__int64)&v111);
          memcpy(&v112, *((const void **)v49 + 1), *((_QWORD *)v49 + 2));
          if ( v49[1] )
            v112 += v100;
          goto LABEL_80;
        }
        if ( v111 >= -1 && v112 )
        {
          v113 = 0;
          qfree((void *)v112);
        }
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v111 = 0;
        v56 = *((_QWORD *)v49 + 2);
        if ( !v56 )
        {
LABEL_78:
          v58 = 0;
          v57 = nullptr;
          goto LABEL_79;
        }
      }
      else
      {
        if ( v111 >= -1 && v112 )
        {
          v113 = 0;
          qfree((void *)v112);
        }
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v111 = -1;
        v56 = *((_QWORD *)v49 + 2);
        if ( !v56 )
          goto LABEL_78;
      }
      v112 = (__int64)qvector_reserve(&v112, nullptr, *((_QWORD *)v49 + 2), 1u);
      bzero((void *)(v112 + v113), v56 - v113);
      v113 = v56;
      v57 = (void *)v112;
      v58 = *((_QWORD *)v49 + 2);
LABEL_79:
      memcpy(v57, *((const void **)v49 + 1), v58);
LABEL_80:
      v59 = v106;
      v60 = &v106;
      v61 = &v106;
      if ( v106 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v61 = (__int64 **)v59;
            v62 = *((_DWORD *)v59 + 8);
            if ( v50 >= v62 )
              break;
            v59 = *v61;
            v60 = v61;
            if ( !*v61 )
              goto LABEL_87;
          }
          if ( v62 >= v50 )
            break;
          v59 = v61[1];
          if ( !v59 )
          {
            v60 = v61 + 1;
            goto LABEL_87;
          }
        }
        v63 = v61;
      }
      else
      {
LABEL_87:
        v63 = operator new(0x48u);
        v63[8] = v50;
        v63[10] = -2;
        *((_QWORD *)v63 + 7) = 0;
        *((_QWORD *)v63 + 8) = 0;
        *((_QWORD *)v63 + 6) = -1;
        *(_QWORD *)v63 = 0;
        *((_QWORD *)v63 + 1) = 0;
        *((_QWORD *)v63 + 2) = v61;
        *v60 = (__int64 *)v63;
        v64 = (__int64 *)v63;
        if ( *v105 )
        {
          v105 = (__int64 **)*v105;
          v64 = *v60;
        }
        sub_10000BD00(v106, v64);
        ++v107;
      }
      sub_10005825C((_QWORD *)v63 + 5, (__int64)&v111);
      v47 = a5;
    }
  }
  sub_10005AFB4((__int64)&v111);
  v112 = (__int64)v25[3];
  v65 = sub_10005B00C((__int64 **)&v105, (int *)(a1 + 652));
  sub_10005825C(v65, (__int64)&v111);
  v112 = a2;
  v66 = sub_10005B00C((__int64 **)&v105, (int *)(a1 + 656));
  sub_10005825C(v66, (__int64)&v111);
  v67 = (__int64 *)v105;
  if ( v105 == &v106 )
  {
LABEL_105:
    if ( (a10 & 1) != 0 )
    {
      v24 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 184) = 1;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a1 + 168) == 1 )
      {
        v108 = 0xFFFFFFFFLL;
        v109 = (void *)-1LL;
        v110[0] = 0;
        memset(&v110[4], 0, 52);
        if ( a9 )
          v70 = a9;
        else
          v70 = &v108;
        if ( (a10 & 4) != 0 )
        {
          v73 = HIWORD(a10);
          if ( a10 >= 0x10000 )
            v71 = get_nsec_stamp() + 1000000LL * (unsigned int)v73;
          else
            LODWORD(v71) = 0;
          v72 = 1;
        }
        else
        {
          LODWORD(v71) = 0;
          v72 = 0;
          v73 = 40;
        }
        v24 = 0;
        if ( a9 )
          v74 = a9;
        else
          v74 = &v108;
        v75 = v71;
        while ( 1 )
        {
          do
          {
            if ( v72 )
            {
              if ( v72 == 2 )
              {
                if ( (int)v73 < 1
                  || (nsec_stamp = get_nsec_stamp(),
                      v73 = (unsigned int)((v75 - nsec_stamp) / 1000000),
                      (v75 - nsec_stamp) / 1000000 <= 0) )
                {
                  v24 = 12;
                  if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0) < 1 )
                    goto LABEL_156;
                }
              }
              v72 = 2;
            }
            v77 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v70, v73);
          }
          while ( !v77 );
          if ( v77 == -1 )
          {
            v24 = 8;
            goto LABEL_156;
          }
          v78 = *((_DWORD *)v74 + 5) & 0xFFFFFFF;
          if ( v78 == 4 )
          {
            if ( *((_DWORD *)v74 + 1) == (_DWORD)a3 )
            {
LABEL_141:
              sub_1000540E0(a1, (__int64)v70, 8u);
              v100 = -1;
              goto LABEL_156;
            }
          }
          else if ( v78 == 2 )
          {
            goto LABEL_141;
          }
          if ( v24 == 12 )
          {
            sub_1000540E0(a1, (__int64)v70, 0xAu);
            set_debug_event_code((__int64)v70, 0);
            set_debug_event_code(a1 + 168, 0);
            v24 = 12;
            goto LABEL_156;
          }
          if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 464LL))(
                 a1,
                 a3,
                 v70,
                 *__src) )
          {
            break;
          }
          if ( (*((_DWORD *)v74 + 5) & 0xFFFFFFF) == 7 )
          {
            if ( (a10 & 2) == 0 )
            {
              v81 = &v108;
              if ( a9 )
                v81 = a9;
              sub_100019EA8((const void **)a8, (const void **)v81 + 5);
            }
            set_debug_event_code(a1 + 168, 0);
            *(_BYTE *)(a1 + 184) = 1;
            v24 = 10;
            goto LABEL_156;
          }
          if ( (unsigned int)sub_1000540E0(a1, (__int64)v70, 0xAu) )
          {
            v24 = 7;
            goto LABEL_156;
          }
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 168LL))(a1, v70);
          set_debug_event_code((__int64)v70, 0);
        }
        set_debug_event_code(a1 + 168, 0);
        v79 = a4;
        if ( a4 < 1
          || v97[1] >= (unsigned __int64)(unsigned int)a4
          && (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
               a1,
               v100,
               *v97,
               (unsigned int)a4,
               0) == v79 )
        {
          if ( v95 && v95[1] )
          {
            memset(v101, 0, sizeof(v101));
            v80 = *(_QWORD *)(a1 + 552);
            if ( !v80 )
              LODWORD(v80) = *(_DWORD *)(a1 + 648);
            sub_100053908((__int64)v101, (int)v80);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
                   a1,
                   a3,
                   0xFFFFFFFFLL,
                   v101[0],
                   0) < 1 )
            {
              v24 = 1;
            }
            else
            {
              if ( v95[1] )
              {
                v88 = 0;
                v89 = 0;
                do
                {
                  v90 = (int *)(*v95 + v88);
                  v91 = &v101[0][32 * *v90];
                  v93 = *(_DWORD *)v91;
                  v92 = v91 + 8;
                  if ( v93 >= -1 )
                    v92 = (_QWORD *)*v92;
                  memcpy(*((void **)v90 + 1), v92, *((_QWORD *)v90 + 2));
                  v90[1] = 0;
                  ++v89;
                  v88 += 32;
                }
                while ( v89 < v95[1] );
              }
              v24 = 0;
            }
            sub_10000991C(v101);
          }
          else
          {
            v24 = 0;
          }
        }
        else
        {
          v24 = 5;
        }
LABEL_156:
        free_debug_event((__int64)&v108);
      }
      else
      {
        v24 = 9;
      }
    }
  }
  else
  {
    while ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)a1 + 232LL))(
              a1,
              a3,
              *((unsigned int *)v67 + 8),
              v67 + 5,
              0) == 1 )
    {
      *((_BYTE *)v25 + 40) = 1;
      v68 = (__int64 *)v67[1];
      if ( v68 )
      {
        do
        {
          v69 = (__int64 **)v68;
          v68 = (__int64 *)*v68;
        }
        while ( v68 );
      }
      else
      {
        do
        {
          v69 = (__int64 **)v67[2];
          v55 = *v69 == v67;
          v67 = (__int64 *)v69;
        }
        while ( !v55 );
      }
      v67 = (__int64 *)v69;
      if ( v69 == &v106 )
        goto LABEL_105;
    }
    v24 = 6;
  }
LABEL_157:
  if ( __ptr )
  {
    v103 = 0;
    qfree(__ptr);
  }
  if ( v24 )
  {
    if ( v24 == 10 )
    {
LABEL_166:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 432LL))(a1, a3);
      v100 = -1;
      goto LABEL_167;
    }
LABEL_161:
    v82 = off_10009F3E0[v24];
    v83 = strlen(v82);
    if ( v83 )
    {
      v84 = v83;
      v85 = v83 + 1;
      v86 = *(_QWORD **)a8;
      if ( *(_QWORD *)(a8 + 16) < v83 + 1 )
      {
        v86 = qvector_reserve((_QWORD *)a8, v86, v85, 1u);
        *(_QWORD *)a8 = v86;
      }
      *(_QWORD *)(a8 + 8) = v85;
      memmove(v86, v82, v84);
      *(_BYTE *)(*(_QWORD *)a8 + v84) = 0;
    }
    else
    {
      *(_QWORD *)(a8 + 8) = 0;
    }
    goto LABEL_166;
  }
LABEL_167:
  sub_10005CD68((__int64)&v105, (int *)v106);
  if ( v111 >= -1 && v112 )
  {
    v113 = 0;
    qfree((void *)v112);
  }
  return v100;
}
// 10005AB18: conditional instruction was optimized away because w24.4==0
// 10009F3E0: using guessed type char *off_10009F3E0[28];
